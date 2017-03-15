---
title: "Supporto database, Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.database"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata applicazione MFC, supporto database"
ms.assetid: 9ddf4558-fd41-4ac7-8d9b-c93d9c68ab59
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Supporto database, Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa schermata contiene opzioni che consentono di specificare il livello di supporto per database del progetto, nonché l'origine dati eventualmente richiesta.  
  
 **Supporto database**  
 Imposta il livello di supporto per database del progetto.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**None**|Nessun supporto di database.  Questa è l'opzione predefinita.|  
|**Solo file di intestazione**|Fornisce all'applicazione il livello di base del supporto per database.<br /><br /> <ul><li>Se si seleziona il supporto per ODBC in **Tipo di client**, la Creazione guidata applicazione MFC include nel progetto il file di intestazione AFXDB.H.  Aggiunge librerie a collegamento, ma non crea classi specifiche del database.  È possibile creare recordset in un secondo momento e utilizzarli per analizzare e aggiornare i record.</li><li>Se si seleziona il supporto per OLE DB in **Tipo di client**, vengono inclusi i seguenti file di intestazione:<br /><br /> <ul><li>ATLBASE.H</li><li>AFXOLEDB.H</li><li>ATLPLUS.H</li></ul></li></ul>|  
|**Visualizzazione database senza supporto file**|Include file di intestazione del database, DLL, una visualizzazione record e un recordset. È disponibile solo per applicazioni per le quali è stata selezionata l'opzione **Supporto architettura documenti\/visualizzazioni** nella pagina [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md). Questa opzione include il supporto per i documenti, ma non per la serializzazione.  Se si sceglie di includere una visualizzazione di database, è necessario specificare l'origine dei dati.|  
|**Visualizzazione database con supporto file**|Include file di intestazione del database, DLL, una visualizzazione record e un recordset. È disponibile solo per applicazioni per le quali è stata selezionata l'opzione **Supporto architettura documenti\/visualizzazioni** nella pagina **Tipo di applicazione**. Questa opzione supporta la serializzazione dei documenti, che può ad esempio essere utilizzata per aggiornare un file di profilo utente.  Il funzionamento delle applicazioni di database è in genere basato su record anziché su file e non richiede quindi la serializzazione.  Tuttavia, è possibile utilizzare l'applicazione in modo speciale anche per la serializzazione.  Se si sceglie di includere una visualizzazione di database, è necessario specificare l'origine dei dati.|  
  
> [!NOTE]
>  Se in **Supporto database** si seleziona **Visualizzazione database senza supporto file** o **Visualizzazione database con supporto file**, la derivazione della classe di visualizzazione può variare in base alla selezione effettuata in **Tipo di client**.  
  
-   Se in **Tipo di client** si seleziona **ODBC**, la classe di visualizzazione dell'applicazione deriverà da [CRecordView](../../mfc/reference/crecordview-class.md).  Questa classe è associata a una classe derivata da [CRecordset](../../mfc/reference/crecordset-class.md) creata dalla Creazione guidata applicazione MFC.  Questa opzione fornisce un'applicazione basata su form in cui la visualizzazione record viene utilizzata per visualizzare e aggiornare i record mediante il relativo recordset.  
  
-   Se in **Tipo di client** si seleziona **OLE DB**, la classe di visualizzazione deriverà da [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md) e sarà associata a una classe derivata da [CTable](../../data/oledb/ctable-class.md) o [CCommand](../../data/oledb/ccommand-class.md).  
  
 **Tipo di client**  
 Indica se il progetto utilizza classi ODBC o OLE DB.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**OLE DB**|Quando questa opzione è selezionata, scegliendo **Origine dati** viene richiamata la procedura guidata **Proprietà Data Link** con cui è possibile creare una connessione a un'origine dati OLE DB.|  
|**ODBC**|Quando questa opzione è selezionata, scegliendo **Origine dati** viene richiamata la procedura guidata **Selezione origine dati** con cui è possibile creare una connessione a un'origine dati ODBC.|  
  
 **Origine dati**  
 Scegliere **Origine dati** per impostare un'origine dati utilizzando il driver o provider e il database specificati.  Se per l'opzione **Tipo di client** è stato selezionato OLE DB, verrà visualizzata la finestra **Proprietà Data Link**.  Se per l'opzione **Tipo di client** è stato selezionato ODBC, verrà visualizzata la finestra di dialogo **Seleziona origine dati**.  Questa opzione è disponibile solo se si sceglie di includere una visualizzazione di database nell'applicazione.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Proprietà Data Link** \(OLE DB\)|Imposta l'origine dati specificata mediante il provider OLE DB indicato.  È necessario specificare il provider OLE DB, la posizione dei dati, l'origine dati e l'ID di accesso. È inoltre possibile definire facoltativamente una password.  Per informazioni dettagliate su questa finestra di dialogo, vedere **Origine dati** in [Creazione guidata consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).|  
|**Seleziona origine dati** \(ODBC\)|Imposta l'origine dati specificata mediante il driver ODBC indicato.  Per scegliere una tabella per l'origine dati è necessario selezionare il nome di un'origine dati.  Tutte le colonne della tabella vengono associate alle variabili membro di una classe derivata da `CRecordset`.  Per informazioni dettagliate su questa finestra di dialogo, vedere **Origine dati** in [Creazione guidata consumer ODBC MFC](../../mfc/reference/mfc-odbc-consumer-wizard.md).|  
  
> [!NOTE]
>  Nelle versioni precedenti era possibile fare clic sul pulsante **Origine dati** tenendo premuto MAIUSC per visualizzare una finestra Apri file in cui selezionare un file di Data Link \(UDL\).  Questa funzionalità non è più supportata.  
  
 **Genera classe di database con attributi**  
 Questa opzione è disponibile soltanto per client OLE DB.  Specifica se le classi di database incluse nel progetto generato utilizzano attributi.  
  
 **Associa tutte le colonne**  
 Questa opzione è disponibile soltanto per client ODBC.  Specifica se vengono associate tutte le colonne della tabella selezionata.  Se si seleziona questa casella, vengono associate tutte le colonne. In caso contrario non viene associata alcuna colonna e l'associazione deve essere effettuata manualmente nella classe recordset.  
  
 **Type**  
 Questa opzione è disponibile soltanto per client ODBC.  Specifica se il recordset è di tipo dynaset o snapshot, come descritto nella tabella riportata di seguito.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Dynaset**|Utilizzare questa opzione per specificare che il recordset è di tipo dynaset.  Un dynaset, ovvero il risultato di una query che fornisce una visualizzazione indicizzata dei dati del database in cui è stata effettuata la ricerca,  memorizza nella cache solo un indice integrale dei dati originali offrendo così prestazioni più elevate rispetto allo snapshot.  L'indice fa direttamente riferimento a ciascun record trovato come risultato di una query e indica se un record è stato rimosso.  È inoltre possibile accedere alle informazioni aggiornate nei record in cui viene effettuata la ricerca.|  
|Snapshot|Utilizzare questa opzione per specificare che il recordset è di tipo snapshot.  Uno snapshot è il risultato di una query e costituisce una visualizzazione di un database in un determinato momento.  Poiché tutti i record trovati come risultato della query vengono memorizzati nella cache, nei record originali non viene visualizzata alcuna modifica.|  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)