---
title: Visualizzazioni Maschera (MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- user interfaces [MFC], forms
- forms [MFC]
- applications [MFC], forms-based
- forms-based applications [MFC]
- forms [MFC], adding to applications
ms.assetid: efbe73c1-4ca4-4613-aac2-30d916e92c0e
ms.openlocfilehash: 5e8912c9013175fe254b2f4a4a968a67fd071f39
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365303"
---
# <a name="form-views-mfc"></a>Visualizzazioni Maschera (MFC)

È possibile aggiungere i form a qualsiasi applicazione di Visual C, che supporta le librerie `CFormView`MFC, inclusa [un'applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) (una la cui classe di visualizzazione è derivata da ). Se inizialmente non è stata creata l'applicazione per i form di supporto, quando si inserisce un nuovo form, verrà aggiunto questo supporto automaticamente. In un'applicazione SDI o MDI, che implementa [l'architettura predefinita di visualizzazione/documento](../mfc/document-view-architecture.md), quando l'utente sceglie il comando **Nuovo** (per impostazione predefinita, nel menu **File),** Visual C.

Con un'applicazione SDI, quando l'utente sceglie il **New** comando, l'istanza corrente del form continua a essere eseguito, ma viene creata una nuova istanza dell'applicazione con il form selezionato se non ne viene trovata una. In un'applicazione MDI, l'istanza corrente del form continua a essere eseguita quando l'utente sceglie il **New** comando.

> [!NOTE]
> È possibile inserire un form in un'applicazione basata `CDialog` su finestra di dialogo (una la cui classe della finestra di dialogo è basata su e una in cui non è implementata alcuna classe di visualizzazione). Tuttavia, senza l'architettura documento/visualizzazione, visual c'è non implementare automaticamente il **File**&#124;**nuova** funzionalità. È necessario creare un modo per l'utente di visualizzare moduli aggiuntivi, ad esempio implementando una finestra di dialogo a schede con varie pagine delle proprietà.

Quando si inserisce un nuovo form nell'applicazione, visual C

- Crea una classe basata su una delle classi`CFormView` `CRecordView`di `CDaoRecordView`tipo `CDialog`form scelte ( , , o ).

- Crea una risorsa finestra di dialogo con stili appropriati (oppure è possibile usare una risorsa finestra di dialogo esistente non ancora associata a una classe).

   Se si sceglie una risorsa finestra di dialogo esistente, potrebbe essere necessario impostare questi stili utilizzando la pagina Proprietà per la finestra di dialogo. Gli stili per una finestra di dialogo devono includere:

     **WS_CHILD**Attivato

     **WS_BORDER**Off (Disattivato)

     **WS_VISIBLE**-Off (Disattivato)

     **WS_CAPTION**-Disattivato

Per le applicazioni basate sull'architettura documento/visualizzazione, anche il comando **Nuovo modulo** (fare clic con il pulsante destro del mouse in Visualizzazione classi):

- Crea `CDocument`una classe basata su

   Anziché creare una nuova classe, è `CDocument`possibile utilizzare qualsiasi classe basata su esistente nel progetto.

- Genera un modello di `CDocument`documento (derivato da ) con risorse stringa, menu e icona.

   È inoltre possibile creare una nuova classe su cui basare il modello.

- Aggiunge una `AddDocumentTemplate` chiamata a nel `InitInstance` codice dell'applicazione.

   Quando l'utente sceglie il comando **Nuovo,** in Visual Cè viene aggiunto questo codice per ogni nuovo form creato, che aggiunge il form all'elenco dei moduli disponibili. Questo codice include l'ID risorsa associato del form e i nomi delle classi documento, visualizzazione e frame associate che insieme costituiscono il nuovo oggetto form.

   I modelli di documento fungono da connessione tra documenti, finestre cornice e visualizzazioni. Per un singolo documento, è possibile creare molti modelli.

Per altre informazioni, vedere:

- [Creare un'applicazione basata su formCreate a Forms-Based Application](../mfc/reference/creating-a-forms-based-mfc-application.md)

- [Inserimento di un form in un progetto](../mfc/inserting-a-form-into-a-project.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
