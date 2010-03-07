// 
// Copyright (c) 2010 Eric Czarny <eczarny@gmail.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of  this  software  and  associated documentation files (the "Software"), to
// deal  in  the Software without restriction, including without limitation the
// rights  to  use,  copy,  modify,  merge,  publish,  distribute,  sublicense,
// and/or sell copies  of  the  Software,  and  to  permit  persons to whom the
// Software is furnished to do so, subject to the following conditions:
// 
// The  above  copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE  SOFTWARE  IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED,  INCLUDING  BUT  NOT  LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS  OR  COPYRIGHT  HOLDERS  BE  LIABLE  FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY,  WHETHER  IN  AN  ACTION  OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// 

//
// Test Client
// TestClientWindowController.h
//
// Created by Eric Czarny on Tuesday, July 7, 2009.
// Copyright (c) 2010 Divisible by Zero.
//

#import <Cocoa/Cocoa.h>

@interface TestClientWindowController : NSWindowController<XMLRPCConnectionDelegate> {
    XMLRPCResponse *myResponse;
    IBOutlet NSTextField *myRequestURL;
	IBOutlet NSTextField *myMethod;
    IBOutlet NSTextField *myParameter;
	IBOutlet NSProgressIndicator *myProgressIndicator;
    IBOutlet NSTextField *myActiveConnection;
    IBOutlet NSButton *mySendRequest;
    IBOutlet NSTextView *myRequestBody;
    IBOutlet NSTextView *myResponseBody;
    IBOutlet NSOutlineView *myParsedResponse;
}

+ (TestClientWindowController *)sharedController;

#pragma mark -

- (void)showTestClientWindow: (id)sender;

- (void)hideTestClientWindow: (id)sender;

#pragma mark -

- (void)toggleTestClientWindow: (id)sender;

#pragma mark -

- (void)sendRequest: (id)sender;

@end

#pragma mark -

@interface TestClientWindowController (XMLRPCConnectionDelegate)

- (void)request: (XMLRPCRequest *)request didReceiveResponse: (XMLRPCResponse *)response;

- (void)request: (XMLRPCRequest *)request didFailWithError: (NSError *)error;

- (void)request: (XMLRPCRequest *)request didReceiveAuthenticationChallenge: (NSURLAuthenticationChallenge *)challenge;

- (void)request: (XMLRPCRequest *)request didCancelAuthenticationChallenge: (NSURLAuthenticationChallenge *)challenge;

@end
