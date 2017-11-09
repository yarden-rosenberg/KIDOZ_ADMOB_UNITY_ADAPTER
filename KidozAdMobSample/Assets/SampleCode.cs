using System;
using UnityEngine;
using GoogleMobileAds;
using GoogleMobileAds.Api;

// Example script showing how to invoke the Google Mobile Ads Unity plugin.
public class SampleCode : MonoBehaviour
{
    private BannerView bannerView;
    private InterstitialAd interstitial;
    private RewardBasedVideoAd rewardBasedVideo;
    private float deltaTime = 0.0f;

	string toastString;
	AndroidJavaObject currentActivity;
	AndroidJavaClass UnityPlayer;
	AndroidJavaObject context;


    
    public void Start()
    {

		#if UNITY_ANDROID
		string appId = "ca-app-pub-5967470543517808~3214489975";
		#elif UNITY_IPHONE
        string appId = "";
		#else
        string appId = "unexpected_platform";
		#endif

	
	if (Application.platform == RuntimePlatform.Android){
		UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		}


        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(appId);

        // Get singleton reward based video ad reference.
        this.rewardBasedVideo = RewardBasedVideoAd.Instance;

        // RewardBasedVideoAd is a singleton, so handlers should only be registered once.
        this.rewardBasedVideo.OnAdLoaded += this.HandleRewardBasedVideoLoaded;
        this.rewardBasedVideo.OnAdFailedToLoad += this.HandleRewardBasedVideoFailedToLoad;
        this.rewardBasedVideo.OnAdOpening += this.HandleRewardBasedVideoOpened;
        this.rewardBasedVideo.OnAdStarted += this.HandleRewardBasedVideoStarted;
        this.rewardBasedVideo.OnAdRewarded += this.HandleRewardBasedVideoRewarded;
        this.rewardBasedVideo.OnAdClosed += this.HandleRewardBasedVideoClosed;
        this.rewardBasedVideo.OnAdLeavingApplication += this.HandleRewardBasedVideoLeftApplication;
    }


