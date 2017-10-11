---
title: Supporto database, creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.database
dev_langs:
- C++
helpviewer_keywords:
- MFC Application Wizard, database support
ms.assetid: 9ddf4558-fd41-4ac7-8d9b-c93d9c68ab59
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 875df8f8205d132cf6bcafe536c221876a5e3e51
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="database-support-mfc-application-wizard"></a>Supporto database, Creazione guidata applicazione MFC
Questa pagina sono disponibili opzioni che consentono di specificare il livello di database supporta (nonché l'origine dati, se necessario) per il progetto.  
  
 **Supporto database**  
 Imposta il livello di supporto di database per il progetto.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**None**|Non fornisce alcun supporto del database. Questa è l'opzione predefinita.|  
|**Solo i file di intestazione**|Fornisce il livello di base del supporto di database per l'applicazione. Se si seleziona il supporto ODBC in **tipo Client**, la creazione guidata applicazione MFC include nel progetto il file di intestazione AFXDB. H. Aggiunge le librerie di collegamento, ma non crea tutte le classi specifiche del database. È possibile creare set di record in un secondo momento e usarli per esaminare e aggiornare i record. Se si seleziona il supporto per OLE DB in **tipo Client**, sono inclusi i seguenti file di intestazione: ATLBASE. AFXOLEDB H. FILE ATLPLUS H. H|  
|**Visualizzazione database senza supporto file**|Include i file di intestazione di database, librerie di collegamento, una visualizzazione di record e un oggetto recordset. (Disponibile solo per le applicazioni con il **Supporto architettura documento/visualizzazione** opzione selezionata nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina.) Questa opzione include il supporto dei documenti, ma non per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|  
|**Vista di database con supporto file**|Include i file di intestazione di database, librerie di collegamento, una visualizzazione di record e un oggetto recordset. (Disponibile solo per le applicazioni con il **Supporto architettura documento/visualizzazione** opzione selezionata nel **tipo di applicazione** pagina.) Questa opzione supporta la serializzazione di documenti, è possibile utilizzare, ad esempio, per aggiornare un file del profilo utente. Applicazioni di database è in genere funzionano in base al record anziché in un singolo file e non richiedono la serializzazione. Tuttavia, è possibile un utilizzo speciale per la serializzazione. Se si sceglie di includere una vista di database, è necessario specificare l'origine dei dati.|  
  
> [!NOTE]
>  In **il Database supporta**, se si seleziona una **vista Database senza supporto file** o **vista con supporto file di Database**, la derivazione della classe di visualizzazione varia in base nel **tipo Client** selezione, come indicato di seguito:  
  
-   Se si seleziona **ODBC** in **tipo Client**, quindi la classe di visualizzazione dell'applicazione deriva da [CRecordView](../../mfc/reference/crecordview-class.md). Questa classe è associata a un [CRecordset](../../mfc/reference/crecordset-class.md)-derivata, creata dalla creazione guidata applicazione MFC. Questa opzione offre un'applicazione basata su form in cui la visualizzazione dei record viene utilizzata per visualizzare e aggiornare i record mediante il relativo recordset.  
  
-   Se si seleziona **OLE DB** in **tipo Client**, quindi la classe di visualizzazione deriva da [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), ed è associata a un [CTable](../../data/oledb/ctable-class.md) o [CCommand](../../data/oledb/ccommand-class.md)-classe derivata.  
  
 **Tipo di client**  
 Indica se il progetto utilizza le classi OLE DB o ODBC.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**OLE DB**|Quando questa opzione è selezionata, fare clic su di **origine dati** pulsante richiama il **proprietà di Data Link** procedura guidata per creare una connessione a un'origine dati OLE DB.|  
|**ODBC**|Quando questa opzione è selezionata, fare clic su di **origine dati** pulsante richiama il **Seleziona origine dati** procedura guidata per creare una connessione a un'origine dati ODBC.|  
  
 **Origine dati**  
 Fare clic su di **origine dati** per impostare un'origine dati tramite il driver specificato o provider e il database. Se è stato selezionato OLE DB nel **tipo Client** Visualizza questo pulsante di opzione, il **proprietà di Data Link** la finestra di dialogo. Se si seleziona ODBC nel **tipo Client** opzione, questo pulsante consente di **Seleziona origine dati** la finestra di dialogo. Questa opzione è disponibile solo se si sceglie di includere una vista di database nell'applicazione.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Proprietà Data Link** (OLE DB)|Stabilisce l'origine dati specificata utilizzando il provider OLE DB specificato. È necessario specificare il provider OLE DB, la posizione dei dati, l'origine dati, l'ID di accesso e, facoltativamente, una password. Per informazioni dettagliate su questa finestra di dialogo, vedere **origine dati** in [la creazione guidata Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).|  
|**Selezionare l'origine dati** (ODBC)|Stabilisce l'origine dati specificata tramite il driver ODBC specificato. È necessario selezionare un nome dell'origine dati consente di selezionare una tabella per l'origine dati. La procedura guidata associa a tutte le colonne della tabella per le variabili membro di un `CRecordset`-classe derivata. Per informazioni dettagliate su questa finestra di dialogo, vedere **origine dati** in [Creazione guidata Consumer ODBC MFC](../../mfc/reference/mfc-odbc-consumer-wizard.md).|  
  
> [!NOTE]
>  Nelle versioni precedenti, fare clic su MAIUSC il **origine dati** pulsante aperta una finestra di dialogo Apri File che consente di selezionare un file di Data Link (UDL). Questa funzionalità non è più supportata.  
  
 **Generare una classe con attributi database**  
 Questa opzione è disponibile per il solo client OLE DB. Specifica se le classi di database nel progetto generato utilizzano attributi.  
  
 **Associare tutte le colonne**  
 Questa opzione è disponibile soltanto per client ODBC. Specifica se tutte le colonne della tabella selezionata sono associate. Se si seleziona questa casella, tutte le colonne sono associate. Se non si seleziona questa casella, viene associata alcuna colonna e necessario associare manualmente nella classe recordset.  
  
 **Type**  
 Questa opzione è disponibile soltanto per client ODBC. Specifica se il recordset è un dynaset o snapshot, come descritto nella tabella seguente.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Dynaset**|Specifica che il recordset è un dynaset. Un dynaset è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un memorizza nella cache solo un indice integrale ai dati originali e offre prestazioni assumere su uno snapshot. L'indice fa riferimento direttamente a ogni record ottenuti come risultato di una query e indica se un record viene rimosso. È possibile accedere alle informazioni aggiornate nei record di query.|  
|Snapshot|Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query e costituisce una vista di un database in un determinato punto nel tempo. Tutti i record ottenuti come risultato della query vengono memorizzati nella cache, in modo che non tutte le modifiche ai record originale.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)

