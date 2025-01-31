// Copyright © 2018 650 Industries. All rights reserved.

#import <UIKit/UIKit.h>

typedef void (^ABI46_0_0EXImageLoaderCompletionBlock)(NSError *error, UIImage *image);

@protocol ABI46_0_0EXImageLoaderInterface <NSObject>

- (void)loadImageForURL:(NSURL *)imageURL
      completionHandler:(ABI46_0_0EXImageLoaderCompletionBlock)completionHandler;

@end
