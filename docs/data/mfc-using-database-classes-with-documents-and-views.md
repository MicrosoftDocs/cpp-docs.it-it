---
title: 'MFC: Utilizzo di classi di Database con documenti e visualizzazioni | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- documents [C++], database applications
- recordsets [C++], documents and views
- CRecordView class, using in database forms
- views [C++], database applications
- forms [C++], database applications
- record views [C++], form-based applications
- document/view architecture [C++], in databases
- database applications [C++], forms
- database classes [C++], MFC
- ODBC recordsets [C++], documents and views
- ODBC [C++], forms
ms.assetid: 83979974-fc63-46ac-b162-e8403a572e2c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: fcaee376b53c1d592f02aafc830a35d72f64feeb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-using-database-classes-with-documents-and-views"></a>MFC: utilizzo di classi di database con documenti e viste
È possibile utilizzare le classi di database MFC con o senza l'architettura documento/visualizzazione. In questo argomento viene descritto l'utilizzo di documenti e visualizzazioni. Viene spiegato:  
  
-   [Come scrivere un'applicazione basata su form](#_core_writing_a_form.2d.based_application) utilizzando un `CRecordView` oggetto come la visualizzazione principale nel documento.  
  
-   [Come utilizzare gli oggetti recordset in documenti e visualizzazioni](#_core_using_recordsets_in_documents_and_views).  
  
-   [Altre considerazioni](#_core_other_factors).  
  
 Per alternative, vedere [MFC: utilizzo di classi di Database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).  
  
##  <a name="_core_writing_a_form.2d.based_application"></a> Scrittura di un'applicazione basata su Form  
 Molte applicazioni di accesso ai dati sono basate su moduli. L'interfaccia utente è un form contenente controlli in cui l'utente esamina, immette o modifica i dati. Affinché un'applicazione sui form, utilizzare classe `CRecordView`. Quando si esegue la creazione guidata applicazione MFC e si seleziona **ODBC** tipo di client nella **supporto Database** pagina, il progetto utilizza `CRecordView` per la classe di visualizzazione.
  
 In un'applicazione basata su form, ogni oggetto visualizzazione record archivia un puntatore a un `CRecordset` oggetto. Il meccanismo del framework di campi di record (RFX) exchange scambia dati tra il recordset e l'origine dati. Il dialog data exchange (DDX) meccanismo scambia dati tra i membri di dati del campo dell'oggetto recordset e i controlli nel form. `CRecordView` fornisce inoltre predefinite di funzioni gestore comandi per lo spostamento da un record a altro nel form.  
  
 Per creare un'applicazione basata su form con la creazione guidata applicazione, vedere [creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) e [supporto Database, creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).  
  
 Per una descrizione completa dei form, vedere [visualizzazioni di Record](../data/record-views-mfc-data-access.md).  
  
##  <a name="_core_using_recordsets_in_documents_and_views"></a> Utilizzo di recordset in documenti e visualizzazioni  
 Molte semplici applicazioni basate su form non è necessario documenti. Se l'applicazione è più complesso, consigliabile utilizzare un documento come proxy per il database, per memorizzare un `CDatabase` oggetto che si connette all'origine dati. Le applicazioni basate su form includono in genere un puntatore a un oggetto recordset nella visualizzazione. Altri tipi di applicazioni di database includono recordset e `CDatabase` oggetto nel documento. Di seguito sono riportate alcune possibili cause per l'utilizzo di documenti in applicazioni di database:  
  
-   Se si accede a un recordset in un contesto locale, creare un `CRecordset` dell'oggetto locale nelle funzioni membro del documento o la visualizzazione, in base alle esigenze.  
  
     Dichiarare un oggetto recordset come una variabile locale in una funzione. Passare **NULL** al costruttore, che comporta il framework creare e aprire una memoria temporanea `CDatabase` oggetto. In alternativa, passare un puntatore a un `CDatabase` oggetto. Utilizzare il recordset all'interno della funzione e lasciare che venga eliminato automaticamente al termine della funzione.  
  
     Quando si passa **NULL** a un costruttore del recordset, il framework utilizza le informazioni restituite dal recordset `GetDefaultConnect` funzione membro per creare un `CDatabase` dell'oggetto e aprirlo. Implementano le procedure guidate `GetDefaultConnect` automaticamente.  
  
-   Se si accede a un recordset durante il ciclo di vita del documento, è necessario incorporare uno o più `CRecordset` oggetti nel documento.  
  
     Creare gli oggetti recordset quando si inizializza il documento o in base alle esigenze. È possibile scrivere una funzione che restituisce un puntatore al recordset, se già esistente o crea e apre il recordset, se non esiste ancora. Chiudere, eliminare e ricreare il recordset in base alle esigenze o chiamare il relativo **Requery** funzione membro per aggiornare i record.  
  
-   Se si accede a un'origine dati durante il ciclo di vita del documento, è necessario incorporare un `CDatabase` dell'oggetto o archiviare un puntatore a un `CDatabase` oggetti in essa contenuti.  
  
     Il `CDatabase` gestisce una connessione all'origine dati. L'oggetto viene creato automaticamente durante la creazione di documenti e si chiama il relativo **aprire** funzione membro quando si inizializza il documento. Quando si creano oggetti recordset nelle funzioni membro di documenti, passare un puntatore al documento `CDatabase` oggetto. Questo associa ogni oggetto recordset con l'origine dati. L'oggetto di database viene in genere eliminato alla chiusura del documento. Gli oggetti recordset in genere vengono eliminati quando escono dall'ambito di una funzione.  
  
##  <a name="_core_other_factors"></a> Altri fattori  
 Applicazioni basate su form non sono in genere utili per meccanismo di serializzazione del documento del framework, pertanto si consiglia di rimuovere, disabilitare o sostituire il `New` e **aprire** comandi il **File**menu. Vedere l'articolo [serializzazione: serializzazione e. Database di Input/Output](../mfc/serialization-serialization-vs-database-input-output.md).  
  
 È inoltre possibile rendere utilizzare le numerose possibilità dell'interfaccia utente in grado di supportare il framework. Ad esempio, è possibile utilizzare più `CRecordView` gli oggetti in una finestra con separatore, aprire più recordset in diversi più finestre figlio MDI (interfaccia) del documento e così via.  
  
 Si consiglia di implementare la stampa delle informazioni presenti nella propria visualizzazione, se si tratta di un form è implementato con `CRecordView` o altri valori. Come le classi derivate da `CFormView`, `CRecordView` supportano la stampa, ma è possibile eseguire l'override di `OnPrint` funzione membro per consentire la stampa. Per ulteriori informazioni, vedere la classe [CFormView](../mfc/reference/cformview-class.md).  
  
 Potrebbe non desidera utilizzare i documenti e visualizzazioni. In tal caso, vedere [MFC: utilizzo di classi di Database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di Database MFC (... / data/mfc-database-classes-odbc-and-dao.md)