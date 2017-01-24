---
title: "Implementazione della barra degli strumenti MFC | Microsoft Docs"
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
  - "bitmap [C++], barra degli strumenti"
  - "pulsanti [C++], barre degli strumenti MFC"
  - "CToolBar (classe), creazione di barre degli strumenti"
  - "CToolBarCtrl (classe), implementazione di barre degli strumenti"
  - "barre degli strumenti ancorabili"
  - "barre degli strumenti mobili"
  - "barre degli strumenti MFC"
  - "descrizioni comandi [C++], abilitazione"
  - "controlli della barra degli strumenti [MFC]"
  - "barre degli strumenti [C++]"
  - "barre degli strumenti [C++], creazione"
  - "barre degli strumenti [C++], ancoraggio"
  - "barre degli strumenti [C++], mobili"
  - "barre degli strumenti [C++], implementazione di barre degli strumenti MFC"
ms.assetid: af3319ad-c430-4f90-8361-e6a2c06fd084
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementazione della barra degli strumenti MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una barra degli strumenti è una [barra di controllo](../mfc/control-bars.md) contenente le immagini bitmap dei controlli.  Queste immagini possono comportarsi come pulsanti, caselle di controllo o pulsanti di opzione.  MFC fornisce la classe [CToolbar](../mfc/reference/ctoolbar-class.md) per gestire le barre degli strumenti.  
  
 Se è abilitata, gli utenti delle barre degli strumenti MFC possono ancorarle al bordo di una finestra o "muoverle" in un punto qualsiasi della finestra dell'applicazione.  MFC non supporta le barre degli strumenti personalizzabili come quelli in questo ambiente di sviluppo.  
  
 MFC supporta inoltre i suggerimenti: finestre popup che descrivono lo scopo di un pulsante della barra degli strumenti quando si posiziona il mouse sopra il pulsante.  Per impostazione predefinita, quando l'utente preme un pulsante della barra degli strumenti, una stringa di stato viene visualizzata nella barra di stato \(se presente\).  È possibile attivare la barra di stato di aggiornamento "fly by" per visualizzare la stringa di stato quando il mouse viene posizionato sul pulsante senza premerlo.  
  
> [!NOTE]
>  A partire dalla versione 4.0 di MFC, le barre degli strumenti e i suggerimenti vengono implementati mediante funzionalità di Windows 95 o successive al posto dell'implementazione precedente specifica di MFC.  
  
 Per la compatibilità con le versioni precedenti, MFC conserva l'implementazione della barra degli strumenti precedente nella classe **COldToolBar**.  La documentazione per le versioni precedenti di MFC descrive **COldToolBar** in `CToolBar`.  
  
 Creare la prima barra degli strumenti nel programma scegliendo la barra degli strumenti nella creazione guidata dell'applicazione.  Inoltre è possibile creare barre degli strumenti aggiuntive.  
  
 Di seguito in questo articolo vengono introdotte:  
  
