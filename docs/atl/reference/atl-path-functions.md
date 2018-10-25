---
title: Funzioni di percorso ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cdb658b179e3e3488b070203ad7f0909610d4fd8
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50054644"
---
# <a name="atl-path-functions"></a>Funzioni di percorso ATL

ATL fornisce la classe ATLPath per la modifica dei percorsi costituiti [CPathT](cpatht-class.md). Questo codice è reperibile in atlpath. h.

### <a name="related-classes"></a>Classi correlate

|||
|-|-|
|[Classe CPathT](cpatht-class.md)|Questa classe rappresenta un percorso.|

### <a name="related-typedefs"></a>TypeDef correlati

|||
|-|-|
|`CPath`|Una specializzazione dello [CPathT](cpatht-class.md) usando `CString`.|
|`CPathA`|Una specializzazione dello [CPathT](cpatht-class.md) usando `CStringA`.|
|`CPathW`|Una specializzazione dello [CPathT](cpatht-class.md) usando `CStringW`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[ATLPath::AddBackslash](#addbackslash)|Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha).|
|[ATLPath::AddExtension](#addextension)|Questa funzione è un wrapper di overload per [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona).|
|[ATLPath::Append](#append)|Questa funzione è un wrapper di overload per [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda).|
|[ATLPath::BuildRoot](#buildroot)|Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota).|
|[ATLPath::Canonicalize](#canonicalize)|Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea).|
|[ATLPath::Combine](#combine)|Questa funzione è un wrapper di overload per [PathCombine](/windows/desktop/api/shlwapi/nf-shlwapi-pathcombinea).|
|[ATLPath::CommonPrefix](#commonprefix)|Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa).|
|[ATLPath::CompactPath](#compactpath)|Questa funzione è un wrapper di overload per [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha).|
|[ATLPath::CompactPathEx](#compactpathex)|Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa).|
|[ATLPath::FileExists](#fileexists)|Questa funzione è un wrapper di overload per [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa).|
|[ATLPath::FindExtension](#findextension)|Questa funzione è un wrapper di overload per [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona).|
|[ATLPath::FindFileName](#findfilename)|Questa funzione è un wrapper di overload per [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea).|
|[ATLPath::GetDriveNumber](#getdrivenumber)|Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera).|
|[ATLPath::IsDirectory](#isdirectory)|Questa funzione è un wrapper di overload per [PathIsDirectory](/windows/desktop/api/shlwapi/nf-shlwapi-pathisdirectorya).|
|[ATLPath::IsFileSpec](#isfilespec)|Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca).|
|[ATLPath::IsPrefix](#isprefix)|Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa).|
|[ATLPath::IsRelative](#isrelative)|Questa funzione è un wrapper di overload per [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea).|
|[ATLPath::IsRoot](#isroot)|Questa funzione è un wrapper di overload per [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota).|
|[ATLPath::IsSameRoot](#issameroot)|Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota).|
|[ATLPath::IsUNC](#isunc)|Questa funzione è un wrapper di overload per [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca).|
|[ATLPath::IsUNCServer](#isuncserver)|Questa funzione è un wrapper di overload per [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera).|
|[ATLPath::IsUNCServerShare](#isuncservershare)|Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea).|
|[ATLPath::MakePretty](#makepretty)|Questa funzione è un wrapper di overload per [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya).|
|[ATLPath::MatchSpec](#matchspec)|Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca).|
|[ATLPath::QuoteSpaces](#quotespaces)|Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa).|
|[ATLPath::RelativePathTo](#relativepathto)|Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa).|
|[ATLPath::RemoveArgs](#removeargs)|Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa).|
|[ATLPath::RemoveBackslash](#removebackslash)|Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha).|
|[ATLPath::RemoveBlanks](#removeblanks)|Questa funzione è un wrapper di overload per [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa).|
|[ATLPath::RemoveExtension](#removeextension)|Questa funzione è un wrapper di overload per [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona).|
|[ATLPath::RemoveFileSpec](#removefilespec)|Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca).|
|[ATLPath::RenameExtension](#renameextension)|Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona).|
|[ATLPath::SkipRoot](#skiproot)|Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota).|
|[ATLPath::StripPath](#strippath)|Questa funzione è un wrapper di overload per [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha).|
|[ATLPath::StripToRoot](#striptoroot)|Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota).|
|[ATLPath::UnquoteSpaces](#unquotespaces)|Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa).|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

## <a name="addbackslash"></a> ATLPath::AddBackSlash

Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha).

### <a name="syntax"></a>Sintassi

```
inline char* AddBackslash(char* pszPath);
inline wchar_t* AddBackslash(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha) per informazioni dettagliate.

## <a name="addextension"></a> ATLPath::AddExtension

Questa funzione è un wrapper di overload per [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona).

### <a name="syntax"></a>Sintassi

```
inline BOOL AddExtension(char* pszPath, const char* pszExtension);
inline BOOL AddExtension(wchar_t* pszPath, const wchar_t* pszExtension);
```

### <a name="remarks"></a>Note

Visualizzare [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona) per informazioni dettagliate.

## <a name="append"></a> ATLPath::Append

Questa funzione è un wrapper di overload per [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda).

### <a name="syntax"></a>Sintassi

```
inline BOOL Append(char* pszPath, const char* pszMore);
inline BOOL Append(wchar_t* pszPath, const wchar_t* pszMore);
```

### <a name="remarks"></a>Note

Visualizzare [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda) per informazioni dettagliate.

## <a name="buildroot"></a> ATLPath::BuildRoot

Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota).

### <a name="syntax"></a>Sintassi

```
inline char* BuildRoot(char* pszPath, int iDrive);
inline wchar_t* BuildRoot(wchar_t* pszPath, int iDrive);
```

### <a name="remarks"></a>Note

Visualizzare [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota) per informazioni dettagliate.

## <a name="canonicalize"></a> ATLPath::Canonicalize

Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea).

### <a name="syntax"></a>Sintassi

```
inline BOOL Canonicalize(char* pszDest, const char* pszSrc);
inline BOOL Canonicalize(wchar_t* pszDest, const wchar_t* pszSrc);
```

### <a name="remarks"></a>Note

Visualizzare [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea) per informazioni dettagliate.

## <a name="combine"></a> ATLPath::Combine

Questa funzione è un wrapper di overload per [PathCombine](/windows/desktop/api/shlwapi/nf-shlwapi-pathcombinea).

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

Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa).

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

Visualizzare [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa) per informazioni dettagliate.

## <a name="compactpath"></a> ATLPath::CompactPath

Questa funzione è un wrapper di overload per [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha).

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

Visualizzare [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha) per informazioni dettagliate.

## <a name="compactpathex"></a> ATLPath::CompactPathEx

Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa).

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

Visualizzare [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa) per informazioni dettagliate.

## <a name="fileexists"></a> ATLPath::FileExists

Questa funzione è un wrapper di overload per [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa).

### <a name="syntax"></a>Sintassi

```
inline BOOL FileExists(const char* pszPath);
inline BOOL FileExists(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa) per informazioni dettagliate.

## <a name="findextension"></a> ATLPath::FindExtension

Questa funzione è un wrapper di overload per [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona).

### <a name="syntax"></a>Sintassi

```
inline char* FindExtension(const char* pszPath);
inline wchar_t* FindExtension(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona) per informazioni dettagliate.

## <a name="findfilename"></a> ATLPath::FindFileName

Questa funzione è un wrapper di overload per [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea).

### <a name="syntax"></a>Sintassi

```
inline char* FindFileName(const char* pszPath);
inline wchar_t* FindFileName(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea) per informazioni dettagliate.

## <a name="getdrivenumber"></a> ATLPath::GetDriveNumber

Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera).

### <a name="syntax"></a>Sintassi

```
inline int GetDriveNumber(const char* pszPath);
inline int GetDriveNumber(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera) per informazioni dettagliate.

## <a name="isdirectory"></a>  ATLPath::IsDirectory

Questa funzione è un wrapper di overload per [PathIsDirectory](/windows/desktop/api/shlwapi/nf-shlwapi-pathisdirectorya).

```
inline BOOL IsDirectory(const char* pszPath);
inline BOOL IsDirectory(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Per informazioni dettagliate, vedere PathIsDirectory.

## <a name="isfilespec"></a> ATLPath::IsFileSpec

Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsFileSpec(const char* pszPath);
inline BOOL IsFileSpec(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca) per informazioni dettagliate.

## <a name="isprefix"></a> ATLPath::IsPrefix

Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsPrefix(const char* pszPrefix, const char* pszPath);
inline BOOL IsPrefix(const wchar_t* pszPrefix, const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa) per informazioni dettagliate.

## <a name="isrelative"></a> ATLPath::IsRelative

Questa funzione è un wrapper di overload per [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsRelative(const char* pszPath);
inline BOOL IsRelative(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea) per informazioni dettagliate.

## <a name="isroot"></a> ATLPath::IsRoot

Questa funzione è un wrapper di overload per [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsRoot(const char* pszPath);
inline BOOL IsRoot(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota) per informazioni dettagliate.

## <a name="issameroot"></a> ATLPath::IsSameRoot

Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsSameRoot(const char* pszPath1, const char* pszPath2);
inline BOOL IsSameRoot(const wchar_t* pszPath1, const wchar_t* pszPath2);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota) per informazioni dettagliate.

## <a name="isunc"></a> ATLPath::IsUNC

Questa funzione è un wrapper di overload per [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNC(const char* pszPath);
inline BOOL IsUNC(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca) per informazioni dettagliate.

## <a name="isuncserver"></a> ATLPath::IsUNCServer

Questa funzione è un wrapper di overload per [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNCServer(const char* pszPath);
inline BOOL IsUNCServer(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera) per informazioni dettagliate.

## <a name="isuncservershare"></a> ATLPath::IsUNCServerShare

Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNCServerShare(const char* pszPath);
inline BOOL IsUNCServerShare(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea) per informazioni dettagliate.

## <a name="makepretty"></a> ATLPath::MakePretty

Questa funzione è un wrapper di overload per [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya).

### <a name="syntax"></a>Sintassi

```
inline BOOL MakePretty(char* pszPath);
inline BOOL MakePretty(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya) per informazioni dettagliate.

## <a name="matchspec"></a> ATLPath::MatchSpec

Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca).

### <a name="syntax"></a>Sintassi

```
inline BOOL MatchSpec(const char* pszPath, const char* pszSpec);
inline BOOL MatchSpec(const wchar_t* pszPath, const wchar_t* pszSpec);
```

### <a name="remarks"></a>Note

Visualizzare [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca) per informazioni dettagliate.

## <a name="quotespaces"></a> ATLPath::QuoteSpaces

Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa).

### <a name="syntax"></a>Sintassi

```
inline void QuoteSpaces(char* pszPath);
inline void QuoteSpaces(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa) per informazioni dettagliate.

## <a name="relativepathto"></a> ATLPath::RelativePathTo

Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa).

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

Visualizzare [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa) per informazioni dettagliate.

## <a name="removeargs"></a> ATLPath::RemoveArgs

Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa).

### <a name="syntax"></a>Sintassi

```
inline void RemoveArgs(char* pszPath);
inline void RemoveArgs(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa) per informazioni dettagliate.

## <a name="removebackslash"></a> ATLPath::RemoveBackslash

Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha).

### <a name="syntax"></a>Sintassi

```
inline char* RemoveBackslash(char* pszPath);
inline wchar_t* RemoveBackslash(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha) per informazioni dettagliate.

## <a name="removeblanks"></a> ATLPath::RemoveBlanks

Questa funzione è un wrapper di overload per [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa).

### <a name="syntax"></a>Sintassi

```
inline void RemoveBlanks(char* pszPath);
inline void RemoveBlanks(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa) per informazioni dettagliate.

## <a name="removeextension"></a> ATLPath::RemoveExtension

Questa funzione è un wrapper di overload per [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona).

### <a name="syntax"></a>Sintassi

```
inline void RemoveExtension(char* pszPath);
inline void RemoveExtension(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona) per informazioni dettagliate.

## <a name="removefilespec"></a> ATLPath::RemoveFileSpec

Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca).

### <a name="syntax"></a>Sintassi

```
inline BOOL RemoveFileSpec(char* pszPath);
inline BOOL RemoveFileSpec(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca) per informazioni dettagliate.

## <a name="renameextension"></a> ATLPath::RenameExtension

Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona).

### <a name="syntax"></a>Sintassi

```
inline BOOL RenameExtension(char* pszPath, const char* pszExt);
inline BOOL RenameExtension(wchar_t* pszPath, const wchar_t* pszExt);
```

### <a name="remarks"></a>Note

Visualizzare [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona) per informazioni dettagliate.

## <a name="skiproot"></a> ATLPath::SkipRoot

Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota).

### <a name="syntax"></a>Sintassi

```
inline char* SkipRoot(const char* pszPath);
inline wchar_t* SkipRoot(const wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota) per informazioni dettagliate.

## <a name="strippath"></a> ATLPath::StripPath

Questa funzione è un wrapper di overload per [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha).

### <a name="syntax"></a>Sintassi

```
inline void StripPath(char* pszPath);
inline void StripPath(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha) per informazioni dettagliate.

## <a name="striptoroot"></a> ATLPath::StripToRoot

Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota).

### <a name="syntax"></a>Sintassi

```
inline BOOL StripToRoot(char* pszPath);
inline BOOL StripToRoot(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota) per informazioni dettagliate.

## <a name="unquotespaces"></a> ATLPath::UnquoteSpaces

Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa).

### <a name="syntax"></a>Sintassi

```
inline void UnquoteSpaces(char* pszPath);
inline void UnquoteSpaces(wchar_t* pszPath);
```

### <a name="remarks"></a>Note

Visualizzare [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa) per informazioni dettagliate.

