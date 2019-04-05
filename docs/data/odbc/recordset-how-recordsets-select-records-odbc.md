---
title: 'Recordset: Selezione dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- recordsets, selecting records
- record selection, ODBC recordsets
- SQL statements, recordset
- records, selecting
- recordsets, constructing SQL statements
- ODBC recordsets, selecting records
ms.assetid: 343a6a91-aa4c-4ef7-b21f-2f2bfd0d3787
ms.openlocfilehash: 310481a6ea6637de817bf29d528cbdfe70ae70db
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59041325"
---
# <a name="recordset-how-recordsets-select-records-odbc"></a>Recordset: Selezione dei record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Questo argomento viene illustrato:

- [Il ruolo e le opzioni di selezione dei record](#_core_your_options_in_selecting_records).

- [Come un'istruzione SQL in recordset](#_core_how_a_recordset_constructs_its_sql_statement).

- [Cosa è possibile fare per personalizzare la selezione](#_core_customizing_the_selection).

Recordset selezionano record da un'origine dati tramite un driver ODBC mediante l'invio di istruzioni SQL per il driver. SQL inviato dipende dalla modalità di progettazione e aprire la classe del recordset.

##  <a name="_core_your_options_in_selecting_records"></a> Opzioni di selezione di record

La tabella seguente illustra le opzioni di selezione di record.

### <a name="how-and-when-you-can-affect-a-recordset"></a>I casi in cui è possibile modificare un set di record

|Quando si|È possibile|
|--------------|-------------|
|Recordset: dichiarazione di classe con il **Aggiungi classe** guidata|Specificare la tabella da selezionare.<br /><br /> Specificare le colonne da includere.<br /><br /> Visualizzare [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).|
|Completare l'implementazione della classe recordset|Eseguire l'override di funzioni membro, ad esempio `OnSetOptions` (avanzate) impostare le opzioni specifiche dell'applicazione o modificare le impostazioni predefinite. Se si desidera un recordset con parametri, specificare i membri dati di parametro.|
|Crea un oggetto recordset (prima di chiamare `Open`)|Specificare una condizione di ricerca (possibilmente composta) per l'uso in un **in cui** clausola che consente di filtrare i record. Vedere [Recordset: Filtrare i record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).<br /><br /> Specificare un ordinamento per l'uso in un' **ORDER BY** clausola che ordina i record. Vedere [Recordset: Ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).<br /><br /> Specificare i valori dei parametri per i parametri che è stato aggiunto alla classe. Vedere [Recordset: Parametrizzazione di un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).|

| Eseguire la query del recordset chiamando `Open`| Specificare una stringa SQL personalizzata per sostituire la stringa SQL predefinito impostata dalla procedura guidata. Visualizzare [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) nel *classe riferimento alla libreria* e [SQL: Personalizzazione di istruzione SQL del Recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md). |

| Chiamare `Requery` per rieseguire una query il recordset con gli ultimi valori nell'origine dei dati | Specificare nuovi parametri, il filtro o ordinamento. Vedere [Recordset: Ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md). |

##  <a name="_core_how_a_recordset_constructs_its_sql_statement"></a> Come in un recordset relativa istruzione SQL

Quando si chiama un oggetto recordset [aperto](../../mfc/reference/crecordset-class.md#open) funzione di membro, `Open` costruisce un'istruzione SQL usando alcuni o tutti gli ingredienti seguenti:

- Il *lpszSQL* passato al parametro `Open`. Se non è NULL, questo parametro specifica una stringa SQL personalizzata o parte di uno. Il framework analizza la stringa. Se la stringa è un database SQL **selezionate** o un'istruzione ODBC **CHIAMARE** istruzione, il framework utilizza la stringa come istruzione SQL del recordset. Se la stringa non inizia con "SELECT" o "{CALL", il framework utilizza gli elementi forniti per costruire un database SQL **FROM** clausola.

- La stringa restituita da [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql). Per impostazione predefinita, si tratta del nome della tabella specificata per il recordset della procedura guidata, ma è possibile modificare la funzione restituisce. Il framework chiama `GetDefaultSQL` , ovvero se la stringa non inizia con "SELECT" o "{CALL", si presuppone essere un nome di tabella, che viene usato per costruire una stringa SQL.


- I membri di dati campo del set di record, che devono essere associati a colonne specifiche della tabella. Il framework associa le colonne di record per gli indirizzi di questi membri, vengono utilizzate come buffer. Il framework determina la correlazione dei membri di dati campo per le colonne della tabella di [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o alla chiamata di funzione RFX di massa del recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange ](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione membro.

- Il [filtro](../../data/odbc/recordset-filtering-records-odbc.md) per il recordset, se presente, contenuti nel [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) (membro dati). Il framework Usa questa stringa per costruire un database SQL **in cui** clausola.

- Il [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) order per il recordset, se presente, contenuta nel [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) (membro dati). Il framework Usa questa stringa per costruire un database SQL **ORDER BY** clausola.

   > [!TIP]
   > Usare il codice SQL **GROUP BY** clausola (ed eventualmente le **HAVING** clausola), aggiungere clausole alla fine della stringa del filtro.

- I valori di qualsiasi [membri dati di parametro](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) specificati per la classe. I valori dei parametri è impostato subito prima di chiamare `Open` o `Requery`. Il framework associa i valori dei parametri per "?" segnaposto nella stringa SQL. In fase di compilazione, si specifica la stringa con segnaposto. In fase di esecuzione, il framework riempie i dettagli in base ai valori di parametro passato.

`Open` Crea un database SQL **seleziona** istruzione con questi elementi. Visualizzare [personalizzazione della selezione](#_core_customizing_the_selection) per informazioni dettagliate su come il framework Usa gli ingredienti.

Al termine della creazione dell'istruzione, `Open` invia il codice SQL da Gestione Driver ODBC (e la libreria di cursori ODBC, se si trova in memoria), che li invia al driver ODBC per DBMS specifici. Il driver comunica con il sistema DBMS per eseguire la selezione dell'origine dati e recupera il primo record. Il framework carica il record in membri di dati del campo del set di record.

È possibile usare una combinazione di queste tecniche per aprire [tabelle](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md) e per costruire una query basata su un [join](../../data/odbc/recordset-performing-a-join-odbc.md) di più tabelle. Con un'ulteriore personalizzazione, è possibile chiamare [query predefinite](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md) (stored procedure), selezionare colonne non è note in fase di progettazione della tabella e [associare](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) loro di campi del recordset o non è possibile eseguire la maggior parte delle altre attività di accesso ai dati. Le attività non è possibile eseguibili personalizzando i set di record possono comunque essere completate mediante [chiamano funzioni API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) o direttamente l'esecuzione di istruzioni SQL con [CDatabase:: ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql).

##  <a name="_core_customizing_the_selection"></a> Personalizzazione della selezione

Oltre a fornire un filtro, una sequenza di ordinamento o parametri, è possibile eseguire le azioni seguenti per personalizzare la selezione del recordset:

- Passare una stringa SQL personalizzata nel *lpszSQL* quando si chiama [Open](../../mfc/reference/crecordset-class.md#open) per il recordset. Qualsiasi elemento passato *lpsqSQL* ha la precedenza su cosa il [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql) funzione membro restituisce.

   Per altre informazioni, vedere [SQL: Personalizzazione di istruzione SQL (ODBC del Recordset)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md), che descrive i tipi di istruzioni SQL, o istruzioni parziale, è possibile passare a `Open` ed eseguite dal framework con essi.

    > [!NOTE]
    >  Se la stringa personalizzata che è passata non inizia con "SELECT" o "{CALL", MFC si presuppone che contiene un nome di tabella. Questo vale anche per il successivo elemento puntato.

- Modificare la stringa che la procedura guidata scrive nel set di record `GetDefaultSQL` funzione membro. Modificare il codice della funzione per modificare il risultato. Per impostazione predefinita, la procedura guidata scrive un `GetDefaultSQL` funzione che restituisce un singolo nome di tabella.

   È possibile avere `GetDefaultSQL` restituire gli elementi che è possibile passare il *lpszSQL* parametro per `Open`. Se è una stringa SQL personalizzata nella non passare *lpszSQL*, il framework utilizza la stringa che `GetDefaultSQL` restituisce. Come minimo, `GetDefaultSQL` deve restituire un singolo nome di tabella. Ma è possibile che restituisca più nomi di tabella, una procedura completa **selezionate** istruzione, un database ODBC **CHIAMARE** informativa e così via. Per un elenco di ciò che è possibile passare a *lpszSQL* , o avere `GetDefaultSQL` restituire, vedere [SQL: Personalizzazione di istruzione SQL del Recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

   Se si esegue un join di due o più tabelle, riscrivere `GetDefaultSQL` per personalizzare l'elenco di tabella utilizzato nella SQL **FROM** clausola. Per altre informazioni, vedere [Recordset: Esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).


- Associare manualmente i membri di dati campo aggiuntivo, forse basati su informazioni sullo schema dell'origine dati in fase di esecuzione. Si aggiungono membri dati di campo alla classe recordset [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o alla chiamata di funzione RFX di massa per poter il [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) funzione membro, e inizializzazioni dei membri dei dati nel costruttore della classe. Per altre informazioni, vedere [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

- Eseguire l'override di funzioni membro oggetto recordset, ad esempio `OnSetOptions`, impostare le opzioni specifiche dell'applicazione o eseguire l'override delle impostazioni predefinite.

Se si desidera basare il recordset in un'istruzione SQL complessa, è necessario usare una combinazione di queste tecniche di personalizzazione. Ad esempio, si vogliono usare le clausole SQL e le parole chiave non supportate direttamente dal recordset o si siano unendo in join più tabelle.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)<br/>
[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[SQL](../../data/odbc/sql.md)<br/>
[Recordset: Blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)