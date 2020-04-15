---
title: Funzioni di percorso ATL
ms.date: 11/04/2016
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
ms.openlocfilehash: f3d8fa63e7fd20f8a0d6759fee8417b3fbc29486
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319213"
---
# <a name="atl-path-functions"></a>Funzioni di percorso ATL

ATL fornisce la classe ATLPath per la modifica dei percorsi sotto forma di [CPathT](cpatht-class.md). Questo codice è disponibile in atlpath.h.

### <a name="related-classes"></a>Classi correlate

|||
|-|-|
|[Classe CPathT](cpatht-class.md)|Questa classe rappresenta un percorso.|

### <a name="related-typedefs"></a>Typedef correlati

|||
|-|-|
|`CPath`|Specializzazione di [CPathT](cpatht-class.md) utilizzando `CString`.|
|`CPathA`|Specializzazione di [CPathT](cpatht-class.md) utilizzando `CStringA`.|
|`CPathW`|Specializzazione di [CPathT](cpatht-class.md) utilizzando `CStringW`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[ATLPath::AddBackslash](#addbackslash)|Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).|
|[ATLPath::AddExtension](#addextension)|Questa funzione è un wrapper in overload per [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).|
|[ATLPath::Append](#append)|Questa funzione è un wrapper in overload per [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).|
|[ATLPath::BuildRoot](#buildroot)|Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).|
|[ATLPath::Canonicalize](#canonicalize)|Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).|
|[ATLPath::Combine](#combine)|Questa funzione è un wrapper di overload per [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).|
|[ATLPath::CommonPrefix](#commonprefix)|Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).|
|[ATLPath::CompactPath](#compactpath)|Questa funzione è un wrapper di overload per [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).|
|[ATLPath::CompactPathEx](#compactpathex)|Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).|
|[ATLPath::FileExists](#fileexists)|Questa funzione è un wrapper di overload per [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).|
|[ATLPath::FindExtension](#findextension)|Questa funzione è un wrapper in overload per [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).|
|[ATLPath::FindFileName](#findfilename)|Questa funzione è un wrapper di overload per [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).|
|[ATLPath::GetDriveNumber](#getdrivenumber)|Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).|
|[ATLPath::IsDirectory](#isdirectory)|Questa funzione è un wrapper in overload per [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).|
|[ATLPath::IsFileSpec](#isfilespec)|Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).|
|[ATLPath::IsPrefix](#isprefix)|Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).|
|[ATLPath::IsRelative](#isrelative)|Questa funzione è un wrapper di overload per [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).|
|[ATLPath::IsRoot](#isroot)|Questa funzione è un wrapper in overload per [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).|
|[ATLPath::IsSameRoot](#issameroot)|Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).|
|[ATLPath::IsUNC](#isunc)|Questa funzione è un wrapper di overload per [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).|
|[ATLPath::IsUNCServer](#isuncserver)|Questa funzione è un wrapper in overload per [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).|
|[ATLPath::IsUNCServerShare](#isuncservershare)|Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).|
|[ATLPath::MakePretty](#makepretty)|Questa funzione è un wrapper di overload per [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).|
|[ATLPath::MatchSpec](#matchspec)|Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).|
|[ATLPath::QuoteSpaces](#quotespaces)|Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).|
|[ATLPath::RelativePathTo](#relativepathto)|Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).|
|[ATLPath::RemoveArgs](#removeargs)|Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).|
|[ATLPath::RemoveBackslash](#removebackslash)|Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).|
|[ATLPath::RemoveBlanks](#removeblanks)|Questa funzione è un wrapper in overload per [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).|
|[ATLPath::RemoveExtension](#removeextension)|Questa funzione è un wrapper in overload per [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).|
|[ATLPath::RemoveFileSpec](#removefilespec)|Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).|
|[ATLPath::RenameExtension](#renameextension)|Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).|
|[ATLPath::SkipRoot](#skiproot)|Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).|
|[ATLPath::StripPath](#strippath)|Questa funzione è un wrapper di overload per [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).|
|[ATLPath::StripToRoot](#striptoroot)|Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).|
|[ATLPath::UnquoteSpaces](#unquotespaces)|Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath.h

## <a name="atlpathaddbackslash"></a><a name="addbackslash"></a>PERCORSO::AddBackSlash

Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).

### <a name="syntax"></a>Sintassi

```
inline char* AddBackslash(char* pszPath);
inline wchar_t* AddBackslash(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Vedere [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw) per i dettagli.

## <a name="atlpathaddextension"></a><a name="addextension"></a>PERCORSO ATLPath::AddExtension

Questa funzione è un wrapper in overload per [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).

### <a name="syntax"></a>Sintassi

```
inline BOOL AddExtension(char* pszPath, const char* pszExtension);
inline BOOL AddExtension(wchar_t* pszPath, const wchar_t* pszExtension);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathAddExtension.See PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw) for details.

## <a name="atlpathappend"></a><a name="append"></a>ATLPath::Accoda

Questa funzione è un wrapper in overload per [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).

### <a name="syntax"></a>Sintassi

```
inline BOOL Append(char* pszPath, const char* pszMore);
inline BOOL Append(wchar_t* pszPath, const wchar_t* pszMore);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathAppend.See PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw) for details.

## <a name="atlpathbuildroot"></a><a name="buildroot"></a>ATLPath::BuildRoot

Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).

### <a name="syntax"></a>Sintassi

```
inline char* BuildRoot(char* pszPath, int iDrive);
inline wchar_t* BuildRoot(wchar_t* pszPath, int iDrive);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathBuildRoot.See PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw) for details.

## <a name="atlpathcanonicalize"></a><a name="canonicalize"></a>ATLPath::Canonicalize (Percorso ATLPath::Canonicalize)

Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).

### <a name="syntax"></a>Sintassi

```
inline BOOL Canonicalize(char* pszDest, const char* pszSrc);
inline BOOL Canonicalize(wchar_t* pszDest, const wchar_t* pszSrc);
```

### <a name="remarks"></a>Osservazioni

Vedere [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew) per i dettagli.

## <a name="atlpathcombine"></a><a name="combine"></a>ATLPath::Combina

Questa funzione è un wrapper di overload per [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).

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

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere PathCombine.See PathCombine for details.

## <a name="atlpathcommonprefix"></a><a name="commonprefix"></a>ATLPath::CommonPrefix

Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).

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

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathCommonPrefix.See PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw) for details.

## <a name="atlpathcompactpath"></a><a name="compactpath"></a>ATLPath::CompactPath

Questa funzione è un wrapper di overload per [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).

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

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathCompactPath.See PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw) for details.

## <a name="atlpathcompactpathex"></a><a name="compactpathex"></a>ATLPath::CompactPathEx

Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).

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

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathCompactPathEx.See PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw) for details.

## <a name="atlpathfileexists"></a><a name="fileexists"></a>ATLPercorso::FileExists

Questa funzione è un wrapper di overload per [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).

### <a name="syntax"></a>Sintassi

```
inline BOOL FileExists(const char* pszPath);
inline BOOL FileExists(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathFileExists.See PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw) for details.

## <a name="atlpathfindextension"></a><a name="findextension"></a>PERCORSO ATLPath::FindExtension

Questa funzione è un wrapper in overload per [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).

### <a name="syntax"></a>Sintassi

```
inline char* FindExtension(const char* pszPath);
inline wchar_t* FindExtension(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathFindExtension.See PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw) for details.

## <a name="atlpathfindfilename"></a><a name="findfilename"></a>ATLPercorso::NomeFileRicerca

Questa funzione è un wrapper di overload per [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).

### <a name="syntax"></a>Sintassi

```
inline char* FindFileName(const char* pszPath);
inline wchar_t* FindFileName(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathFindFileName.See PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) for details.

## <a name="atlpathgetdrivenumber"></a><a name="getdrivenumber"></a>PERCORSOATT::NumeroUnità

Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).

### <a name="syntax"></a>Sintassi

```
inline int GetDriveNumber(const char* pszPath);
inline int GetDriveNumber(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathGetDriveNumber.See PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw) for details.

## <a name="atlpathisdirectory"></a><a name="isdirectory"></a>ATLPath::IsDirectory

Questa funzione è un wrapper in overload per [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).

```
inline BOOL IsDirectory(const char* pszPath);
inline BOOL IsDirectory(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere PathIsDirectory.See PathIsDirectory for details.

## <a name="atlpathisfilespec"></a><a name="isfilespec"></a>ATLPath::IsFileSpec

Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsFileSpec(const char* pszPath);
inline BOOL IsFileSpec(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsFileSpec.See PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw) for details.

## <a name="atlpathisprefix"></a><a name="isprefix"></a>ATLPath::IsPrefix

Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsPrefix(const char* pszPrefix, const char* pszPath);
inline BOOL IsPrefix(const wchar_t* pszPrefix, const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsPrefix.See PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw) for details.

## <a name="atlpathisrelative"></a><a name="isrelative"></a>ATLPath::IsRelative

Questa funzione è un wrapper di overload per [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsRelative(const char* pszPath);
inline BOOL IsRelative(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsRelative.See PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew) for details.

## <a name="atlpathisroot"></a><a name="isroot"></a>ATLPercorso::IsRoot

Questa funzione è un wrapper in overload per [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsRoot(const char* pszPath);
inline BOOL IsRoot(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsRoot.See PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw) for details.

## <a name="atlpathissameroot"></a><a name="issameroot"></a>PERCORSO ATLPath::IsSameRoot

Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsSameRoot(const char* pszPath1, const char* pszPath2);
inline BOOL IsSameRoot(const wchar_t* pszPath1, const wchar_t* pszPath2);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsSameRoot.See PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw) for details.

## <a name="atlpathisunc"></a><a name="isunc"></a>ATLPercorso::IsUNC

Questa funzione è un wrapper di overload per [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNC(const char* pszPath);
inline BOOL IsUNC(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsUNC.See PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw) for details.

## <a name="atlpathisuncserver"></a><a name="isuncserver"></a>ATLPercorso::IsUNCServer

Questa funzione è un wrapper in overload per [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNCServer(const char* pszPath);
inline BOOL IsUNCServer(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsUNCServer.See PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw) for details.

## <a name="atlpathisuncservershare"></a><a name="isuncservershare"></a>ATLPath::IsUNCServerShare (Percorso ATL::CondivisioneIsUNCServerShare)

Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNCServerShare(const char* pszPath);
inline BOOL IsUNCServerShare(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathIsUNCServerShare.See PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew) for details.

## <a name="atlpathmakepretty"></a><a name="makepretty"></a>ATLPath::MakePretty

Questa funzione è un wrapper di overload per [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).

### <a name="syntax"></a>Sintassi

```
inline BOOL MakePretty(char* pszPath);
inline BOOL MakePretty(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Vedere [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw) per i dettagli.

## <a name="atlpathmatchspec"></a><a name="matchspec"></a>ATLPath::MatchSpec

Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).

### <a name="syntax"></a>Sintassi

```
inline BOOL MatchSpec(const char* pszPath, const char* pszSpec);
inline BOOL MatchSpec(const wchar_t* pszPath, const wchar_t* pszSpec);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathMatchSpec.See PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw) for details.

## <a name="atlpathquotespaces"></a><a name="quotespaces"></a>ATLPath::QuoteSpaces

Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).

### <a name="syntax"></a>Sintassi

```
inline void QuoteSpaces(char* pszPath);
inline void QuoteSpaces(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathQuoteSpaces.See PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw) for details.

## <a name="atlpathrelativepathto"></a><a name="relativepathto"></a>ATLPath::RelativePathTo

Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).

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

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathRelativePathTo.See PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow) for details.

## <a name="atlpathremoveargs"></a><a name="removeargs"></a>ATLPath::RemoveArgs

Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).

### <a name="syntax"></a>Sintassi

```
inline void RemoveArgs(char* pszPath);
inline void RemoveArgs(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Vedere [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw) per informazioni dettagliate.

## <a name="atlpathremovebackslash"></a><a name="removebackslash"></a>PERCORSO::RimuovereBackslash

Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).

### <a name="syntax"></a>Sintassi

```
inline char* RemoveBackslash(char* pszPath);
inline wchar_t* RemoveBackslash(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathRemoveBackslash.](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw)

## <a name="atlpathremoveblanks"></a><a name="removeblanks"></a>ATLPercorso::RemoveVuote

Questa funzione è un wrapper in overload per [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).

### <a name="syntax"></a>Sintassi

```
inline void RemoveBlanks(char* pszPath);
inline void RemoveBlanks(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveBlanks.See PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw) for details.

## <a name="atlpathremoveextension"></a><a name="removeextension"></a>ATLPercorso::RemoveExtension

Questa funzione è un wrapper in overload per [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).

### <a name="syntax"></a>Sintassi

```
inline void RemoveExtension(char* pszPath);
inline void RemoveExtension(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveExtension.See PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw) for details.

## <a name="atlpathremovefilespec"></a><a name="removefilespec"></a>ATLPath::RemoveFileSpec

Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).

### <a name="syntax"></a>Sintassi

```
inline BOOL RemoveFileSpec(char* pszPath);
inline BOOL RemoveFileSpec(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathRemoveFileSpec.See PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw) for details.

## <a name="atlpathrenameextension"></a><a name="renameextension"></a>ATLPath::RenameExtension (Percorso ATLPath::RenameExtension)

Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).

### <a name="syntax"></a>Sintassi

```
inline BOOL RenameExtension(char* pszPath, const char* pszExt);
inline BOOL RenameExtension(wchar_t* pszPath, const wchar_t* pszExt);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathRenameExtension.See PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw) for details.

## <a name="atlpathskiproot"></a><a name="skiproot"></a>ATLPercorso::SkipRoot

Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).

### <a name="syntax"></a>Sintassi

```
inline char* SkipRoot(const char* pszPath);
inline wchar_t* SkipRoot(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathSkipRoot.See PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw) for details.

## <a name="atlpathstrippath"></a><a name="strippath"></a>PERCORSOATC::StripPath

Questa funzione è un wrapper di overload per [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).

### <a name="syntax"></a>Sintassi

```
inline void StripPath(char* pszPath);
inline void StripPath(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathStripPath.See PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw) for details.

## <a name="atlpathstriptoroot"></a><a name="striptoroot"></a>PERCORSO ATLPath::StripToRoot

Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).

### <a name="syntax"></a>Sintassi

```
inline BOOL StripToRoot(char* pszPath);
inline BOOL StripToRoot(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni [dettagliate, vedere PathStripToRoot.See PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw) for details.

## <a name="atlpathunquotespaces"></a><a name="unquotespaces"></a>ATLPath::UnquoteSpaces (Spazi PER I prezzi di univirgolett)

Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).

### <a name="syntax"></a>Sintassi

```
inline void UnquoteSpaces(char* pszPath);
inline void UnquoteSpaces(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathUnquoteSpaces.See PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw) for details.
