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
ms.openlocfilehash: e2b073b20b9518667b43c30e7ee3199a84a3ad38
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213382"
---
# <a name="mfc-using-database-classes-with-documents-and-views"></a>MFC: utilizzo di classi di database con documenti e viste

È possibile utilizzare le classi di database MFC con o senza l'architettura documento/visualizzazione. In questo argomento viene evidenziato l'utilizzo di documenti e visualizzazioni. Viene illustrato quanto segue:

- [Come scrivere un'applicazione basata su form](#_core_writing_a_form.2d.based_application) usando un oggetto `CRecordView` come vista principale del documento.

- [Come usare gli oggetti recordset nei documenti e nelle visualizzazioni](#_core_using_recordsets_in_documents_and_views).

- [Altre considerazioni](#_core_other_factors).

Per le alternative, vedere [MFC: uso di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).

##  <a name="writing-a-form-based-application"></a><a name="_core_writing_a_form.2d.based_application"></a>Scrittura di un'applicazione basata su form

Molte applicazioni di accesso ai dati sono basate su moduli. L'interfaccia utente è un form contenente i controlli in cui l'utente esamina, immette o modifica i dati. Per fare in modo che il form dell'applicazione sia basato su, usare la classe `CRecordView`. Quando si esegue la creazione guidata applicazione MFC e si seleziona tipo di client **ODBC** nella pagina **supporto database** , il progetto utilizza `CRecordView` per la classe di visualizzazione.

In un'applicazione basata su form, ogni oggetto visualizzazione di record archivia un puntatore a un oggetto `CRecordset`. Il meccanismo RFX (record Field Exchange) del Framework scambia i dati tra il recordset e l'origine dati. Il meccanismo DDX (Dialog Data Exchange) scambia i dati tra i membri dati del campo dell'oggetto recordset e i controlli nel form. `CRecordView` fornisce anche le funzioni predefinite del gestore comandi per lo spostamento da record a record nel form.

Per creare un'applicazione basata su form con la creazione guidata applicazione, vedere [creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) e [supporto del database, creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).

Per una descrizione completa dei moduli, vedere [visualizzazioni di record](../data/record-views-mfc-data-access.md).

##  <a name="using-recordsets-in-documents-and-views"></a><a name="_core_using_recordsets_in_documents_and_views"></a>Utilizzo di recordset in documenti e visualizzazioni

Molte applicazioni semplici basate su form non necessitano di documenti. Se l'applicazione è più complessa, è probabile che si voglia usare un documento come proxy per il database, archiviando un `CDatabase` oggetto che si connette all'origine dati. Le applicazioni basate su form in genere archiviano un puntatore a un oggetto recordset nella visualizzazione. Altri tipi di applicazioni di database archiviano recordset e `CDatabase` oggetto nel documento. Di seguito sono riportate alcune possibilità per l'utilizzo di documenti nelle applicazioni di database:

- Se si accede a un recordset in un contesto locale, creare un oggetto `CRecordset` localmente in funzioni membro del documento o della vista, in base alle esigenze.

   Dichiarare un oggetto recordset come variabile locale in una funzione. Passare NULL al costruttore, che determina la creazione e l'apertura di un oggetto `CDatabase` temporaneo da parte del Framework. In alternativa, passare un puntatore a un oggetto `CDatabase`. Usare il recordset all'interno della funzione e lasciarlo eliminato automaticamente quando la funzione viene chiusa.

   Quando si passa NULL a un costruttore recordset, il Framework utilizza le informazioni restituite dalla funzione membro `GetDefaultConnect` del recordset per creare un oggetto `CDatabase` e aprirlo. Le procedure guidate implementano `GetDefaultConnect`.

- Se si accede a un recordset durante il ciclo di vita del documento, incorporare uno o più oggetti `CRecordset` nel documento.

   Creare gli oggetti recordset quando si inizializza il documento o in base alle esigenze. È possibile scrivere una funzione che restituisce un puntatore al recordset se esiste già o costruisce e apre il recordset se non esiste ancora. Chiudere, eliminare e ricreare il recordset in base alle esigenze oppure chiamare la relativa funzione membro `Requery` per aggiornare i record.

- Se si accede a un'origine dati durante il ciclo di vita del documento, incorporare un oggetto `CDatabase` o archiviarvi un puntatore a un oggetto `CDatabase`.

   L'oggetto `CDatabase` gestisce una connessione all'origine dati. L'oggetto viene costruito automaticamente durante la costruzione del documento e viene chiamato il relativo `Open` funzione membro quando si inizializza il documento. Quando si creano oggetti recordset nelle funzioni membro del documento, si passa un puntatore all'oggetto `CDatabase` del documento. Viene associato ogni recordset alla relativa origine dati. L'oggetto di database viene in genere eliminato definitivamente quando il documento viene chiuso. Gli oggetti recordset vengono in genere eliminati definitivamente quando escono dall'ambito di una funzione.

##  <a name="other-factors"></a><a name="_core_other_factors"></a>Altri fattori

Le applicazioni basate su form spesso non hanno alcun uso per il meccanismo di serializzazione dei documenti del Framework, quindi è possibile rimuovere, disabilitare o sostituire i comandi **nuovi** e **aperti** nel menu **file** . Vedere l'articolo [serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md).

È inoltre possibile utilizzare le numerose possibilità dell'interfaccia utente supportate dal Framework. Ad esempio, è possibile utilizzare più oggetti `CRecordView` in una finestra con separatore, aprire più recordset in finestre figlio MDI (Multiple Document Interface) diverse e così via.

Potrebbe essere necessario implementare la stampa di qualsiasi elemento nella propria visualizzazione, sia che si tratti di un modulo implementato con `CRecordView` o altro. Poiché le classi derivate da `CFormView`, `CRecordView` non supporta la stampa, ma è possibile eseguire l'override della funzione membro `OnPrint` per consentire la stampa. Per ulteriori informazioni, vedere la classe [CFormView](../mfc/reference/cformview-class.md).

È possibile che non si desideri utilizzare documenti e visualizzazioni. In tal caso, vedere [MFC: utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).

## <a name="see-also"></a>Vedere anche

[Classi di database MFC](../data/mfc-database-classes-odbc-and-dao.md)
