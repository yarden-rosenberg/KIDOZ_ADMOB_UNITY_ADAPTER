using System;
using UnityEngine;
using UnityEngine.UI;

using GoogleMobileAds;
using GoogleMobileAds.Api;
using System.Collections;
using System.Collections.Generic;

// Example script showing how to invoke the Google Mobile Ads Unity plugin.
public class SampleCode : MonoBehaviour
{
    private BannerView bannerView;
    private InterstitialAd interstitial;
	private RewardedAd rewardedAd;
    private float deltaTime = 0.0f;
	private String text;
	public int maxLines = 10;

	private List<string> Eventlog = new List<string>();

	string toastString;
	AndroidJavaObject currentActivity;
	AndroidJavaClass UnityPlayer;
	AndroidJavaObject context;
	 

    
    public void Start()
    {

		#if UNITY_ANDROID
		string appId = "ca-app-pub-5967470543517808~3214489975";
		#elif UNITY_IPHONE
		string appId = "ca-app-pub-5967470543517808~1065161391";
		#else
        string appId = "unexpected_platform";
		#endif
	
	if (Application.platform == RuntimePlatform.Android){
		UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		}


        // Initialize the Google Mobile Ads SDK.
        //MobileAds.Initialize(appId);
    }


	void showToast(){
		AndroidJavaClass Toast = new AndroidJavaClass("android.widget.Toast");
		AndroidJavaObject javaString = new AndroidJavaObject("java.lang.String", toastString);
		AndroidJavaObject toast = Toast.CallStatic<AndroidJavaObject>("makeText", context, javaString, Toast.GetStatic<int>("LENGTH_SHORT"));
		toast.Call("show");
	}

	
	public void showToastOnUiThread(string toastString){
		if (Application.platform == RuntimePlatform.Android) {
			this.toastString = toastString;
			currentActivity.Call ("runOnUiThread", new AndroidJavaRunnable (showToast));
		}
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
			AddEvent ("banner Destroy");

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
			AddEvent ("Interstitial Destroy");
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Request Rewarded Video",myStyle)) {
			this.RequestRewarded();
		}

		btnHeight += height;

		if (GUI.Button (new Rect (width, btnHeight, width, height), "Show Rewarded Video",myStyle)) {
			this.ShowRewardedAd();
		}

		btnHeight += height;

