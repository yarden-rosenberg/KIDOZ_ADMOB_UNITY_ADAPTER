

# KIDOZ_ADMOB_UNITY_ADAPTER
Kidoz AdMob mediation adapter for Unity  
</br>

**Prerequisits:**
* To use the Kidoz SDK adapter for AdMob you should make sure you have:
1. AdMob Unity Plugin integrated in your project, View the integration documentation [HERE](https://developers.google.com/admob/unity/start)
2. A fully functional AdMob ad placement.
3. Kidoz SDK built with your project.


3.1. You can download Kidoz Unity SDK plugin WITH Kidoz AdMob adapter. 
```
Download the KidozAdMobUnity.unitypackage and import it into your project  
     
```
3.2. Please make sure you have a set up Kidoz publisher account.

3.3. The plugin itself consists of the Kidoz SDK and Kidoz AdMob adaptor (Android And iOS). 
3.4. Built and tested with:
 - Google Mobile Ads Unity Plugin v4.1.0
- Kidoz Android SDK v0.8.8.5  
- Kidoz iOS SDK v1.3.4
- Kidoz Android AdMob Adapter v1.6
- Kidoz iOS AdMob Adapter v1.6
```css
*** Please note - The support of Admob mediation for Apps that opt-in to Designed For Families program, should be checked with Google Admob mediation team. 
However, KIDOZ ads can be integrated directly to your apps.
```



</br>

**Integration Steps:**

* Import the KidozAdMobUnity.unitypackage  Assets --> Import Package --> Custom Package --> select  the KidozAdMobUnity.unitypackage package.

* Define Kidoz Banner , Interstitial and/or Rewarded Video Custom events as explained [HERE](https://support.google.com/admob/answer/3083407):

 # Android 
 
### KIDOZ Interstitial Adapter
* Set the following full path in the `Class Name` field: </br>
com.kidoz.mediation.admob.adapters.KidozAdMobMediationInterstitialAdapter

* Set your publisherId and  publisherToken as the following in the `Parameter` field  :</br>
{"AppID":"your_publisher_Id", "Token":"your_publisher_Token"}



### KIDOZ Rewarded Video Adapter
* Set the following full path in the `Class Name` field: </br>
com.kidoz.mediation.admob.adapters.KidozAdMobMediationRewardedAdapter

* Set your publisherId and  publisherToken as the following in the `Parameter` field:</br>
{"AppID":"your_publisher_Id", "Token":"your_publisher_Token"}

```
  Note: for Unity plugin lower than 3.16.0 
    Set the full path in the Class Name field:  
    com.kidoz.mediation.admob.adapters.KidozAdMobMediationLegacyRewardedAdapter
   ``` 
  
  
### KIDOZ Banner Adapter
* Set the following full path in the `Class Name` field: </br>
com.kidoz.mediation.admob.adapters.KidozAdMobMediationBannerAdapter

* Set your publisherId and  publisherToken as the following in the `Parameter` field :</br>
{"AppID":"your_publisher_Id", "Token":"your_publisher_Token"}

# iOS
 ### KIDOZ Interstitial Adapter
* Set the following full path in the `Class Name` field: </br>
KidozAdMobMediationInterstitialAdapter

* Set your publisherId and  publisherToken as the following in the `Parameter` field  :</br>
{"AppID":"your_publisher_Id", "Token":"your_publisher_Token"}



### KIDOZ Rewarded Video Adapter
* Set the following full path in the `Class Name` field: </br>
KidozAdMobMediationRewardedAdapter

* Set your publisherId and  publisherToken as the following in the `Parameter` field:</br>
{"AppID":"your_publisher_Id", "Token":"your_publisher_Token"}

```
  Note: for Unity plugin lower than 3.16.0 
    Set the full path in the Class Name field:  
    KidozAdMobMediationRewardedLegacyAdapter
   ``` 




### KIDOZ Banner Adapter
* Set the following full path in the `Class Name` field: </br>
KidozAdMobMediationBannerAdapter

* Set your publisherId and  publisherToken as the following in the `Parameter` field :</br>
{"AppID":"your_publisher_Id", "Token":"your_publisher_Token"}

```Note for Unity plugin lower than 3.16.0 ```

 

 
License
--------

    Copyright 2015 KIDOZ, Inc.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

