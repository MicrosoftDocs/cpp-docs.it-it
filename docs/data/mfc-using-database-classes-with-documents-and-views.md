---
title: 'MFC: utilizzo di classi di database con documenti e viste'
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
ms.openlocfilehash: 9e071e0cc25492073cd74ed517284476b6e49ef8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368894"
---
# <a name="mfc-using-database-classes-with-documents-and-views"></a>MFC: utilizzo di classi di database con documenti e viste

È possibile utilizzare le classi di database MFC con o senza l'architettura documento/visualizzazione. In questo argomento viene enfatizzato l'utilizzo di documenti e visualizzazioni. Spiega:

- [Come scrivere un'applicazione basata su form](#_core_writing_a_form.2d.based_application) utilizzando un `CRecordView` oggetto come visualizzazione principale nel documento.

- [Come utilizzare gli oggetti recordset nei documenti e nelle visualizzazioni.](#_core_using_recordsets_in_documents_and_views)

- [Altre considerazioni](#_core_other_factors).

Per altre alternative, vedere [MFC: utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).

## <a name="writing-a-form-based-application"></a><a name="_core_writing_a_form.2d.based_application"></a>Scrittura di un'applicazione basata su form

Molte applicazioni di accesso ai dati sono basate su moduli. L'interfaccia utente è un modulo contenente i controlli in cui l'utente esamina, immette o modifica i dati. Per rendere il form di `CRecordView`applicazione basato, utilizzare la classe . Quando si esegue la Creazione guidata applicazione MFC e selezionare `CRecordView` il tipo di client **ODBC** nella pagina Supporto **Database,** il progetto utilizza per la classe di visualizzazione.

In un'applicazione basata su form, ogni `CRecordset` oggetto visualizzazione record archivia un puntatore a un oggetto. Il meccanismo di scambio di campi di record (RFX) del framework scambia i dati tra il recordset e l'origine dati. Il meccanismo DDX (Dialog Data Exchange) scambia i dati tra i membri dati di campo dell'oggetto recordset e i controlli nel form. `CRecordView`fornisce inoltre funzioni di gestione dei comandi predefinite per lo spostamento da un record all'altro nel modulo.

Per creare un'applicazione basata su form con la creazione guidata applicazione, vedere Creazione di una creazione guidata database di applicazioni [MFC](../mfc/reference/database-support-mfc-application-wizard.md) [basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) .

Per una descrizione completa dei moduli, vedere [Visualizzazioni di record](../data/record-views-mfc-data-access.md).

## <a name="using-recordsets-in-documents-and-views"></a><a name="_core_using_recordsets_in_documents_and_views"></a>Utilizzo di oggetti recordset in documenti e visualizzazioni

Molte semplici applicazioni basate su moduli non hanno bisogno di documenti. Se l'applicazione è più complessa, è probabile che si desideri `CDatabase` utilizzare un documento come proxy per il database, archiviando un oggetto che si connette all'origine dati. Le applicazioni basate su form archiviano in genere un puntatore a un oggetto recordset nella visualizzazione. Altri tipi di applicazioni di `CDatabase` database archiviano recordset e oggetti nel documento. Di seguito sono riportate alcune possibilità per l'utilizzo di documenti nelle applicazioni di database:Here are some possibilities for using documents in database applications:

- Se si accede a un recordset in `CRecordset` un contesto locale, creare un oggetto localmente nelle funzioni membro del documento o della visualizzazione, in base alle esigenze.

   Dichiarare un oggetto recordset come variabile locale in una funzione. Passare NULL al costruttore, che fa sì `CDatabase` che il framework per creare e aprire un oggetto temporaneo per l'utente. In alternativa, passare un `CDatabase` puntatore a un oggetto. Utilizzare il recordset all'interno della funzione e lasciare che venga eliminato automaticamente alla chiusura della funzione.

   Quando si passa NULL a un costruttore di recordset, `GetDefaultConnect` il framework utilizza `CDatabase` le informazioni restituite dalla funzione membro del recordset per creare un oggetto e aprirlo. Le procedure `GetDefaultConnect` guidate implementano per l'utente.

- Se si accede a un recordset durante la durata `CRecordset` del documento, incorporare uno o più oggetti nel documento.

   Costruire gli oggetti recordset quando si inizializza il documento o in base alle esigenze. È possibile scrivere una funzione che restituisce un puntatore al recordset se esiste già o costruisce e apre il recordset se non esiste ancora. Chiudere, eliminare e ricreare il recordset in `Requery` base alle esigenze oppure chiamare la relativa funzione membro per aggiornare i record.

- Se si accede a un'origine dati durante la `CDatabase` durata del documento, `CDatabase` incorporare un oggetto o memorizzarvi un puntatore a un oggetto.

   L'oggetto `CDatabase` gestisce una connessione all'origine dati. L'oggetto viene costruito automaticamente durante la `Open` costruzione del documento e si chiama la relativa funzione membro quando si inizializza il documento. Quando si creano oggetti recordset nelle funzioni membro del documento, si passa un puntatore all'oggetto del `CDatabase` documento. In questo modo ogni recordset viene associato alla relativa origine dati. L'oggetto di database viene in genere eliminato alla chiusura del documento. Gli oggetti recordset vengono in genere eliminati quando escono dall'ambito di una funzione.

## <a name="other-factors"></a><a name="_core_other_factors"></a>Altri fattori

Le applicazioni basate su form spesso non utilizzano il meccanismo di serializzazione dei documenti del framework, pertanto è possibile rimuovere, disabilitare o sostituire i comandi **Nuovo** e **Apri** del menu **File.** Vedere l'articolo [Serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md).

È anche possibile utilizzare le numerose possibilità dell'interfaccia utente che il framework è in grado di supportare. Ad esempio, è `CRecordView` possibile utilizzare più oggetti in una finestra con separatore, aprire più recordset in diverse finestre figlio di interfaccia a documenti multipli (MDI) e così via.

Potresti voler implementare la stampa di tutto ciò che `CRecordView` è nella tua vista, sia che si tratti di un modulo implementato con o qualcos'altro. Poiché le `CFormView` `CRecordView` classi derivate da , non `OnPrint` supportano la stampa, ma è possibile eseguire l'override della funzione membro per consentire la stampa. Per ulteriori informazioni, vedere la classe [CFormView](../mfc/reference/cformview-class.md).

È possibile che non si desideri utilizzare documenti e visualizzazioni. In tal caso, vedere MFC: utilizzo di classi di [database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).

## <a name="see-also"></a>Vedere anche

[Classi di database MFC](../data/mfc-database-classes-odbc-and-dao.md)
