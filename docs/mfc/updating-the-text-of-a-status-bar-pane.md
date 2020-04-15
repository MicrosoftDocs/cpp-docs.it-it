---
title: Aggiornamento del testo di un riquadro barra di stato
ms.date: 11/04/2016
helpviewer_keywords:
- updating user interface objects [MFC]
- ON_UPDATE_COMMAND_UI macro [MFC]
- user interface objects [MFC], updating
- text, status bar
- CStatusBar class [MFC], updating
- SetText method [MFC]
- panes, status bar
- status bars [MFC], updating
ms.assetid: 4984a3f4-9905-4d8c-a927-dca19781053b
ms.openlocfilehash: 723046fc1721cc46608e00f19a4431ef081be13d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366685"
---
# <a name="updating-the-text-of-a-status-bar-pane"></a>Aggiornamento del testo di un riquadro barra di stato

In questo articolo viene illustrato come modificare il testo visualizzato in un riquadro della barra di stato MFC. Una barra di stato, ovvero un oggetto finestra della classe [CStatusBar,](../mfc/reference/cstatusbar-class.md) contiene diversi "riquadri". Ogni riquadro è un'area rettangolare della barra di stato che è possibile utilizzare per visualizzare le informazioni. Ad esempio, molte applicazioni visualizzano lo stato dei tasti BLOC MAIUSC, BLOC NUM e altri tasti nei riquadri più a destra. Le applicazioni spesso visualizzano testo informativo nel riquadro all'estrema sinistra (riquadro 0), talvolta denominato "riquadro dei messaggi". Ad esempio, la barra di stato MFC predefinita utilizza il riquadro dei messaggi per visualizzare una stringa che spiega la voce di menu attualmente selezionata o il pulsante della barra degli strumenti. Figura in barre di [stato](../mfc/status-bar-implementation-in-mfc.md) Mostra una barra di stato da un'applicazione MFC creata dalla creazione guidata applicazione.

Per impostazione predefinita, `CStatusBar` MFC non attiva un riquadro quando crea il riquadro. Per attivare un riquadro, è necessario utilizzare la macro ON_UPDATE_COMMAND_UI per ogni riquadro sulla barra di stato e aggiornare i riquadri. Poiché i riquadri non inviano messaggi WM_COMMAND (non sono come i pulsanti della barra degli strumenti), è necessario digitare il codice manualmente.

Si supponga, ad `ID_INDICATOR_PAGE` esempio, che un riquadro abbia come identificatore di comando e che contenga il numero di pagina corrente in un documento. Nella procedura seguente viene descritto come creare un nuovo riquadro nella barra di stato.

### <a name="to-make-a-new-pane"></a>Per creare un nuovo riquadro

1. Definire l'ID di comando del riquadro.

   Scegliere **Visualizzazione risorse**dal menu **Visualizza** . Fare clic con il pulsante destro del mouse sulla risorsa progetto e scegliere **Simboli risorsa**. Nella finestra di dialogo `New`Simboli risorsa fare clic su . Digitare un nome ID `ID_INDICATOR_PAGE`di comando, ad esempio . Specificare un valore per l'ID o accettare il valore suggerito dalla finestra di dialogo Simboli risorsa. Ad esempio, `ID_INDICATOR_PAGE`per , accettare il valore predefinito. Chiudere la finestra di dialogo Simboli risorsa.

1. Definire una stringa predefinita da visualizzare nel riquadro.

   Con Visualizzazione risorse aperta, fare doppio clic su **Tabella stringhe** nella finestra in cui sono elencati i tipi di risorse per l'applicazione. Con l'editor **Tabella stringhe** aperto, scegliere **Nuova stringa** dal menu **Inserisci.** Selezionare l'ID di comando `ID_INDICATOR_PAGE`del riquadro (ad esempio, ) e digitare un valore stringa predefinito, ad esempio "Pagina". Chiudere l'editor di stringhe. Per evitare un errore del compilatore, è necessaria una stringa predefinita.

1. Aggiungere il riquadro all'array *di indicatori.*

   Nel file MAINFRM. CPP, individuare l'array di *indicatori.* Questa matrice elenca gli ID di comando per tutti gli indicatori della barra di stato, in ordine da sinistra a destra. Nel punto appropriato della matrice, immettere l'ID di `ID_INDICATOR_PAGE`comando del riquadro, come illustrato di seguito per:

   [!code-cpp[NVC_MFCDocView#10](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_1.cpp)]

Il modo consigliato per visualizzare il testo `SetText` in un `CCmdUI` riquadro consiste nel chiamare la funzione membro della classe in una funzione del gestore di aggiornamento per il riquadro. Ad esempio, è possibile impostare una variabile intera *m_nPage* contenente `SetText` il numero di pagina corrente e utilizzare per impostare il testo del riquadro su una versione stringa di tale numero.

> [!NOTE]
> L'approccio `SetText` è consigliato. È possibile eseguire questa attività a un livello `CStatusBar` leggermente inferiore chiamando la funzione `SetPaneText`membro . Anche così, è ancora necessario un gestore di aggiornamento. Senza tale gestore per il riquadro, MFC disabilita automaticamente il riquadro, cancellandone il contenuto.

Nella procedura seguente viene illustrato come utilizzare una funzione del gestore di aggiornamento per visualizzare il testo in un riquadro.

#### <a name="to-make-a-pane-display-text"></a>Per visualizzare il testo in un riquadro

1. Aggiungere un gestore di aggiornamento del comando per il comando.

   Aggiungere manualmente un prototipo per il `ID_INDICATOR_PAGE` gestore, come illustrato di seguito per (in MAINFRM. H):

   [!code-cpp[NVC_MFCDocView#11](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_2.h)]

1. Nell'appropriato . CPP, aggiungere la definizione del gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. CPP):

   [!code-cpp[NVC_MFCDocView#12](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_3.cpp)]

   Le ultime tre righe di questo gestore sono il codice che visualizza il testo.

1. Nella mappa messaggi appropriata, aggiungere la macro `ID_INDICATOR_PAGE` ON_UPDATE_COMMAND_UI, come illustrato di seguito per (in MAINFRM. CPP):

   [!code-cpp[NVC_MFCDocView#13](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_4.cpp)]

Una volta definito il *m_nPage* valore della variabile `CMainFrame`membro m_nPage (di classe ), questa tecnica determina la visualizzazione del numero di pagina nel riquadro durante l'elaborazione inattiva nello stesso modo in cui l'applicazione aggiorna altri indicatori. Se *m_nPage* cambia, la visualizzazione cambia durante il ciclo di inattività successivo.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Aggiornamento degli oggetti dell'interfaccia utente (come aggiornare i pulsanti della barra degli strumenti e le voci di menu al variare delle condizioni del programma)](../mfc/how-to-update-user-interface-objects.md)

## <a name="see-also"></a>Vedere anche

[Implementazione della barra di stato in MFC](../mfc/status-bar-implementation-in-mfc.md)<br/>
[Classe CStatusBar](../mfc/reference/cstatusbar-class.md)
