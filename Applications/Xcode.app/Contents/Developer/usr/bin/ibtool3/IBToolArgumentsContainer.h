//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IBMutableOrderedDictionary, NSDictionary, NSMutableArray, NSMutableSet, NSString;

@interface IBToolArgumentsContainer : NSObject <NSCoding>
{
    BOOL upgrade;
    BOOL removePluginDependency;
    BOOL extractLocalizableStrings;
    BOOL extractLocalizableAll;
    BOOL showDebugOutput;
    BOOL renameClasses;
    BOOL printObjects;
    BOOL printConnections;
    BOOL printClasses;
    BOOL incrementallyLocalize;
    BOOL printHierarchy;
    BOOL printNibVersion;
    BOOL printErrorMessages;
    BOOL printWarningMessages;
    BOOL printNoticeMessages;
    BOOL printMessageCategoryInfo;
    BOOL shouldGenerateStringsfile;
    BOOL updateDocumentFromStringsfile;
    BOOL shouldPrintUsage;
    BOOL shouldPrintVersion;
    BOOL extractLocalizableGeometry;
    BOOL extractLocalizableOther;
    BOOL extractLocalizableToManyRelationships;
    BOOL extractLocalizableArrays;
    BOOL makeEditableWhenCompiling;
    NSMutableSet *importSourcePaths;
    NSDictionary *refactorInfo;
    NSDictionary *exportPropertiesDescription;
    NSDictionary *importProperties;
    NSMutableArray *pluginPaths;
    NSMutableArray *pluginSearchPaths;
    NSString *inputDocumentPath;
    NSString *outputDocumentPath;
    NSString *stringsFilePath;
    NSString *priorLocalizedDocumentPath;
    NSString *priorMasterDocumentPath;
    NSString *compilationOutputPath;
    NSString *strippingOutputPath;
    NSString *targetRuntimeIdentifier;
    NSString *documentOutputFormat;
    IBMutableOrderedDictionary *classNameRemap;
    NSString *stringsfileOutputPath;
    long long outputFormat;
    NSString *agentName;
    double agentTimeout;
    BOOL shouldStartAgent;
    BOOL shouldUseAgent;
    BOOL exportXLIFF;
    BOOL importXLIFF;
    NSString *XLIFFExportPath;
    NSString *XLIFFImportPath;
    NSString *XLIFFSourceLanguage;
    NSString *XLIFFTargetLanguage;
    NSString *baseSDK;
}

