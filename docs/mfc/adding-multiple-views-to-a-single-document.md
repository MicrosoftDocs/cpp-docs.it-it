---
title: Aggiunta di più visualizzazioni a un singolo documento
ms.date: 11/04/2016
helpviewer_keywords:
- multiple views [MFC], SDI applications
- documents [MFC], multiple views
- single document interface (SDI), adding views
- views [MFC], SDI applications
ms.assetid: 86d0c134-01d5-429c-b672-36cfb956dc01
ms.openlocfilehash: 4fa39a4d9369c84d2cffdaeff28dc9cb2f966b31
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370861"
---
# <a name="adding-multiple-views-to-a-single-document"></a>Aggiunta di più visualizzazioni a un singolo documento

In un'applicazione di interfaccia a documento singolo (SDI) creata con la libreria MFC (Microsoft Foundation Class), ogni tipo di documento è associato a un singolo tipo di visualizzazione. In alcuni casi, è auspicabile avere la possibilità di cambiare la visualizzazione corrente di un documento con una nuova visualizzazione.

> [!TIP]
> Per ulteriori procedure sull'implementazione di più visualizzazioni per un singolo documento, vedere [CDocument::AddView](../mfc/reference/cdocument-class.md#addview) e l'esempio [MFC COLLECT.](../overview/visual-cpp-samples.md)

È possibile implementare questa `CView`funzionalità aggiungendo una nuova classe derivata e codice aggiuntivo per passare le visualizzazioni in modo dinamico a un'applicazione MFC esistente.

Attenersi alla procedura seguente:

- [Modificare la classe di applicazione esistente](#vcconmodifyexistingapplicationa1)

- [Creare e modificare la nuova classe di visualizzazione](#vcconnewviewclassa2)

- [Creare e collegare la nuova vista](#vcconattachnewviewa3)

- [Implementare la funzione di commutazioneImplement the Switching Function](#vcconswitchingfunctiona4)

- [Aggiunta del supporto per il passaggio da una visualizzazione all'altra](#vcconswitchingtheviewa5)

Nella parte restante di questo argomento si presuppone quanto segue:

- Il nome `CWinApp`dell'oggetto `CMyWinApp`derivato `CMyWinApp` è e viene dichiarato e definito in *MYWINAPP. H* e *MYWINAPP. CPP*.

- `CNewView`è il nome `CView`dell'oggetto derivato da new e `CNewView` viene dichiarato e definito in *NEWVIEW. H* e *NEWVIEW. CPP*.

## <a name="modify-the-existing-application-class"></a><a name="vcconmodifyexistingapplicationa1"></a>Modificare la classe di applicazione esistente

Affinché l'applicazione passi da una visualizzazione all'altra, è necessario modificare la classe dell'applicazione aggiungendo variabili membro per archiviare le visualizzazioni e un metodo per passare da una visualizzazione all'altra.

Aggiungere il codice seguente `CMyWinApp` alla dichiarazione di in *MYWINAPP. H*:

[!code-cpp[NVC_MFCDocViewSDI#1](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_1.h)]

Le nuove variabili `m_pOldView` `m_pNewView`membro e , puntano alla visualizzazione corrente e a quella appena creata. Il nuovo`SwitchView`metodo ( ) consente di passare le visualizzazioni quando richiesto dall'utente. Il corpo del metodo viene illustrato più avanti in questo argomento in [Implementare la funzione](#vcconswitchingfunctiona4)di commutazione .

L'ultima modifica alla classe dell'applicazione richiede l'inclusione di un nuovo file di intestazione che definisce un messaggio di Windows (**WM_INITIALUPDATE**) utilizzato nella funzione di commutazione.

Inserire la riga seguente nella sezione include di *MYWINAPP. CPP*:

[!code-cpp[NVC_MFCDocViewSDI#2](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_2.cpp)]

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="create-and-modify-the-new-view-class"></a><a name="vcconnewviewclassa2"></a>Creare e modificare la nuova classe di visualizzazione

La creazione della nuova classe di visualizzazione è semplificata utilizzando il comando **Nuova classe** disponibile in Visualizzazione classi. L'unico requisito per questa classe `CView`è che deriva da . Aggiungere questa nuova classe all'applicazione. Per informazioni specifiche sull'aggiunta di una nuova classe al progetto, vedere [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md).

Dopo aver aggiunto la classe al progetto, è necessario modificare l'accessibilità di alcuni membri della classe di visualizzazione.

Modificare *NEWVIEW. H* modificando l'identificatore di accesso da **protected** a **public** per il costruttore e il distruttore. In questo modo la classe da creare ed eliminare in modo dinamico e modificare l'aspetto della visualizzazione prima che sia visibile.

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="create-and-attach-the-new-view"></a><a name="vcconattachnewviewa3"></a>Creare e collegare la nuova vista

Per creare e collegare la nuova visualizzazione, è necessario modificare la `InitInstance` funzione della classe dell'applicazione. La modifica aggiunge nuovo codice che crea un `m_pOldView` nuovo `m_pNewView` oggetto visualizzazione e quindi inizializza entrambi e con i due oggetti visualizzazione esistenti.

Poiché la nuova visualizzazione `InitInstance` viene creata all'interno della funzione, entrambe le visualizzazioni nuove e quelle esistenti persistono per tutta la durata dell'applicazione. Tuttavia, l'applicazione potrebbe altrettanto facilmente creare la nuova visualizzazione in modo dinamico.

Inserire questo codice dopo `ProcessShellCommand`la chiamata a :

[!code-cpp[NVC_MFCDocViewSDI#3](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_3.cpp)]

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="implement-the-switching-function"></a><a name="vcconswitchingfunctiona4"></a>Implementare la funzione di commutazioneImplement the Switching Function

Nel passaggio precedente è stato aggiunto il codice che ha creato e inizializzato un nuovo oggetto visualizzazione. L'ultimo pezzo importante è quello `SwitchView`di implementare il metodo di commutazione, .

Alla fine del file di implementazione per la classe dell'applicazione (*MYWINAPP. CPP*), aggiungere la seguente definizione di metodo:

[!code-cpp[NVC_MFCDocViewSDI#4](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_4.cpp)]

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="add-support-for-switching-the-view"></a><a name="vcconswitchingtheviewa5"></a>Aggiunta del supporto per il passaggio da una visualizzazione all'altra

Il passaggio finale prevede `SwitchView` l'aggiunta di codice che chiama il metodo quando l'applicazione deve passare da una visualizzazione all'altra. Questa operazione può essere eseguita in diversi modi: aggiungendo una nuova voce di menu per l'utente di scegliere o passare le visualizzazioni internamente quando vengono soddisfatte determinate condizioni.

Per ulteriori informazioni sull'aggiunta di nuove voci di menu e funzioni del gestore di comandi, vedere [Gestori per comandi e notifiche](../mfc/handlers-for-commands-and-control-notifications.md)di controllo .

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)
