---
title: "File di risorse (C++) | Microsoft Docs"
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
  - "tipi di file [C++], file di risorse"
  - "file di risorse"
  - "risorse [C++]"
ms.assetid: 338a4a0f-0c62-4ef1-a34f-5d86262d93a4
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File di risorse (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le risorse rappresentano elementi di interfaccia che forniscono informazioni all'utente.  Sono considerati risorse le bitmap, le icone, le barre degli strumenti e i cursori.  È possibile modificare alcune risorse in modo da eseguire determinate operazioni come la selezione da un menu o l'immissione di dati in una finestra di dialogo.  
  
 Per ulteriori informazioni, vedere [Utilizzo delle risorse](../mfc/working-with-resource-files.md).  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|---------------|-----------------------|-----------------|  
|*Projname*.rc|*Projname*|File di origine|File di script di risorsa del progetto,  contenente, a seconda del tipo di progetto e del supporto selezionato \(ad esempio barre degli strumenti, finestre di dialogo o HTML\), i seguenti elementi:<br /><br /> -   Definizione di menu predefiniti<br />-   Tabelle di stringhe e tasti di scelta rapida<br />-   Finestra di dialogo **Informazioni su** predefinita.<br />-   Ulteriori finestre di dialogo<br />-   File icona \(res\\*Projname*.ico\)<br />-   Informazioni sulla versione<br />-   Bitmap<br />-   Barra degli strumenti<br />-   File HTML<br /><br /> Il file di risorse include il file Afxres.rc per le risorse MFC standard.|  
|Resource.h|*Projname*|File di intestazione|File di intestazione di risorsa comprendente le definizioni delle risorse utilizzate dal progetto.|  
|*Projname*.rc2|*Projname*\\res|File di origine|File di script contenente risorse aggiuntive utilizzate dal progetto.  È possibile includere il file RC2 all'inizio del file RC del progetto.<br /><br /> Un file RC2 si rivela utile per includere risorse utilizzate da più progetti diversi.  Anziché creare le stesse risorse più volte per i diversi progetti, è possibile inserire tali risorse in un file RC2 e quindi includere quest'ultimo nel file RC principale.|  
|*Projname*.def|*Projname*|File di origine|File di definizione modulo di un progetto DLL.  Per un controllo, fornisce il nome e la descrizione, nonché la dimensione dell'heap di runtime.|  
|*Projname*.ico|*Projname*\\res|File di risorse|File icona per il progetto o il controllo,  visualizzato quando l'applicazione viene ridotta a icona.  L'icona viene inoltre utilizzata nella finestra **Informazioni su** dell'applicazione.  Per impostazione predefinita, MFC e ATL forniscono rispettivamente l'icona MFC e ATL.|  
|*Projname*Doc.ico|*Projname*\\res|File di risorse|File icona per un progetto MFC dotato di supporto per l'architettura documento\/visualizzazione.|  
|Toolbar.bmp|*Projname*\\res|File di risorse|File bitmap che rappresenta l'applicazione o il controllo in una barra degli strumenti o in una tavolozza.  Questa bitmap è inclusa nel file di risorse del progetto.  La barra di stato e la barra degli strumenti iniziali vengono costruite nella classe **CMainFrame**.|  
|ribbon.mfcribbon\-ms|*Projname*\\res|File di risorse|File di risorse contenente il codice XML che definisce i pulsanti, i controlli e gli attributi della barra multifunzione.  Per ulteriori informazioni, vedere [Finestra di progettazione della barra multifunzione \(MFC\)](../mfc/ribbon-designer-mfc.md).|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)