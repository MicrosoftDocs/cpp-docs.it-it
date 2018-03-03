---
title: "Riferimenti sulle utilità ATL | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 69f085df8b5dadbd0ba9d20596d37cb6313bb3f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-utilities-reference"></a>Riferimenti sulle utilità ATL
ATL fornisce codice per la modifica dei percorsi e gli URL nel formato [CPathT](../atl/reference/cpatht-class.md) e [CUrl](../atl/reference/curl-class.md). Un pool di thread, [CThreadPool](../atl/reference/cthreadpool-class.md), può essere utilizzato nelle applicazioni. Questo codice è reperibile in atlpath. h e atlutil. h.  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe CPathT](../atl/reference/cpatht-class.md)|Questa classe rappresenta un percorso.|  
|[Classe CDebugReportHook](../atl/reference/cdebugreporthook-class.md)|Utilizzare questa classe per inviare i report di debug a una named pipe.|  
|[Classe CNonStatelessWorker](../atl/reference/cnonstatelessworker-class.md)|Riceve richieste da un pool di thread e li passa un oggetto di lavoro che viene creato ed eliminato in ogni richiesta.|  
|[Classe CNoWorkerThread](../atl/reference/cnoworkerthread-class.md)|Utilizzare questa classe come argomento per il `MonitorClass` parametro di modello per le classi di cache se si desidera disabilitare la manutenzione della cache dinamica.|  
|[Classe CThreadPool](../atl/reference/cthreadpool-class.md)|Questa classe fornisce un pool di thread di lavoro di elaborazione di una coda di elementi di lavoro.|  
|[Classe CUrl](../atl/reference/curl-class.md)|Questa classe rappresenta un URL. Consente di modificare ogni elemento dell'URL indipendentemente dalle altre, se l'analisi di un URL esistente stringa o la creazione di una stringa da zero.|  
|[Classe CWorkerThread](../atl/reference/cworkerthread-class.md)|Questa classe crea un thread di lavoro o utilizza uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione di client specificato quando uno degli handle viene segnalato.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[CPath](../atl/reference/atl-typedefs.md#cpath)|Una specializzazione di [CPathT](../atl/reference/cpatht-class.md) utilizzando `CString`.|  
|[CPathA](../atl/reference/atl-typedefs.md#cpatha)|Una specializzazione di [CPathT](../atl/reference/cpatht-class.md) utilizzando `CStringA`.|  
|[CPathW](../atl/reference/atl-typedefs.md#cpathw)|Una specializzazione di [CPathT](../atl/reference/cpatht-class.md) utilizzando `CStringW`.|  
|[ATL_URL_PORT](../atl/reference/atl-typedefs.md#atl_url_port)|Il tipo utilizzato dal [CUrl](../atl/reference/curl-class.md) per specificare un numero di porta.|  
  
### <a name="enums"></a>Enumerazioni  
  
|||  
|-|-|  
|[ATL_URL_SCHEME](../atl/reference/atl-url-scheme-enum.md)|I membri di questa enumerazione forniscono costanti per gli schemi riconosciuti dal [CUrl](../atl/reference/curl-class.md).|  
  
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

|[ATLPath::AddBackslash](../atl/reference/atl-path-functions.md#addbackslash)| Questa funzione è un wrapper di overload per [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561). |  
|[ATLPath::AddExtension](../atl/reference/atl-path-functions.md#addextension)| Questa funzione è un wrapper di overload per [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563). |  
|[ATLPath::Append](../atl/reference/atl-path-functions.md#append)| Questa funzione è un wrapper di overload per [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565). |  
|[ATLPath::BuildRoot](../atl/reference/atl-path-functions.md#buildroot)| Questa funzione è un wrapper di overload per [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567). |  
|[ATLPath::Canonicalize](../atl/reference/atl-path-functions.md#canonicalize)| Questa funzione è un wrapper di overload per [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569). |  
|[ATLPath::Combine](../atl/reference/atl-path-functions.md#combine)| Questa funzione è un wrapper di overload per [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571). |  
|[ATLPath::CommonPrefix](../atl/reference/atl-path-functions.md#commonprefix)| Questa funzione è un wrapper di overload per [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574). |  
|[ATLPath::CompactPath](../atl/reference/atl-path-functions.md#compactpath)| Questa funzione è un wrapper di overload per [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575). |  
|[ATLPath::CompactPathEx](../atl/reference/atl-path-functions.md#compactpathex)| Questa funzione è un wrapper di overload per [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578). |  
|[ATLPath::FileExists](../atl/reference/atl-path-functions.md#fileexists)| Questa funzione è un wrapper di overload per [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584). |  
|[ATLPath::FindExtension](../atl/reference/atl-path-functions.md#findextension)| Questa funzione è un wrapper di overload per [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587). |  
|[ATLPath::FindFileName](../atl/reference/atl-path-functions.md#findfilename)| Questa funzione è un wrapper di overload per [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589). |  
|[ATLPath::GetDriveNumber](../atl/reference/atl-path-functions.md#getdrivenumber)| Questa funzione è un wrapper di overload per [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612). |  
|[ATLPath::IsDirectory](../atl/reference/atl-path-functions.md#isdirectory)| Questa funzione è un wrapper di overload per [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621). |  
|[ATLPath::IsFileSpec](../atl/reference/atl-path-functions.md#isfilespec)| Questa funzione è un wrapper di overload per [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627). |  
|[ATLPath::IsPrefix](../atl/reference/atl-path-functions.md#isprefix)| Questa funzione è un wrapper di overload per [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650). |  
|[ATLPath::IsRelative](../atl/reference/atl-path-functions.md#isrelative)| Questa funzione è un wrapper di overload per [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660). |  
|[ATLPath::IsRoot](../atl/reference/atl-path-functions.md#isroot)| Questa funzione è un wrapper di overload per [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674). |  
|[ATLPath::IsSameRoot](../atl/reference/atl-path-functions.md#issameroot)| Questa funzione è un wrapper di overload per [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687). |  
|[ATLPath::IsUNC](../atl/reference/atl-path-functions.md#isunc)| Questa funzione è un wrapper di overload per [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712). |  
|[ATLPath::IsUNCServer](../atl/reference/atl-path-functions.md#isuncserver)| Questa funzione è un wrapper di overload per [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722). |  
|[ATLPath::IsUNCServerShare](../atl/reference/atl-path-functions.md#isuncservershare)| Questa funzione è un wrapper di overload per [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723). |  
|[ATLPath::MakePretty](../atl/reference/atl-path-functions.md#makepretty)| Questa funzione è un wrapper di overload per [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725). |  
|[ATLPath::MatchSpec](../atl/reference/atl-path-functions.md#matchspec)| Questa funzione è un wrapper di overload per [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727). |  
|[ATLPath::QuoteSpaces](../atl/reference/atl-path-functions.md#quotespaces)| Questa funzione è un wrapper di overload per [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739). |  
|[ATLPath::RelativePathTo](../atl/reference/atl-path-functions.md#relativepathto)| Questa funzione è un wrapper di overload per [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740). |  
|[ATLPath::RemoveArgs](../atl/reference/atl-path-functions.md#removeargs)| Questa funzione è un wrapper di overload per [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742). |  
|[ATLPath::RemoveBackslash](../atl/reference/atl-path-functions.md#removebackslash)| Questa funzione è un wrapper di overload per [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743). |  
|[ATLPath::RemoveBlanks](../atl/reference/atl-path-functions.md#removeblanks)| Questa funzione è un wrapper di overload per [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745). |  
|[ATLPath::RemoveExtension](../atl/reference/atl-path-functions.md#removeextension)| Questa funzione è un wrapper di overload per [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746). |  
|[ATLPath::RemoveFileSpec](../atl/reference/atl-path-functions.md#removefilespec)| Questa funzione è un wrapper di overload per [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748). |  
|[ATLPath::RenameExtension](../atl/reference/atl-path-functions.md#renameextension)| Questa funzione è un wrapper di overload per [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749). |  
|[ATLPath::SkipRoot](../atl/reference/atl-path-functions.md#skiproot)| Questa funzione è un wrapper di overload per [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754). |  
|[ATLPath::StripPath](../atl/reference/atl-path-functions.md#strippath)| Questa funzione è un wrapper di overload per [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756). |  
|[ATLPath::StripToRoot](../atl/reference/atl-path-functions.md#striptoroot)| Questa funzione è un wrapper di overload per [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757). |  
|[ATLPath::UnquoteSpaces](../atl/reference/atl-path-functions.md#unquotespaces)| Questa funzione è un wrapper di overload per [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763). |  
  

## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Componenti Desktop COM ATL](../atl/atl-com-desktop-components.md)
