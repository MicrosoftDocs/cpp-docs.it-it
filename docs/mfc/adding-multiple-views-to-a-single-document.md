---
title: Aggiunta di più visualizzazioni a un singolo documento
ms.date: 11/04/2016
helpviewer_keywords:
- multiple views [MFC], SDI applications
- documents [MFC], multiple views
- single document interface (SDI), adding views
- views [MFC], SDI applications
ms.assetid: 86d0c134-01d5-429c-b672-36cfb956dc01
ms.openlocfilehash: 593c59c73b58b4364c9d652ce8eb415c17af496c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394741"
---
# <a name="adding-multiple-views-to-a-single-document"></a>Aggiunta di più visualizzazioni a un singolo documento

In un'applicazione single document interface (SDI) creata con la libreria di classi MFC (Microsoft Foundation), ogni tipo di documento è associato un solo tipo di visualizzazione. In alcuni casi, è consigliabile avere la possibilità di passare dalla visualizzazione corrente di un documento con una nuova visualizzazione.

> [!TIP]
>  Per procedure aggiuntive sull'implementazione di più visualizzazioni per un singolo documento, vedere [CDocument:: AddView](../mfc/reference/cdocument-class.md#addview) e il [raccogliere](../overview/visual-cpp-samples.md) esempio MFC.

È possibile implementare questa funzionalità aggiungendo una nuova `CView`-classe derivata e codice aggiuntivo per il passaggio tra le visualizzazioni in modo dinamico a un'applicazione MFC esistente.

I passaggi sono i seguenti:

- [Modificare la classe dell'applicazione esistente](#vcconmodifyexistingapplicationa1)

- [Creare e modificare la nuova classe di visualizzazione](#vcconnewviewclassa2)

- [Creare e collegare la nuova vista](#vcconattachnewviewa3)

- [Implementare la funzione switch](#vcconswitchingfunctiona4)

- [Aggiungere il supporto per il passaggio alla visualizzazione](#vcconswitchingtheviewa5)

Il resto di questo argomento si presuppone quanto segue:

- Il nome del `CWinApp`-oggetto derivato `CMyWinApp`, e `CMyWinApp` dichiarato e definito *MYWINAPP. H* e *MYWINAPP. CPP*.

- `CNewView` è il nome della nuova `CView`-derivato, e `CNewView` dichiarato e definito *NEWVIEW. H* e *NEWVIEW. CPP*.

##  <a name="vcconmodifyexistingapplicationa1"></a> Modificare la classe dell'applicazione esistente

Per l'applicazione passare dalla visualizzazione, è necessario modificare la classe dell'applicazione mediante l'aggiunta di variabili membro per archiviare le viste e un metodo per modificare i valori.

Aggiungere il codice seguente alla dichiarazione di `CMyWinApp` in *MYWINAPP. H*:

[!code-cpp[NVC_MFCDocViewSDI#1](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_1.h)]

Nuove variabili membro, `m_pOldView` e `m_pNewView`, scegliere la visualizzazione corrente e quello appena creato. Il nuovo metodo (`SwitchView`) attiva le viste quando richiesto dall'utente. Il corpo del metodo è illustrato più avanti in questo argomento nella [implementare la funzione cambio](#vcconswitchingfunctiona4).

Ultima modifica alla classe di applicazione richiede l'inclusione di un nuovo file di intestazione che definisce un messaggio di Windows (**WM_INITIALUPDATE**) che viene utilizzata nella funzione di passaggio a un'altra.

Inserire la riga seguente nella sezione di inclusione *MYWINAPP. CPP*:

[!code-cpp[NVC_MFCDocViewSDI#2](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_2.cpp)]

Salvare le modifiche e continuare al passaggio successivo.

##  <a name="vcconnewviewclassa2"></a> Creare e modificare la nuova classe di visualizzazione

Creare la nuova classe di visualizzazione è facilitata mediante il **una nuova classe** i comandi disponibili dalla visualizzazione classi. È l'unico requisito per questa classe che deriva da `CView`. Aggiungere la nuova classe all'applicazione. Per informazioni specifiche su come aggiungere una nuova classe al progetto, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md).

Dopo aver aggiunto la classe al progetto, è necessario modificare l'accessibilità di alcuni membri di classe di visualizzazione.

Modificare *NEWVIEW. H* modificando l'identificatore di accesso da **protetti** al **pubblica** per il costruttore e distruttore. In questo modo la classe per essere creati ed eliminati in modo dinamico e modificare l'aspetto della visualizzazione prima che diventi visibile.

Salvare le modifiche e continuare al passaggio successivo.

##  <a name="vcconattachnewviewa3"></a> Creare e collegare la nuova vista

Per creare e collegare la nuova vista, è necessario modificare il `InitInstance` funzione della classe dell'applicazione. La modifica viene aggiunto nuovo codice che crea un nuovo oggetto di visualizzazione e quindi inizializza entrambe `m_pOldView` e `m_pNewView` con i due oggetti di visualizzazione esistente.

Poiché la nuova vista viene creata all'interno di `InitInstance` (funzione), entrambe le visualizzazioni di nuove ed esistenti rimangono valide per la durata dell'applicazione. Tuttavia, l'applicazione è stato possibile semplicemente creare la nuova vista in modo dinamico.

Inserire questo codice dopo la chiamata a `ProcessShellCommand`:

[!code-cpp[NVC_MFCDocViewSDI#3](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_3.cpp)]

Salvare le modifiche e continuare al passaggio successivo.

##  <a name="vcconswitchingfunctiona4"></a> Implementare la funzione switch

Nel passaggio precedente, è stato aggiunto codice che creato e inizializzato un nuovo oggetto di visualizzazione. L'ultima parte principale consiste nell'implementare il metodo di commutazione, `SwitchView`.

Alla fine del file di implementazione per la classe dell'applicazione (*MYWINAPP. CPP*), aggiungere la definizione di metodo seguente:

[!code-cpp[NVC_MFCDocViewSDI#4](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_4.cpp)]

Salvare le modifiche e continuare al passaggio successivo.

##  <a name="vcconswitchingtheviewa5"></a> Aggiungere il supporto per il passaggio alla visualizzazione

Il passaggio finale implica l'aggiunta di codice che chiama il `SwitchView` metodo quando l'applicazione deve passare tra le visualizzazioni. Questa operazione può essere eseguita in diversi modi: mediante l'aggiunta di una nuova voce di menu per l'utente di scegliere o cambio internamente le viste quando vengono soddisfatte determinate condizioni.

Per altre informazioni sull'aggiunta di nuove voci di menu e funzioni del gestore comando, vedere [gestori per comandi e notifiche dei controlli](../mfc/handlers-for-commands-and-control-notifications.md).

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)
