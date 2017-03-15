---
title: "Recordset: selezione dei record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordset ODBC, selezione di record"
  - "selezione di record, recordset ODBC"
  - "record, selezione"
  - "recordset, creazione di istruzioni SQL"
  - "recordset, selezione di record"
  - "SQL (istruzioni), recordset"
ms.assetid: 343a6a91-aa4c-4ef7-b21f-2f2bfd0d3787
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Recordset: selezione dei record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Opzioni di selezione dei record](#_core_your_options_in_selecting_records).  
  
-   [Creazione di un'istruzione SQL in un recordset](#_core_how_a_recordset_constructs_its_sql_statement).  
  
-   [Personalizzazione della selezione](#_core_customizing_the_selection).  
  
 I recordset selezionano record da un'origine dati mediante un driver ODBC inviando istruzioni SQL al driver.  L'istruzione SQL inviata dipende dalla modalità di progettazione e di apertura della classe del recordset.  
  
##  <a name="_core_your_options_in_selecting_records"></a> Opzioni di selezione dei record  
 Nella tabella riportata di seguito vengono illustrate le opzioni disponibili per la selezione dei record.  
  
### Come e quando è possibile agire su un recordset  
  
|Quando:|È possibile:|  
|-------------|------------------|  
|Si dichiara la classe del recordset con la procedura guidata **Aggiungi classe**|Specificare la tabella da cui effettuare la selezione.<br /><br /> Specificare le colonne da includere.<br /><br /> Vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).|  
|Si completa l'implementazione della classe del recordset|Eseguire l'override di funzioni membro, come `OnSetOptions` \(avanzata\), per impostare le opzioni specifiche dell'applicazione o modificare le impostazioni predefinite.  Se si desidera utilizzare un recordset con parametri, specificare i membri dati di parametro.|  
|Si crea un oggetto recordset, prima di chiamare **Open**|Specificare una condizione di ricerca \(eventualmente composta\) da utilizzare in una clausola **WHERE** che filtra i record.  Per ulteriori informazioni, vedere [Recordset: applicazione di filtri ai record \(ODBC\)](../../data/odbc/recordset-filtering-records-odbc.md).<br /><br /> Specificare un criterio di ordinamento da utilizzare in un clausola **ORDER BY** per l'ordinamento dei record.  Per ulteriori informazioni, vedere [Recordset: ordinamento dei record \(ODBC\)](../../data/odbc/recordset-sorting-records-odbc.md).<br /><br /> Specificare i valori di parametro per tutti i parametri aggiunti alla classe.  Vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).|  
|Si esegue la query del recordset chiamando **Open**|Specificare una stringa SQL personalizzata da sostituire alla stringa SQL predefinita impostata dalla procedura guidata.  Per ulteriori informazioni, vedere [CRecordset::Open](../Topic/CRecordset::Open.md) in *Riferimenti alla libreria di classi* e [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md).|  
|Si chiama **Requery** per ripetere una query nel recordset con i valori più recenti dell'origine dati|Specificare i nuovi parametri, il filtro o il criterio di ordinamento.  Per ulteriori informazioni, vedere [Recordset: ripetizione di una query in un recordset \(ODBC\)](../../data/odbc/recordset-requerying-a-recordset-odbc.md).|  
  
##  <a name="_core_how_a_recordset_constructs_its_sql_statement"></a> Creazione di un'istruzione SQL in un recordset  
 Quando si chiama la funzione membro [Open](../Topic/CRecordset::Open.md) di un oggetto recordset, **Open** crea un'istruzione SQL utilizzando tutti o alcuni degli elementi riportati di seguito.  
  
-   Il parametro **lpszSQL** passato a **Open**.  Se non è impostato su **NULL**, questo parametro specifica una stringa SQL personalizzata o parte di essa.  Il framework analizza la stringa.  Se la stringa è un'istruzione SQL **SELECT** o un'istruzione ODBC **CALL**, viene utilizzata come istruzione SQL del recordset.  Se la stringa non inizia con "SELECT" o "{CALL", vengono utilizzati gli elementi forniti per la creazione di una clausola SQL **FROM**.  
  
-   La stringa restituita da [GetDefaultSQL](../Topic/CRecordset::GetDefaultSQL.md).  Per impostazione predefinita, si tratta del nome della tabella specificata per il recordset nella procedura guidata. È tuttavia possibile modificare il risultato restituito dalla funzione.  Il framework chiama `GetDefaultSQL`. Se la stringa non inizia con "SELECT" o "{CALL", si assume che la stringa corrisponda al nome di una tabella utilizzato per creare una stringa SQL.  
  
-   I membri dati di campo del recordset da associare a colonne specifiche della tabella.  Il framework associa le colonne dei record agli indirizzi di questi membri, utilizzandoli come buffer.  Il framework determina la correlazione dei membri dati di campo con le colonne della tabella dalle chiamate alle funzioni [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o RFX di massa nella funzione membro [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) o [DoBulkFieldExchange](../Topic/CRecordset::DoBulkFieldExchange.md) del recordset.  
  
-   Il [filtro](../../data/odbc/recordset-filtering-records-odbc.md) per il recordset, se disponibile, contenuto nel membro dati [m\_strFilter](../Topic/CRecordset::m_strFilter.md).  Il framework utilizza questa stringa per creare una clausola SQL **WHERE**.  
  
-   Il criterio di [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) del recordset, se disponibile, contenuto nel membro dati [m\_strSort](../Topic/CRecordset::m_strSort.md).  Il framework utilizza questa stringa per creare una clausola SQL **ORDER BY**.  
  
    > [!TIP]
    >  Per utilizzare la clausola SQL **GROUP BY** ed eventualmente la clausola **HAVING**, aggiungerle alla fine della stringa del filtro.  
  
-   I valori di tutti i [membri dati di parametro](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) specificati per la classe.  I valori dei parametri vengono impostati prima di chiamare **Open** o **Requery**.  Il framework associa i valori dei parametri ai segnaposto "?" nella stringa SQL.  In fase di compilazione la stringa viene specificata con i segnaposto.  In fase di esecuzione il framework inserisce i valori in base a quelli dei parametri passati.  
  
 **Open** crea un'istruzione SQL **SELECT** con questi elementi.  Per informazioni dettagliate sull'utilizzo di questi elementi da parte del framework, vedere [Personalizzazione della selezione](#_core_customizing_the_selection).  
  
 Al termine della creazione dell'istruzione, **Open** invia l'istruzione SQL a Gestione driver ODBC e alla libreria di cursori ODBC, se disponibile in memoria, che la invierà a sua volta al driver ODBC per il DBMS specifico.  Il driver comunica con il DBMS per effettuare la selezione nell'origine dati e recupera il primo record.  Il framework carica il record nei membri dati di campo del recordset.  
  
 È possibile utilizzare una combinazione di queste tecniche per aprire [tabelle](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md) e creare una query basata su un [join](../../data/odbc/recordset-performing-a-join-odbc.md) di più tabelle.  Con un'ulteriore personalizzazione, è possibile chiamare [query già definite](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md) \(stored procedure\), selezionare colonne di tabelle sconosciute in fase di progettazione e [associare](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) tali colonne ai campi del recordset o eseguire molte altre attività di accesso ai dati.  Le attività non eseguibili mediante la personalizzazione dei recordset possono comunque essere completate mediante la [chiamata alle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) oppure eseguendo direttamente istruzioni SQL con [CDatabase::ExecuteSQL](../Topic/CDatabase::ExecuteSQL.md).  
  
##  <a name="_core_customizing_the_selection"></a> Personalizzazione della selezione  
 Per personalizzare la selezione del recordset, oltre a fornire un filtro, un criterio di ordinamento o dei parametri, è possibile procedere come indicato di seguito.  
  
-   Passare una stringa SQL personalizzata in **lpszSQL** quando si chiama [Open](../Topic/CRecordset::Open.md) per il recordset.  Tutte le stringhe passate in **lpsqSQL** hanno la precedenza sui valori restituiti dalla funzione membro [GetDefaultSQL](../Topic/CRecordset::GetDefaultSQL.md).  
  
     Per ulteriori informazioni, vedere [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md), in cui sono descritti i tipi di istruzioni SQL o le parti di istruzioni che è possibile passare a **Open** e il modo in cui vengono utilizzate dal framework.  
  
    > [!NOTE]
    >  Se la stringa personalizzata passata non inizia con SELECT o {CALL, in MFC, si presume che contenga un nome di tabella.  Le stesse considerazioni valgono per il punto elenco seguente.  
  
-   Modificare la stringa scritta dalla procedura guidata nella funzione membro `GetDefaultSQL` del recordset.  Modificare il codice della funzione in modo da ottenere un valore restituito diverso.  Per impostazione predefinita, la procedura guidata scrive una funzione `GetDefaultSQL` che restituisce il nome di una tabella singola.  
  
     È possibile impostare la funzione `GetDefaultSQL` in modo che restituisca uno qualsiasi degli elementi passati a **Open** nel parametro **lpszSQL**.  Se nel parametro **lpszSQL** non viene passata alcuna stringa SQL personalizzata, il framework utilizza la stringa restituita da `GetDefaultSQL`.  È necessario che `GetDefaultSQL` restituisca almeno il nome di una tabella.  È tuttavia possibile impostare tale funzione in modo che restituisca i nomi di più tabelle, un'istruzione **SELECT** completa, un'istruzione ODBC **CALL** e così via.  Per un elenco degli elementi che è possibile passare a **lpszSQL** oppure ottenere da `GetDefaultSQL`, vedere [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md).  
  
     Se si effettua un join di due o più tabelle, per personalizzare l'elenco di tabelle utilizzato nella clausola SQL **FROM**, riscrivere `GetDefaultSQL`.  Per ulteriori informazioni, vedere [Recordset: esecuzione di un join \(ODBC\)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  
-   Associare manualmente membri dati di campo aggiuntivi, ad esempio in base alle informazioni sullo schema dell'origine dati recuperate in fase di esecuzione.  Aggiungere i membri dati di campo alla classe del recordset, chiamati in seguito dalla funzione [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o RFX di massa per la funzione membro [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) o [DoBulkFieldExchange](../Topic/CRecordset::DoBulkFieldExchange.md), e aggiungere le inizializzazioni dei membri dati nel costruttore della classe.  Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
-   Eseguire l'override delle funzioni membro del recordset, ad esempio `OnSetOptions`, per impostare le opzioni specifiche dell'applicazione o per ignorare le impostazioni predefinite.  
  
 Se si desidera basare il recordset su un'istruzione SQL complessa, è necessario utilizzare una combinazione di queste tecniche di personalizzazione,  nel caso in cui si desideri ad esempio utilizzare le clausole e le parole chiave SQL non supportate direttamente dai recordset o si stia eseguendo il join di più tabelle.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)   
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)   
 [SQL](../../data/odbc/sql.md)   
 [Recordset: blocco dei record \(ODBC\)](../../data/odbc/recordset-locking-records-odbc.md)