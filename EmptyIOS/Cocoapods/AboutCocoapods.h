//
//  AboutCocoapods.h
//  EmptyIOS
//
// 业务无关的类库可以通过 Cocoapods 来方便地管理，如SDWebImage, Reachability等等。还有一些是多个应用都会用到的基础模块，比如HBAPI、HBSNS 、HBFoundation（HB为公司名首字母）等等，可以建一个私有的git repo，然后加到podfile中，这样如果HBAPI有更新，只需要pod update一下就行了。

// s

//顺便说一下HBFoundation，这个git仓库中可以放一些自己写的所有应用基本上都会用到的小模块。如很多app都会有隔一段时间跳出一个求好评的alertView，就可以写一个HBRating类，这样需要使用该功能的app只需加上一句：[HBRating checkIfShouldPopupWithAppID:(NSInteger)appID]就行了。又比如app都有接受push notification的需求，可以写一个HBAPNS类，等等。
//
//  Created by LGQ on 14-3-26.
//  Copyright (c) 2014年 LGQ. All rights reserved.
//

#ifndef EmptyIOS_AboutCocoapods_h
#define EmptyIOS_AboutCocoapods_h



#endif
