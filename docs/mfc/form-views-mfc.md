---
description: 'Altre informazioni su: visualizzazioni form (MFC)'
title: Visualizzazioni Maschera (MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- user interfaces [MFC], forms
- forms [MFC]
- applications [MFC], forms-based
- forms-based applications [MFC]
- forms [MFC], adding to applications
ms.assetid: efbe73c1-4ca4-4613-aac2-30d916e92c0e
ms.openlocfilehash: be0853c46509e92d758b38e6a3b7fbd993e9b700
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180362"
---
# <a name="form-views-mfc"></a>Visualizzazioni Maschera (MFC)

È possibile aggiungere moduli a qualsiasi applicazione Visual C++ che supporti le librerie MFC, inclusa un' [applicazione basata su form](reference/creating-a-forms-based-mfc-application.md) (una con la classe di visualizzazione derivata da `CFormView` ). Se l'applicazione non è stata inizialmente creata per supportare i moduli, Visual C++ aggiungerà questo supporto quando si inserisce un nuovo modulo. In un'applicazione SDI o MDI, che implementa l' [architettura documento/visualizzazione](document-view-architecture.md)predefinita, quando l'utente sceglie il **nuovo** comando (per impostazione predefinita, nel menu **file** ) Visual C++ chiede all'utente di scegliere i moduli disponibili.

Con un'applicazione SDI, quando l'utente sceglie il **nuovo** comando, l'istanza corrente del modulo continua a essere eseguita, ma viene creata una nuova istanza dell'applicazione con il modulo selezionato, se non ne viene trovato uno. In un'applicazione MDI, l'istanza corrente del form continua a essere eseguita quando l'utente sceglie il **nuovo** comando.

> [!NOTE]
> È possibile inserire un modulo in un'applicazione basata su finestre di dialogo, una con la classe di finestre di dialogo basata su `CDialog` e una in cui non è implementata alcuna classe di visualizzazione. Tuttavia, senza l'architettura documento/visualizzazione, Visual C++ non implementa automaticamente il **File**&#124;**nuova** funzionalità. È necessario creare un modo in cui l'utente può visualizzare moduli aggiuntivi, ad esempio implementando una finestra di dialogo a schede con varie pagine delle proprietà.

Quando si inserisce un nuovo modulo nell'applicazione, Visual C++ esegue le operazioni seguenti:

- Crea una classe basata su una delle classi di tipo form selezionate ( `CFormView` ,, `CRecordView` `CDaoRecordView` o `CDialog` ).

- Crea una risorsa finestra di dialogo con stili appropriati (oppure è possibile utilizzare una risorsa finestra di dialogo esistente che non è ancora stata associata a una classe).

   Se si sceglie una risorsa della finestra di dialogo esistente, potrebbe essere necessario impostare questi stili usando la pagina delle proprietà per la finestra di dialogo. Gli stili per una finestra di dialogo devono includere:

     **WS_CHILD**= on

     **WS_BORDER**= disattivato

     **WS_VISIBLE**= disattivato

     **WS_CAPTION**= disattivato

Per le applicazioni basate sull'architettura documento/visualizzazione, il comando **nuovo modulo** (fare clic con il pulsante destro del mouse Visualizzazione classi):

- Crea una `CDocument` classe basata su

   Anziché creare una nuova classe, è possibile usare qualsiasi `CDocument` classe basata su esistente nel progetto.

- Genera un modello di documento (derivato da `CDocument` ) con risorse di stringa, menu e icona.

   È anche possibile creare una nuova classe su cui basare il modello.

- Aggiunge una chiamata a `AddDocumentTemplate` nel codice dell'applicazione `InitInstance` .

   Visual C++ aggiunge questo codice per ogni nuovo modulo creato, che aggiunge il modulo all'elenco dei moduli disponibili quando l'utente sceglie il **nuovo** comando. Questo codice include l'ID risorsa associato del modulo e i nomi delle classi di documento, visualizzazione e frame associate che compongono il nuovo oggetto Form.

   I modelli di documento vengono usati come connessione tra documenti, finestre cornice e viste. Per un singolo documento, è possibile creare molti modelli.

Per altre informazioni, vedere:

- [Creare un'applicazione Forms-Based](reference/creating-a-forms-based-mfc-application.md)

- [Inserimento di un form in un progetto](inserting-a-form-into-a-project.md)

## <a name="see-also"></a>Vedi anche

[Elementi dell'interfaccia utente](user-interface-elements-mfc.md)
