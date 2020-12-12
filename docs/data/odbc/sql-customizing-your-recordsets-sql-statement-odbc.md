---
description: "Altre informazioni su: SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)"
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
ms.openlocfilehash: 73765ed66dacbc017cca6236ae5a90388390fa45
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278688"
---
# <a name="sql-customizing-your-recordsets-sql-statement-odbc"></a>SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)

In questo argomento:

- Creazione di un'istruzione SQL da parte del Framework

- Come eseguire l'override dell'istruzione SQL

> [!NOTE]
> Queste informazioni sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC, vedere l'argomento "confronto tra Microsoft Jet motore di database SQL e ANSI SQL" nella Guida di DAO.

## <a name="sql-statement-construction"></a>Creazione di istruzioni SQL

Il recordset basa la selezione dei record principalmente in un'istruzione SQL **Select** . Quando si dichiara la classe con una procedura guidata, viene scritta una versione di override della `GetDefaultSQL` funzione membro che ha un aspetto simile al seguente (per una classe recordset denominata `CAuthors` ).

```cpp
CString CAuthors::GetDefaultSQL()
{
    return "AUTHORS";
}
```

Per impostazione predefinita, questo override restituisce il nome della tabella specificato con la procedura guidata. Nell'esempio, il nome della tabella è "AUTHORs". Quando in un secondo momento si chiama la `Open` funzione membro del recordset, `Open` costruisce un'istruzione **Select** finale nel formato seguente:

```
SELECT rfx-field-list FROM table-name [WHERE m_strFilter]
       [ORDER BY m_strSort]
```

dove `table-name` viene ottenuto chiamando `GetDefaultSQL` ed `rfx-field-list` è ottenuto dalla funzione RFX chiama in `DoFieldExchange` . Questo è ciò che si ottiene per un'istruzione **Select** a meno che non lo si sostituisca con una versione di override in fase di esecuzione, sebbene sia anche possibile modificare l'istruzione predefinita con parametri o un filtro.

> [!NOTE]
> Se si specifica un nome di colonna che contiene (o potrebbe contenere) spazi, è necessario racchiudere il nome tra parentesi quadre. Il nome "First Name", ad esempio, deve essere "[First Name]".

Per eseguire l'override dell'istruzione **Select** predefinita, passare una stringa contenente un'istruzione **SELECT** completa quando si chiama `Open` . Anziché creare una stringa predefinita, il recordset utilizza la stringa specificata. Se l'istruzione sostitutiva contiene una clausola **where** , non specificare un filtro in `m_strFilter` perché si avranno quindi due istruzioni di filtro. Analogamente, se l'istruzione di sostituzione contiene una clausola **Order by** , non specificare un ordinamento in `m_strSort` modo che non si disponga di due istruzioni di ordinamento.

