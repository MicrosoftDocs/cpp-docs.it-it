---
title: Funzioni percorso ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
helpviewer_keywords:
- ATL, path
f1_keywords:
- ATLPATH/ATL::ATLPath::AddBackslash
- ATLPATH/ATL::ATLPath::AddExtension
- ATLPATH/ATL::ATLPath::Append
- ATLPATH/ATL::ATLPath::BuildRoot
- ATLPATH/ATL::ATLPath::Canonicalize
- ATLPATH/ATL::ATLPath::Combine
- ATLPATH/ATL::ATLPath::CommonPrefix
- ATLPATH/ATL::ATLPath::CompactPath
- ATLPATH/ATL::ATLPath::CompactPathEx
- ATLPATH/ATL::ATLPath::FileExists
- ATLPATH/ATL::ATLPath::FindExtension
- ATLPATH/ATL::ATLPath::FindFileName
- ATLPATH/ATL::ATLPath::GetDriveNumber
- ATLPATH/ATL::ATLPath::IsDirectory
- ATLPATH/ATL::ATLPath::IsFileSpec
- ATLPATH/ATL::ATLPath::IsPrefix
- ATLPATH/ATL::ATLPath::IsRelative
- ATLPATH/ATL::ATLPath::IsRoot
- ATLPATH/ATL::ATLPath::IsSameRoot
- ATLPATH/ATL::ATLPath::IsUNC
- ATLPATH/ATL::ATLPath::IsUNCServer
- ATLPATH/ATL::ATLPath::IsUNCServerShare
- ATLPATH/ATL::ATLPath::MakePretty
- ATLPATH/ATL::ATLPath::MatchSpec
- ATLPATH/ATL::ATLPath::QuoteSpaces
- ATLPATH/ATL::ATLPath::RelativePathTo
- ATLPATH/ATL::ATLPath::RemoveArgs
- ATLPATH/ATL::ATLPath::RemoveBackslash
- ATLPATH/ATL::ATLPath::RemoveBlanks
- ATLPATH/ATL::ATLPath::RemoveExtension
- ATLPATH/ATL::ATLPath::RemoveFileSpec
- ATLPATH/ATL::ATLPath::RenameExtension
- ATLPATH/ATL::ATLPath::SkipRoot
- ATLPATH/ATL::ATLPath::StripPath
- ATLPATH/ATL::ATLPath::StripToRoot
- ATLPATH/ATL::ATLPath::UnquoteSpaces
ms.assetid: d1ec2b8d-7ec7-43ea-90dd-0a740d2a742b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fa9795af90e28b2c021b179876a9f69609c7884
ms.sourcegitcommit: a5a69d2dc3513261e9e28320e4e067aaf40d2ef2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/21/2018
---
# <a name="atl-path-functions"></a>Funzioni percorso ATL

ATL fornisce la classe ATLPath per la modifica dei percorsi sotto forma di [CPathT](cpatht-class.md). Questo codice è reperibile in atlpath. h.  
  
### <a name="related-classes"></a>Classi correlate  
  
|||  
|-|-|  
|[Classe CPathT](cpatht-class.md)|Questa classe rappresenta un percorso.|  

### <a name="related-typedefs"></a>TypeDef correlati  
  
