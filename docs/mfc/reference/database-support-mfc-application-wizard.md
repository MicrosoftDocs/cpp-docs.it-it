---
title: Supporto database, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.database
helpviewer_keywords:
- MFC Application Wizard, database support
ms.assetid: 9ddf4558-fd41-4ac7-8d9b-c93d9c68ab59
ms.openlocfilehash: a1e0519e1351a48bbd969168d62f163c9dde7e7e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57259958"
---
# <a name="database-support-mfc-application-wizard"></a>Supporto database, Creazione guidata applicazione MFC

Questa pagina fornisce le opzioni che consentono di specificare il livello di database supportano (oltre a un'origine dati, se necessario) per il progetto.

- **Supporto database**

   Imposta il livello di supporto di database per il progetto.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**None**|Non offre alcun supporto del database. Questa è l'opzione predefinita.|
   |**Solo i file di intestazione**|Fornisce il livello di base del supporto di database per l'applicazione. Se si seleziona il supporto ODBC in **tipo di Client**, la creazione guidata applicazione MFC include nel progetto il file di intestazione AFXDB. H. Aggiunge le librerie di collegamento, ma non crea tutte le classi specifiche del database. È possibile creare set di record in un secondo momento e usarli per esaminare e aggiornare i record. Se si seleziona il supporto OLE DB sotto **tipo di Client**, sono inclusi i file di intestazione seguente: ATLBASE. AFXOLEDB H. FILE ATLPLUS H. H|
   |**Visualizzazione database senza supporto file**|Include i file di intestazione di database, le librerie di collegamento, una visualizzazione di record e un set di record. (Disponibile solo per le applicazioni con il **supporto per l'architettura documento/visualizzazione** opzione selezionata nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina.) Questa opzione include il supporto dei documenti, ma non per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|
   |**Vista di database con supporto file**|Include i file di intestazione di database, le librerie di collegamento, una visualizzazione di record e un set di record. (Disponibile solo per le applicazioni con il **supporto per l'architettura documento/visualizzazione** opzione selezionata nel **tipo di applicazione** pagina.) Questa opzione supporta la serializzazione di documenti, che è possibile usare, ad esempio, per aggiornare un file del profilo utente. Le applicazioni di database è in genere funzionano in base al record anziché su un file per ogni singolo e pertanto non è necessaria la serializzazione. Tuttavia, è possibile un utilizzo speciale per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|

   > [!NOTE]
   > Sotto **il Database supporta**, se si seleziona una **vista senza supporto per file di Database** oppure **vista con supporto per file di Database**, la derivazione della classe di visualizzazione varia in base Nel **tipo di Client** selezione, come indicato di seguito:

   - Se si seleziona **ODBC** sotto **tipo di Client**, quindi la classe di visualizzazione dell'applicazione deriva da [CRecordView](../../mfc/reference/crecordview-class.md). Questa classe è associata a un [CRecordset](../../mfc/reference/crecordset-class.md)-derivata, crea anche la creazione guidata applicazione MFC per l'utente. Questa opzione offre un'applicazione basata su form in cui la visualizzazione di record è utilizzata per visualizzare e aggiornare i record tramite il recordset.

   - Se si seleziona **OLE DB** sotto **tipo di Client**, quindi la classe di visualizzazione deriva da [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), e questo è associato un [CTable](../../data/oledb/ctable-class.md) oppure [CCommand](../../data/oledb/ccommand-class.md)-classe derivata.

- **Tipo di client**

   Indica se il progetto usa le classi OLE DB o ODBC.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**OLE DB**|Quando questa opzione è selezionata, fare clic sui **Zdroj dat** quest'ultimo richiama il **proprietà di Data Link** procedura guidata per creare una connessione a un'origine dati OLE DB.|
   |**ODBC**|Quando questa opzione è selezionata, fare clic sui **Zdroj dat** quest'ultimo richiama il **Seleziona origine dati** procedura guidata per creare una connessione a un'origine dati ODBC.|

- **Origine dati**

   Scegliere il **Zdroj dat** pulsante per configurare un'origine dati utilizzando il driver specificato o un provider e un database. Se è stato selezionato OLE DB nel **tipo di Client** viene visualizzato questo pulsante di opzione, il **proprietà di Data Link** nella finestra di dialogo. Se si seleziona ODBC nel **tipo di Client** fornisce questo pulsante di opzione il **Seleziona origine dati** nella finestra di dialogo. Questa opzione è disponibile solo se si sceglie di includere una vista di database nell'applicazione.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Proprietà Data Link** (OLE DB)|Stabilisce l'origine dati specificata utilizzando il provider OLE DB specificato. È necessario specificare il provider OLE DB, la posizione dei dati, l'origine dati, l'ID di accesso e (facoltativamente) una password. Per informazioni dettagliate su questa finestra di dialogo, vedere **zdroj dat** nelle [Creazione guidata Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).|
   |**Selezionare l'origine dati** (ODBC)|Stabilisce l'origine dati specificata tramite il driver ODBC specificato. È necessario selezionare un nome dell'origine dati per scegliere una tabella per l'origine dati. La procedura guidata associa tutte le colonne della tabella per le variabili membro di un `CRecordset`-classe derivata. Per informazioni dettagliate su questa finestra di dialogo, vedere **zdroj dat** nelle [Creazione guidata Consumer ODBC MFC](../../mfc/reference/mfc-odbc-consumer-wizard.md).|

   > [!NOTE]
   > Nelle versioni precedenti, facendo clic MAIUSC i **Zdroj dat** pulsante aperta una finestra di dialogo Apri File per consentire di selezionare un file di Data Link (UDL). Questa funzionalità non è più supportata.

- **Genera classe database con attributi**

   È disponibile per solo i client OLE DB. Specifica se le classi di database nel progetto generato usano gli attributi.

- **Associare tutte le colonne**

   È disponibile per solo i client ODBC. Specifica se sono associate tutte le colonne della tabella selezionata. Se si seleziona questa casella, tutte le colonne sono associate. Se non si seleziona questa casella, viene associata alcuna colonna, e necessario associare manualmente nella classe recordset.

- **Type**

   È disponibile per solo i client ODBC. Specifica se il recordset è di tipo snapshot o snapshot, come descritto nella tabella seguente.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Dynaset**|Specifica che il recordset è di tipo snapshot. Tipo snapshot è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un memorizza nella cache solo un indice integrale per i dati originali e ottenere pertanto offre un prestazioni su uno snapshot. L'indice fa riferimento direttamente a ogni record trovato come risultato di una query e indica se un record viene rimosso. È possibile accedere a informazioni aggiornate nei record sottoposto a query.|
   |**Snapshot**|Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query ed è una vista in un database a un certo punto nel tempo. Tutti i record trovati come risultato della query vengono memorizzati nella cache, in modo che tutte le modifiche ai record originale non viene visualizzata.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