- (void)setXLIFFTargetLanguage:(id)arg1;
- (id)XLIFFTargetLanguage;
- (void)setXLIFFSourceLanguage:(id)arg1;
- (id)XLIFFSourceLanguage;
- (void)setXLIFFImportPath:(id)arg1;
- (id)XLIFFImportPath;
- (void)setImportXLIFF:(BOOL)arg1;
- (BOOL)importXLIFF;
- (void)setXLIFFExportPath:(id)arg1;
- (id)XLIFFExportPath;
- (void)setExportXLIFF:(BOOL)arg1;
- (BOOL)exportXLIFF;
- (BOOL)isMissingRequiredArgumentsForIncrementalLocalization;
- (BOOL)isMissingRequiredInputDocument;
- (id)baseSDK;
- (void)setBaseSDK:(id)arg1;
- (void)setTargetRuntimeIdentifier:(id)arg1;
- (void)setShouldStartAgent:(BOOL)arg1;
- (BOOL)shouldStartAgent;
- (void)setShouldUseAgent:(BOOL)arg1;
- (BOOL)shouldUseAgent;
- (void)setAgentTimeout:(double)arg1;
- (double)agentTimeout;
- (void)setAgentName:(id)arg1;
- (id)agentName;
- (void)setOutputFormat:(long long)arg1;
- (void)setMakeEditableWhenCompiling:(BOOL)arg1;
- (void)setCompilationOutputPath:(id)arg1;
- (void)setStrippingOutputPath:(id)arg1;
- (void)setShouldPrintVersion:(BOOL)arg1;
- (void)setStringsfileOutputPath:(id)arg1;
- (void)setClassNameRemap:(id)arg1;
- (void)setPriorMasterDocumentPath:(id)arg1;
- (void)setPriorLocalizedDocumentPath:(id)arg1;
- (void)setStringsFilePath:(id)arg1;
- (void)setOutputDocumentPath:(id)arg1;
- (void)setInputDocumentPath:(id)arg1;
- (void)setPluginSearchPaths:(id)arg1;
- (void)setPluginPaths:(id)arg1;
- (void)setImportProperties:(id)arg1;
- (void)setExportPropertiesDescription:(id)arg1;
- (void)setRefactorInfo:(id)arg1;
- (void)setShouldPrintUsage:(BOOL)arg1;
- (void)setUpdateDocumentFromStringsfile:(BOOL)arg1;
- (void)setShouldGenerateStringsfile:(BOOL)arg1;
- (void)setPrintMessageCategoryInfo:(BOOL)arg1;
- (void)setPrintNoticeMessages:(BOOL)arg1;
- (void)setPrintWarningMessages:(BOOL)arg1;
- (void)setPrintErrorMessages:(BOOL)arg1;
- (void)setPrintNibVersion:(BOOL)arg1;
- (void)setPrintHierarchy:(BOOL)arg1;
- (void)setIncrementallyLocalize:(BOOL)arg1;
- (void)setPrintClasses:(BOOL)arg1;
- (void)setPrintConnections:(BOOL)arg1;
- (void)setPrintObjects:(BOOL)arg1;
- (void)setRenameClasses:(BOOL)arg1;
- (void)setShowDebugOutput:(BOOL)arg1;
- (void)setExtractLocalizableAll:(BOOL)arg1;
- (void)setExtractLocalizableStrings:(BOOL)arg1;
- (void)setRemovePluginDependency:(BOOL)arg1;
- (void)setUpgrade:(BOOL)arg1;
- (void)setExtractLocalizableArrays:(BOOL)arg1;
- (void)setExtractLocalizableToManyRelationships:(BOOL)arg1;
- (void)setExtractLocalizableOther:(BOOL)arg1;
- (void)setExtractLocalizableGeometry:(BOOL)arg1;
- (void)setDocumentOutputFormat:(id)arg1;
- (id)targetRuntimeIdentifier;
- (id)documentOutputFormat;
- (BOOL)makeEditableWhenCompiling;
- (long long)outputFormat;
- (id)compilationOutputPath;
- (id)strippingOutputPath;
- (BOOL)extractLocalizableArrays;
- (BOOL)extractLocalizableGeometry;
- (BOOL)extractLocalizableToManyRelationships;
- (BOOL)extractLocalizableOther;
- (BOOL)shouldPrintVersion;
- (id)stringsfileOutputPath;
- (id)classNameRemap;
- (id)priorMasterDocumentPath;
- (id)priorLocalizedDocumentPath;
- (id)stringsFilePath;
- (id)outputDocumentPath;
- (id)inputDocumentPath;
- (id)pluginSearchPaths;
- (id)pluginPaths;
- (id)importProperties;
- (id)exportPropertiesDescription;
- (id)refactorInfo;
- (BOOL)shouldPrintUsage;
- (BOOL)updateDocumentFromStringsfile;
- (BOOL)shouldGenerateStringsfile;
- (BOOL)printMessageCategoryInfo;
- (BOOL)printNoticeMessages;
- (BOOL)printWarningMessages;
- (BOOL)printErrorMessages;
- (BOOL)printNibVersion;
- (BOOL)printHierarchy;
- (BOOL)incrementallyLocalize;
- (BOOL)printClasses;
- (BOOL)printConnections;
- (BOOL)printObjects;
- (BOOL)renameClasses;
- (BOOL)showDebugOutput;
- (BOOL)extractLocalizableAll;
- (BOOL)extractLocalizableStrings;
- (BOOL)removePluginDependency;
- (BOOL)upgrade;
- (void)addImportSourcePath:(id)arg1;
- (id)importSourcePaths;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
