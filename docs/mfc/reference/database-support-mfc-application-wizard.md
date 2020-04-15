---
title: Supporto database, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.database
helpviewer_keywords:
- MFC Application Wizard, database support
ms.assetid: 9ddf4558-fd41-4ac7-8d9b-c93d9c68ab59
ms.openlocfilehash: c13d56d2fee45e130aba81168188bec6d8828d51
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365885"
---
# <a name="database-support-mfc-application-wizard"></a>Supporto database, Creazione guidata applicazione MFC

In questa pagina sono disponibili opzioni che consentono di specificare il livello di supporto del database (più un'origine dati, se necessario) per il progetto.

- **Supporto per database**

   Imposta il livello di supporto del database per il progetto.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Nessuno**|Non fornisce alcun supporto per il database. Questa è l'opzione predefinita.|
   |**Solo file di intestazione**|Fornisce il livello di base del supporto del database per l'applicazione. Se si seleziona il supporto ODBC in **Tipo client**, la Creazione guidata applicazione MFC include nel progetto il file di intestazione AFXDB. H. Aggiunge librerie di collegamento, ma non crea classi specifiche del database. È possibile creare recordset in un secondo momento e utilizzarli per esaminare e aggiornare i record. Se si seleziona Supporto OLE DB in **Tipo di client**, vengono inclusi i seguenti file di intestazione: ATLBASE. H AFXOLEDB. H ATLPLUS. H|
   |**Vista database senza supporto file**|Include file di intestazione del database, librerie di collegamenti, una visualizzazione di record e un recordset. (Disponibile solo per le applicazioni con l'opzione **Supporto architettura documento/visualizzazione** selezionata nella pagina [Tipo di applicazione).](../../mfc/reference/application-type-mfc-application-wizard.md) Questa opzione include il supporto del documento, ma non il supporto della serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|
   |**Vista database con supporto file**|Include file di intestazione del database, librerie di collegamenti, una visualizzazione di record e un recordset. (Disponibile solo per le applicazioni con l'opzione **Supporto architettura documento/visualizzazione** selezionata nella pagina **Tipo di applicazione).** Questa opzione supporta la serializzazione dei documenti, che è possibile utilizzare, ad esempio, per aggiornare un file del profilo utente. Le applicazioni di database in genere operano in base al record anziché in base al file e pertanto non richiedono la serializzazione. Tuttavia, potrebbe essere un uso speciale per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|

   > [!NOTE]
   > In **Supporto database**, se si seleziona Visualizzazione database senza supporto file o Visualizzazione **file** **con supporto file**, la derivazione della classe di visualizzazione varia a seconda della selezione del tipo di **client,** come indicato di seguito:

  - Se si seleziona **ODBC** in **Tipo client**, la classe di visualizzazione dell'applicazione deriva da [CRecordView](../../mfc/reference/crecordview-class.md). Questa classe è associata a una classe derivata da [CRecordset,](../../mfc/reference/crecordset-class.md)che anche la Creazione guidata applicazione MFC crea automaticamente. Questa opzione offre un'applicazione basata su moduli in cui la visualizzazione di record viene utilizzata per visualizzare e aggiornare i record tramite il relativo recordset.

  - Se si seleziona **OLE DB** in **Tipo client**, la classe di visualizzazione deriva da [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)ed è associata a una classe derivata da [CTable](../../data/oledb/ctable-class.md) o [CCommand](../../data/oledb/ccommand-class.md).

- **Tipo di client**

   Indica se il progetto utilizza classi OLE DB o ODBC.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**OLE DB**|Quando questa opzione è selezionata, facendo clic sul pulsante **Origine dati** viene richiamata la procedura guidata Proprietà di **Data Link** per creare una connessione a un'origine dati OLE DB.|
   |**ODBC**|Quando questa opzione è selezionata, facendo clic sul pulsante **Origine dati** viene richiamata la procedura guidata Seleziona **origine dati** per creare una connessione a un'origine dati ODBC.|

- **Origine dati**

   > [!NOTE]
   > La procedura guidata del consumer OLE DB ATL e la procedura guidata Consumer ODBC MFC non sono disponibili in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](../../data/oledb/creating-a-consumer-without-using-a-wizard.md).

   Fare clic sul pulsante **Origine dati** per impostare un'origine dati utilizzando il driver o il provider e il database specificati. Se è stato selezionato OLE DB nell'opzione **Tipo di** client, questo pulsante visualizza la finestra di dialogo Proprietà di **Data Link.** Se è stato selezionato ODBC per **Tipo di** client opzione, questo pulsante fornisce il Seleziona **origine dati** la finestra di dialogo. Questa opzione è disponibile solo se si sceglie di includere una vista di database nell'applicazione.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Proprietà di Data Link** (OLE DB)|Stabilisce l'origine dati specificata utilizzando il provider OLE DB specificato. È necessario specificare il provider OLE DB, il percorso dei dati, l'origine dati, l'ID di accesso e (facoltativamente) una password. Per informazioni dettagliate su questa finestra di dialogo, vedere **Origine dati** nella Creazione guidata [consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).|
   |**Seleziona origine dati** (ODBC)|Stabilisce l'origine dati specificata utilizzando il driver ODBC specificato. È necessario selezionare un nome di origine dati per scegliere una tabella per l'origine dati. La procedura guidata associa tutte le colonne della `CRecordset`tabella alle variabili membro di una classe derivata. Per informazioni dettagliate su questa finestra di dialogo, vedere **Origine dati** nella Creazione guidata consumer [ODBC MFC](../../mfc/reference/mfc-odbc-consumer-wizard.md).|

- **Genera classe di database con attributi**

   Disponibile solo per il client OLE DB. Specifica se le classi di database nel progetto generato utilizzano gli attributi.

- **Associare tutte le colonne**

   Disponibile solo per il client ODBC. Specifica se tutte le colonne della tabella selezionata sono associate. Se si seleziona questa casella, tutte le colonne vengono associate; Se non si seleziona questa casella, non viene associata alcuna colonna ed è necessario associarle manualmente nella classe recordset.

- **Tipo**

   Disponibile solo per il client ODBC. Specifica se il recordset è un dynaset o uno snapshot, come descritto nella tabella seguente.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Dynaset**|Specifica che il recordset è un dynaset. Un dynaset è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un dynaset memorizza nella cache solo un indice integrale dei dati originali e offre quindi un miglioramento delle prestazioni rispetto a uno snapshot. L'indice punta direttamente a ogni record trovato come risultato di una query e indica se un record viene rimosso. È inoltre possibile accedere alle informazioni aggiornate nei record sottoposti a query.|
   |**Snapshot**|Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query ed è una vista in un database in un unico momento. Tutti i record trovati come risultato della query vengono memorizzati nella cache, pertanto non vengono visualizzate modifiche ai record originali.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
