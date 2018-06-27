---
title: Aggiornamento del testo di un riquadro barra di stato | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ec085bcd519aa1694cb889a06ce9b1881e065514
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951486"
---
# <a name="updating-the-text-of-a-status-bar-pane"></a>Aggiornamento del testo di un riquadro barra di stato
In questo articolo viene illustrato come modificare il testo visualizzato in un riquadro della barra di stato MFC. Una barra di stato, ovvero un oggetto della classe window [CStatusBar](../mfc/reference/cstatusbar-class.md) , ovvero, contiene diversi riquadri." Ogni riquadro è un'area rettangolare della barra di stato che è possibile utilizzare per visualizzare le informazioni. Molte applicazioni, ad esempio, visualizzare lo stato di altre chiavi, BLOC NUM e BLOC nei riquadri a destra. Le applicazioni spesso visualizzare testo descrittivo all'estrema sinistra riquadro (0), chiamato a volte il messaggio "pane". Ad esempio, la barra di stato MFC predefinito utilizza il riquadro dei messaggi per visualizzare una stringa che spiega il menu selezionato o il pulsante. Nella figura [barre di stato](../mfc/status-bar-implementation-in-mfc.md) Mostra una barra di stato da un'applicazione di creazione guidata applicazione MFC.  
  
 Per impostazione predefinita, MFC non abilita un `CStatusBar` riquadro quando viene creato il riquadro. Per attivare un riquadro, è necessario usare la macro ON_UPDATE_COMMAND_UI per ogni riquadro sulla barra di stato e aggiornare i riquadri. Poiché i riquadri non inviano messaggi WM_COMMAND (non sono pubblicati, ad esempio i pulsanti della barra degli strumenti), è necessario digitare il codice manualmente.  
  
 Ad esempio, si supponga che sia un riquadro `ID_INDICATOR_PAGE` come l'identificatore di comando e che contiene il numero di pagina corrente in un documento. La procedura seguente viene descritto come creare un nuovo riquadro nella barra di stato.  
  
### <a name="to-make-a-new-pane"></a>Per creare un nuovo riquadro  
  
1.  Definire l'ID di comando. del riquadro  
  
     Nel **vista** menu, fare clic su **visualizzazione risorse**. Il pulsante destro la risorsa del progetto e fare clic su **simboli risorsa**. Nella finestra di dialogo Simboli risorsa, fare clic su `New`. Digitare un nome di ID di comando: ad esempio, `ID_INDICATOR_PAGE`. Specificare un valore per l'ID o accettare il valore suggerito per la finestra di dialogo Simboli risorsa. Ad esempio, per `ID_INDICATOR_PAGE`, accettare il valore predefinito. Chiudere la finestra di dialogo Simboli risorsa.  
  
2.  Definire una stringa predefinita da visualizzare nel riquadro.  
  
     Con la visualizzazione di risorse è aperto, fare doppio clic su **tabelle delle stringhe** nella finestra che elenca i tipi di risorsa per l'applicazione. Con il **tabelle delle stringhe** editor aperto, scegliere **nuova stringa** dal **Inserisci** menu. Nella finestra proprietà di stringa, selezionare l'ID di comando del riquadro (ad esempio, `ID_INDICATOR_PAGE`) e digitare un valore di stringa del valore predefinito, ad esempio "Pagina". Chiudere l'editor di stringa. (È necessaria una stringa predefinita per evitare un errore del compilatore).  
  
3.  Aggiungere il riquadro per il *indicatori* matrice.  
  
     Nel file MAINFRM. CPP, individuare il *indicatori* matrice. Questa matrice sono elencati gli ID di comando per tutti gli indicatori della barra di stato, in ordine da sinistra a destra. Al momento appropriato nella matrice, immettere l'ID di comando del riquadro, come illustrato di seguito per `ID_INDICATOR_PAGE`:  
  
     [!code-cpp[NVC_MFCDocView#10](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_1.cpp)]  
  
 Il metodo consigliato per visualizzare il testo in un riquadro consiste nel chiamare il `SetText` funzione membro di classe `CCmdUI` in una funzione del gestore di aggiornamento per il riquadro. Potrebbe ad esempio, si desidera impostare una variabile integer *m_nPage* che contiene il numero di pagina corrente e utilizzare `SetText` per impostare il testo del riquadro a una versione di stringa di tale numero.  
  
> [!NOTE]
>  Il `SetText` approccio è consigliato. È possibile eseguire questa attività a un livello leggermente inferiore chiamando il `CStatusBar` funzione membro `SetPaneText`. Anche in questo caso, è comunque necessario un gestore di aggiornamento. Senza un gestore per il riquadro, MFC automaticamente disabilita il riquadro, cancellare il contenuto.  
  
 La procedura seguente viene illustrato come utilizzare una funzione del gestore di aggiornamento per visualizzare il testo in un riquadro.  
  
#### <a name="to-make-a-pane-display-text"></a>Per visualizzare un riquadro di testo da visualizzare  
  
1.  Aggiungere un gestore di aggiornamento di comando per il comando.  
  
     Aggiungere manualmente un prototipo per il gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. H):  
  
     [!code-cpp[NVC_MFCDocView#11](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_2.h)]  
  
2.  In appropriata. CPP file, aggiungere la definizione del gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. CPP):  
  
     [!code-cpp[NVC_MFCDocView#12](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_3.cpp)]  
  
     Le ultime tre righe di questo gestore sono il codice che consente di visualizzare il testo.  
  
3.  Nella mappa del messaggio appropriato, aggiungere la macro ON_UPDATE_COMMAND_UI, come illustrato di seguito per `ID_INDICATOR_PAGE` (in MAINFRM. CPP):  
  
     [!code-cpp[NVC_MFCDocView#13](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_4.cpp)]  
  
 Dopo aver definito il valore di *m_nPage* variabile membro (della classe `CMainFrame`), questa tecnica fa sì che il numero di pagina da visualizzare nel riquadro durante l'elaborazione inattivo allo stesso modo che l'applicazione aggiorna altri indicatori. Se *m_nPage* modifiche, la visualizzazione viene modificata durante il successivo ciclo inattivo.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Aggiornamento di oggetti dell'interfaccia utente (come aggiornare i pulsanti della barra degli strumenti e voci di menu come programma condizioni modifica)](../mfc/how-to-update-user-interface-objects.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione della barra di stato in MFC](../mfc/status-bar-implementation-in-mfc.md)   
 [Classe CStatusBar](../mfc/reference/cstatusbar-class.md)
