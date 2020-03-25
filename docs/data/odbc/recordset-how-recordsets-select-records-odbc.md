---
title: 'Recordset: selezione dei record (ODBC)'
ms.date: 05/09/2019
helpviewer_keywords:
- recordsets, selecting records
- record selection, ODBC recordsets
- SQL statements, recordset
- records, selecting
- recordsets, constructing SQL statements
- ODBC recordsets, selecting records
ms.assetid: 343a6a91-aa4c-4ef7-b21f-2f2bfd0d3787
ms.openlocfilehash: 252d17fc56c13415f1068d6b16ed8b1ee663b5f1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212888"
---
# <a name="recordset-how-recordsets-select-records-odbc"></a>Recordset: selezione dei record (ODBC)

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Opzioni disponibili per la selezione dei record](#_core_your_options_in_selecting_records).

- [In che modo un recordset costruisce un'istruzione SQL e seleziona i record](#_core_how_a_recordset_constructs_its_sql_statement).

- [Come procedere per personalizzare la selezione](#_core_customizing_the_selection).

I recordset selezionano i record da un'origine dati tramite un driver ODBC mediante l'invio di istruzioni SQL al driver. Il codice SQL inviato dipende dalla modalità di progettazione e apertura della classe del recordset.

##  <a name="your-options-in-selecting-records"></a><a name="_core_your_options_in_selecting_records"></a> Opzioni disponibili per la selezione dei record

Nella tabella seguente sono illustrate le opzioni per la selezione dei record.

### <a name="how-and-when-you-can-affect-a-recordset"></a>Casi in cui è possibile modificare un recordset

|Se si|È possibile|
|--------------|-------------|
|Dichiara la classe recordset con la procedura guidata **Aggiungi classe**|Specificare la tabella da selezionare.<br /><br /> Specificare le colonne da includere.<br /><br /> Vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).|
|Completa l'implementazione della classe recordset|Eseguire l'override di funzioni membro come `OnSetOptions` (impostazione avanzata) per impostare opzioni specifiche dell'applicazione o modificare le impostazioni predefinite. Specificare i membri dati di parametro, se si vuole un recordset con parametri.|
|Costruire un oggetto recordset (prima di chiamare `Open`)|Specificare una condizione di ricerca (possibilmente composta) da usare in una clausola **WHERE** che filtra i record. Vedere [Recordset: filtro di record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).<br /><br /> Specificare un ordinamento da usare in una clausola **ORDER BY** che ordina i record. Vedere [Recordset: ordinamento di record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).<br /><br /> Specificare i valori dei parametri per gli eventuali parametri aggiunti alla classe. Vedere [Recordset: parametrizzazione un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).|

|Eseguire la query del recordset chiamando `Open`|Specificare una stringa SQL personalizzata per sostituire la stringa SQL predefinita impostata dalla procedura guidata. Vedere [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) nei *riferimenti alla libreria di classi* e [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md). |

|Chiamare `Requery` per ripetere la query sul recordset con i valori più recenti nell'origine dati|Specificare nuovi parametri, filtrare o ordinare i dati. Vedere [Recordset: riesecuzione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md). |

##  <a name="how-a-recordset-constructs-its-sql-statement"></a><a name="_core_how_a_recordset_constructs_its_sql_statement"></a> In che modo un recordset costruisce un'istruzione SQL

Quando si chiama la funzione membro [Open](../../mfc/reference/crecordset-class.md#open) di un oggetto recordset, `Open` costruisce un'istruzione SQL usando tutti gli elementi seguenti o alcuni di essi:

- Il parametro *lpszSQL* passato a `Open`. Se non è NULL, questo parametro specifica una stringa SQL personalizzata (o parte di una stringa). Il framework analizza la stringa. Se la stringa è un'istruzione SQL **SELECT** o un'istruzione ODBC **CALL**, il framework usa la stringa come istruzione SQL del recordset. Se la stringa non inizia con "SELECT" o "{CALL", il framework usa gli elementi forniti per costruire una clausola SQL **FROM**.

- La stringa restituita da [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql). Per impostazione predefinita, è il nome della tabella specificata per il recordset nella procedura guidata, ma è possibile modificare il valore restituito dalla funzione. Il framework chiama `GetDefaultSQL`: se la stringa non inizia con "SELECT" o "{CALL", si presume che sia un nome di tabella, che viene usato per costruire una stringa SQL.

- I membri dati di campo del recordset, che devono essere associati a colonne specifiche della tabella. Il framework associa le colonne di record agli indirizzi di questi membri, usandoli come buffer. Il framework determina la correlazione tra i membri dati di campo e le colonne della tabella dalle chiamate di funzione [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o RFX di massa nella funzione membro [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange ](../../mfc/reference/crecordset-class.md#dofieldexchange) del recordset.

- L'eventuale [filtro](../../data/odbc/recordset-filtering-records-odbc.md) per il recordset, contenuto nel membro dati [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter). Il framework usa questa stringa per costruire una clausola SQL **WHERE**.

- L'eventuale [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) per il recordset, contenuto nel membro dati [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort). Il framework usa questa stringa per costruire una clausola SQL **ORDER BY**.

   > [!TIP]
   > Per usare la clausola SQL **GROUP BY** (ed eventualmente la clausola **HAVING**), aggiungere le clausole alla fine della stringa di filtro.

- I valori di eventuali [membri dati di parametro](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) specificati per la classe. I valori dei parametri sono impostati subito prima di chiamare `Open` o `Requery`. Il framework associa i valori dei parametri ai segnaposto "?" nella stringa SQL. In fase di compilazione, la stringa viene specificata con segnaposto. In fase di esecuzione, il framework inserisce i dettagli in base ai valori dei parametri passati.

`Open` costruisce un'istruzione SQL **SELECT** con questi elementi. Vedere [Personalizzazione della selezione](#_core_customizing_the_selection) per informazioni dettagliate sul modo in cui il framework usa gli elementi.

Al termine della creazione dell'istruzione, `Open` invia il codice SQL a Gestione driver ODBC (e alla libreria di cursori ODBC, se è in memoria), che lo invia al driver ODBC per lo specifico sistema di gestione di database. Il driver comunica con il sistema di gestione di database per eseguire la selezione nell'origine dati e recupera il primo record. Il framework carica il record nei membri dati di campo del recordset.

È possibile usare una combinazione di queste tecniche per aprire le [tabelle](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md) e costruire una query basata su un [join](../../data/odbc/recordset-performing-a-join-odbc.md) di più tabelle. Con un'ulteriore personalizzazione, è possibile chiamare [query predefinite](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md) (stored procedure), selezionare colonne di tabelle che non erano note in fase di progettazione e [associarle](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) ai campi del recordset o eseguire la maggior parte delle altre attività di accesso ai dati. Le attività che non è possibile eseguire tramite la personalizzazione dei recordset possono comunque essere effettuate mediante le [chiamate di funzioni API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) o eseguendo direttamente istruzioni SQL con [CDatabase:: ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql).

##  <a name="customizing-the-selection"></a><a name="_core_customizing_the_selection"></a> Personalizzazione della selezione

Oltre a specificare un filtro, un ordinamento o parametri, è possibile eseguire le seguenti azioni per personalizzare la selezione del recordset:

- Passare una stringa SQL personalizzata in *lpszSQL* quando si chiama [Open](../../mfc/reference/crecordset-class.md#open) per il recordset. Qualsiasi elemento passato in *lpsqSQL* ha la precedenza sul valore restituito dalla funzione membro [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql).

   Per ulteriori informazioni, vedere [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md), che descrive i tipi di istruzioni SQL (o istruzioni parziali) che è possibile passare a `Open` e il Framework che li esegue.

    > [!NOTE]
    >  Se la stringa personalizzata passata non inizia con "SELECT" o "{CALL", MFC presuppone che contenga un nome di tabella. Questo vale anche per l'elemento successivo.

- Modificare la stringa scritta dalla procedura guidata nella funzione membro `GetDefaultSQL` del set di record. Modificare il codice della funzione per cambiare il valore restituito. Per impostazione predefinita, la procedura guidata scrive una funzione `GetDefaultSQL` che restituisce un singolo nome di tabella.

   È possibile impostare `GetDefaultSQL` in modo da restituire gli elementi che è possibile passare nel parametro *lpszSQL* a `Open`. Se non si passa una stringa SQL personalizzata in *lpszSQL*, il framework usa la stringa restituita da `GetDefaultSQL`. Come minimo, `GetDefaultSQL` deve restituire un singolo nome di tabella. Tuttavia, può restituire più nomi di tabella, un'intera istruzione **SELECT**, un istruzione ODBC **CALL** e così via. Per un elenco degli elementi che è possibile passare a *lpszSQL* o `GetDefaultSQL` restituire, vedere [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

   Se si esegue un join di due o più tabelle, riscrivere `GetDefaultSQL` per personalizzare l'elenco di tabelle usato nella clausola SQL **FROM**. Per ulteriori informazioni, vedere [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

- Associare manualmente membri dati di campo aggiuntivi, eventualmente basati sulle informazioni ottenute sullo schema dell'origine dati in fase di esecuzione. I membri dati di campo vengono aggiunti alla classe recordset, le relative chiamate di funzione [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o RFX di massa alla funzione membro [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) e le inizializzazioni dei membri dei dati nel costruttore della classe. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

- Eseguire l'override di funzioni membro del recordset, come `OnSetOptions`, per impostare opzioni specifiche dell'applicazione o eseguire l'override delle impostazioni predefinite.

Se si vuole basare il recordset su un'istruzione SQL complessa, è necessario usare una combinazione di queste tecniche di personalizzazione. Ad esempio, è possibile usare clausole e parole chiave SQL non direttamente supportate dal recordset o eseguire il join di più tabelle.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)<br/>
[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[SQL](../../data/odbc/sql.md)<br/>
[Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
