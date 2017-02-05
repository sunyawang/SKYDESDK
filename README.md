### 导入
***

#### cocoapods

在你的Podfile中添加：

	target 'TargetName' do
	pod 'SKYDESDK', '~> 1.0.0'
	end

然后执行：

	$ pod install

#### 手动导入

1. 把`SKYDESdk`文件夹中的所有文件添加到你的工程，如下图所示：

	![de](https://github.com/sunyawang/sywimgs/blob/master/de-1.png?raw=true)

### 使用

***

#### SDK主要文件说明

* [`GCDAsyncUdpSocket`](https://github.com/robbiehanson/CocoaAsyncSocket)是一个封装好的UDP通信开源库，，如果你的项目中已经使用了，可以从本SDK中删除。

* `NSData+SKYDE`和`NSDictionary+SKYDE`两个类别封装了SDK中频繁使用的几个函数。不需要关系。

* `SKYDEConfig.h`是SDK配置文件。

* `SKYDEManger.h`是SDK头文件，所有的API都在头文件中有详细注释。

* `libSKYDEManger.a`是静态库。


#### SDK配置

1. 通过`SKYDEConfig.h`中的`#define LOGENABLE`打开或者关闭LOG
2. 在本SDK中有一个心跳机制检测手机和电视的连接是否正常，如果超过一定的时间无法通信，SDK会发送一个断开连接的通知，同时关闭socket。此时客户端需要做断开设备的UI刷新工作。通过修改`SKYDEConfig.h`中`SOCKET_TIMEOUT`的数值来改变超时时间，默认10秒。

#### SDK使用

##### Importing

	#import "SKYDEManger.h"

##### API

所有的API使用方法请直接看`SKYDEManger.h`中的注释。

	
### END