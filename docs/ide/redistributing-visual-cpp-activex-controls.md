---
title: "Ridistribuzione di controlli ActiveX di Visual C++ | Microsoft Docs"
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
helpviewer_keywords: 
  - "controlli [C++], distribuzione"
  - "controlli [C++], ridistribuzione"
ms.assetid: eefbb7e4-d28c-4c35-98bf-d9540cfaae83
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Ridistribuzione di controlli ActiveX di Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ 6.0 offre controlli ActiveX che è possibile utilizzare in applicazioni destinate alla distribuzione.  Questi controlli non sono più inclusi in Visual C\+\+.  In base alle Condizioni di licenza di Visual C\+\+ 6.0, è possibile ridistribuire questi controlli con le applicazioni sviluppate in Visual C\+\+.  
  
> [!NOTE]
>  Visual C\+\+ 6.0 non è più supportato da Microsoft.  
  
 Per un elenco di controlli ActiveX di Visual C\+\+ 6.0 ridistribuibili, vedere il file Common\\Redist\\Redist.txt nel disco 1 del CD del prodotto Visual C\+\+ 6.0.  
  
 Quando si distribuiscono applicazioni, è necessario installare e registrare il file OCX per il controllo ActiveX \(mediante Regsvr32.exe\).   È inoltre necessario assicurarsi che nel computer di destinazione siano disponibili le versioni correnti dei seguenti file di sistema \(l'asterisco indica i file che è necessario registrare\):  
  
-   Asycfilt.dll  
  
-   Comcat.dll \*  
  
-   Oleaut32.dll \*  
  
-   Olepro32.dll \*  
  
-   Stdole2.tlb  
  
 Se queste DLL non sono disponibili nel sistema di destinazione, sarà necessario aggiornarle tramite il meccanismo stabilito per l'aggiornamento del sistema operativo corrispondente.  I Service Pack più recenti per i sistemi operativi Windows sono disponibili per il download all'indirizzo [http:\/\/www.update.microsoft.com\/microsoftupdate\/v6\/vistadefault.aspx?ln\=it\-it](http://www.update.microsoft.com/microsoftupdate/v6/vistadefault.aspx?ln=it-it).  
  
 Se l'applicazione utilizza uno dei controlli ActiveX che stabilisce una connessione a un database, sarà necessario che nel sistema di destinazione sia installato MDAC \(Microsoft Data Access Components\).   Per ulteriori informazioni, vedere [Ridistribuzione dei file di supporto del database](../ide/redistributing-database-support-files.md).  
  
 Quando si utilizza un controllo ActiveX che stabilisce una connessione a un database, è necessario anche replicare il nome dell'origine dati nel computer di destinazione.  È possibile eseguire questa operazione a livello di codice con funzioni quali `ConfigDSN`.  
  
 In alcuni controlli ActiveX ridistribuibili sono presenti ulteriori dipendenze.  Per ogni file OCX nella cartella Os\\System del CD del prodotto Visual C\+\+ 6.0 è presente anche un file DEP.  Per ogni file OCX che si desidera ridistribuire, è necessario cercare una o più voci USES nel file DEP corrispondente.  Se un file è incluso nell'elenco, è necessario assicurarsi che tale file sia presente nel computer di destinazione.  È necessario registrare eventuali DLL che supportano direttamente un file OCX.  Per eseguire correttamente Regsvr32.exe, è prima di tutto necessario che nel computer di destinazione siano presenti tutte le DLL caricate in modo statico dal controllo. Se inoltre per una DLL inclusa come dipendenza nell'elenco è presente un file DEP nella cartella Os\\System del CD di Visual C\+\+ 6.0, sarà necessario cercare voci USES anche in tale file DEP.  
  
## Vedere anche  
 [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md)