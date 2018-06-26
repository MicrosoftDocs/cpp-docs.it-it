---
title: Implementazione della barra degli strumenti MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d21bfa1dcc39e00de852203d05a2eae743b8a2f6
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929232"
---
# <a name="mfc-toolbar-implementation"></a>Implementazione della barra degli strumenti MFC
Una barra degli strumenti è un [barra di controllo](../mfc/control-bars.md) che contiene le immagini bitmap dei controlli. Queste immagini possono avere un comportamento, ad esempio pulsanti, caselle di controllo o pulsanti di opzione. MFC fornisce la classe [CToolbar](../mfc/reference/ctoolbar-class.md) per gestire le barre degli strumenti.  
  
 Se si abilita il, gli utenti delle barre degli strumenti MFC possono ancorarli al bordo di una finestra o "" renderli mobili in un punto qualsiasi all'interno della finestra dell'applicazione. MFC non supporta le barre degli strumenti personalizzabile analoghe a quelle nell'ambiente di sviluppo.  
  
 MFC supporta anche le descrizioni comandi: piccole finestre popup che descrivono lo scopo del pulsante una barra degli strumenti quando si posiziona il puntatore del mouse su di esso. Per impostazione predefinita, quando l'utente preme un pulsante della barra degli strumenti, una stringa di stato viene visualizzato nella barra di stato (se presente). È possibile attivare della barra di aggiornamento per visualizzare la stringa di stato quando il mouse è posizionato su di esso senza tuttavia selezionarlo di stato "entrata da".  
  
> [!NOTE]
>  A partire dalla versione 4.0 di MFC, le barre degli strumenti e le descrizioni vengono implementate usando Windows 95 e versioni successive funzionalità anziché l'implementazione precedente specifica di MFC.  
  
 Per garantire la compatibilità con le versioni precedenti, MFC mantiene la precedente implementazione della barra degli strumenti nella classe `COldToolBar`. La documentazione per le versioni precedenti di MFC descrivono `COldToolBar` sotto `CToolBar`.  
  
 Creare la prima barra degli strumenti nel programma selezionando l'opzione della barra degli strumenti nella creazione guidata applicazione. È inoltre possibile creare altre barre degli strumenti.  
  
 In questo articolo vengono introdotte le seguenti:  
  
-   [Pulsanti della barra degli strumenti](#_core_toolbar_buttons)  
  
-   [Ancoraggio e barre degli strumenti mobili](#_core_docking_and_floating_toolbars)  
  
-   [Barre degli strumenti e le descrizioni comandi](#_core_toolbars_and_tool_tips)  
  
-   [Le classi CToolBar e CToolBarCtrl](#_core_the_ctoolbar_and_ctoolbarctrl_classes)  
  
-   [La bitmap della barra degli strumenti](#_core_the_toolbar_bitmap)  
  
##  <a name="_core_toolbar_buttons"></a> Pulsanti della barra degli strumenti  
 I pulsanti della barra degli strumenti sono analoghi alle voci di un menu. Entrambi i tipi di oggetti dell'interfaccia utente generano comandi, che gestisce il programma fornendo funzioni di gestione. Spesso i pulsanti della barra degli strumenti duplicano la funzionalità dei comandi di menu, fornendo un'interfaccia utente alternative per la stessa funzionalità. Tale funzionalità è disposta semplicemente specificando il pulsante e la voce di menu lo stesso ID.  
  
 È possibile rendere i pulsanti della barra degli strumenti vengono visualizzati e si comportino come pulsanti, caselle di controllo o pulsanti di opzione. Per altre informazioni, vedere la classe [CToolBar](../mfc/reference/ctoolbar-class.md).  
  
##  <a name="_core_docking_and_floating_toolbars"></a> Ancoraggio e barre degli strumenti mobili  
 Una barra degli strumenti MFC può:  
  
-   Soffermarsi lungo il uno lato della relativa finestra padre.  
  
-   Essere trascinato e "ancorata" o collegato, dall'utente a qualsiasi lato o lati della finestra padre specificati.  
  
-   "Resa" o scollegato dalla finestra cornice, nella propria finestra con mini-cornice in modo che l'utente può spostarlo in qualsiasi posizione pratico.  
  
-   Essere ridimensionata mentre è mobile.  
  
 Per altre informazioni, vedere l'articolo [ancoraggio e barre degli strumenti mobile](../mfc/docking-and-floating-toolbars.md).  
  
##  <a name="_core_toolbars_and_tool_tips"></a> Barre degli strumenti e le descrizioni comandi  
 Barre degli strumenti MFC può inoltre essere create per visualizzare "descrizione", ovvero piccole finestre popup contenente una breve descrizione dello scopo del pulsante della barra degli strumenti. Quando l'utente sposta il puntatore del mouse su un pulsante della barra degli strumenti, la finestra di descrizione comandi viene visualizzata per offrire un suggerimento. Per altre informazioni, vedere l'articolo [descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md).  
  
##  <a name="_core_the_ctoolbar_and_ctoolbarctrl_classes"></a> Le classi CToolBar e CToolBarCtrl  
 Gestire le barre degli strumenti dell'applicazione tramite la classe [CToolBar](../mfc/reference/ctoolbar-class.md). A partire da MFC versione 4.0, `CToolBar` è stata reimplementata per usare il controllo comune barra degli strumenti disponibile in Windows 95 o versioni successive e Windows NT versione 3.51 o versioni successive.  
  
 Questo nuove implementazione comporta meno codice MFC per barre degli strumenti, perché rende MFC utilizza il supporto del sistema operativo. Inoltre, sono state migliorate le funzionalità. È possibile utilizzare `CToolBar` funzioni membro per modificare le barre degli strumenti oppure è possano ottenere un riferimento a sottostante [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) e chiamare il relativo membro funzioni per la personalizzazione della barra degli strumenti e funzionalità aggiuntive.  
  
> [!TIP]
>  Se hanno investito molto tempo nell'implementazione di MFC precedenti di `CToolBar`, che il supporto è ancora disponibile. Vedere l'articolo [utilizzando il precedente le barre degli strumenti](../mfc/using-your-old-toolbars.md).  
  
 Vedere anche l'esempio MFC generale [DOCKTOOL](../visual-cpp-samples.md).  
  
##  <a name="_core_the_toolbar_bitmap"></a> La Bitmap della barra degli strumenti  
 Una volta creato, un `CToolBar` oggetto crea l'immagine della barra degli strumenti mediante il caricamento di una singola bitmap contenente un'immagine per ogni pulsante. La creazione guidata applicazione crea un'immagine bitmap della barra degli strumenti standard che è possibile personalizzare con Visual C++ [editor barra degli strumenti](../windows/toolbar-editor.md).  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   [Uso del controllo Toolbar](../mfc/working-with-the-toolbar-control.md)  
  
-   [Uso delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)  
  
-   Il [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classi  
  
## <a name="see-also"></a>Vedere anche  
 [Barre degli strumenti](../mfc/toolbars.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

