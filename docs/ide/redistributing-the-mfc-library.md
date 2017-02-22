---
title: "Ridistribuzione della libreria MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, ridistribuzione"
  - "ridistribuzione di librerie MFC"
ms.assetid: 72714ce1-385e-4c1c-afa5-96b03e873866
caps.latest.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 29
---
# Ridistribuzione della libreria MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si collega in modo dinamico l'applicazione alla libreria MFC, è necessario ridistribuire Msvcr100.dll perché tutte le DLL MFC utilizzano la versione condivisa della libreria di runtime del linguaggio C \(CRT\).  È inoltre necessario ridistribuire Mfc100u.dll o Mfc100.dll.  
  
 Se si collega in modo statico l'applicazione a MFC, ovvero se si specifica **Usa MFC in una libreria statica** nella scheda **Generale** della finestra di dialogo **Pagine delle proprietà**, non è necessario ridistribuire Mfc100u.dll or Mfc100.dll.  Nonostante funzioni correttamente a scopo di test e distribuzione interna delle applicazioni, questa modalità non è consigliata per la ridistribuzione di MFC.  Per ulteriori informazioni sulle strategie consigliate per la distribuzione di librerie Visual C\+\+, vedere [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
 Se l'applicazione utilizza le classi MFC che implementano il controllo WebBrowser, ad esempio [CHtmlView \(classe\)](../mfc/reference/chtmlview-class.md) o [CHtmlEditView Class](../mfc/reference/chtmleditview-class.md), è consigliabile installare la versione più recente di Microsoft Internet Explorer in modo che il computer di destinazione disponga dei file di controllo comuni più recenti. \(Il requisito minimo è Internet Explorer 4.0.\) Informazioni relative all'installazione dei componenti di Internet Explorer sono disponibili in "Articolo 185375: Come creare una singola installazione EXE di Internet Explorer" sul sito Web del Supporto tecnico Microsoft.  
  
 Se l'applicazione utilizza le classi di database MFC, ad esempio [CRecordset Class](../mfc/reference/crecordset-class.md) e [CRecordView Class](../mfc/reference/crecordview-class.md), è necessario ridistribuire ODBC ed eventuali driver ODBC utilizzati dall'applicazione.  Per ulteriori informazioni, vedere [Ridistribuzione dei file di supporto del database](../ide/redistributing-database-support-files.md).  
  
 Se l'applicazione MFC utilizza controlli Windows Form, è necessario ridistribuire mfcmifc80.dll con l'applicazione.  Questa DLL è un assembly .NET firmato con nome sicuro che può essere ridistribuito con un'applicazione in una cartella locale dell'applicazione stessa o mediante la distribuzione nella Global Assembly Cache \(GAC\) tramite [Gacutil.exe \(Global Assembly Cache Tool\)](../Topic/Gacutil.exe%20\(Global%20Assembly%20Cache%20Tool\).md).  
  
 Se si ridistribuisce una DLL MFC, assicurarsi di ridistribuire la versione finale, non la versione di debug.  Le versioni di debug delle DLL non sono ridistribuibili.  I nome delle versioni di debug delle DLL MFC terminano con una "d", ad esempio Mfc100d.dll.  
  
 Se viene apportata qualsiasi modifica alle origini MFC e viene ricompilata la DLL MFC, è necessario rinominare la DLL MFC in modo da non creare conflitti con la DLL MFC inclusa in Visual Studio.  È consigliabile non ricompilare né rinominare la DLL MFC.  Per ulteriori informazioni, vedere la nota tecnica 33 per MFC.  
  
 È possibile ridistribuire MFC utilizzando VCRedist\_*architecture*.exe, unire i modelli installati con Visual Studio o distribuendo la DLL MFC nella stessa cartella dell'applicazione.  Per ulteriori informazioni su come ridistribuire MFC, vedere [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md).  
  
## Installazione di componenti MFC localizzati  
 Se si desidera di localizzare l'applicazione installando una DLL di localizzazione MFC, è necessario utilizzare i file di unione ridistribuibili \(msm\).  Se, ad esempio, si desidera localizzare l'applicazione in un computer x86, è necessario unire Microsoft\_VC100\_MFCLOC\_x86.msm nel pacchetto di installazione destinato al computer x86.  
  
 I file MSM ridistribuibili contengono le DLL utilizzate per la localizzazione.  È disponibile una DLL per ogni lingua supportata.  Durante il processo di installazione queste DLL vengono installate nella cartella %windir%\\system32&#124; del computer di destinazione.  
  
 Per ulteriori informazioni sulla localizzazione delle applicazioni MFC, consultare [TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md), e [Articolo 208983: Come utilizzare le DLL LOC MFC](http://go.microsoft.com/fwlink/?LinkId=198025) sul sito Web del Supporto tecnico Microsoft.  
  
 È possibile ridistribuire le DLL di localizzazione MFC distribuendo la DLL MFC nella cartella locale dell'applicazione.  Per ulteriori informazioni sulla ridistribuzione di librerie Visual C\+\+, vedere [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md).  
  
## Vedere anche  
 [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md)