|||  
|-|-|  
|`CPath`|Una specializzazione di [CPathT](cpatht-class.md) utilizzando `CString`.|  
|`CPathA`|Una specializzazione di [CPathT](cpatht-class.md) utilizzando `CStringA`.|  
|`CPathW`|Una specializzazione di [CPathT](cpatht-class.md) utilizzando `CStringW`.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[ATLPath::AddBackslash](#addbackslash)|Questa funzione è un wrapper di overload per [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561).|  
|[ATLPath::AddExtension](#addextension)|Questa funzione è un wrapper di overload per [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).|  
|[ATLPath::Append](#append)|Questa funzione è un wrapper di overload per [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).|  
|[ATLPath::BuildRoot](#buildroot)|Questa funzione è un wrapper di overload per [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).|  
|[ATLPath::Canonicalize](#canonicalize)|Questa funzione è un wrapper di overload per [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).|  
|[ATLPath::Combine](#combine)|Questa funzione è un wrapper di overload per [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).|  
|[ATLPath::CommonPrefix](#commonprefix)|Questa funzione è un wrapper di overload per [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).|  
|[ATLPath::CompactPath](#compactpath)|Questa funzione è un wrapper di overload per [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).|  
|[ATLPath::CompactPathEx](#compactpathex)|Questa funzione è un wrapper di overload per [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).|  
|[ATLPath::FileExists](#fileexists)|Questa funzione è un wrapper di overload per [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).|  
|[ATLPath::FindExtension](#findextension)|Questa funzione è un wrapper di overload per [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).|  
|[ATLPath::FindFileName](#findfilename)|Questa funzione è un wrapper di overload per [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).|  
|[ATLPath::GetDriveNumber](#getdrivenumber)|Questa funzione è un wrapper di overload per [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).|  
|[ATLPath::IsDirectory](#isdirectory)|Questa funzione è un wrapper di overload per [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).|  
|[ATLPath::IsFileSpec](#isfilespec)|Questa funzione è un wrapper di overload per [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).|  
|[ATLPath::IsPrefix](#isprefix)|Questa funzione è un wrapper di overload per [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).|  
|[ATLPath::IsRelative](#isrelative)|Questa funzione è un wrapper di overload per [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).|  
|[ATLPath::IsRoot](#isroot)|Questa funzione è un wrapper di overload per [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).|  
|[ATLPath::IsSameRoot](#issameroot)|Questa funzione è un wrapper di overload per [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).|  
|[ATLPath::IsUNC](#isunc)|Questa funzione è un wrapper di overload per [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).|  
|[ATLPath::IsUNCServer](#isuncserver)|Questa funzione è un wrapper di overload per [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).|  
|[ATLPath::IsUNCServerShare](#isuncservershare)|Questa funzione è un wrapper di overload per [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).|  
|[ATLPath::MakePretty](#makepretty)|Questa funzione è un wrapper di overload per [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).|  
|[ATLPath::MatchSpec](#matchspec)|Questa funzione è un wrapper di overload per [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).|  
|[ATLPath::QuoteSpaces](#quotespaces)|Questa funzione è un wrapper di overload per [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).|  
|[ATLPath::RelativePathTo](#relativepathto)|Questa funzione è un wrapper di overload per [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).|  
|[ATLPath::RemoveArgs](#removeargs)|Questa funzione è un wrapper di overload per [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).|  
|[ATLPath::RemoveBackslash](#removebackslash)|Questa funzione è un wrapper di overload per [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).|  
|[ATLPath::RemoveBlanks](#removeblanks)|Questa funzione è un wrapper di overload per [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).|  
|[ATLPath::RemoveExtension](#removeextension)|Questa funzione è un wrapper di overload per [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).|  
|[ATLPath::RemoveFileSpec](#removefilespec)|Questa funzione è un wrapper di overload per [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).|  
|[ATLPath::RenameExtension](#renameextension)|Questa funzione è un wrapper di overload per [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).|  
|[ATLPath::SkipRoot](#skiproot)|Questa funzione è un wrapper di overload per [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).|  
|[ATLPath::StripPath](#strippath)|Questa funzione è un wrapper di overload per [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).|  
|[ATLPath::StripToRoot](#striptoroot)|Questa funzione è un wrapper di overload per [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).|  
|[ATLPath::UnquoteSpaces](#unquotespaces)|Questa funzione è un wrapper di overload per [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlpath. h  

## <a name="addbackslash"></a> ATLPath::AddBackSlash

Questa funzione è un wrapper di overload per [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline char* AddBackslash(char* pszPath);  
inline wchar_t* AddBackslash(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561) per informazioni dettagliate.  
  
 
  

## <a name="addextension"></a> ATLPath::AddExtension
 Questa funzione è un wrapper di overload per [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL AddExtension(char* pszPath, const char* pszExtension);  
inline BOOL AddExtension(wchar_t* pszPath, const wchar_t* pszExtension);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563) per informazioni dettagliate. 
  
## <a name="append"></a> ATLPath::Append
 Questa funzione è un wrapper di overload per [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL Append(char* pszPath, const char* pszMore);  
inline BOOL Append(wchar_t* pszPath, const wchar_t* pszMore);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565) per informazioni dettagliate.  
  
 
  

## <a name="buildroot"></a> ATLPath::BuildRoot
 Questa funzione è un wrapper di overload per [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline char* BuildRoot(char* pszPath, int iDrive);  
inline wchar_t* BuildRoot(wchar_t* pszPath, int iDrive);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567) per informazioni dettagliate.  
  
 
  

## <a name="canonicalize"></a> ATLPath::Canonicalize
 Questa funzione è un wrapper di overload per [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL Canonicalize(char* pszDest, const char* pszSrc);  
inline BOOL Canonicalize(wchar_t* pszDest, const wchar_t* pszSrc);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569) per informazioni dettagliate.  
  
 
  

## <a name="combine"></a> ATLPath::Combine 
Questa funzione è un wrapper di overload per [PathCombine](https://msdn.microsoft.com/en-us/library/windows/desktop/bb773571).  

### <a name="syntax"></a>Sintassi  
```
inline char* Combine(  
   char* pszDest,
   const char* pszDir,
   const char* pszFile 
);

inline wchar_t* Combine(  
   wchar_t* pszDest,
   const wchar_t* pszDir,
   const wchar_t* pszFile);
```
### <a name="remarks"></a>Note
Per informazioni dettagliate, vedere PathCombine.


## <a name="commonprefix"></a> ATLPath::CommonPrefix
 Questa funzione è un wrapper di overload per [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline int CommonPrefix(  
   const char* pszFile1, 
   const char* pszFile2,  
   char* pszDest);  

inline int CommonPrefix(  
   const wchar_t* pszFile1,  
   const wchar_t* pszFile2,  
   wchar_t* pszDest);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574) per informazioni dettagliate.  
  
 
  

## <a name="compactpath"></a> ATLPath::CompactPath
 Questa funzione è un wrapper di overload per [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL CompactPath(  
   HDC hDC,  
   char* pszPath,  
   UINT dx);  

inline BOOL CompactPath(  
   HDC hDC,  
   wchar_t* pszPath,  
   UINT dx);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575) per informazioni dettagliate.  
  
 
  

## <a name="compactpathex"></a> ATLPath::CompactPathEx
 Questa funzione è un wrapper di overload per [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL CompactPathEx(  
   char* pszDest,  
   const char* pszSrc,  
   UINT nMaxChars,  
   DWORD dwFlags);  

inline BOOL CompactPathEx(  
   wchar_t* pszDest,  
   const wchar_t* pszSrc,  
   UINT nMaxChars,  
   DWORD dwFlags);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578) per informazioni dettagliate.  
  
 
  

## <a name="fileexists"></a> ATLPath::FileExists
 Questa funzione è un wrapper di overload per [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL FileExists(const char* pszPath);  
inline BOOL FileExists(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584) per informazioni dettagliate.  
  
 
  

## <a name="findextension">ATLPath::FindExtension</a>
 Questa funzione è un wrapper di overload per [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline char* FindExtension(const char* pszPath);  
inline wchar_t* FindExtension(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587) per informazioni dettagliate.  
  
 
  

## <a name="findfilename"></a> ATLPath::FindFileName
 Questa funzione è un wrapper di overload per [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline char* FindFileName(const char* pszPath);  
inline wchar_t* FindFileName(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589) per informazioni dettagliate.  
  
 
  

## <a name="getdrivenumber"></a> ATLPath::GetDriveNumber  
 Questa funzione è un wrapper di overload per [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline int GetDriveNumber(const char* pszPath);  
inline int GetDriveNumber(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612) per informazioni dettagliate.  
  
 


## <a name="isdirectory"></a>  ATLPath::IsDirectory 
Questa funzione è un wrapper di overload per [PathIsDirectory](https://msdn.microsoft.com/en-us/library/windows/desktop/bb773621).

```  
inline BOOL IsDirectory(const char* pszPath);
inline BOOL IsDirectory(const wchar_t* pszPath);
```  
### <a name="remarks"></a>Note
Per informazioni dettagliate, vedere PathIsDirectory.  

## <a name="isfilespec"></a> ATLPath::IsFileSpec
 Questa funzione è un wrapper di overload per [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsFileSpec(const char* pszPath);  
inline BOOL IsFileSpec(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627) per informazioni dettagliate.  
  
 
  

## <a name="isprefix"></a> ATLPath::IsPrefix
 Questa funzione è un wrapper di overload per [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsPrefix(const char* pszPrefix, const char* pszPath);  
inline BOOL IsPrefix(const wchar_t* pszPrefix, const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650) per informazioni dettagliate.  
  
 
  

## <a name="isrelative">ATLPath::IsRelative</a>
 Questa funzione è un wrapper di overload per [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsRelative(const char* pszPath);  
inline BOOL IsRelative(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660) per informazioni dettagliate.  
  
 
  

## <a name="isroot"></a> ATLPath::IsRoot
 Questa funzione è un wrapper di overload per [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsRoot(const char* pszPath);  
inline BOOL IsRoot(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674) per informazioni dettagliate.  
  
 
  

## <a name="issameroot"></a> ATLPath::IsSameRoot
 Questa funzione è un wrapper di overload per [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsSameRoot(const char* pszPath1, const char* pszPath2);  
inline BOOL IsSameRoot(const wchar_t* pszPath1, const wchar_t* pszPath2);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687) per informazioni dettagliate.  
  
 
  

## <a name="isunc"></a> ATLPath::IsUNC
 Questa funzione è un wrapper di overload per [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsUNC(const char* pszPath);  
inline BOOL IsUNC(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712) per informazioni dettagliate.  
  
 
  

## <a name="isuncserver"></a> ATLPath::IsUNCServer
 Questa funzione è un wrapper di overload per [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsUNCServer(const char* pszPath);  
inline BOOL IsUNCServer(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722) per informazioni dettagliate.  
  
 
  

## <a name="isuncservershare"></a> ATLPath::IsUNCServerShare
 Questa funzione è un wrapper di overload per [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL IsUNCServerShare(const char* pszPath);  
inline BOOL IsUNCServerShare(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723) per informazioni dettagliate.  
  
 
  

## <a name="makepretty"></a> ATLPath::MakePretty
 Questa funzione è un wrapper di overload per [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL MakePretty(char* pszPath);  
inline BOOL MakePretty(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725) per informazioni dettagliate.  
  
 
  

## <a name="matchspec"></a> ATLPath::MatchSpec  
 Questa funzione è un wrapper di overload per [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL MatchSpec(const char* pszPath, const char* pszSpec);  
inline BOOL MatchSpec(const wchar_t* pszPath, const wchar_t* pszSpec);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727) per informazioni dettagliate.  
  
 
  

## <a name="quotespaces"></a> ATLPath::QuoteSpaces  
 Questa funzione è un wrapper di overload per [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline void QuoteSpaces(char* pszPath);  
inline void QuoteSpaces(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739) per informazioni dettagliate.  
  
 
  

## <a name="relativepathto"></a> ATLPath::RelativePathTo
 Questa funzione è un wrapper di overload per [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL RelativePathTo(  
   char* pszPath,  
   const char* pszFrom,  
   DWORD dwAttrFrom,  
   const char* pszTo,  
   DWORD dwAttrTo);  

inline BOOL RelativePathTo(  
   wchar_t* pszPath,  
   const wchar_t* pszFrom,  
   DWORD dwAttrFrom,  
   const wchar_t* pszTo,  
   DWORD dwAttrTo);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740) per informazioni dettagliate.  
  
 
  

## <a name="removeargs"></a> ATLPath::RemoveArgs  
 Questa funzione è un wrapper di overload per [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline void RemoveArgs(char* pszPath);  
inline void RemoveArgs(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742) per informazioni dettagliate.  
  
 
  

## <a name="removebackslash"></a> ATLPath::RemoveBackslash
 Questa funzione è un wrapper di overload per [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline char* RemoveBackslash(char* pszPath);  
inline wchar_t* RemoveBackslash(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743) per informazioni dettagliate.  
  
 
  

## <a name="removeblanks">ATLPath::RemoveBlanks</a>
 Questa funzione è un wrapper di overload per [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline void RemoveBlanks(char* pszPath);  
inline void RemoveBlanks(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745) per informazioni dettagliate.  
  
 
  

## <a name="removeextension"></a> ATLPath::RemoveExtension
 Questa funzione è un wrapper di overload per [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline void RemoveExtension(char* pszPath);  
inline void RemoveExtension(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746) per informazioni dettagliate.  
  
 
  

## <a name="removefilespec"></a> ATLPath::RemoveFileSpec
 Questa funzione è un wrapper di overload per [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL RemoveFileSpec(char* pszPath);  
inline BOOL RemoveFileSpec(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748) per informazioni dettagliate.  
  
 
  

## <a name="renameextension">ATLPath::RenameExtension</a>
 Questa funzione è un wrapper di overload per [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL RenameExtension(char* pszPath, const char* pszExt);  
inline BOOL RenameExtension(wchar_t* pszPath, const wchar_t* pszExt);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749) per informazioni dettagliate.  
  
 
  

## <a name="skiproot"></a> ATLPath::SkipRoot
 Questa funzione è un wrapper di overload per [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline char* SkipRoot(const char* pszPath);  
inline wchar_t* SkipRoot(const wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754) per informazioni dettagliate.  
  
 
  

## <a name="strippath"></a> ATLPath::StripPath
 Questa funzione è un wrapper di overload per [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline void StripPath(char* pszPath);  
inline void StripPath(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756) per informazioni dettagliate.  
  
 
  


## <a name="striptoroot"></a> ATLPath::StripToRoot
 Questa funzione è un wrapper di overload per [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline BOOL StripToRoot(char* pszPath);  
inline BOOL StripToRoot(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757) per informazioni dettagliate.  
  
 
  

## <a name="unquotespaces"></a> ATLPath::UnquoteSpaces
 Questa funzione è un wrapper di overload per [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).  
  
### <a name="syntax"></a>Sintassi  
  
```  
inline void UnquoteSpaces(char* pszPath);  
inline void UnquoteSpaces(wchar_t* pszPath);  
```  
  
### <a name="remarks"></a>Note  
 Vedere [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763) per informazioni dettagliate.  
  
 
  
 