> [!NOTE]
> Se si usano stringhe letterali nei filtri (o in altre parti dell'istruzione SQL), potrebbe essere necessario indicare (racchiudere i delimitatori specificati) tali stringhe con un prefisso letterale specifico di DBMS e un carattere di suffisso letterale (o caratteri).

È inoltre possibile che si verifichino particolari requisiti sintattici per operazioni quali outer join, a seconda del sistema DBMS. Utilizzare le funzioni ODBC per ottenere queste informazioni dal driver per il sistema DBMS. Ad esempio, chiamare `::SQLGetTypeInfo` per un particolare tipo di dati, ad esempio `SQL_VARCHAR` , per richiedere il LITERAL_PREFIX e LITERAL_SUFFIX caratteri. Se si sta scrivendo codice indipendente dal database, vedere [Appendice C: grammatica SQL](/sql/odbc/reference/appendixes/appendix-c-sql-grammar) nella Guida [di riferimento per programmatori ODBC](/sql/odbc/reference/odbc-programmer-s-reference) per informazioni dettagliate sulla sintassi.

Un oggetto recordset crea l'istruzione SQL utilizzata per selezionare i record, a meno che non si passi un'istruzione SQL personalizzata. Il modo in cui questa operazione viene eseguita dipende principalmente dal valore passato nel parametro *lpszSQL* della `Open` funzione membro.

Il formato generale di un'istruzione SQL **Select** è il seguente:

```
SELECT [ALL | DISTINCT] column-list FROM table-list
    [WHERE search-condition][ORDER BY column-list [ASC | DESC]]
```

Un modo per aggiungere la parola chiave **Distinct** all'istruzione SQL del recordset consiste nell'incorporare la parola chiave nella prima chiamata di funzione RFX in `DoFieldExchange` . Ad esempio:

```
...
    RFX_Text(pFX, "DISTINCT CourseID", m_strCourseID);
...
```

> [!NOTE]
> Utilizzare questa tecnica solo con un recordset aperto in sola lettura.

## <a name="overriding-the-sql-statement"></a>Override dell'istruzione SQL

Nella tabella seguente vengono illustrate le possibilità per il parametro *lpszSQL* su `Open` . I case della tabella vengono illustrati in seguito alla tabella.

**Il parametro lpszSQL e la stringa SQL risultante**

|Caso|Elementi passati in lpszSQL|Istruzione SELECT risultante|
|----------|------------------------------|------------------------------------|
|1|NULL|**Selezionare** *RFX-Field-List* **dal** *nome tabella*<br /><br /> `CRecordset::Open` chiama `GetDefaultSQL` per ottenere il nome della tabella. La stringa risultante è uno dei casi da 2 a 5, a seconda delle `GetDefaultSQL` restituzione.|
|2|Un nome di tabella|**Selezionare** *RFX-Field-List* **dal** *nome tabella*<br /><br /> L'elenco dei campi viene ricavato dalle istruzioni RFX in `DoFieldExchange` . Se `m_strFilter` e `m_strSort` non sono vuoti, aggiunge le clausole **where** e/o **Order by** .|
|3 \*|Un'istruzione **Select** completa ma senza una clausola **where** o **Order by**|Come superato. Se `m_strFilter` e `m_strSort` non sono vuoti, aggiunge le clausole **where** e/o **Order by** .|
|4 \*|Un'istruzione **Select** completa con una clausola **where** e/o **Order by**|Come superato. `m_strFilter` e/o `m_strSort` devono rimanere vuoti oppure vengono generate due istruzioni Filter e/o di ordinamento.|
|5 \*|Una chiamata a un stored procedure|Come superato.|

\*`m_nFields`deve essere minore o uguale al numero di colonne specificato nell'istruzione **SELECT** . Il tipo di dati di ogni colonna specificata nell'istruzione **Select** deve corrispondere al tipo di dati della colonna di output RFX corrispondente.

### <a name="case-1---lpszsql--null"></a>Caso 1 lpszSQL = NULL

La selezione del recordset dipende da ciò che `GetDefaultSQL` viene restituito quando lo `CRecordset::Open` chiama. I casi da 2 a 5 descrivono le possibili stringhe.

### <a name="case-2---lpszsql--a-table-name"></a>Caso 2 lpszSQL = nome della tabella

Il recordset utilizza il metodo RFX (record Field Exchange) per compilare l'elenco di colonne dai nomi di colonna forniti nelle chiamate di funzione RFX nell'override della classe recordset di `DoFieldExchange` . Se è stata utilizzata una procedura guidata per dichiarare la classe recordset, questo caso ha lo stesso risultato del caso 1 (purché venga passato lo stesso nome di tabella specificato nella procedura guidata). Se non si utilizza una procedura guidata per scrivere la classe, il caso 2 rappresenta il modo più semplice per costruire l'istruzione SQL.

Nell'esempio seguente viene costruita un'istruzione SQL che consente di selezionare record da un'applicazione di database MFC. Quando il Framework chiama la `GetDefaultSQL` funzione membro, la funzione restituisce il nome della tabella, `SECTION` .

```cpp
CString CEnrollSet::GetDefaultSQL()
{
    return "SECTION";
}
```

Per ottenere i nomi delle colonne per l'istruzione SQL **Select** , il Framework chiama la `DoFieldExchange` funzione membro.

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

Al termine, l'istruzione SQL ha un aspetto simile al seguente:

```sql
SELECT CourseID, InstructorID, RoomNo, Schedule, SectionNo
    FROM SECTION
```

### <a name="case-3---lpszsql--a-selectfrom-statement"></a>Caso 3 lpszSQL = un'istruzione SELECT/FROM

L'elenco delle colonne viene specificato manualmente anziché basarsi su RFX per crearlo automaticamente. Questa operazione può essere eseguita nei casi seguenti:

- Si desidera specificare la parola chiave **Distinct** in seguito a **SELECT**.

   L'elenco di colonne deve corrispondere ai nomi e ai tipi delle colonne nello stesso ordine in cui sono elencati `DoFieldExchange` .

- È necessario recuperare manualmente i valori delle colonne utilizzando la funzione ODBC `::SQLGetData` anziché basarsi su RFX per eseguire il binding e il recupero delle colonne.

   È possibile, ad esempio, che si desideri adattare le nuove colonne che un cliente dell'applicazione ha aggiunto alle tabelle di database dopo la distribuzione dell'applicazione. È necessario aggiungere questi membri dati di campo aggiuntivi, che non erano noti nel momento in cui è stata dichiarata la classe con una procedura guidata.

   L'elenco di colonne deve corrispondere ai nomi e ai tipi delle colonne nello stesso ordine in cui sono elencati `DoFieldExchange` , seguiti dai nomi delle colonne associate manualmente. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

- Si desidera creare un join delle tabelle specificando più tabelle nella clausola **from** .

   Per informazioni e un esempio, vedere [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

### <a name="case-4---lpszsql--selectfrom-plus-where-andor-order-by"></a>Caso 4 lpszSQL = SELECT/FROM più WHERE e/o ORDER BY

Si specificano tutti gli elementi, ovvero l'elenco di colonne (in base alle chiamate RFX in `DoFieldExchange` ), l'elenco di tabelle e il contenuto di una clausola **where** e/o **Order by** . Se si specificano le clausole **where** e/o **Order by in** questo modo, non usare `m_strFilter` e/o `m_strSort` .

### <a name="case-5---lpszsql--a-stored-procedure-call"></a>Caso 5 lpszSQL = una chiamata a una stored procedure

Se è necessario chiamare una query predefinita, ad esempio un stored procedure in un database Microsoft SQL Server, è necessario scrivere un'istruzione **Call** nella stringa passata a *lpszSQL*. Le procedure guidate non supportano la dichiarazione di una classe recordset per la chiamata a una query predefinita. Non tutte le query predefinite restituiscono record.

Se una query predefinita non restituisce record, è possibile utilizzare `CDatabase` direttamente la funzione membro `ExecuteSQL` . Per una query predefinita che restituisce record, è inoltre necessario scrivere manualmente le chiamate RFX in `DoFieldExchange` per tutte le colonne restituite dalla procedura. Le chiamate RFX devono essere nello stesso ordine e restituire gli stessi tipi, come la query predefinita. Per ulteriori informazioni, vedere [Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).

## <a name="see-also"></a>Vedi anche

[SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)<br/>
[SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
