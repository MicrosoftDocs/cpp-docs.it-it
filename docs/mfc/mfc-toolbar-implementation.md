---
title: Implementazione della barra degli strumenti MFC | Documenti Microsoft
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
helpviewer_keywords:
- toolbars [MFC], creating
- buttons [MFC], MFC toolbars
- toolbars [MFC], docking
- CToolBar class [MFC], creating toolbars
- MFC toolbars
- floating toolbars [MFC]
- toolbars [MFC], floating
- docking toolbars [MFC]
- bitmaps [MFC], toolbar
- toolbar controls [MFC]
- CToolBarCtrl class [MFC], implementing toolbars
- tool tips [MFC], enabling
- toolbars [MFC]
- toolbars [MFC], implementing MFC toolbars
ms.assetid: af3319ad-c430-4f90-8361-e6a2c06fd084
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 540f3240588b8e6fde119a167eace8103ef58c5a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-toolbar-implementation"></a>Implementazione della barra degli strumenti MFC
Una barra degli strumenti è un [barra di controllo](../mfc/control-bars.md) che contiene le immagini bitmap dei controlli. Queste immagini possono comportarsi come pulsanti, caselle di controllo o pulsanti di opzione. MFC fornisce la classe [CToolbar](../mfc/reference/ctoolbar-class.md) per gestire le barre degli strumenti.  
  
 Viene attivato, gli utenti delle barre degli strumenti MFC possono ancorarli al bordo di una finestra o "" renderli mobili in un punto qualsiasi all'interno della finestra dell'applicazione. MFC non supporta le barre degli strumenti personalizzabile analoghe a quelle nell'ambiente di sviluppo.  
  
 MFC supporta anche le descrizioni comandi: piccole finestre popup che descrivono scopo del pulsante della barra degli strumenti quando si posiziona il puntatore del mouse su di esso. Per impostazione predefinita, quando l'utente preme un pulsante della barra degli strumenti, una stringa di stato viene visualizzato nella barra di stato (se presente). È possibile attivare lo stato "entrata da" della barra di aggiornamento per visualizzare la stringa di stato quando si posiziona il mouse sopra il pulsante senza tuttavia selezionarlo.  
  
> [!NOTE]
>  A partire dalla versione 4.0 di MFC, le barre degli strumenti e le descrizioni comandi vengono implementate utilizzando Windows 95 e versioni successive funzionalità anziché l'implementazione precedente specifica di MFC.  
  
 Per garantire la compatibilità con le versioni precedenti, MFC conserva la precedente implementazione della barra degli strumenti nella classe **COldToolBar**. Vengono descritti la documentazione per le versioni precedenti di MFC **COldToolBar** in `CToolBar`.  
  
 Creare la prima barra degli strumenti nel programma selezionando l'opzione della barra degli strumenti nella creazione guidata applicazione. È inoltre possibile creare barre degli strumenti.  
  
 In questo articolo vengono introdotte le operazioni seguenti:  
  
