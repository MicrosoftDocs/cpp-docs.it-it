---
title: Riferimenti sulle utilità ATL
ms.date: 11/04/2016
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
ms.openlocfilehash: b5365ddc2924955fbdcf694065c4d4041a38eb01
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271944"
---
# <a name="atl-utilities-reference"></a>Riferimenti sulle utilità ATL

ATL fornisce il codice per la modifica dei percorsi e gli URL nel formato [CPathT](../atl/reference/cpatht-class.md) e [CUrl](../atl/reference/curl-class.md). Un pool di thread [CThreadPool](../atl/reference/cthreadpool-class.md), può essere usato nelle applicazioni. Questo codice è reperibile in atlutil. h e atlpath. h.

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe CPathT](../atl/reference/cpatht-class.md)|Questa classe rappresenta un percorso.|
|[Classe CDebugReportHook](../atl/reference/cdebugreporthook-class.md)|Usare questa classe per inviare i report di debug a una named pipe.|
|[Classe CNonStatelessWorker](../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste da un pool di thread e li passa ad un oggetto di lavoro che verrà creato ed eliminato a ogni richiesta.|
|[Classe CNoWorkerThread](../atl/reference/cnoworkerthread-class.md)|Utilizzare questa classe come argomento per il `MonitorClass` parametro di modello per le classi di cache se si desidera disabilitare la manutenzione della cache dinamica.|
|[Classe CThreadPool](../atl/reference/cthreadpool-class.md)|Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.|
|[Classe CUrl](../atl/reference/curl-class.md)|Questa classe rappresenta un URL. È possibile modificare ogni elemento dell'URL indipendentemente dagli altri, se l'analisi di un URL esistente stringa o creazione di una stringa da zero.|
|[Classe CWorkerThread](../atl/reference/cworkerthread-class.md)|Questa classe crea un thread di lavoro o viene utilizzato uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione di client specificato quando uno degli handle viene segnalato.|

### <a name="typedefs"></a>Definizioni typedef

|||
|-|-|
|[CPath](../atl/reference/atl-typedefs.md#cpath)|Una specializzazione dello [CPathT](../atl/reference/cpatht-class.md) usando `CString`.|
|[CPathA](../atl/reference/atl-typedefs.md#cpatha)|Una specializzazione dello [CPathT](../atl/reference/cpatht-class.md) usando `CStringA`.|
|[CPathW](../atl/reference/atl-typedefs.md#cpathw)|Una specializzazione dello [CPathT](../atl/reference/cpatht-class.md) usando `CStringW`.|
|[ATL_URL_PORT](../atl/reference/atl-typedefs.md#atl_url_port)|Il tipo usato dal [CUrl](../atl/reference/curl-class.md) per specificare un numero di porta.|

### <a name="enums"></a>Enumerazioni

|||
|-|-|
|[ATL_URL_SCHEME](../atl/reference/atl-url-scheme-enum.md)|I membri di questa enumerazione forniscono costanti per gli schemi comprensibile [CUrl](../atl/reference/curl-class.md).|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[AtlCanonicalizeUrl](../atl/reference/atl-http-utility-functions.md#atlcanonicalizeurl)|Chiamare questa funzione per convertire in formato canonico un URL, inclusa la conversione dei caratteri e degli spazi non sicuri nelle sequenze di escape.|
|[AtlCombineUrl](../atl/reference/atl-http-utility-functions.md#atlcombineurl)|Chiamare questa funzione per combinare un URL di base e un URL relativo all'interno di un singolo URL canonico.|
|[AtlEscapeUrl](../atl/reference/atl-http-utility-functions.md#atlescapeurl)|Chiamare questa funzione per convertire tutti i caratteri non sicuri in sequenze di escape.|
|[AtlGetDefaultUrlPort](../atl/reference/atl-http-utility-functions.md#atlgetdefaulturlport)|Chiamare questa funzione per ottenere il numero di porta predefinito associato a uno schema o protocollo internet specifico.|
|[AtlHexValue](../atl/reference/atl-text-encoding-functions.md#atlhexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.|
|[AtlIsUnsafeUrlChar](../atl/reference/atl-http-utility-functions.md#atlisunsafeurlchar)|Chiamare questa funzione per verificare se un carattere può essere utilizzato in sicurezza in un URL.|
|[AtlUnescapeUrl](../atl/reference/atl-http-utility-functions.md#atlunescapeurl)|Chiamare questa funzione per convertire i caratteri di escape nei relativi valori originali.|
|[SystemTimeToHttpDate](../atl/reference/atl-http-utility-functions.md#systemtimetohttpdate)|Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.|

|[ATLPath::AddBackslash](../atl/reference/atl-path-functions.md#addbackslash)| Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha
). | |[ ATLPath::AddExtension](../atl/reference/atl-path-functions.md#addextension)| Questa funzione è un wrapper di overload per [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona). | |[ ATLPath::Append](../atl/reference/atl-path-functions.md#append)| Questa funzione è un wrapper di overload per [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda). | |[ ATLPath::BuildRoot](../atl/reference/atl-path-functions.md#buildroot)| Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota). | |[ ATLPath::Canonicalize](../atl/reference/atl-path-functions.md#canonicalize)| Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea). | |[ ATLPath::Combine](../atl/reference/atl-path-functions.md#combine)| Questa funzione è un wrapper di overload per [PathCombine](/windows/desktop/api/shlwapi/nf-shlwapi-pathcombinea). | |[ ATLPath::CommonPrefix](../atl/reference/atl-path-functions.md#commonprefix)| Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa). | |[ ATLPath::CompactPath](../atl/reference/atl-path-functions.md#compactpath)| Questa funzione è un wrapper di overload per [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha). | |[ ATLPath::CompactPathEx](../atl/reference/atl-path-functions.md#compactpathex)| Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa). | |[ ATLPath::FileExists](../atl/reference/atl-path-functions.md#fileexists)| Questa funzione è un wrapper di overload per [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa). | |[ ATLPath::FindExtension](../atl/reference/atl-path-functions.md#findextension)| Questa funzione è un wrapper di overload per [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona). | |[ ATLPath::FindFileName](../atl/reference/atl-path-functions.md#findfilename)| Questa funzione è un wrapper di overload per [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea). | |[ ATLPath::GetDriveNumber](../atl/reference/atl-path-functions.md#getdrivenumber)| Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera). | |[ ATLPath::IsDirectory](../atl/reference/atl-path-functions.md#isdirectory)| Questa funzione è un wrapper di overload per [PathIsDirectory](/windows/desktop/api/shlwapi/nf-shlwapi-pathisdirectorya). | |[ ATLPath::IsFileSpec](../atl/reference/atl-path-functions.md#isfilespec)| Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca). | |[ ATLPath::IsPrefix](../atl/reference/atl-path-functions.md#isprefix)| Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa). | |[ ATLPath::IsRelative](../atl/reference/atl-path-functions.md#isrelative)| Questa funzione è un wrapper di overload per [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea). | |[ ATLPath::IsRoot](../atl/reference/atl-path-functions.md#isroot)| Questa funzione è un wrapper di overload per [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota). | |[ ATLPath::IsSameRoot](../atl/reference/atl-path-functions.md#issameroot)| Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota). | |[ ATLPath::IsUNC](../atl/reference/atl-path-functions.md#isunc)| Questa funzione è un wrapper di overload per [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca). | |[ ATLPath::IsUNCServer](../atl/reference/atl-path-functions.md#isuncserver)| Questa funzione è un wrapper di overload per [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera). | |[ ATLPath::IsUNCServerShare](../atl/reference/atl-path-functions.md#isuncservershare)| Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea).| |[ATLPath::MakePretty](../atl/reference/atl-path-functions.md#makepretty)|This function is an overloaded wrapper for [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya).| |[ATLPath::MatchSpec](../atl/reference/atl-path-functions.md#matchspec)|This function is an overloaded wrapper for [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca).| |[ATLPath::QuoteSpaces](../atl/reference/atl-path-functions.md#quotespaces)|This function is an overloaded wrapper for [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa).| |[ATLPath::RelativePathTo](../atl/reference/atl-path-functions.md#relativepathto)|This function is an overloaded wrapper for [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa).| |[ATLPath::RemoveArgs](../atl/reference/atl-path-functions.md#removeargs)|This function is an overloaded wrapper for [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa).| |[ATLPath::RemoveBackslash](../atl/reference/atl-path-functions.md#removebackslash)|This function is an overloaded wrapper for [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha).| |[ATLPath::RemoveBlanks](../atl/reference/atl-path-functions.md#removeblanks)|This function is an overloaded wrapper for [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa).| |[ATLPath::RemoveExtension](../atl/reference/atl-path-functions.md#removeextension)|This function is an overloaded wrapper for [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona).| |[ATLPath::RemoveFileSpec](../atl/reference/atl-path-functions.md#removefilespec)|This function is an overloaded wrapper for [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca).| |[ATLPath::RenameExtension](../atl/reference/atl-path-functions.md#renameextension)|This function is an overloaded wrapper for [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona).| |[ATLPath::SkipRoot](../atl/reference/atl-path-functions.md#skiproot)|This function is an overloaded wrapper for [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota).| |[ATLPath::StripPath](../atl/reference/atl-path-functions.md#strippath)|This function is an overloaded wrapper for [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha).| |[ATLPath::StripToRoot](../atl/reference/atl-path-functions.md#striptoroot)|This function is an overloaded wrapper for [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota).| |[ATLPath::UnquoteSpaces](../atl/reference/atl-path-functions.md#unquotespaces)|This function is an overloaded wrapper for [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa).|

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../atl/atl-com-desktop-components.md)
