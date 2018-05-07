---
title: Modulo di visualizzazioni (MFC) | Documenti Microsoft
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
ms.openlocfilehash: 87775c8afa1fa6eec8fbbdbbaa11bc9b5e6f1faa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="form-views-mfc"></a>Visualizzazioni Maschera (MFC)
È possibile aggiungere forme a qualsiasi applicazione Visual C++ che supporti le librerie MFC, tra cui un [applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) (uno cui visualizzazione viene derivata da `CFormView`). Se non è stato inizialmente creato l'applicazione per supportare i form, Visual C++ aggiungerà questo supporto per l'utente quando si inserisce un nuovo modulo. In un'applicazione SDI o MDI, che implementa il valore predefinito [architettura documento/visualizzazione](../mfc/document-view-architecture.md), quando l'utente sceglie il `New` comando (per impostazione predefinita, nel **File** menu), Visual C++ richiede all'utente Scegliere uno dei form disponibili.  
  
 Con un'applicazione SDI, quando l'utente sceglie il `New` comando, l'istanza corrente del modulo continua a eseguire ma se non viene trovata, viene creata una nuova istanza dell'applicazione con il modulo selezionato. In un'applicazione MDI, l'istanza corrente del modulo continua a eseguire quando l'utente sceglie il `New` comando.  
  
> [!NOTE]
>  È possibile inserire un form in un'applicazione basata su finestra di dialogo (la cui classe della finestra di dialogo è basato su uno `CDialog` e uno in cui nessuna visualizzazione classe è implementata). Tuttavia, senza l'architettura documento/visualizzazione, Visual C++ non implementare automaticamente i **File**&#124;**New** funzionalità. È necessario creare un modo per l'utente visualizzare ulteriori forme, ad esempio mediante l'implementazione di una finestra di dialogo a schede con varie pagine delle proprietà.  
  
 Quando si inserisce un nuovo form nell'applicazione, Visual C++ esegue le operazioni seguenti:  
  
-   Crea una classe basata su una delle classi di stile di modulo che si sceglie (`CFormView`, `CRecordView`, `CDaoRecordView`, o `CDialog`).  
  
-   Crea una risorsa finestra di dialogo con stili appropriati (o è possibile utilizzare una risorsa finestra di dialogo esistente che non è ancora stata associata a una classe).  
  
     Se si sceglie una risorsa finestra di dialogo esistente, si potrebbe essere necessario impostare gli stili utilizzando la pagina delle proprietà per la finestra di dialogo. Gli stili per una finestra di dialogo devono includere:  
  
     **WS_CHILD**= On  
  
     `WS_BORDER`= Off  
  
     **WS_VISIBLE**= Off  
  
     **WS_CAPTION =** Off  
  
 Per le applicazioni in base all'architettura documento/visualizzazione, il **nuovo modulo** comando (pulsante destro del mouse in visualizzazione classi) inoltre:  
  
-   Crea un **CDocument**-classe di base  
  
     Anziché una nuova classe creata, è possibile utilizzare qualsiasi esistente **CDocument**-basato su classe nel progetto.  
  
-   Genera un modello di documento (derivato da **CDocument**) con le risorse di stringa, menu e icona.  
  
     È anche possibile creare una nuova classe su cui basare il modello.  
  
-   Aggiunge una chiamata a **AddDocumentTemplate** dell'applicazione `InitInstance` codice.  
  
     Visual C++ aggiunge questo codice per ogni nuovo form si crea, aggiunge il form all'elenco dei moduli disponibili quando l'utente sceglie il `New` comando. Questo codice include l'ID di risorsa associata del form e i nomi delle classi di frame che insieme costituiscono il nuovo oggetto modulo, visualizzazione e documento associato.  
  
     Modelli di documento può essere utilizzato come connessione tra documenti, finestre cornice e viste. Per un singolo documento, è possibile creare molti modelli.  
  
 Per altre informazioni, vedere:  
  
-   [Creare un'applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)  
  
-   [Inserimento di un form in un progetto](../mfc/inserting-a-form-into-a-project.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
