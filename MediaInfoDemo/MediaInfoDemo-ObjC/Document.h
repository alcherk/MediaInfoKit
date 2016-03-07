//
//  Document.h
//  MediaInfoDemo-Multi
//
//  This software is released subject to licensing conditions as detailed in LICENCE.md
//

#import <Cocoa/Cocoa.h>
#import <MediaInfoKit/MediaInfoKit.h>

@interface Document : NSDocument

@property (nullable, readonly) NSString *baseFilename;
@property (nonnull,  readonly) NSAttributedString *attributedString;
@property (assign,  readwrite) MIKExportFormat format;

- (void)openMovieFile;
- (BOOL)writeToURL:(nonnull NSURL *)fileURL;

@end
