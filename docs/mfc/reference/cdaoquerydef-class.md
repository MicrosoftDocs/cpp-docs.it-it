---
title: "CDaoQueryDef Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoQueryDef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoQueryDef class"
  - "query [Visual Studio], definizione"
  - "QueryDef objects"
ms.assetid: 9676a4a3-c712-44d4-8c5d-d1cc78288d3a
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDaoQueryDef Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una definizione della query, ovvero il "querydef," genere uno salvato in un database.  
  
## Sintassi  
  
```  
class CDaoQueryDef : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoQueryDef::CDaoQueryDef](../Topic/CDaoQueryDef::CDaoQueryDef.md)|Costruisce un oggetto **CDaoQueryDef** .  Chiamata successiva **Apri** o **Crea**, a seconda delle esigenze.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoQueryDef::Append](../Topic/CDaoQueryDef::Append.md)|Aggiunge il querydef alla raccolta di QueryDefs del database come una query salvata.|  
|[CDaoQueryDef::CanUpdate](../Topic/CDaoQueryDef::CanUpdate.md)|Restituisce diverso da zero se la query può aggiornare il database.|  
|[CDaoQueryDef::Close](../Topic/CDaoQueryDef::Close.md)|Chiude l'oggetto di querydef.  Eliminare l'oggetto C\+\+ dopo aver utilizzato.|  
|[CDaoQueryDef::Create](../Topic/CDaoQueryDef::Create.md)|Crea l'oggetto sottostante di querydef di DAO.  Utilizzare il querydef come una query temporaneo, oppure chiamare **Append** per salvare nel database.|  
|[CDaoQueryDef::Execute](../Topic/CDaoQueryDef::Execute.md)|Esegue la query definita dall'oggetto di querydef.|  
|[CDaoQueryDef::GetConnect](../Topic/CDaoQueryDef::GetConnect.md)|Restituisce la stringa di connessione associata al querydef.  La stringa di connessione identifica l'origine dati.  \(Per le query pass\-through SQL solo; altrimenti una stringa vuota.\)|  
|[CDaoQueryDef::GetDateCreated](../Topic/CDaoQueryDef::GetDateCreated.md)|Restituisce la data in cui la query salvata è stato creato.|  
|[CDaoQueryDef::GetDateLastUpdated](../Topic/CDaoQueryDef::GetDateLastUpdated.md)|Restituisce la data in cui la query salvataultimo aggiornamento.|  
|[CDaoQueryDef::GetFieldCount](../Topic/CDaoQueryDef::GetFieldCount.md)|Restituisce il numero di campi definiti da querydef.|  
|[CDaoQueryDef::GetFieldInfo](../Topic/CDaoQueryDef::GetFieldInfo.md)|Restituisce informazioni su un campo specifico definito nella query.|  
|[CDaoQueryDef::GetName](../Topic/CDaoQueryDef::GetName.md)|Restituisce il nome di querydef.|  
|[CDaoQueryDef::GetODBCTimeout](../Topic/CDaoQueryDef::GetODBCTimeout.md)|Restituisce il valore di timeout utilizzato da ODBC \(per una query ODBC\) quando il tra cui viene eseguito.  Ciò determina per quanto tempo consentire l'azione di query complete.|  
|[CDaoQueryDef::GetParameterCount](../Topic/CDaoQueryDef::GetParameterCount.md)|Restituisce il numero dei parametri definiti per la query.|  
|[CDaoQueryDef::GetParameterInfo](../Topic/CDaoQueryDef::GetParameterInfo.md)|Restituisce informazioni su un parametro specificato alla query.|  
|[CDaoQueryDef::GetParamValue](../Topic/CDaoQueryDef::GetParamValue.md)|Restituisce il valore di un parametro specificato alla query.|  
|[CDaoQueryDef::GetRecordsAffected](../Topic/CDaoQueryDef::GetRecordsAffected.md)|Restituisce il numero di record modificati da una query di azione.|  
|[CDaoQueryDef::GetReturnsRecords](../Topic/CDaoQueryDef::GetReturnsRecords.md)|Restituisce diverso da zero se la query definita da querydef restituisce record.|  
|[CDaoQueryDef::GetSQL](../Topic/CDaoQueryDef::GetSQL.md)|Restituisce la stringa SQL che specifica la query definita da querydef.|  
|[CDaoQueryDef::GetType](../Topic/CDaoQueryDef::GetType.md)|Restituisce il tipo di query: l'eliminazione, aggiornamento, accodamento, fare\- tabella, e così via.|  
|[CDaoQueryDef::IsOpen](../Topic/CDaoQueryDef::IsOpen.md)|Restituisce diverso da zero se il querydef aperto e può essere eseguito.|  
|[CDaoQueryDef::Open](../Topic/CDaoQueryDef::Open.md)|Apre un querydef esistente archiviato nella libreria di QueryDefs del database.|  
|[CDaoQueryDef::SetConnect](../Topic/CDaoQueryDef::SetConnect.md)|Imposta la stringa di connessione per pass\-through query SQL in un'origine dati ODBC.|  
|[CDaoQueryDef::SetName](../Topic/CDaoQueryDef::SetName.md)|Imposta il nome della query salvata, sostituendo il nome in uso quando il querydef è stato creato.|  
|[CDaoQueryDef::SetODBCTimeout](../Topic/CDaoQueryDef::SetODBCTimeout.md)|Imposta il valore di timeout utilizzato da ODBC \(per una query ODBC\) quando il tra cui viene eseguito.|  
|[CDaoQueryDef::SetParamValue](../Topic/CDaoQueryDef::SetParamValue.md)|Imposta il valore di un parametro specificato alla query.|  
|[CDaoQueryDef::SetReturnsRecords](../Topic/CDaoQueryDef::SetReturnsRecords.md)|Specifica se il querydef restituisce record.  L'impostazione di questo attributo a **TRUE** è valido solo per le query pass\-through SQL.|  
|[CDaoQueryDef::SetSQL](../Topic/CDaoQueryDef::SetSQL.md)|Imposta la stringa SQL che specifica la query definita da querydef.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoQueryDef::m\_pDAOQueryDef](../Topic/CDaoQueryDef::m_pDAOQueryDef.md)|Un puntatore a un'interfaccia OLE per l'oggetto sottostante di querydef di DAO.|  
|[CDaoQueryDef::m\_pDatabase](../Topic/CDaoQueryDef::m_pDatabase.md)|Un puntatore all'oggetto `CDaoDatabase` con cui il querydef è associato.  Il querydef potrebbe essere salvato nel database o meno.|  
  
## Note  
 Un querydef è un oggetto di accesso ai dati che contiene l'istruzione SQL che descrive una query e le relative proprietà, ad esempio "data di creazione" e "intervallo di ODBC." È inoltre possibile creare oggetti temporanei di querydef senza salvarli, ma è preferibile e molto più efficiente — salvare le query più riutilizzati in un database.  Un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) gestisce una raccolta, chiamare la libreria di QueryDefs, contenente i querydefs salvati.  
  
> [!NOTE]
>  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  È ancora possibile accedere alle origini dati ODBC con le classi DAO.  Le classi MFC basate su DAO risulta in genere più in grado delle classi MFC basate su ODBC, le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite proprio motore di database.  Le classi basate su DAO supportano le operazioni di Data Definition Language \(DDL\), ad esempio aggiunta di tabelle tramite le classi, senza dover chiamare direttamente le API DAO.  
  
## Utilizzo  
 Oggetti di querydef di utilizzo con una query salvata esistente o creare una nuova query salvata o query temporaneo:  
  
1.  In tutti i casi, è necessario costruire un oggetto `CDaoQueryDef`, fornendo un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) a cui appartiene la query.  
  
2.  Fare quanto segue, in cui si desidera:  
  
    -   Per utilizzare un oggetto esistente ha salvato la query, chiama la funzione membro [Apri](../Topic/CDaoQueryDef::Open.md) dell'oggetto di querydef, specificando il nome della query salvata.  
  
    -   Per creare una nuova query salvata, chiamare la funzione membro [Crea](../Topic/CDaoQueryDef::Create.md) dell'oggetto di querydef, specificando il nome della query.  Chiamare [Aggiungere](../Topic/CDaoQueryDef::Append.md) per salvare la query aggiungendola alla raccolta di QueryDefs del database.  **Crea** inserisce il querydef in stato aperto, pertanto dopo viene **Crea** che non si chiama **Apri**.  
  
    -   Per creare un querydef temporaneo, chiamare **Crea**.  Passare una stringa vuota per il nome della query.  Non chiamare **Append**.  
  
 Dopo avere utilizzato un oggetto di querydef, chiamare la funzione membro [Chiudi](../Topic/CDaoQueryDef::Close.md) ; quindi eliminare l'oggetto di querydef.  
  
> [!TIP]
>  Il modo più semplice per creare query salvate è possibile crearli e archiviarli nel database utilizzando Microsoft Access.  È quindi possibile aprirli e utilizzare nel codice MFC.  
  
## Scopo  
 È possibile utilizzare un oggetto di querydef per le seguenti attività:  
  
-   Per creare un oggetto `CDaoRecordset`  
  
-   Per chiamare la funzione membro **Execute** dell'oggetto direttamente eseguire una query di azione o pass\-through query SQL  
  
 È possibile utilizzare un oggetto di querydef per qualsiasi tipo di query, incluso selezionato, azioni, crosstab, eliminazione, l'aggiornamento, l'aggiunta, la fare\- tabella, la definizione dei dati, il testo pass\-through SQL, l'unione e query di massa.  Il tipo della query è determinato dal contenuto dell'istruzione SQL immesse.  Per informazioni sui tipi di query, vedere le funzioni membro [GetType](../Topic/CDaoQueryDef::GetType.md) e **Execute**.  I recordset vengono utilizzate comunemente per le query riga anziché restituire, in genere quelli **SELECT ...**  Le parole chiave.  **Execute** è più utilizzato per le operazioni di massa.  Per ulteriori informazioni, vedere [di esecuzione](../Topic/CDaoQueryDef::Execute.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
## Querydefs e recordset  
 Per utilizzare un oggetto di querydef per creare un oggetto `CDaoRecordset`, in genere si crea o si apre un querydef come descritto in precedenza.  Quindi costruire un oggetto recordset, passando un puntatore a un oggetto di querydef quando si chiama [CDaoRecordset::Open](../Topic/CDaoRecordset::Open.md).  Il querydef passato sia in uno stato aperto.  Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 Non è possibile utilizzare un querydef per creare un recordset la maggior parte di utilizzo comune per un querydef a meno che non sia in uno stato aperto.  Inserire il querydef in stato aperto chiamando **Apri** o **Crea**.  
  
## Database esterni  
 Gli oggetti di Querydef sono la modalità preferita per utilizzare il codice nativo il sottolinguaggio SQL di un motore di database esterno.  Ad esempio, è possibile creare una query SQL di trattare come utilizzato in Microsoft SQL Server\) e memorizzarlo in un oggetto di querydef.  Quando è necessario utilizzare una query SQL non basato sul modulo di gestione di database Microsoft Jet, è necessario fornire una stringa di connessione che indica l'origine dati esterna.  Le query con le stringhe di connessione valide ignorano il motore di database e passare la query direttamente al server database esterno per l'elaborazione.  
  
> [!TIP]
>  La modalità preferita per funzionare con le tabelle di ODBC è di allegarle a un database Microsoft Jet \(.MDB\).  
  
 Per informazioni correlate, vedere gli argomenti "oggetto di QueryDef", "libreria di QueryDefs" e "oggetto di CdbDatabase in" SDK di DAO.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoQueryDef`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoException Class](../../mfc/reference/cdaoexception-class.md)