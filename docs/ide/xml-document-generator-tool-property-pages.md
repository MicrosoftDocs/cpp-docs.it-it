---
title: "Pagina delle propriet&#224; dello strumento generatore di documenti XML | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCXDCMakeTool.ValidateIntelliSense"
  - "VC.Project.VCXDCMakeTool.SuppressStartupBanner"
  - "VC.Project.VCXDCMakeTool.DocumentLibraryDependencies"
  - "VC.Project.VCXDCMakeTool.OutputDocumentFile"
  - "VC.Project.VCXDCMakeTool.AdditionalDocumentFiles"
dev_langs: 
  - "C++"
ms.assetid: 645912b5-197a-4c36-ba58-64df09444ca0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Pagina delle propriet&#224; dello strumento generatore di documenti XML
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La pagina delle proprietà dello strumento generatore di documenti XML espone la funzionalità di xdcmake.exe.  xdcmake.exe unisce i file .xdc in un file .xml quando il codice sorgente contiene commenti relativi alla documentazione e viene specificato [\/doc \(elaborazione dei commenti per la documentazione\)](../build/reference/doc-process-documentation-comments-c-cpp.md).  Per informazioni sull'aggiunta al codice sorgente di commenti sulla documentazione, vedere [Tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md).  
  
> [!NOTE]
>  Le opzioni di xdcmake.exe nell'ambiente di sviluppo \(pagine delle proprietà\) sono diverse dalle opzioni esistenti in caso di utilizzo di xdcmake.exe nella riga di comando.  Per informazioni sull'utilizzo di xdcmake.exe nella riga di comando, vedere [Riferimento a XDCMake](../ide/xdcmake-reference.md).  
  
## Elenco UIElement  
 **Non visualizzare messaggio di avvio**  
 Non visualizza le informazioni sul copyright.  
  
 **File di documentazione aggiuntivi**  
 Directory aggiuntive in cui si desidera che venga eseguita la ricerca dei file .xdc.  xdcmake cercherà sempre file .xdc generati dal progetto.  È possibile specificare più directory.  
  
 **File di documento di output**  
 Nome e percorso della directory del file di output xml.  Per informazioni sull'utilizzo di macro per specificare i percorsi delle directory, vedere [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).  
  
 **Dipendenze raccolte documenti**  
 Se il progetto contiene una dipendenza da un progetto lib all'interno della soluzione, è possibile elaborare i file xdc dal progetto lib nei file xml per il progetto corrente.  
  
## Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)   
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)