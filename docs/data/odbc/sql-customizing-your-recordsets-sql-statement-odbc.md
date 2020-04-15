---
title: "SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)"
ms.date: 11/04/2016
helpviewer_keywords:
- recordsets, SQL statements
- ODBC recordsets, SQL statements
- SQL statements, customizing
- SQL statements, recordset
- customizing SQL statements
- overriding, SQL statements
- SQL, opening recordsets
ms.assetid: 72293a08-cef2-4be2-aa1c-30565fcfbaf9
ms.openlocfilehash: 083d268d2b2f2eef072809b1afde9d6ea34f6996
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374511"
---
# <a name="sql-customizing-your-recordsets-sql-statement-odbc"></a>SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)

In questo argomento:

- Come il framework costruisce un'istruzione SQLHow the framework constructs a SQL statement

- Come eseguire l'override dell'istruzione SQLHow to override the SQL statement

> [!NOTE]
> Queste informazioni sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC, vedere l'argomento "Confronto di Microsoft Jet Database Engine SQL e ANSI SQL" nella Guida in linea daO.

## <a name="sql-statement-construction"></a>Costruzione di istruzioni SQLSQL Statement Construction

Il recordset basa la selezione dei record principalmente su un'istruzione SQL **SELECT.** Quando si dichiara la classe con una procedura guidata, viene scritta una versione di override della funzione `GetDefaultSQL` membro simile alla seguente (per una classe recordset denominata `CAuthors`).

```cpp
CString CAuthors::GetDefaultSQL()
{
    return "AUTHORS";
}
```

Per impostazione predefinita, questa sostituzione restituisce il nome della tabella specificato con la procedura guidata. Nell'esempio, il nome della tabella è "AUTHORS". Quando in seguito si `Open` chiama la `Open` funzione membro del recordset, si costruisce un'istruzione **SELECT** finale nel formato:

```
SELECT rfx-field-list FROM table-name [WHERE m_strFilter]
       [ORDER BY m_strSort]
```

dove `table-name` viene ottenuto chiamando `GetDefaultSQL` e `rfx-field-list` viene ottenuto `DoFieldExchange`dalle chiamate di funzione RFX in . Questo è ciò che si ottiene per un'istruzione **SELECT** a meno che non venga sostituita con una versione di override in fase di esecuzione, anche se è anche possibile modificare l'istruzione predefinita con parametri o un filtro.

> [!NOTE]
> Se si specifica un nome di colonna che contiene (o potrebbe contenere) spazi, è necessario racchiudere il nome tra parentesi quadre. Ad esempio, il nome "Nome" deve essere "[Nome]".

Per eseguire l'override dell'istruzione **SELECT** predefinita, passare `Open`una stringa contenente un'istruzione **SELECT** completa quando si chiama . Anziché costruire la propria stringa predefinita, il recordset utilizza la stringa fornita. Se l'istruzione di sostituzione contiene una clausola **WHERE,** non specificare un filtro perché `m_strFilter` si diterebbero quindi due istruzioni di filtro. Analogamente, se l'istruzione di sostituzione contiene una `m_strSort` clausola **ORDER BY,** non specificare un ordinamento in modo da non disporre di due istruzioni di ordinamento.

