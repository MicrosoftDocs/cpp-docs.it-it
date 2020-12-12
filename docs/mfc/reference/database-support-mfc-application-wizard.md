---
description: 'Ulteriori informazioni su: supporto del database, creazione guidata applicazione MFC'
title: Supporto database, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.database
helpviewer_keywords:
- MFC Application Wizard, database support
ms.assetid: 9ddf4558-fd41-4ac7-8d9b-c93d9c68ab59
ms.openlocfilehash: 4c6f980155e980c772b5ee78f83c80a236998b91
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220305"
---
# <a name="database-support-mfc-application-wizard"></a>Supporto database, Creazione guidata applicazione MFC

In questa pagina sono disponibili opzioni che consentono di specificare il livello di supporto del database (oltre a un'origine dati, se necessario) per il progetto.

- **Supporto del database**

   Imposta il livello di supporto del database per il progetto.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Nessuno**|Non fornisce supporto per i database. Questa è l'opzione predefinita.|
   |**Solo file di intestazione**|Fornisce il livello di base del supporto del database per l'applicazione. Se si seleziona supporto ODBC in **tipo di client**, la creazione guidata applicazione MFC include nel progetto il file di intestazione AFXDB. H. Aggiunge librerie di collegamento, ma non crea classi specifiche del database. È possibile creare recordset in un secondo momento e utilizzarli per esaminare e aggiornare i record. Se si seleziona OLE DB supporto in **tipo di client**, sono inclusi i file di intestazione seguenti: ATLBASE. AFXOLEDB H. ATLPLUS H. H|
   |**Visualizzazione database senza supporto file**|Include i file di intestazione del database, le librerie di collegamento, una visualizzazione di record e un recordset. Disponibile solo per le applicazioni con l'opzione di **supporto architettura documento/visualizzazione** selezionata nella pagina [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) . Questa opzione include il supporto per i documenti ma senza supporto per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|
   |**Visualizzazione database con supporto file**|Include i file di intestazione del database, le librerie di collegamento, una visualizzazione di record e un recordset. Disponibile solo per le applicazioni con l'opzione di **supporto architettura documento/visualizzazione** selezionata nella pagina **tipo di applicazione** . Questa opzione supporta la serializzazione dei documenti, che è possibile usare, ad esempio, per aggiornare un file di profilo utente. Le applicazioni di database in genere operano in base ai singoli record anziché ai singoli file e pertanto non necessitano di serializzazione. Tuttavia, è possibile che si disponga di un uso speciale per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|

   > [!NOTE]
   > In **supporto database**, se si seleziona **visualizzazione database senza supporto file** o **visualizzazione database con supporto file**, la derivazione della classe di visualizzazione è diversa, a seconda della selezione del **tipo di client** , come indicato di seguito:

  - Se si seleziona **ODBC** in **tipo di client**, la classe di visualizzazione dell'applicazione deriva da [CRecordView](../../mfc/reference/crecordview-class.md). Questa classe è associata a una classe derivata da [CRecordset](../../mfc/reference/crecordset-class.md), creata anche dalla creazione guidata applicazione MFC. Questa opzione offre un'applicazione basata su form in cui la visualizzazione dei record viene utilizzata per visualizzare e aggiornare i record tramite il relativo recordset.

  - Se si seleziona **OLE DB** in **tipo di client**, la classe di visualizzazione deriva da [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)ed è associata a una classe derivata da [CTable](../../data/oledb/ctable-class.md) o [CCommand](../../data/oledb/ccommand-class.md).

- **Tipo di client**

   Indica se il progetto utilizza OLE DB o classi ODBC.

   |Opzione|Description|
   |------------|-----------------|
   |**OLE DB**|Quando questa opzione è selezionata, facendo clic sul pulsante **origine dati** viene richiamata la creazione guidata **proprietà di data link** per semplificare la creazione di una connessione a un'origine dati OLE DB.|
   |**ODBC**|Quando questa opzione è selezionata, facendo clic sul pulsante **origine dati** viene richiamata la procedura guidata **Seleziona origine dati** che consente di creare una connessione a un'origine dati ODBC.|

- **Origine dati**

   > [!NOTE]
   > La creazione guidata consumer OLE DB ATL e la creazione guidata consumer ODBC MFC non sono disponibili in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](../../data/oledb/creating-a-consumer-without-using-a-wizard.md).

   Fare clic sul pulsante **origine dati** per configurare un'origine dati utilizzando il driver, il provider e il database specificati. Se è stata selezionata l'opzione OLE DB nell'opzione **tipo di client** , questo pulsante consente di visualizzare la finestra di dialogo **proprietà di data link** . Se si seleziona ODBC nell'opzione **tipo di client** , questo pulsante fornisce la finestra di dialogo **Seleziona origine dati** . Questa opzione è disponibile solo se si sceglie di includere una vista di database nell'applicazione.

   |Opzione|Description|
   |------------|-----------------|
   |**Proprietà di data link** (OLE DB)|Stabilisce l'origine dati specificata utilizzando il provider di OLE DB specificato. È necessario specificare il provider di OLE DB, il percorso dei dati, l'origine dati, l'ID di accesso e, facoltativamente, una password. Per informazioni dettagliate su questa finestra di dialogo, vedere **Data Source** in [ATL OLE DB consumer Wizard](../../atl/reference/atl-ole-db-consumer-wizard.md).|
   |**Selezione origine dati** (ODBC)|Stabilisce l'origine dati specificata utilizzando il driver ODBC specificato. È necessario selezionare un nome di origine dati per scegliere una tabella per l'origine dati. La procedura guidata associa tutte le colonne della tabella alle variabili membro di una `CRecordset` classe derivata da. Per informazioni dettagliate su questa finestra di dialogo, vedere **origine dati** in [creazione guidata consumer ODBC MFC](../../mfc/reference/mfc-odbc-consumer-wizard.md).|

- **Genera classe database con attributi**

   Disponibile solo per OLE DB client. Specifica se le classi di database nel progetto generato utilizzano gli attributi.

- **Associa tutte le colonne**

   Disponibile solo per client ODBC. Specifica se sono associate tutte le colonne della tabella selezionata. Se si seleziona questa casella, verranno associate tutte le colonne; Se non si seleziona questa casella, nessuna colonna viene associata ed è necessario associarle manualmente nella classe recordset.

- **Tipo**

   Disponibile solo per client ODBC. Specifica se il recordset è un dynaset o uno snapshot, come descritto nella tabella seguente.

   |Opzione|Description|
   |------------|-----------------|
   |**Dynaset**|Specifica che il recordset è un dynaset. Un dynaset è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un dynaset memorizza nella cache solo un indice integrale per i dati originali e pertanto offre un miglioramento delle prestazioni in uno snapshot. L'indice punta direttamente a ogni record trovato come risultato di una query e indica se un record viene rimosso. È anche possibile accedere alle informazioni aggiornate nei record sottoposti a query.|
   |**Snapshot**|Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query ed è una visualizzazione di un database in un determinato momento. Tutti i record trovati come risultato della query vengono memorizzati nella cache, pertanto non vengono visualizzate modifiche ai record originali.|

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
