---
title: Modulo visualizzazioni (MFC) | Documenti Microsoft
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
ms.openlocfilehash: 8a717ca80d84b884014a2567228829ffd87c5178
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930300"
---
# <a name="form-views-mfc"></a>Visualizzazioni Maschera (MFC)
È possibile aggiungere forme a qualsiasi applicazione Visual C++ che supporta le librerie MFC, tra cui una [applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) (uno cui visualizzazione viene derivata da `CFormView`). Se non è stato inizialmente creato l'applicazione per supportare i form, Visual C++ aggiungerà questo supporto per l'utente quando si inserisce un nuovo form. In un'applicazione SDI o MDI, che implementa il valore predefinito [architettura documento/visualizzazione](../mfc/document-view-architecture.md), quando l'utente sceglie il **New** comandi (per impostazione predefinita, nel **File** menu), Visual C++ richiesto all'utente di scegliere tra i moduli disponibili.  
  
 Con un'applicazione SDI, quando l'utente sceglie il **New** comando, l'istanza corrente del form rimane in esecuzione, ma se non ne viene trovato, viene creata una nuova istanza dell'applicazione con il modulo selezionato. In un'applicazione MDI, l'istanza corrente del modulo continua a essere eseguita quando l'utente sceglie il **New** comando.  
  
> [!NOTE]
>  È possibile inserire un form in un'applicazione basata su finestra di dialogo (la cui classe finestra di dialogo si basa su uno `CDialog` e uno in cui nessuna visualizzazione classe è implementata). Tuttavia, senza l'architettura documento/visualizzazione, Visual C++ non implementare automaticamente i **File**&#124;**New** funzionalità. È necessario creare un modo per l'utente visualizzare ulteriori forme, ad esempio mediante l'implementazione di una finestra di dialogo a schede con varie pagine delle proprietà.  
  
 Quando si inserisce un nuovo form nell'applicazione, Visual C++ esegue le operazioni seguenti:  
  
-   Crea una classe basata su una delle classi di stile di modulo che si sceglie (`CFormView`, `CRecordView`, `CDaoRecordView`, o `CDialog`).  
  
-   Crea una risorsa finestra di dialogo con stili appropriati (o è possibile utilizzare una risorsa finestra di dialogo esistente che non è ancora stata associata a una classe).  
  
     Se si sceglie una risorsa finestra di dialogo esistente, potrebbe essere necessario impostare gli stili utilizzando la pagina delle proprietà per la finestra di dialogo. Stili per una finestra di dialogo devono includere:  
  
     **WS_CHILD**= On  
  
     **WS_BORDER**= Off  
  
     **WS_VISIBLE**= Off  
  
     **WS_CAPTION =** Off  
  
 Per le applicazioni basate sull'architettura documento/visualizzazione, il **nuovo Form** comando (pulsante destro del mouse in visualizzazione classi) inoltre:  
  
-   Crea un `CDocument`-classe di base  
  
     Anziché creare una nuova classe, è possibile utilizzare qualsiasi esistente `CDocument`-basato su classe nel progetto.  
  
-   Genera un modello di documento (derivato da `CDocument`) con le risorse di stringa, menu e icona.  
  
     È anche possibile creare una nuova classe su cui basare il modello.  
  
-   Aggiunge una chiamata a `AddDocumentTemplate` dell'applicazione `InitInstance` codice.  
  
     Visual C++ aggiunge questo codice per ogni nuovo form si crea, aggiunge il form all'elenco dei moduli disponibili quando l'utente sceglie il **New** comando. Questo codice include l'ID della risorsa associata del form e i nomi delle classi di frame che costituiscono il nuovo oggetto modulo, visualizzazione e documento associato.  
  
     Modelli di documento può essere utilizzato come la connessione tra documenti, finestre cornice e viste. Per un singolo documento, è possibile creare molti modelli.  
  
 Per altre informazioni, vedere:  
  
-   [Creare un'applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)  
  
-   [Inserimento di un form in un progetto](../mfc/inserting-a-form-into-a-project.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
