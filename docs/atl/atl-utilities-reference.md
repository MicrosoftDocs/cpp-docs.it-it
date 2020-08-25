---
title: Informazioni di riferimento sulle utilità ATL
ms.date: 11/04/2016
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
ms.openlocfilehash: f9e59a2c67d391995d94d77f526613534acb48de
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831875"
---
# <a name="atl-utilities-reference"></a>Informazioni di riferimento sulle utilità ATL

ATL fornisce codice per la modifica di percorsi e URL sotto forma di [CPathT](../atl/reference/cpatht-class.md) e [curl](../atl/reference/curl-class.md). Un pool di thread, [CThreadPool](../atl/reference/cthreadpool-class.md), può essere usato nelle applicazioni. Questo codice è disponibile in atlutil. h e atlpath. h.

## <a name="classes"></a>Classi

| &nbsp; | &nbsp; |
|--|--|
| [Classe CPathT](../atl/reference/cpatht-class.md) | Questa classe rappresenta un percorso. |
| [Classe CDebugReportHook](../atl/reference/cdebugreporthook-class.md) | Utilizzare questa classe per inviare report di debug a un named pipe. |
| [Classe CNonStatelessWorker](../atl/reference/cnonstatelessworker-class.md) | Riceve le richieste da un pool di thread e le passa a un oggetto di lavoro creato ed eliminato in base a ogni richiesta. |
| [Classe CNoWorkerThread](../atl/reference/cnoworkerthread-class.md) | Utilizzare questa classe come argomento per il `MonitorClass` parametro di modello per memorizzare le classi nella cache se si desidera disabilitare la manutenzione dinamica della cache. |
| [Classe CThreadPool](../atl/reference/cthreadpool-class.md) | Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro. |
| [Classe CUrl](../atl/reference/curl-class.md) | Questa classe rappresenta un URL. Consente di modificare ogni elemento dell'URL in modo indipendente dagli altri se si sta analizzando una stringa URL esistente o creando una stringa da zero. |
| [Classe CWorkerThread](../atl/reference/cworkerthread-class.md) | Questa classe crea un thread di lavoro o ne usa uno esistente, attende uno o più handle di oggetti kernel ed esegue una funzione client specificata quando uno degli handle viene segnalato. |

## <a name="typedefs"></a>Typedef

