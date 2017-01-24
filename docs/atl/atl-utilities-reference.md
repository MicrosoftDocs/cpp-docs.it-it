---
title: "Riferimenti sulle utilit&#224; ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
caps.latest.revision: 8
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riferimenti sulle utilit&#224; ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ATL fornisce il codice per modificare i percorsi e gli URL sotto forma [CPathT](../atl/reference/cpatht-class.md) e [ricciolo](../atl/reference/curl-class.md).  Un pool di thread, [CThreadPool](../atl/reference/cthreadpool-class.md), può essere utilizzato nelle applicazioni.  Questo codice può essere trovato in atlpath.h e in atlutil.h.  
  
### Classi  
  
|||  
|-|-|  
|[Classe di CPathT](../atl/reference/cpatht-class.md)|Questa classe rappresenta un percorso.|  
|[Classe di CDebugReportHook](../atl/reference/cdebugreporthook-class.md)|Utilizzare questa classe per inviare i report di debug a una named pipe.|  
|[Classe di CNonStatelessWorker](../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste da un pool di thread e le passa sopra a un oggetto di lavoro che viene creato ed eliminato a ogni richiesta.|  
|[Classe di CNoWorkerThread](../atl/reference/cnoworkerthread-class.md)|Utilizzare questa classe come argomento per il parametro di modello `MonitorClass` le classi cache per disabilitare la gestione dinamica della cache.|  
|[Classe di CThreadPool](../atl/reference/cthreadpool-class.md)|Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.|  
|[Classe di ricciolo](../atl/reference/curl-class.md)|Questa classe rappresenta un URL.  Consente di modificare ogni elemento dell'URL indipendentemente dagli altri se analizza una stringa esistente di URL o compilando una stringa da zero.|  
|[Classe di CWorkerThread](../atl/reference/cworkerthread-class.md)|Questa classe crea un thread di lavoro o utilizza esistente, attende in uno o più gestisce del kernel ed esegue una funzione client specificata quando uno degli handle viene segnalata.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[CPath](../Topic/CPath.md)|Una specializzazione [CPathT](../atl/reference/cpatht-class.md) utilizzando `CString`.|  
|[CPathA](../Topic/CPathA.md)|Una specializzazione [CPathT](../atl/reference/cpatht-class.md) utilizzando `CStringA`.|  
|[CPathW](../Topic/CPathW.md)|Una specializzazione [CPathT](../atl/reference/cpatht-class.md) utilizzando `CStringW`.|  
|[ATL\_URL\_PORT](../Topic/ATL_URL_PORT.md)|Il tipo utilizzato da [ricciolo](../atl/reference/curl-class.md) per specificare un numero di porta.|  
  
### Enumerazioni  
  
|||  
|-|-|  
|[ATL\_URL\_SCHEME](../Topic/ATL_URL_SCHEME.md)|I membri di questa enumerazione sono costanti per le combinazioni comprese da [ricciolo](../atl/reference/curl-class.md).|  
  
### Funzioni  
  
|||  
|-|-|  
|[AtlCanonicalizeUrl](../Topic/AtlCanonicalizeUrl.md)|Chiamare la funzione per rendere canonico un URL, che include convertire i caratteri non sicuri e gli spazi in sequenze di escape.|  
|[AtlCombineUrl](../Topic/AtlCombineUrl.md)|Chiamare la funzione per combinare base URL e un URL relativo in un singolo, URL canonico.|  
|[AtlEscapeUrl](../Topic/AtlEscapeUrl.md)|Chiamare la funzione per convertire tutti i caratteri non sicuri le sequenze di escape.|  
|[AtlGetDefaultUrlPort](../Topic/AtlGetDefaultUrlPort.md)|Chiamare la funzione per ottenere il numero di porta predefinito associato a un Internet Protocol\) o una combinazione specifica.|  
|[AtlHexValue](../Topic/AtlHexValue.md)|Chiamare la funzione per ottenere il valore numerico di una cifra esadecimale.|  
|[AtlIsUnsafeUrlChar](../Topic/AtlIsUnsafeUrlChar.md)|Chiamare la funzione per determinare se un carattere è sicuro da utilizzare in un URL.|  
|[AtlUnescapeUrl](../Topic/AtlUnescapeUrl.md)|Chiamare la funzione per convertire i caratteri di escape ai relativi valori originali.|  
|[SystemTimeToHttpDate](../Topic/SystemTimeToHttpDate.md)|Chiamare la funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.|  
|[ATLPath::AddBackslash](../Topic/ATLPath::AddBackslash.md)|Questa funzione è un wrapper di overload per [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561).|  
|[ATLPath::AddExtension](../Topic/ATLPath::AddExtension.md)|Questa funzione è un wrapper di overload per [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).|  
|[ATLPath::Append](../Topic/ATLPath::Append.md)|Questa funzione è un wrapper di overload per [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).|  
|[ATLPath::BuildRoot](../Topic/ATLPath::BuildRoot.md)|Questa funzione è un wrapper di overload per [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).|  
|[ATLPath::Canonicalize](../Topic/ATLPath::Canonicalize.md)|Questa funzione è un wrapper di overload per [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).|  
|[ATLPath::Combine](../Topic/ATLPath::Combine.md)|Questa funzione è un wrapper di overload per [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).|  
|[ATLPath::CommonPrefix](../Topic/ATLPath::CommonPrefix.md)|Questa funzione è un wrapper di overload per [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).|  
|[ATLPath::CompactPath](../Topic/ATLPath::CompactPath.md)|Questa funzione è un wrapper di overload per [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).|  
|[ATLPath::CompactPathEx](../Topic/ATLPath::CompactPathEx.md)|Questa funzione è un wrapper di overload per [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).|  
|[ATLPath::FileExists](../Topic/ATLPath::FileExists.md)|Questa funzione è un wrapper di overload per [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).|  
|[ATLPath::FindExtension](../Topic/ATLPath::FindExtension.md)|Questa funzione è un wrapper di overload per [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).|  
|[ATLPath::FindFileName](../Topic/ATLPath::FindFileName.md)|Questa funzione è un wrapper di overload per [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).|  
|[ATLPath::GetDriveNumber](../Topic/ATLPath::GetDriveNumber.md)|Questa funzione è un wrapper di overload per [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).|  
|[ATLPath::IsDirectory](../Topic/ATLPath::IsDirectory.md)|Questa funzione è un wrapper di overload per [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).|  
|[ATLPath::IsFileSpec](../Topic/ATLPath::IsFileSpec.md)|Questa funzione è un wrapper di overload per [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).|  
|[ATLPath::IsPrefix](../Topic/ATLPath::IsPrefix.md)|Questa funzione è un wrapper di overload per [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).|  
|[ATLPath::IsRelative](../Topic/ATLPath::IsRelative.md)|Questa funzione è un wrapper di overload per [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).|  
|[ATLPath::IsRoot](../Topic/ATLPath::IsRoot.md)|Questa funzione è un wrapper di overload per [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).|  
|[ATLPath::IsSameRoot](../Topic/ATLPath::IsSameRoot.md)|Questa funzione è un wrapper di overload per [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).|  
|[ATLPath::IsUNC](../Topic/ATLPath::IsUNC.md)|Questa funzione è un wrapper di overload per [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).|  
|[ATLPath::IsUNCServer](../Topic/ATLPath::IsUNCServer.md)|Questa funzione è un wrapper di overload per [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).|  
|[ATLPath::IsUNCServerShare](../Topic/ATLPath::IsUNCServerShare.md)|Questa funzione è un wrapper di overload per [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).|  
|[ATLPath::MakePretty](../Topic/ATLPath::MakePretty.md)|Questa funzione è un wrapper di overload per [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).|  
|[ATLPath::MatchSpec](../Topic/ATLPath::MatchSpec.md)|Questa funzione è un wrapper di overload per [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).|  
|[ATLPath::QuoteSpaces](../Topic/ATLPath::QuoteSpaces.md)|Questa funzione è un wrapper di overload per [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).|  
|[ATLPath::RelativePathTo](../Topic/ATLPath::RelativePathTo.md)|Questa funzione è un wrapper di overload per [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).|  
|[ATLPath::RemoveArgs](../Topic/ATLPath::RemoveArgs.md)|Questa funzione è un wrapper di overload per [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).|  
|[ATLPath::RemoveBackslash](../Topic/ATLPath::RemoveBackslash.md)|Questa funzione è un wrapper di overload per [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).|  
|[ATLPath::RemoveBlanks](../Topic/ATLPath::RemoveBlanks.md)|Questa funzione è un wrapper di overload per [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).|  
|[ATLPath::RemoveExtension](../Topic/ATLPath::RemoveExtension.md)|Questa funzione è un wrapper di overload per [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).|  
|[ATLPath::RemoveFileSpec](../Topic/ATLPath::RemoveFileSpec.md)|Questa funzione è un wrapper di overload per [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).|  
|[ATLPath::RenameExtension](../Topic/ATLPath::RenameExtension.md)|Questa funzione è un wrapper di overload per [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).|  
|[ATLPath::SkipRoot](../Topic/ATLPath::SkipRoot.md)|Questa funzione è un wrapper di overload per [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).|  
|[ATLPath::StripPath](../Topic/ATLPath::StripPath.md)|Questa funzione è un wrapper di overload per [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).|  
|[ATLPath::StripToRoot](../Topic/ATLPath::StripToRoot.md)|Questa funzione è un wrapper di overload per [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).|  
|[ATLPath::UnquoteSpaces](../Topic/ATLPath::UnquoteSpaces.md)|Questa funzione è un wrapper di overload per [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).|  
  
### Macro  
  
|||  
|-|-|  
|[Flag di ATL\_URL](../Topic/ATL_URL%20Flags.md)|Questi flag modificano il comportamento [AtlEscapeUrl](../Topic/AtlEscapeUrl.md) e [AtlCanonicalizeUrl](../Topic/AtlCanonicalizeUrl.md).|  
|[ATL\_WORKER\_THREAD\_WAIT](../Topic/ATL_WORKER_THREAD_WAIT.md)|Questa macro definisce il valore predefinito in millisecondi che [CWorkerThread::Shutdown](../Topic/CWorkerThread::Shutdown.md) attenderà il thread di lavoro per interrompere.|  
|[ATLS\_DEFAULT\_THREADPOOLSHUTDOWNTIMEOUT](../Topic/ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT.md)|Questa macro definisce il orario predefinito in millisecondi che [CThreadPool](../atl/reference/cthreadpool-class.md) attenderà un thread per interrompere.|  
|[ATLS\_DEFAULT\_THREADSPERPROC](../Topic/ATLS_DEFAULT_THREADSPERPROC.md)|Questa macro definisce il numero predefinito dei thread per processore utilizzato da [CThreadPool](../atl/reference/cthreadpool-class.md).|  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../atl/atl-com-desktop-components.md)