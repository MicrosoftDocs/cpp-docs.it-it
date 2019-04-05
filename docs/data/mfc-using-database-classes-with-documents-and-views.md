---
title: 'MFC: Uso di classi di Database con documenti e visualizzazioni'
ms.date: 11/04/2016
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
ms.openlocfilehash: 78765d17b52889123f13c492699230834decba66
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59026292"
---
# <a name="mfc-using-database-classes-with-documents-and-views"></a>MFC: Uso di classi di Database con documenti e visualizzazioni

È possibile usare le classi di database MFC con o senza l'architettura documento/visualizzazione. In questo argomento viene descritto l'utilizzo di documenti e visualizzazioni. Viene spiegato:

- [Come scrivere un'applicazione basata su form](#_core_writing_a_form.2d.based_application) usando un `CRecordView` oggetto come la visualizzazione principale nel documento.

- [Come usare gli oggetti di recordset in documenti e visualizzazioni](#_core_using_recordsets_in_documents_and_views).

- [Altre considerazioni](#_core_other_factors).

Per alternative, vedere [MFC: Utilizzo di classi di Database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).

##  <a name="_core_writing_a_form.2d.based_application"></a> Scrittura di un'applicazione basata su Form

Molte applicazioni di accesso ai dati sono basate su form. L'interfaccia utente è un form contenente controlli in cui l'utente viene esaminato, entra o modifica i dati. Per rendere un'applicazione sui form, usare classe `CRecordView`. Quando si esegue la creazione guidata applicazione MFC e selezionare **ODBC** tipo di client sul **supporto Database** pagina, il progetto usa `CRecordView` per la classe di visualizzazione.

In un'applicazione basata su form, ogni oggetto di visualizzazione dei record archivia un puntatore a un `CRecordset` oggetto. Il meccanismo del framework di campi di record (RFX) di exchange consente di scambiare dati tra i set di record e l'origine dati. Il dialog data exchange (DDX) meccanismo scambia dati tra i membri di dati del campo dell'oggetto recordset e i controlli nel form. `CRecordView` fornisce inoltre predefinito funzioni del gestore comando per passare da un record a altro nel form.

Per creare un'applicazione basata su form con la creazione guidata applicazione, vedere [creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) e [supporto Database, creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).

Per una spiegazione completa di form, vedere [visualizzazioni di Record](../data/record-views-mfc-data-access.md).

##  <a name="_core_using_recordsets_in_documents_and_views"></a> Utilizzo di recordset in documenti e visualizzazioni

Molte semplici applicazioni basate su form non sono necessario documenti. Se l'applicazione è più complessa, probabilmente si desidera usare un documento come un proxy per il database, per memorizzare un `CDatabase` oggetto che si connette all'origine dati. Le applicazioni basata su form archiviano in genere un puntatore a un oggetto recordset nella visualizzazione. Recordset di archiviare altri tipi di applicazioni di database e `CDatabase` oggetti presenti nel documento. Di seguito sono riportate alcune possibili cause per l'uso nelle applicazioni di database di documenti:

- Se si accede a un set di record in un contesto locale, creare un `CRecordset` dell'oggetto in locale in funzioni di membro del documento o la visualizzazione, in base alle esigenze.

   Dichiarare un oggetto recordset come una variabile locale in una funzione. Passare NULL per il costruttore, in modo che il framework creare e aprire un elemento temporaneo `CDatabase` oggetto per l'utente. In alternativa, passare un puntatore a un `CDatabase` oggetto. Utilizzare il recordset all'interno della funzione e lasciare che venga eliminato automaticamente quando la funzione viene chiusa.

   Quando si passa NULL al costruttore di un recordset, il framework utilizza le informazioni restituite da del recordset `GetDefaultConnect` funzione di membro per creare un `CDatabase` dell'oggetto e aprirlo. Implementano le procedure guidate `GetDefaultConnect` automaticamente.

- Se si accede un recordset durante il ciclo di vita del documento, è necessario incorporare uno o più `CRecordset` oggetti all'interno del documento.

   Creare gli oggetti recordset durante l'inizializzazione del documento o in base alle esigenze. È possibile scrivere una funzione che restituisce un puntatore al recordset eventualmente già esistente o crea e apre il recordset se non esiste ancora. Chiudere, eliminare e ricreare il recordset in base alle esigenze o chiamare relativo `Requery` funzione membro per aggiornare i record.

- Se si accede a un'origine dati durante il ciclo di vita del documento, è necessario incorporare un' `CDatabase` dell'oggetto o archiviare un puntatore a un `CDatabase` oggetti in esso.

   Il `CDatabase` gestisce una connessione all'origine dati. L'oggetto viene creato automaticamente durante la creazione di documenti e si chiama il `Open` funzione membro quando si inizializza il documento. Quando si creano oggetti recordset nelle funzioni membro di documenti, si passa un puntatore a del documento `CDatabase` oggetto. Ciò consente di associare ogni recordset con l'origine dati. L'oggetto di database è in genere eliminato alla chiusura del documento. Gli oggetti di recordset in genere vengono eliminati definitivamente quando escono dall'ambito di una funzione.

##  <a name="_core_other_factors"></a> Altri fattori

Le applicazioni basate su form non sono in genere utili per meccanismo di serializzazione di documenti del framework, in modo che si potrebbe voler rimuovere, disabilitare o sostituire il **New** e **Open** i comandi di **File** menu. Vedere l'articolo [serializzazione: Visual Studio di serializzazione. Input/Output del database](../mfc/serialization-serialization-vs-database-input-output.md).

Si potrebbe anche voler apportare usare delle numerose possibilità dell'interfaccia utente in grado di supportare il framework. Ad esempio, è possibile usare più `CRecordView` gli oggetti in una finestra con separatore, aprire recordset multipli in diversi più finestre dei documenti (MDI) interfaccia figlio e così via.

Si potrebbe voler implementare la stampa delle informazioni presenti nella propria visualizzazione, si tratti di un form è implementato con `CRecordView` o qualsiasi altro. Come le classi derivate da `CFormView`, `CRecordView` supportano la stampa, ma è possibile eseguire l'override di `OnPrint` funzione membro per consentire la stampa. Per altre informazioni, vedere la classe [CFormView](../mfc/reference/cformview-class.md).

Non è possibile usare documenti e visualizzazioni affatto. In tal caso, vedere [MFC: Utilizzo di classi di Database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).

## <a name="see-also"></a>Vedere anche

[Classi di Database MFC](../data/mfc-database-classes-odbc-and-dao.md)