| &emsp; | &emsp; |
|--|--|
| [CPath](../atl/reference/atl-typedefs.md#cpath) | Una specializzazione di [CPathT](../atl/reference/cpatht-class.md) con `CString` . |
| [CPathA](../atl/reference/atl-typedefs.md#cpatha) | Una specializzazione di [CPathT](../atl/reference/cpatht-class.md) con `CStringA` . |
| [CPathW](../atl/reference/atl-typedefs.md#cpathw) | Una specializzazione di [CPathT](../atl/reference/cpatht-class.md) con `CStringW` . |
| [ATL_URL_PORT](../atl/reference/atl-typedefs.md#atl_url_port) | Tipo usato da [curl](../atl/reference/curl-class.md) per specificare un numero di porta. |

## <a name="enums"></a>Enumerazioni

| &emsp; | &emsp; |
|--|--|
| [ATL_URL_SCHEME](../atl/reference/atl-url-scheme-enum.md) | I membri di questa enumerazione forniscono costanti per gli schemi riconosciuti da [curl](../atl/reference/curl-class.md). |

## <a name="functions"></a>Funzioni

| &emsp; | &emsp; |
|--|--|
| [AtlCanonicalizeUrl](../atl/reference/atl-http-utility-functions.md#atlcanonicalizeurl) | Chiamare questa funzione per convertire in formato canonico un URL, inclusa la conversione dei caratteri e degli spazi non sicuri nelle sequenze di escape. |
| [AtlCombineUrl](../atl/reference/atl-http-utility-functions.md#atlcombineurl) | Chiamare questa funzione per combinare un URL di base e un URL relativo all'interno di un singolo URL canonico. |
| [AtlEscapeUrl](../atl/reference/atl-http-utility-functions.md#atlescapeurl) | Chiamare questa funzione per convertire tutti i caratteri non sicuri in sequenze di escape. |
| [AtlGetDefaultUrlPort](../atl/reference/atl-http-utility-functions.md#atlgetdefaulturlport) | Chiamare questa funzione per ottenere il numero di porta predefinito associato a uno schema o a un protocollo Internet specifico. |
| [AtlHexValue](../atl/reference/atl-text-encoding-functions.md#atlhexvalue) | Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale. |
| [AtlIsUnsafeUrlChar](../atl/reference/atl-http-utility-functions.md#atlisunsafeurlchar) | Chiamare questa funzione per verificare se un carattere può essere utilizzato in sicurezza in un URL. |
| [AtlUnescapeUrl](../atl/reference/atl-http-utility-functions.md#atlunescapeurl) | Chiamare questa funzione per convertire i caratteri di escape nei relativi valori originali. |
| [SystemTimeToHttpDate](../atl/reference/atl-http-utility-functions.md#systemtimetohttpdate) | Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP. |
| [ATLPath::AddBackslash](../atl/reference/atl-path-functions.md#addbackslash) | Questa funzione è un wrapper di overload per [PathAddBackslash] (/Windows/Desktop/API/shlwapi/NF-shlwapi-pathaddbackslasha |
| ). |
| [ATLPath::AddExtension](../atl/reference/atl-path-functions.md#addextension) | Questa funzione è un wrapper di overload per [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw). |
| [ATLPath::Append](../atl/reference/atl-path-functions.md#append) | Questa funzione è un wrapper di overload per [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw). |
| [ATLPath::BuildRoot](../atl/reference/atl-path-functions.md#buildroot) | Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw). |
| [ATLPath::Canonicalize](../atl/reference/atl-path-functions.md#canonicalize) | Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew). |
| [ATLPath::Combine](../atl/reference/atl-path-functions.md#combine) | Questa funzione è un wrapper di overload per [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew). |
| [ATLPath::CommonPrefix](../atl/reference/atl-path-functions.md#commonprefix) | Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw). |
| [ATLPath::CompactPath](../atl/reference/atl-path-functions.md#compactpath) | Questa funzione è un wrapper di overload per [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw). |
| [ATLPath::CompactPathEx](../atl/reference/atl-path-functions.md#compactpathex) | Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw). |
| [ATLPath::FileExists](../atl/reference/atl-path-functions.md#fileexists) | Questa funzione è un wrapper di overload per [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw). |
| [ATLPath::FindExtension](../atl/reference/atl-path-functions.md#findextension) | Questa funzione è un wrapper di overload per [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw). |
| [ATLPath::FindFileName](../atl/reference/atl-path-functions.md#findfilename) | Questa funzione è un wrapper di overload per [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew). |
| [ATLPath::GetDriveNumber](../atl/reference/atl-path-functions.md#getdrivenumber) | Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw). |
| [ATLPath::IsDirectory](../atl/reference/atl-path-functions.md#isdirectory) | Questa funzione è un wrapper di overload per [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw). |
| [ATLPath::IsFileSpec](../atl/reference/atl-path-functions.md#isfilespec) | Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw). |
| [ATLPath::IsPrefix](../atl/reference/atl-path-functions.md#isprefix) | Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw). |
| [ATLPath::IsRelative](../atl/reference/atl-path-functions.md#isrelative) | Questa funzione è un wrapper di overload per [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew). |
| [ATLPath::IsRoot](../atl/reference/atl-path-functions.md#isroot) | Questa funzione è un wrapper di overload per [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw). |
| [ATLPath::IsSameRoot](../atl/reference/atl-path-functions.md#issameroot) | Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw). |
| [ATLPath::IsUNC](../atl/reference/atl-path-functions.md#isunc) | Questa funzione è un wrapper di overload per [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw). |
| [ATLPath::IsUNCServer](../atl/reference/atl-path-functions.md#isuncserver) | Questa funzione è un wrapper di overload per [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw). |
| [ATLPath::IsUNCServerShare](../atl/reference/atl-path-functions.md#isuncservershare) | Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew). |
| [ATLPath::MakePretty](../atl/reference/atl-path-functions.md#makepretty) | Questa funzione è un wrapper di overload per [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw). |
| [ATLPath::MatchSpec](../atl/reference/atl-path-functions.md#matchspec) | Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw). |
| [ATLPath::QuoteSpaces](../atl/reference/atl-path-functions.md#quotespaces) | Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw). |
| [ATLPath::RelativePathTo](../atl/reference/atl-path-functions.md#relativepathto) | Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow). |
| [ATLPath::RemoveArgs](../atl/reference/atl-path-functions.md#removeargs) | Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw). |
| [ATLPath::RemoveBackslash](../atl/reference/atl-path-functions.md#removebackslash) | Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw). |
| [ATLPath::RemoveBlanks](../atl/reference/atl-path-functions.md#removeblanks) | Questa funzione è un wrapper di overload per [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw). |
| [ATLPath::RemoveExtension](../atl/reference/atl-path-functions.md#removeextension) | Questa funzione è un wrapper di overload per [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw). |
| [ATLPath::RemoveFileSpec](../atl/reference/atl-path-functions.md#removefilespec) | Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw). |
| [ATLPath::RenameExtension](../atl/reference/atl-path-functions.md#renameextension) | Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw). |
| [ATLPath::SkipRoot](../atl/reference/atl-path-functions.md#skiproot) | Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw). |
| [ATLPath::StripPath](../atl/reference/atl-path-functions.md#strippath) | Questa funzione è un wrapper di overload per [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw). |
| [ATLPath::StripToRoot](../atl/reference/atl-path-functions.md#striptoroot) | Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw). |
| [ATLPath::UnquoteSpaces](../atl/reference/atl-path-functions.md#unquotespaces) | Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw). |

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Componenti desktop COM ATL](../atl/atl-com-desktop-components.md)
