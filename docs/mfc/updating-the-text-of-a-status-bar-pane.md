---
description: 'Altre informazioni su: aggiornamento del testo di un riquadro Status-Bar'
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
ms.openlocfilehash: 2c3a922072fe117719c1cea803b16ca9c998ce1f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263725"
---
# <a name="updating-the-text-of-a-status-bar-pane"></a>Aggiornamento del testo di un riquadro barra di stato

Questo articolo illustra come modificare il testo visualizzato in un riquadro della barra di stato MFC. Una barra di stato, un oggetto finestra della classe [CStatusBar](../mfc/reference/cstatusbar-class.md) , contiene diversi "riquadri". Ogni riquadro è un'area rettangolare della barra di stato che è possibile utilizzare per visualizzare le informazioni. In molte applicazioni, ad esempio, viene visualizzato lo stato del blocco BLOC MAIUSC, BLOC NUM e altre chiavi nei riquadri più a destra. Le applicazioni spesso visualizzano anche testo informativo nel riquadro a sinistra (riquadro 0), talvolta denominato "riquadro messaggio". La barra di stato MFC predefinita, ad esempio, utilizza il riquadro messaggio per visualizzare una stringa che descrive la voce di menu o il pulsante della barra degli strumenti attualmente selezionato. Nella figura in [barre di stato](../mfc/status-bar-implementation-in-mfc.md) viene visualizzata una barra di stato di un'applicazione MFC creata mediante creazione guidata applicazione.

Per impostazione predefinita, MFC non Abilita un `CStatusBar` riquadro quando crea il riquadro. Per attivare un riquadro, è necessario utilizzare la macro ON_UPDATE_COMMAND_UI per ogni riquadro sulla barra di stato e aggiornare i riquadri. Poiché i riquadri non inviano messaggi WM_COMMAND (non sono simili ai pulsanti della barra degli strumenti), è necessario digitare il codice manualmente.

Si supponga, ad esempio, che un riquadro disponga `ID_INDICATOR_PAGE` di un identificatore di comando e che contenga il numero di pagina corrente in un documento. Nella procedura riportata di seguito viene descritto come creare un nuovo riquadro nella barra di stato.

### <a name="to-make-a-new-pane"></a>Per creare un nuovo riquadro

1. Definire l'ID comando del riquadro.

   Scegliere **visualizzazione risorse** dal menu **Visualizza** . Fare clic con il pulsante destro del mouse sulla risorsa progetto e scegliere **simboli risorsa**. Nella finestra di dialogo Simboli risorsa fare clic su `New` . Digitare un nome ID comando: ad esempio, `ID_INDICATOR_PAGE` . Specificare un valore per l'ID oppure accettare il valore suggerito dalla finestra di dialogo Simboli risorsa. Ad esempio, per `ID_INDICATOR_PAGE` accettare il valore predefinito. Chiudere la finestra di dialogo Simboli risorsa.

1. Consente di definire una stringa predefinita da visualizzare nel riquadro.

   Con Visualizzazione risorse aperto, fare doppio clic su **tabella di stringhe** nella finestra in cui sono elencati i tipi di risorse per l'applicazione. Con l'editor della **tabella di stringhe** aperto, scegliere **nuova stringa** dal menu **Inserisci** . Selezionare l'ID comando del riquadro (ad esempio, `ID_INDICATOR_PAGE` ) e digitare un valore stringa predefinito, ad esempio "pagina". Chiudere l'editor di stringhe. Per evitare un errore del compilatore, è necessaria una stringa predefinita.

1. Aggiungere il riquadro alla matrice degli *indicatori* .

   Nel file MAINFRM. CPP, individuare la matrice degli *indicatori* . Questa matrice elenca gli ID comando per tutti gli indicatori della barra di stato, in ordine da sinistra a destra. Nel punto appropriato della matrice immettere l'ID comando del riquadro, come illustrato di seguito `ID_INDICATOR_PAGE` :

   [!code-cpp[NVC_MFCDocView#10](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_1.cpp)]

Il modo consigliato per visualizzare il testo in un riquadro consiste nel chiamare la `SetText` funzione membro della classe `CCmdUI` in una funzione del gestore di aggiornamento per il riquadro. È ad esempio possibile impostare una variabile di tipo integer *m_nPage* contenente il numero di pagina corrente e utilizzare `SetText` per impostare il testo del riquadro su una versione in formato stringa di tale numero.

> [!NOTE]
> Si consiglia di usare l' `SetText` approccio. È possibile eseguire questa attività a un livello leggermente inferiore chiamando la `CStatusBar` funzione membro `SetPaneText` . Anche in questo caso, è ancora necessario un gestore degli aggiornamenti. Senza questo gestore per il riquadro, MFC Disabilita automaticamente il riquadro, cancellando il relativo contenuto.

Nella procedura seguente viene illustrato come utilizzare una funzione di gestione degli aggiornamenti per visualizzare il testo in un riquadro.

#### <a name="to-make-a-pane-display-text"></a>Per fare in modo che il testo venga visualizzato nel riquadro

1. Aggiungere un gestore di aggiornamento dei comandi per il comando.

   Aggiungere manualmente un prototipo per il gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MainFrm. H):

   [!code-cpp[NVC_MFCDocView#11](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_2.h)]

1. Nell'oggetto appropriato. File CPP, aggiungere la definizione del gestore, come illustrato qui per `ID_INDICATOR_PAGE` (in MainFrm. CPP):

   [!code-cpp[NVC_MFCDocView#12](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_3.cpp)]

   Le ultime tre righe di questo gestore sono il codice che Visualizza il testo.

1. Nella mappa messaggi appropriata aggiungere la macro ON_UPDATE_COMMAND_UI, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MainFrm. CPP):

   [!code-cpp[NVC_MFCDocView#13](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_4.cpp)]

Una volta definito il valore della variabile membro *m_nPage* (of Class `CMainFrame` ), questa tecnica causa la visualizzazione del numero di pagina nel riquadro durante l'elaborazione inattiva nello stesso modo in cui l'applicazione aggiorna altri indicatori. Se *m_nPage* viene modificata, la visualizzazione cambia durante il ciclo inattivo successivo.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Aggiornamento di oggetti dell'interfaccia utente (come aggiornare i pulsanti della barra degli strumenti e le voci di menu come le condizioni del programma cambiano)](../mfc/how-to-update-user-interface-objects.md)

## <a name="see-also"></a>Vedi anche

[Implementazione della barra di stato in MFC](../mfc/status-bar-implementation-in-mfc.md)<br/>
[Classe CStatusBar](../mfc/reference/cstatusbar-class.md)