-   [Pulsanti della barra degli strumenti](#_core_toolbar_buttons)  
  
-   [Barre degli strumenti mobili e ancorate](#_core_docking_and_floating_toolbars)  
  
-   [Barre degli strumenti e descrizioni comandi](#_core_toolbars_and_tool_tips)  
  
-   [Le classi CToolBarCtrl e CToolBar](#_core_the_ctoolbar_and_ctoolbarctrl_classes)  
  
-   [Bitmap della barra degli strumenti](#_core_the_toolbar_bitmap)  
  
##  <a name="_core_toolbar_buttons"></a> Pulsanti delle barre degli strumenti  
 I pulsanti in una barra degli strumenti sono analoghi agli elementi in un menu.  Entrambi i tipi di oggetti dell'interfaccia utente generano comandi che il programma gestisce fornendo funzioni di gestione.  I pulsanti della barra degli strumenti spesso duplicano la funzionalità dei comandi di menu, fornendo un'interfaccia utente alternativa alla stessa funzionalità.  Questa duplicazione viene organizzata semplicemente fornendo al pulsante e alla voce di menu lo stesso ID.  
  
 È possibile rendere i pulsanti di una barra degli strumenti visualizzati e comportarsi come i pulsanti, caselle di controllo oppure pulsanti di opzione.  Per ulteriori informazioni, vedere la classe [CToolBar](../mfc/reference/ctoolbar-class.md).  
  
##  <a name="_core_docking_and_floating_toolbars"></a> Ancoraggio e barre degli strumenti mobili  
 Una barra degli strumenti MFC può:  
  
-   Rimanere stazionaria lungo un lato della finestra padre.  
  
-   Essere trascinata e "ancorata," o collegata dall'utente ad ogni lato o tutti i lati della finestra padre specificata.  
  
-   Essere "mobile", o rimossa dalla finestra cornice, nella sua finestra con mini\-cornice in modo che l'utente possa spostarla intorno a qualsiasi posizione appropriata.  
  
-   Essere ridimensionata in movimento.  
  
 Per ulteriori informazioni, vedere l'articolo [Barre degli strumenti mobili e ancorate](../mfc/docking-and-floating-toolbars.md).  
  
##  <a name="_core_toolbars_and_tool_tips"></a> Barre degli strumenti e descrizioni comandi  
 Le barre degli strumenti MFC possono anche essere utilizzate per visualizzare "descrizioni dei comandi" — finestre popup minuscole che contengono una breve descrizione testuale dello scopo di un pulsante della barra degli strumenti.  Quando l'utente sposta il mouse su un pulsante della barra degli strumenti, la finestra di suggerimento viene mostrata per offrire un aiuto.  Per ulteriori informazioni, vedere l'articolo [Descrizioni dei comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md).  
  
##  <a name="_core_the_ctoolbar_and_ctoolbarctrl_classes"></a> Le classi CToolBarCtrl e CToolBar  
 Gestire le barre degli strumenti dell'applicazione tramite la classe [CToolBar](../mfc/reference/ctoolbar-class.md).  A partire dalla versione 4.0 di MFC, `CToolBar` è stato reimplementato per utilizzare il controllo comune della barra degli strumenti disponibile su Windows 95 o versioni successive e la versione 3.51 di Windows NT o versioni successive.  
  
 Questa reimplementazione traduce in meno codice MFC le barre degli strumenti, perché MFC utilizza il supporto del sistema operativo.  La reimplementazione migliora inoltre la funzionalità.  È possibile utilizzare le funzioni membro `CToolBar` per modificare barre degli strumenti, oppure è possibile ottenere un riferimento all'oggetto sottostante [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) e chiamare le sue funzioni membro per la personalizzazione della barra degli strumenti e per le funzionalità aggiuntive.  
  
> [!TIP]
>  Se si è investito molto nella precedente implementazione MFC di `CToolBar`, tale supporto è ancora disponibile.  Vedere l'articolo [Utilizzare le vecchie barre degli strumenti](../mfc/using-your-old-toolbars.md).  
  
 Vedere anche l'esempio MFC generale [DOCKTOOL](../top/visual-cpp-samples.md).  
  
##  <a name="_core_the_toolbar_bitmap"></a> Bitmap della barra degli strumenti  
 Una volta costruito, un oggetto `CToolBar` determina l'immagine della barra degli strumenti caricando una singola bitmap contenente un'immagine per ciascun pulsante.  La procedura guidata crea una bitmap della barra degli strumenti standard che è possibile personalizzare con l' [Editor della barra degli strumenti](../mfc/toolbar-editor.md) di Visual C\+\+.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Barre degli strumenti mobili e ancorate](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizioni dei comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   [Utilizzo del controllo Toolbar](../mfc/working-with-the-toolbar-control.md)  
  
-   [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)  
  
-   Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
  
## Vedere anche  
 [Barre degli strumenti](../mfc/toolbars.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)