	void showToast(){
		AndroidJavaClass Toast = new AndroidJavaClass("android.widget.Toast");
		AndroidJavaObject javaString = new AndroidJavaObject("java.lang.String", toastString);
		AndroidJavaObject toast = Toast.CallStatic<AndroidJavaObject>("makeText", context, javaString, Toast.GetStatic<int>("LENGTH_SHORT"));
		toast.Call("show");
	}

	
	public void showToastOnUiThread(string toastString){
		this.toastString = toastString;
		currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(showToast));
		}


    public void Update()
    {
        // Calculate simple moving average for time to render screen. 0.1 factor used as smoothing
        // value.
        this.deltaTime += (Time.deltaTime - this.deltaTime) * 0.1f;
    }

    public void OnGUI()
    {
		double factor = Screen.width / 335.0;
		GUIStyle myStyle = new GUIStyle (GUI.skin.GetStyle("label"));

		int width = (int)(100 * factor);
		int height = (int) (50 * factor);
		int btnHeight = height;

		//Change font for Title
		myStyle.fontSize = (int)(16 * factor);
		myStyle.normal.textColor = Color.white;

		//Add label
		GUI.Label(new Rect(width, btnHeight, width, height), "Kidoz AdMob Unity Sample", myStyle);
		btnHeight += height;

		//Change font size for buttons
		myStyle.fontSize = (int)(12 * factor);
		myStyle.normal.textColor = Color.yellow;


		//Add buttons
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Request Banner",myStyle)) {
		  this.RequestBanner();
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Destroy Banner",myStyle)) {
			this.bannerView.Destroy();
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Request Interstitial",myStyle)) {
			this.RequestInterstitial();
		}
     
		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Show Interstitial",myStyle)) {
			this.ShowInterstitial();
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Destroy Interstitial",myStyle)) {
		   this.interstitial.Destroy();
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Request Rewarded Video",myStyle)) {
		    this.RequestRewardBasedVideo();
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Show Rewarded Video",myStyle)) {
		    this.ShowRewardBasedVideo();
		}
      
    }

    // Returns an ad request with custom ad targeting.

    private AdRequest CreateAdRequest()
    {
		return new AdRequest.Builder().Build();
    }

	


    private void RequestBanner()
    {
        // These ad units are configured to always serve test ads.
		#if UNITY_EDITOR
        string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-5967470543517808/9432160371";
		#elif UNITY_IPHONE
        string adUnitId = "";
		#else
        string adUnitId = "unexpected_platform";
		#endif

        // Clean up banner ad before creating a new one.
        if (this.bannerView != null)
        {
            this.bannerView.Destroy();
        }

        // Create a 320x50 banner at the top of the screen.
        this.bannerView = new BannerView(adUnitId, AdSize.SmartBanner, AdPosition.Top);

        // Register for ad events.
        this.bannerView.OnAdLoaded += this.HandleAdLoaded;
        this.bannerView.OnAdFailedToLoad += this.HandleAdFailedToLoad;
        this.bannerView.OnAdOpening += this.HandleAdOpened;
        this.bannerView.OnAdClosed += this.HandleAdClosed;
        this.bannerView.OnAdLeavingApplication += this.HandleAdLeftApplication;

        // Load a banner ad.
        this.bannerView.LoadAd(this.CreateAdRequest());
    }

    private void RequestInterstitial()
    {
        // These ad units are configured to always serve test ads.
	#if UNITY_EDITOR
        string adUnitId = "unused";
	#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-5967470543517808/1318954375";
	#elif UNITY_IPHONE
        string adUnitId = "";
	#else
        string adUnitId = "unexpected_platform";
	#endif

        // Clean up interstitial ad before creating a new one.
        if (this.interstitial != null)
        {
            this.interstitial.Destroy();
        }

        // Create an interstitial.
        this.interstitial = new InterstitialAd(adUnitId);

        // Register for ad events.
        this.interstitial.OnAdLoaded += this.HandleInterstitialLoaded;
        this.interstitial.OnAdFailedToLoad += this.HandleInterstitialFailedToLoad;
        this.interstitial.OnAdOpening += this.HandleInterstitialOpened;
        this.interstitial.OnAdClosed += this.HandleInterstitialClosed;
        this.interstitial.OnAdLeavingApplication += this.HandleInterstitialLeftApplication;

        // Load an interstitial ad.
        this.interstitial.LoadAd(this.CreateAdRequest());
    }


    private void RequestRewardBasedVideo()
    {
	#if UNITY_EDITOR
        string adUnitId = "unused";
	#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-5967470543517808/9701675577";
	#elif UNITY_IPHONE
        string adUnitId = "";
	#else
        string adUnitId = "unexpected_platform";
	#endif

        this.rewardBasedVideo.LoadAd(this.CreateAdRequest(), adUnitId);
    }

    private void ShowInterstitial()
    {
        if (this.interstitial.IsLoaded())
        {
            this.interstitial.Show();
        }
        else
        {
            MonoBehaviour.print("Interstitial is not ready yet");
        }
    }

    private void ShowRewardBasedVideo()
    {
        if (this.rewardBasedVideo.IsLoaded())
        {
            this.rewardBasedVideo.Show();
        }
        else
        {
            MonoBehaviour.print("Reward based video ad is not ready yet");
        }
    }

    #region Banner callback handlers

    public void HandleAdLoaded(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdLoaded event received");
        MonoBehaviour.print("HandleAdLoaded event received");
    }

    public void HandleAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
		this.showToastOnUiThread("HandleFailedToReceiveAd event received with message: " + args.Message);
        MonoBehaviour.print("HandleFailedToReceiveAd event received with message: " + args.Message);
    }

    public void HandleAdOpened(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdOpened event received");
        MonoBehaviour.print("HandleAdOpened event received");
    }

    public void HandleAdClosed(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdClosed event received");
        MonoBehaviour.print("HandleAdClosed event received");
    }

    public void HandleAdLeftApplication(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdLeftApplication event received");
        MonoBehaviour.print("HandleAdLeftApplication event received");
    }

    #endregion

    #region Interstitial callback handlers

    public void HandleInterstitialLoaded(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialLoaded event received");
        MonoBehaviour.print("HandleInterstitialLoaded event received");
    }

    public void HandleInterstitialFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
		this.showToastOnUiThread(
		"HandleInterstitialFailedToLoad event received with message: " + args.Message);

        MonoBehaviour.print(
            "HandleInterstitialFailedToLoad event received with message: " + args.Message);
    }

    public void HandleInterstitialOpened(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialOpened event received");
        MonoBehaviour.print("HandleInterstitialOpened event received");
    }

    public void HandleInterstitialClosed(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialClosed event received");
        MonoBehaviour.print("HandleInterstitialClosed event received");
    }

    public void HandleInterstitialLeftApplication(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialLeftApplication event received");
        MonoBehaviour.print("HandleInterstitialLeftApplication event received");
    }

    #endregion

    #region RewardBasedVideo callback handlers

    public void HandleRewardBasedVideoLoaded(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleRewardBasedVideoLoaded event received");
        MonoBehaviour.print("HandleRewardBasedVideoLoaded event received");
    }

    public void HandleRewardBasedVideoFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
		this.showToastOnUiThread("HandleRewardBasedVideoFailedToLoad event received with message: " + args.Message);
        MonoBehaviour.print(
            "HandleRewardBasedVideoFailedToLoad event received with message: " + args.Message);
    }

    public void HandleRewardBasedVideoOpened(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleRewardBasedVideoOpened event received");
        MonoBehaviour.print("HandleRewardBasedVideoOpened event received");
    }

    public void HandleRewardBasedVideoStarted(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleRewardBasedVideoStarted event received");
        MonoBehaviour.print("HandleRewardBasedVideoStarted event received");
    }

    public void HandleRewardBasedVideoClosed(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleRewardBasedVideoClosed event received");
        MonoBehaviour.print("HandleRewardBasedVideoClosed event received");
    }

    public void HandleRewardBasedVideoRewarded(object sender, Reward args)
    {
        string type = args.Type;
        double amount = args.Amount;

		this.showToastOnUiThread("HandleRewardBasedVideoRewarded event received for " + amount.ToString() + " " + type);

        MonoBehaviour.print(
            "HandleRewardBasedVideoRewarded event received for " + amount.ToString() + " " + type);
    }

    public void HandleRewardBasedVideoLeftApplication(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleRewardBasedVideoLeftApplication event received");
        MonoBehaviour.print("HandleRewardBasedVideoLeftApplication event received");
    }

    #endregion
}