		//myStyle.normal.textColor = Color.white;
		//GUI.Label(new Rect(width, btnHeight, width, height*10), text, myStyle);
		GUI.Label(new Rect(0, btnHeight, Screen.width, Screen.height - btnHeight ), text, GUI.skin.textArea);

    }

	public void AddEvent(string eventString)
	{
		Eventlog.Add(System.DateTime.Now + " - " + eventString);
		
		if (Eventlog.Count >= maxLines)
			Eventlog.RemoveAt(0);
		
		text = "";
		
		foreach (string logEvent in Eventlog)
		{
			text += logEvent;
			text += "\n";
		}
	}

    // Returns an ad request with custom ad targeting.

	public void RequestRewarded()
	{
		// These ad units are configured to always serve test ads.
		#if UNITY_EDITOR
		string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-5967470543517808/9701675577";
		#elif UNITY_IPHONE
		string adUnitId = "ca-app-pub-5967470543517808/7581935456";
		#else
		string adUnitId = "unexpected_platform";
		#endif
		
		// Create new rewarded ad instance.
		this.rewardedAd = new RewardedAd(adUnitId);
		this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
		this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
		this.rewardedAd.OnAdOpening += HandleRewardedAdOpening;
		this.rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
		this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
		this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;
		this.rewardedAd.LoadAd(this.CreateAdRequest());

		AddEvent ("Request Rewarded");
	
	}


    private AdRequest CreateAdRequest()
    {
		return new AdRequest.Builder().Build();
    }


    private void RequestBanner()
    {
		#if UNITY_EDITOR
		string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-5967470543517808/9432160371";
		#elif UNITY_IPHONE
		string adUnitId = "ca-app-pub-5967470543517808/7349947267";
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
        this.bannerView.LoadAd(this.CreateAdRequest());

		AddEvent ("Request Banner");
    }

	private void RequestInterstitial()
	{
		// These ad units are configured to always serve test ads.
		#if UNITY_EDITOR
		string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-5967470543517808/1318954375";
		#elif UNITY_IPHONE
		string adUnitId = "ca-app-pub-5967470543517808/9897640434";
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
		this.interstitial.LoadAd(this.CreateAdRequest());

		AddEvent ("RequestInterstitial");
	}


    private void ShowInterstitial()
    {
        if (this.interstitial.IsLoaded())
        {
            this.interstitial.Show();
        }
        else
        {
			AddEvent ("Interstitial is not ready yet");

            MonoBehaviour.print("Interstitial is not ready yet");
        }


		AddEvent ("Show Interstitial");
    }

	private void ShowRewardedAd()
	{
		if (this.rewardedAd.IsLoaded())
		{
			this.rewardedAd.Show();
		}
		else
		{
			AddEvent ("Reward video ad is not ready yet");
			MonoBehaviour.print("Reward video ad is not ready yet");
		}

		AddEvent ("Show RewardedAd");
	}

 
    #region Banner callback handlers

    public void HandleAdLoaded(object sender, EventArgs args)
    {	this.showToastOnUiThread("HandleAdLoaded event received");
        MonoBehaviour.print("HandleAdLoaded event received");
		AddEvent ("Banner Loaded");
    }

    public void HandleAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
		this.showToastOnUiThread("HandleFailedToReceiveAd event received with message: " + args.Message);
        MonoBehaviour.print("HandleFailedToReceiveAd event received with message: " + args.Message);
		AddEvent ("Banner Load Failed " + args.Message);
    }

    public void HandleAdOpened(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdOpened event received");
        MonoBehaviour.print("HandleAdOpened event received");
		AddEvent ("Banner Opened");
    }

    public void HandleAdClosed(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdClosed event received");
        MonoBehaviour.print("HandleAdClosed event received");
		AddEvent ("Banner Closed");
    }

    public void HandleAdLeftApplication(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleAdLeftApplication event received");
        MonoBehaviour.print("HandleAdLeftApplication event received");
		AddEvent ("Banner Left Aplication");
    }

    #endregion

    #region Interstitial callback handlers

    public void HandleInterstitialLoaded(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialLoaded event received");
        MonoBehaviour.print("HandleInterstitialLoaded event received");
		AddEvent ("Interstitial Loaded");
    }

    public void HandleInterstitialFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
		this.showToastOnUiThread(
		"HandleInterstitialFailedToLoad event received with message: " + args.Message);

        MonoBehaviour.print(
            "HandleInterstitialFailedToLoad event received with message: " + args.Message);

		AddEvent ("InterstitialFailedToLoad event received with message: " + args.Message);


    }

    public void HandleInterstitialOpened(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialOpened event received");
        MonoBehaviour.print("HandleInterstitialOpened event received");
		AddEvent ("Interstitial Opened");
    }

    public void HandleInterstitialClosed(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialClosed event received");
        MonoBehaviour.print("HandleInterstitialClosed event received");
		AddEvent ("Interstitial Closed");
    }

    public void HandleInterstitialLeftApplication(object sender, EventArgs args)
    {
		this.showToastOnUiThread("HandleInterstitialLeftApplication event received");
        MonoBehaviour.print("HandleInterstitialLeftApplication event received");
		AddEvent ("Interstitial Left Application");
    }

    #endregion

  


	#region RewardedAd callback handlers
	
	public void HandleRewardedAdLoaded(object sender, EventArgs args)
	{
		this.showToastOnUiThread("HandleRewardedAdLoaded event received");
		MonoBehaviour.print("HandleRewardedAdLoaded event received");
		AddEvent ("Rewarded Loaded");

	}
	
	public void HandleRewardedAdFailedToLoad(object sender, AdErrorEventArgs args)
	{
		this.showToastOnUiThread("HHandleRewardedAdFailedToLoad event received with message: " + args.Message);
		MonoBehaviour.print(
			"HandleRewardedAdFailedToLoad event received with message: " + args.Message);

		AddEvent ("RewardedAdFailedToLoad event received with message: " + args.Message);
	}
	
	public void HandleRewardedAdOpening(object sender, EventArgs args)
	{
		this.showToastOnUiThread("HandleRewardedAdOpening event received");
		MonoBehaviour.print("HandleRewardedAdOpening event received");
		AddEvent ("Rewarded Opening");

	}
	
	public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
	{
		this.showToastOnUiThread("HandleRewardedAdFailedToShow event received with message: " + args.Message);
		MonoBehaviour.print(
			"HandleRewardedAdFailedToShow event received with message: " + args.Message);

		AddEvent ("RewardedAdFailedToShow event received with message: " + args.Message);

	}
	
	public void HandleRewardedAdClosed(object sender, EventArgs args)
	{
		this.showToastOnUiThread("HHandleRewardedAdClosed event received");
		MonoBehaviour.print("HandleRewardedAdClosed event received");
		AddEvent ("Rewarded Closed");
	}
	
	public void HandleUserEarnedReward(object sender, Reward args)
	{
		string type = args.Type;
		double amount = args.Amount;
		this.showToastOnUiThread("HandleRewardedAdRewarded event received for "
		                         + amount.ToString() + " " + type);
		MonoBehaviour.print(
			"HandleRewardedAdRewarded event received for "
			+ amount.ToString() + " " + type);

		AddEvent ("RewardedAdRewarded event received for " + amount.ToString() + " " + type);

	}


	#endregion
}
