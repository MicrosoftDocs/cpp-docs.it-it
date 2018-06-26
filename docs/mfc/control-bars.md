---
title: Barre di controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- command bars [MFC], types of
- toolbars [MFC], control bars
- control bars [MFC]
- MFC, control bars
- control bars [MFC], types of
- CDialogBar class [MFC], control bars
- status bars [MFC], control bars
- CControlBar class [MFC], MFC control bars
- dialog bars [MFC], control bars
- CToolBar class [MFC], control bars
- CStatusBar class [MFC], control bars
ms.assetid: 31831910-3d23-4d70-9e71-03cc02f01ec4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 179e959ce4d6a516f51576712e50408ef41d5c7e
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931791"
---
# <a name="control-bars"></a>Barre di controllo
"Barra di controllo" è un nome generico che indica le barre degli strumenti, le barre di stato e le barre della finestra di dialogo. Classi MFC `CToolBar`, `CStatusBar`, `CDialogBar`, `COleResizeBar`, e `CReBar` deriva dalla classe [CControlBar](../mfc/reference/ccontrolbar-class.md), che implementa le funzionalità comuni.  
  
 Le barre di controllo sono finestre che visualizzano righe di controlli con cui gli utenti possono selezionare le opzioni, eseguire i comandi oppure ottenere le informazioni sul programma. Le barre di controllo possono essere di tipo barra degli strumenti, barra della finestra di dialogo e barra di stato.  
  
-   Barre degli strumenti, nella classe [CToolBar](../mfc/reference/ctoolbar-class.md)  
  
-   Barre di stato, nella classe [CStatusBar](../mfc/reference/cstatusbar-class.md)  
  
-   Barre di finestra di dialogo, nella classe [CDialogBar](../mfc/reference/cdialogbar-class.md)  
  
-   Rebar, nella classe [CReBar](../mfc/reference/crebar-class.md)  
  
> [!IMPORTANT]
>  A partire da MFC versione 4.0, barre degli strumenti, barre di stato e dello strumento suggerimenti vengono implementati utilizzando la funzionalità di sistema implementata nel *comctl32.dll* anziché l'implementazione precedente specifica di MFC. Nella versione 6.0 di MFC `CReBar`, che include anche funzionalità di comctl32.dll è stato aggiunto.  
  
 Di seguito una breve introduzione ai tipi di barre di controllo. Per ulteriori informazioni, vedere i collegamenti di seguito.  
  
## <a name="control-bars"></a>Barre di controllo  
 Le barre di controllo migliorano notevolmente l'usabilità di un programma fornendo azioni di comando rapide, che richiedono un solo passaggio. La classe `CControlBar` fornisce le funzionalità comuni a tutte le barre degli strumenti, barre di stato e barre della finestra di dialogo. `CControlBar` fornisce la funzionalità per il posizionamento delle barre di controllo nella relativa finestra cornice padre. Poiché una barra di controllo è solitamente una finestra figlio di una finestra cornice padre, è un elemento di pari livello alla visualizzazione client o al client MDI della finestra cornice. Un oggetto barra di controllo utilizza le sue informazioni sul rettangolo client della finestra padre per posizionarsi. Quindi modifica il rettangolo della finestra client rimanente del padre in modo che la visualizzazione client o la finestra MDI client riempia il resto della finestra client.  
  
> [!NOTE]
>  Se un pulsante sulla barra di controllo non dispone di un **comando** oppure **UPDATE_COMMAND_UI** gestore, il framework disabilita il pulsante automaticamente.  
  
## <a name="toolbars"></a>Barre degli strumenti  
 Una barra degli strumenti è una barra di controllo che include una riga di pulsanti bitmap che eseguono i comandi. Premere un pulsante della barra degli strumenti equivale a selezionare una voce di menu; chiama lo stesso gestore mappato a una voce di menu se la voce di menu ha lo stesso ID del pulsante della barra degli strumenti. È possibile configurare i pulsanti in modo che appaiano e si comportino come pulsanti di comando, pulsanti di opzione o caselle di controllo. Una barra degli strumenti in genere è allineata al lato superiore di una finestra cornice, ma una barra degli strumenti MFC può essere "ancorata" a qualsiasi lato della finestra padre o essere spostata in una finestra con mini-cornice. Anche una barra degli strumenti può essere mobile ed è possibile modificarne le dimensioni e trascinarla con il mouse. Una barra degli strumenti può anche visualizzare le descrizioni comandi quando l'utente posiziona il mouse sui pulsanti della barra degli strumenti. Una descrizione comandi è una piccola finestra popup che fornisce una breve descrizione riguardante lo scopo del pulsante.  
  
> [!NOTE]
>  A partire dalla versione 4.0 di MFC, classe [CToolBar](../mfc/reference/ctoolbar-class.md) utilizza il controllo comune barra degli strumenti di Windows. Un `CToolBar` contiene una [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md). Le barre degli strumenti precedenti sono ancora supportate. Vedere l'articolo [barre degli strumenti](../mfc/mfc-toolbar-implementation.md).  
  
## <a name="status-bars"></a>Barre di stato  
 Una barra di stato è una barra di controllo contenente riquadri di output di testo o "indicatori". I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Gli esempi di riga di messaggio includono le righe di messaggio della Guida che illustrano brevemente il menu selezionato o il comando della barra degli strumenti nel riquadro all'estrema sinistra nella barra di stato predefinita creata dalla Creazione guidata applicazione MFC. Alcuni esempi di indicatore di stato includono BLOCC SCORR, BLOC NUM e altri tasti. Le barre di stato sono in genere allineate al lato inferiore di una finestra cornice. Vedere la classe [CStatusBar](../mfc/reference/cstatusbar-class.md) e la classe [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md).  
  
## <a name="dialog-bars"></a>Barra di finestra di dialogo  
 Una barra della finestra di dialogo è una barra di controllo, basata su una risorsa modello di finestra di dialogo, con la funzionalità di una finestra di dialogo non modale. Le barre di finestra di dialogo possono contenere controlli Windows, personalizzati o ActiveX. Come in una finestra di dialogo, l'utente può spostarsi tra i controlli. Le barre di finestra di dialogo possono essere allineate al lato superiore, inferiore, sinistro o destro di una finestra cornice e possono anche essere spostate nella propria finestra cornice. Vedere la classe [CDialogBar](../mfc/reference/cdialogbar-class.md).  
  
## <a name="rebars"></a>Rebar  
 Un [rebar](../mfc/using-crebarctrl.md) è una barra di controllo che fornisce informazioni di ancoraggio, layout, stato e la persistenza per i controlli rebar. Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. Un oggetto rebar può visualizzare le finestre figlio proprie su una bitmap specificata. Può essere ridimensionato automaticamente o manualmente facendo clic sulla relativa barra verticale di ridimensionamento o trascinandola. Vedere la classe [CReBar](../mfc/reference/crebar-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