-   [Pulsanti della barra degli strumenti](#_core_toolbar_buttons)  
  
-   [Ancoraggio e barre degli strumenti mobili](#_core_docking_and_floating_toolbars)  
  
-   [Barre degli strumenti e le descrizioni comandi](#_core_toolbars_and_tool_tips)  
  
-   [Le classi CToolBar e CToolBarCtrl](#_core_the_ctoolbar_and_ctoolbarctrl_classes)  
  
-   [La bitmap della barra degli strumenti](#_core_the_toolbar_bitmap)  
  
##  <a name="_core_toolbar_buttons"></a>Pulsanti della barra degli strumenti  
 I pulsanti della barra degli strumenti sono analoghi agli elementi in un menu. Entrambi i tipi di oggetti dell'interfaccia utente generano comandi, che gestisce il programma fornendo funzioni di gestione. Spesso i pulsanti della barra degli strumenti duplicano la funzionalità dei comandi di menu, fornendo un'interfaccia utente alternative per la stessa funzionalità. Tale funzionalità è disposta semplicemente specificando il pulsante e la voce di menu lo stesso ID.  
  
 È possibile rendere i pulsanti della barra degli strumenti vengono visualizzati e si comportino come pulsanti, caselle di controllo o pulsanti di opzione. Per ulteriori informazioni, vedere la classe [CToolBar](../mfc/reference/ctoolbar-class.md).  
  
##  <a name="_core_docking_and_floating_toolbars"></a>Ancoraggio e barre degli strumenti mobili  
 Una barra degli strumenti MFC può:  
  
-   Soffermarsi un lato della finestra padre.  
  
-   Trascinare e "ancorata" o collegato, l'utente a qualsiasi lato o lati della finestra padre specificati.  
  
-   "Mobile" o scollegato dalla finestra cornice, in una finestra con mini-cornice in modo l'utente può spostarlo in qualsiasi posizione ideale.  
  
-   Essere ridimensionata mentre è mobile.  
  
 Per ulteriori informazioni, vedere l'articolo [ancorate e mobili barre degli strumenti](../mfc/docking-and-floating-toolbars.md).  
  
##  <a name="_core_toolbars_and_tool_tips"></a>Barre degli strumenti e le descrizioni comandi  
 Barre degli strumenti MFC può inoltre essere create per visualizzare "descrizione", ovvero piccole finestre popup contenente una breve descrizione dello scopo del pulsante della barra degli strumenti. Quando l'utente sposta il puntatore del mouse su un pulsante della barra degli strumenti, la descrizione comandi viene visualizzata per offrire un suggerimento. Per ulteriori informazioni, vedere l'articolo [descrizione comandi](../mfc/toolbar-tool-tips.md).  
  
##  <a name="_core_the_ctoolbar_and_ctoolbarctrl_classes"></a>Le classi CToolBar e CToolBarCtrl  
 Per gestire le barre degli strumenti dell'applicazione tramite la classe [CToolBar](../mfc/reference/ctoolbar-class.md). A partire dalla versione 4.0, MFC `CToolBar` è stata reimplementata per usare il controllo comune barra degli strumenti disponibile in Windows 95 o versioni successive e Windows NT versione 3.51 o versioni successive.  
  
 Questo nuove implementazione comporta meno codice MFC per barre degli strumenti, perché rende MFC utilizza il supporto del sistema operativo. Inoltre, sono state migliorate le funzionalità. È possibile utilizzare `CToolBar` funzioni membro per modificare le barre degli strumenti oppure è possano ottenere un riferimento a sottostante [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) e chiamare il relativo membro funzioni per la personalizzazione della barra degli strumenti e funzionalità aggiuntive.  
  
> [!TIP]
>  Se hanno investito molto tempo nell'implementazione di MFC precedenti di `CToolBar`, che il supporto è ancora disponibile. Vedere l'articolo [utilizzando il precedente le barre degli strumenti](../mfc/using-your-old-toolbars.md).  
  
 Vedere anche l'esempio MFC generale [DOCKTOOL](../visual-cpp-samples.md).  
  
##  <a name="_core_the_toolbar_bitmap"></a>La Bitmap della barra degli strumenti  
 Una volta creato, un `CToolBar` oggetto crea l'immagine della barra degli strumenti mediante il caricamento di una singola bitmap contenente un'immagine per ogni pulsante. La creazione guidata applicazione crea un'immagine bitmap della barra degli strumenti standard che è possibile personalizzare con Visual C++ [editor barra degli strumenti](../windows/toolbar-editor.md).  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizione comandi](../mfc/toolbar-tool-tips.md)  
  
-   [Uso del controllo Toolbar](../mfc/working-with-the-toolbar-control.md)  
  
-   [Uso delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)  
  
-   Il [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classi  
  
## <a name="see-also"></a>Vedere anche  
 [Barre degli strumenti](../mfc/toolbars.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