> [!NOTE]
> Se si utilizzano stringhe letterali nei filtri (o in altre parti dell'istruzione SQL), potrebbe essere necessario "virgolette" (racchiudere tra i delimitatori specificati) tali stringhe con un prefisso letterale specifico di DBMS e un carattere di suffisso letterale (o caratteri).

È inoltre possibile riscontrare requisiti sintattici speciali per operazioni quali outer join, a seconda del DBMS. Utilizzare le funzioni ODBC per ottenere queste informazioni dal driver per il DBMS. Ad esempio, `::SQLGetTypeInfo` chiamare per un particolare `SQL_VARCHAR`tipo di dati, ad esempio , per richiedere i caratteri LITERAL_PREFIX e LITERAL_SUFFIX. Se si scrive codice indipendente dal database, vedere [Appendice C: Grammatica SQL](/sql/odbc/reference/appendixes/appendix-c-sql-grammar) in [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference) per informazioni dettagliate sulla sintassi.

Un oggetto recordset costruisce l'istruzione SQL utilizzata per selezionare i record, a meno che non si passi un'istruzione SQL personalizzata. La modalità di operazione dipende principalmente dal valore passato nel `Open` parametro *lpszSQL* della funzione membro.

La forma generale di un'istruzione SQL **SELECT** è:

```
SELECT [ALL | DISTINCT] column-list FROM table-list
    [WHERE search-condition][ORDER BY column-list [ASC | DESC]]
```

Un modo per aggiungere la parola chiave **DISTINCT** all'istruzione SQL del recordset consiste `DoFieldExchange`nell'incorporare la parola chiave nella prima chiamata di funzione RFX in . Ad esempio:

```
...
    RFX_Text(pFX, "DISTINCT CourseID", m_strCourseID);
...
```

> [!NOTE]
> Utilizzare questa tecnica solo con un recordset aperto in sola lettura.

## <a name="overriding-the-sql-statement"></a>Override dell'istruzione SQL

Nella tabella seguente vengono illustrate le possibilità per `Open`il parametro *lpszSQL* su . I casi nella tabella sono spiegati seguendo la tabella.

**Il parametro lpszSQL e la stringa SQL risultante**

|Caso|Cosa si passa in lpszSQL|L'istruzione SELECT risultante|
|----------|------------------------------|------------------------------------|
|1|NULL|**SELECT** *rfx-field-list* **FROM** nome *tabella*<br /><br /> `CRecordset::Open`chiamate `GetDefaultSQL` per ottenere il nome della tabella. La stringa risultante è uno dei casi `GetDefaultSQL` da 2 a 5, a seconda di ciò che restituisce.|
|2|Un nome di tabella|**SELECT** *rfx-field-list* **FROM** nome *tabella*<br /><br /> L'elenco dei campi viene ricavato dalle istruzioni RFX in `DoFieldExchange`. Se `m_strFilter` `m_strSort` e non sono vuote, aggiunge le clausole **WHERE** e/o **ORDER BY.**|
|3\*|Un'istruzione **SELECT** completa ma senza una clausola **WHERE** o **ORDER BY**|Come passato. Se `m_strFilter` `m_strSort` e non sono vuote, aggiunge le clausole **WHERE** e/o **ORDER BY.**|
|4\*|Un'istruzione **SELECT** completa con una clausola **WHERE** e/o **ORDER BY**|Come passato. `m_strFilter`e/o `m_strSort` devono rimanere vuoti oppure vengono prodotte due istruzioni filter e/o sort.|
|5\*|Chiamata a una stored procedure|Come passato.|

\*`m_nFields` deve essere minore o uguale al numero di colonne specificato nell'istruzione **SELECT.** Il tipo di dati di ogni colonna specificata nell'istruzione **SELECT** deve essere uguale al tipo di dati della colonna di output RFX corrispondente.

### <a name="case-1---lpszsql--null"></a>Caso 1 lpszSQL - NULL

La selezione del `GetDefaultSQL` recordset `CRecordset::Open` dipende da ciò che viene restituito quando lo chiama. I casi da 2 a 5 descrivono le stringhe possibili.

### <a name="case-2---lpszsql--a-table-name"></a>Caso 2 lpszSQL - un nome di tabella

Il recordset utilizza lo scambio di campi di record (RFX) per compilare l'elenco di `DoFieldExchange`colonne dai nomi di colonna forniti nelle chiamate di funzione RFX nell'override della classe recordset di . Se è stata utilizzata una procedura guidata per dichiarare la classe del recordset, questo caso ha lo stesso risultato del caso 1 (a condizione che venga passato lo stesso nome di tabella specificato nella procedura guidata). Se non si utilizza una procedura guidata per scrivere la classe, il caso 2 è il modo più semplice per costruire l'istruzione SQL.

Nell'esempio seguente viene costruita un'istruzione SQL che seleziona i record da un'applicazione di database MFC. Quando il framework `GetDefaultSQL` chiama la funzione membro, la `SECTION`funzione restituisce il nome della tabella, .

```cpp
CString CEnrollSet::GetDefaultSQL()
{
    return "SECTION";
}
```

Per ottenere i nomi delle colonne per l'istruzione `DoFieldExchange` SQL **SELECT,** il framework chiama la funzione membro.

```cpp
void CEnrollSet::DoFieldExchange(CFieldExchange* pFX)
{
    pFX->SetFieldType(CFieldExchange::outputColumn);
    RFX_Text(pFX, "CourseID", m_strCourseID);
    RFX_Text(pFX, "InstructorID", m_strInstructorID);
    RFX_Text(pFX, "RoomNo", m_strRoomNo);
    RFX_Text(pFX, "Schedule", m_strSchedule);
    RFX_Text(pFX, "SectionNo", m_strSectionNo);
}
```

Al termine, l'istruzione SQL è simile alla seguente:When complete, the SQL statement looks like this:

```sql
SELECT CourseID, InstructorID, RoomNo, Schedule, SectionNo
    FROM SECTION
```

### <a name="case-3---lpszsql--a-selectfrom-statement"></a>Caso 3 lpszSQL - un'istruzione SELECT/FROM

L'elenco di colonne viene specificato a mano anziché affidarsi a RFX per costruirlo automaticamente. È possibile eseguire questa operazione quando:You might want to do this when:

- Si desidera specificare la parola chiave **DISTINCT** dopo **SELECT**.

   L'elenco di colonne deve corrispondere ai nomi e `DoFieldExchange`ai tipi di colonna nello stesso ordine in cui sono elencati in .

- Si dispone del motivo per recuperare `::SQLGetData` manualmente i valori di colonna utilizzando la funzione ODBC anziché basarsi su RFX per associare e recuperare le colonne automaticamente.

   È possibile, ad esempio, si desidera ospitare nuove colonne un cliente dell'applicazione aggiunto alle tabelle di database dopo la distribuzione dell'applicazione. È necessario aggiungere questi membri dati di campo aggiuntivi, che non erano noti al momento della creazione della classe con una procedura guidata.

   L'elenco di colonne deve corrispondere ai nomi e `DoFieldExchange`ai tipi di colonna nello stesso ordine in cui sono elencati, seguiti dai nomi delle colonne associate manualmente. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

- Si desidera unire le tabelle specificando più tabelle nella clausola **FROM.**

   Per informazioni e un esempio, vedere [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

### <a name="case-4---lpszsql--selectfrom-plus-where-andor-order-by"></a>Caso 4 lpszSQL - SELECT/FROM Plus WHERE e/o ORDER BY

È possibile specificare tutto: l'elenco di `DoFieldExchange`colonne (in base alle chiamate RFX in ), l'elenco di tabelle e il contenuto di una clausola **WHERE** e/o **ORDER BY.** Se si specificano le clausole **WHERE** e/o `m_strFilter` ORDER **BY** in questo modo, non utilizzare e/o `m_strSort`.

### <a name="case-5---lpszsql--a-stored-procedure-call"></a>Caso 5 lpszSQL - una chiamata di stored procedure

Se è necessario chiamare una query predefinita, ad esempio una stored procedure in un database di Microsoft SQL Server, è necessario scrivere un'istruzione **CALL** nella stringa passata a *lpszSQL*. Le procedure guidate non supportano la dichiarazione di una classe recordset per la chiamata di una query predefinita. Non tutte le query predefinite restituiscono record.

Se una query predefinita non restituisce record, è possibile utilizzare direttamente la `CDatabase` funzione `ExecuteSQL` membro. Per una query predefinita che restituisce record, è inoltre `DoFieldExchange` necessario scrivere manualmente le chiamate RFX per tutte le colonne restituite dalla routine. Le chiamate RFX devono essere nello stesso ordine e restituire gli stessi tipi, come la query predefinita. Per ulteriori informazioni, vedere [Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).

## <a name="see-also"></a>Vedere anche

[SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)<br/>
[SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
