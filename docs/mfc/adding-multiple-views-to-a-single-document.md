---
title: Aggiunta di più visualizzazioni a un singolo documento
ms.date: 11/04/2016
helpviewer_keywords:
- multiple views [MFC], SDI applications
- documents [MFC], multiple views
- single document interface (SDI), adding views
- views [MFC], SDI applications
ms.assetid: 86d0c134-01d5-429c-b672-36cfb956dc01
ms.openlocfilehash: 95de3a582c3d45db858e2b4bce0268e1dab63931
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215972"
---
# <a name="adding-multiple-views-to-a-single-document"></a>Aggiunta di più visualizzazioni a un singolo documento

In un'applicazione con interfaccia a documento singolo (SDI) creata con la libreria MFC (Microsoft Foundation Class), ogni tipo di documento è associato a un singolo tipo di visualizzazione. In alcuni casi, è consigliabile avere la possibilità di cambiare la visualizzazione corrente di un documento con una nuova visualizzazione.

> [!TIP]
> Per altre procedure sull'implementazione di più visualizzazioni per un singolo documento, vedere [CDocument:: AddView](reference/cdocument-class.md#addview) e l'esempio [Collect](../overview/visual-cpp-samples.md) MFC.

È possibile implementare questa funzionalità aggiungendo una nuova `CView` classe derivata da e il codice aggiuntivo per il cambio dinamico delle visualizzazioni in un'applicazione MFC esistente.

La procedura è la seguente:

- [Modificare la classe dell'applicazione esistente](#vcconmodifyexistingapplicationa1)

- [Creare e modificare la nuova classe di visualizzazione](#vcconnewviewclassa2)

- [Creare e alleghi la nuova visualizzazione](#vcconattachnewviewa3)

- [Implementare la funzione di cambio](#vcconswitchingfunctiona4)

- [Aggiunta del supporto per il cambio della visualizzazione](#vcconswitchingtheviewa5)

Nella parte restante di questo argomento si presuppone quanto segue:

- Il nome dell' `CWinApp` oggetto derivato da è `CMyWinApp` e `CMyWinApp` viene dichiarato e definito in *MYWINAPP. H* e *MYWINAPP. CPP*.

- `CNewView`nome del nuovo `CView` oggetto derivato da, che `CNewView` viene dichiarato e definito in *NEWVIEW. H* e *NEWVIEW. CPP*.

## <a name="modify-the-existing-application-class"></a><a name="vcconmodifyexistingapplicationa1"></a>Modificare la classe dell'applicazione esistente

Per passare da una visualizzazione all'altra, è necessario modificare la classe dell'applicazione aggiungendo variabili membro per archiviare le visualizzazioni e un metodo per cambiarle.

Aggiungere il codice seguente alla dichiarazione di `CMyWinApp` in *MYWINAPP. H*:

[!code-cpp[NVC_MFCDocViewSDI#1](codesnippet/cpp/adding-multiple-views-to-a-single-document_1.h)]

Le nuove variabili membro, `m_pOldView` e `m_pNewView` , puntano alla visualizzazione corrente e a quella appena creata. Il nuovo metodo ( `SwitchView` ) cambia le visualizzazioni quando richiesto dall'utente. Il corpo del metodo viene illustrato più avanti in questo argomento in [implementare la funzione di cambio](#vcconswitchingfunctiona4).

L'ultima modifica alla classe dell'applicazione richiede l'inclusione di un nuovo file di intestazione che definisce un messaggio di Windows (**WM_INITIALUPDATE**) utilizzato nella funzione di cambio.

Inserire la riga seguente nella sezione di inclusione di *MYWINAPP. CPP*:

[!code-cpp[NVC_MFCDocViewSDI#2](codesnippet/cpp/adding-multiple-views-to-a-single-document_2.cpp)]

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="create-and-modify-the-new-view-class"></a><a name="vcconnewviewclassa2"></a>Creare e modificare la nuova classe di visualizzazione

La creazione della nuova classe di visualizzazione è semplificata tramite il comando **nuova classe** disponibile in visualizzazione classi. L'unico requisito per questa classe è che deriva da `CView` . Aggiungere la nuova classe all'applicazione. Per informazioni specifiche sull'aggiunta di una nuova classe al progetto, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md).

Una volta aggiunta la classe al progetto, è necessario modificare l'accessibilità di alcuni membri della classe di visualizzazione.

Modificare *NEWVIEW. H* modificando l'identificatore di accesso da **`protected`** a **`public`** per il costruttore e il distruttore. Questo consente la creazione e l'eliminazione dinamica della classe e la modifica dell'aspetto della visualizzazione prima che sia visibile.

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="create-and-attach-the-new-view"></a><a name="vcconattachnewviewa3"></a>Creare e alleghi la nuova visualizzazione

Per creare e alleghi la nuova visualizzazione, è necessario modificare la `InitInstance` funzione della classe dell'applicazione. La modifica aggiunge un nuovo codice che crea un nuovo oggetto visualizzazione e quindi Inizializza sia `m_pOldView` che `m_pNewView` con i due oggetti visualizzazione esistenti.

Poiché la nuova vista viene creata all'interno della `InitInstance` funzione, entrambe le visualizzazioni nuove ed esistenti vengono mantenute per la durata dell'applicazione. Tuttavia, l'applicazione potrebbe creare con facilità la nuova visualizzazione dinamicamente.

Inserire il codice dopo la chiamata a `ProcessShellCommand` :

[!code-cpp[NVC_MFCDocViewSDI#3](codesnippet/cpp/adding-multiple-views-to-a-single-document_3.cpp)]

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="implement-the-switching-function"></a><a name="vcconswitchingfunctiona4"></a>Implementare la funzione di cambio

Nel passaggio precedente è stato aggiunto il codice che ha creato e inizializzato un nuovo oggetto visualizzazione. L'ultima parte principale consiste nell'implementare il metodo di cambio `SwitchView` .

Alla fine del file di implementazione per la classe dell'applicazione (*MYWINAPP. CPP*) aggiungere la definizione di metodo seguente:

[!code-cpp[NVC_MFCDocViewSDI#4](codesnippet/cpp/adding-multiple-views-to-a-single-document_4.cpp)]

Salvare le modifiche e continuare con il passaggio successivo.

## <a name="add-support-for-switching-the-view"></a><a name="vcconswitchingtheviewa5"></a>Aggiunta del supporto per il cambio della visualizzazione

Il passaggio finale prevede l'aggiunta di codice che chiama il `SwitchView` metodo quando l'applicazione deve passare da una visualizzazione all'altra. Questa operazione può essere eseguita in diversi modi: aggiungendo una nuova voce di menu che consente all'utente di scegliere o cambiare internamente le visualizzazioni quando vengono soddisfatte determinate condizioni.

Per ulteriori informazioni sull'aggiunta di nuove voci di menu e funzioni del gestore comandi, vedere [gestori per i comandi e le notifiche dei controlli](handlers-for-commands-and-control-notifications.md).

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
