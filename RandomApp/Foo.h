//
//  Foo.h
//  RandomApp
//
//  Created by Elson Liu on 8/7/09.
//  Copyright 2009 University of Michigan. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Foo : NSObject {
	IBOutlet NSTextField *textField;
}
- (IBAction)seed:(id)sender;
- (IBAction)generate:(id)sender;
@end
