---
title: Formare visualizzazioni (MFC) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- user interfaces [MFC], forms
- forms [MFC]
- applications [MFC], forms-based
- forms-based applications [MFC]
- forms [MFC], adding to applications
ms.assetid: efbe73c1-4ca4-4613-aac2-30d916e92c0e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9019b8f2314cfefa5b952994e7fa7c3e9d8d459e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442775"
---
# <a name="form-views-mfc"></a>Visualizzazioni Maschera (MFC)

È possibile aggiungere forme a qualsiasi applicazione Visual C++ che supporta le librerie MFC, incluso un [applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) (una classe il cui visualizzazione è derivata da `CFormView`). Se non è stato inizialmente creato l'applicazione per supportare i form, Visual C++ aggiungerà questo supporto automaticamente quando si inserisce un nuovo form. In un'applicazione SDI o MDI, che implementa il valore predefinito [architettura documento/visualizzazione](../mfc/document-view-architecture.md), quando l'utente sceglie il **New** comando (per impostazione predefinita, nelle **File** menu), Visual C++ viene richiesto all'utente di scegliere tra i moduli disponibili.

Con un'applicazione SDI, quando l'utente sceglie il **New** comando, l'istanza corrente del modulo continua a eseguire ma se non viene trovata, viene creata una nuova istanza dell'applicazione con il modulo selezionato. In un'applicazione MDI, l'istanza corrente del modulo continua a essere eseguita quando l'utente sceglie il **New** comando.

> [!NOTE]
>  È possibile inserire un modulo in un'applicazione basata su finestra di dialogo (la cui classe della finestra di dialogo si basa su quella `CDialog` e uno in cui nessuna visualizzazione classe è implementata). Tuttavia, senza l'architettura documento/visualizzazione, Visual C++ non implementare automaticamente i **File**&#124;**New** funzionalità. È necessario creare un modo per l'utente visualizzare ulteriori forme, ad esempio mediante l'implementazione di una finestra di dialogo a schede con varie pagine delle proprietà.

Quando si inserisce un nuovo form nell'applicazione, Visual C++ esegue le operazioni seguenti:

- Crea una classe basata su una delle classi di modulo in stile scelto (`CFormView`, `CRecordView`, `CDaoRecordView`, o `CDialog`).

- Crea una risorsa finestra di dialogo con gli stili appropriati (oppure è possibile usare una risorsa finestra di dialogo esistente che non è ancora stata associata a una classe).

     Se si sceglie una risorsa finestra di dialogo esistente, si potrebbe essere necessario impostare questi stili usando la pagina delle proprietà della finestra di dialogo. Stili per una finestra di dialogo devono includere:

     **WS_CHILD**= On

     **WS_BORDER**= disattivato

     **WS_VISIBLE**= disattivato

     **WS_CAPTION =** Off

Per le applicazioni basate sull'architettura documento/visualizzazione, il **nuovo Form** comando (pulsante destro del mouse in visualizzazione classi) anche:

- Crea un `CDocument`-classe di base

     Anziché disporre di una nuova classe creata, è possibile usare qualsiasi esistente `CDocument`-basato su classe nel progetto.

- Genera un modello di documento (derivata da `CDocument`) con le risorse stringa, menu e icone.

     È anche possibile creare una nuova classe su cui basare il modello.

- Aggiunge una chiamata a `AddDocumentTemplate` all'interno dell'applicazione `InitInstance` codice.

     Visual C++ aggiunge questo codice per ogni nuovo form si crea, aggiunge il modulo all'elenco dei moduli disponibili quando l'utente sceglie il **New** comando. Questo codice include l'ID della risorsa associata del form e i nomi delle classi di frame che costituiscono il nuovo oggetto form, visualizzazione e documento associato.

     I modelli di documento funzionano da connessione tra documenti, finestre cornice e viste. Per un singolo documento, è possibile creare molti modelli.

Per altre informazioni, vedere:

- [Creare un'applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)

- [Inserimento di un form in un progetto](../mfc/inserting-a-form-into-a-project.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
