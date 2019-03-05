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
ms.openlocfilehash: baf5013e34f262dd3bfed82941697ab9ca21e637
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57280199"
---
# <a name="updating-the-text-of-a-status-bar-pane"></a>Aggiornamento del testo di un riquadro barra di stato

Questo articolo illustra come modificare il testo visualizzato in un riquadro barra di stato MFC. Una barra di stato, ovvero un oggetto finestra della classe [CStatusBar](../mfc/reference/cstatusbar-class.md) — contiene vari "riquadri". Ogni riquadro è un'area rettangolare della barra di stato che è possibile usare per visualizzare le informazioni. Molte applicazioni, ad esempio, visualizzare lo stato del BLOC MAIUSC, BLOC NUM e altre chiavi nei riquadri a destra. Le applicazioni spesso visualizzare testo informativo nel riquadro più a sinistra (riquadro 0), talvolta chiamato "messaggio riquadro". Ad esempio, la barra di stato MFC predefinito Usa il riquadro del messaggio per visualizzare una stringa che spiega il menu di scelta attualmente selezionata o il pulsante. La figura nel [barre di stato](../mfc/status-bar-implementation-in-mfc.md) Mostra una barra di stato da un'applicazione di creazione guidata applicazione MFC.

Per impostazione predefinita, MFC non abilita una `CStatusBar` riquadro quando viene creato il riquadro. Per attivare un riquadro, è necessario usare la macro ON_UPDATE_COMMAND_UI per ogni riquadro sulla barra di stato e aggiornare i riquadri. Poiché i riquadri non inviano i messaggi WM_COMMAND (non sono come i pulsanti della barra degli strumenti), è necessario digitare manualmente il codice.

Ad esempio, si supponga che dispone di un riquadro `ID_INDICATOR_PAGE` come l'identificatore di comando e che contiene il numero di pagina corrente in un documento. La procedura seguente descrive come creare un nuovo riquadro nella barra di stato.

### <a name="to-make-a-new-pane"></a>Per creare un nuovo riquadro

1. Definire l'ID del comando. del riquadro

   Nel **View** menu, fare clic su **visualizzazione risorse**. Fare doppio clic la risorsa del progetto e fare clic su **simboli risorsa**. Nella finestra di dialogo Simboli risorsa, fare clic su `New`. Digitare un nome di ID comando: ad esempio, `ID_INDICATOR_PAGE`. Specificare un valore per l'ID oppure accettare il valore suggerito dalla finestra di dialogo Simboli risorsa. Ad esempio, per `ID_INDICATOR_PAGE`, accettare il valore predefinito. Chiudere la finestra di dialogo Simboli risorsa.

1. Definire una stringa predefinita da visualizzare nel riquadro.

   Con la visualizzazione di risorse è aperta, fare doppio clic su **tabella di stringhe** nella finestra che elenca i tipi di risorsa per l'applicazione. Con il **tabella di stringhe** editor aperto, scegliere **nuova stringa** dal **Inserisci** menu. Nella finestra proprietà di stringa, selezionare l'ID di comando del riquadro (ad esempio, `ID_INDICATOR_PAGE`) e digitare un valore di stringa predefinito, ad esempio "Page". Chiudere l'editor di stringa. (Necessaria una stringa predefinita per evitare un errore del compilatore.)

1. Aggiungere il riquadro per il *indicatori* matrice.

   Nel file MAINFRM. CPP, individuare il *indicatori* matrice. Questa matrice vengono elencati gli ID comando per tutti gli indicatori della barra di stato, in ordine da sinistra a destra. Nel punto appropriato nella matrice, immettere l'ID di comando del riquadro, come illustrato di seguito per `ID_INDICATOR_PAGE`:

   [!code-cpp[NVC_MFCDocView#10](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_1.cpp)]

Il metodo consigliato per visualizzare il testo in un riquadro consiste nel chiamare il `SetText` funzione membro di classe `CCmdUI` in una funzione del gestore di aggiornamento per il riquadro. Potrebbe ad esempio, si desidera impostare una variabile integer *m_nPage* che contiene il numero di pagina corrente e l'uso `SetText` per impostare il testo del riquadro a una versione di stringa di tale numero.

> [!NOTE]
>  Il `SetText` approccio è consigliato. È possibile eseguire questa attività a un livello leggermente più bassa chiamando il `CStatusBar` funzione membro `SetPaneText`. Anche in questo caso, è comunque necessario un gestore di aggiornamento. Senza un gestore di questo tipo per il riquadro, MFC disabilita automaticamente il riquadro, cancellare il contenuto.

La procedura seguente viene illustrato come utilizzare una funzione del gestore di aggiornamento per visualizzare il testo in un riquadro.

#### <a name="to-make-a-pane-display-text"></a>Per rendere un riquadro di visualizzazione testo

1. Aggiungere un gestore di aggiornamento di comando per il comando.

   Aggiungere manualmente un prototipo per il gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. H):

   [!code-cpp[NVC_MFCDocView#11](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_2.h)]

1. In appropriato. CPP file, aggiungere la definizione del gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. CPP):

   [!code-cpp[NVC_MFCDocView#12](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_3.cpp)]

   Le ultime tre righe di questo gestore di sono il codice che visualizza il testo.

1. Nella mappa messaggi appropriata, aggiungere la macro ON_UPDATE_COMMAND_UI, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. CPP):

   [!code-cpp[NVC_MFCDocView#13](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_4.cpp)]

Dopo aver definito il valore della *m_nPage* variabile membro (della classe `CMainFrame`), questa tecnica fa sì che il numero di pagina vengano visualizzati nel riquadro durante l'elaborazione inattiva in modo che l'applicazione aggiorna altri indicatori. Se *m_nPage* le modifiche, la visualizzazione viene modificata durante il successivo ciclo inattivo.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Aggiornamento di oggetti dell'interfaccia utente (come aggiornare i pulsanti della barra degli strumenti e voci di menu come cambiano le condizioni di programma)](../mfc/how-to-update-user-interface-objects.md)

## <a name="see-also"></a>Vedere anche

[Implementazione della barra di stato in MFC](../mfc/status-bar-implementation-in-mfc.md)<br/>
[Classe CStatusBar](../mfc/reference/cstatusbar-class.md)
