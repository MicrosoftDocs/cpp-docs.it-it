---
title: 'SQL: Personalizzazione di istruzione SQL del Recordset (ODBC)'
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
ms.openlocfilehash: eabaab019ee94b0c5617573c534d920ec710e9b2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62329933"
---
# <a name="sql-customizing-your-recordsets-sql-statement-odbc"></a>SQL: Personalizzazione di istruzione SQL del Recordset (ODBC)

Questo argomento viene illustrato:

- Modo in cui il framework crea un'istruzione SQL

- Come sostituire l'istruzione SQL

> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere l'argomento "Confronto di Microsoft Jet motore di Database SQL e ANSI SQL" nella Guida di DAO.

## <a name="sql-statement-construction"></a>Costruzione di istruzioni SQL

Selezione del record principalmente su un database SQL di basi del recordset **seleziona** istruzione. Quando si dichiara la classe con una procedura guidata, scrive una versione di override di `GetDefaultSQL` funzione membro in modo simile al seguente (per una classe recordset denominato `CAuthors`).

```cpp
CString CAuthors::GetDefaultSQL()
{
    return "AUTHORS";
}
```

Per impostazione predefinita, questo override restituisce il nome della tabella che è specificato con la procedura guidata. Nell'esempio, il nome della tabella è "Autori". Quando si chiama in un secondo momento il recordset `Open` funzione membro `Open` costruisce un'ulteriore **selezionare** istruzione del form:

```
SELECT rfx-field-list FROM table-name [WHERE m_strFilter]
       [ORDER BY m_strSort]
```

in cui `table-name` viene ottenuto chiamando `GetDefaultSQL` e `rfx-field-list` viene ottenuto da chiamate alle funzioni RFX in `DoFieldExchange`. Questo è ciò che si ottiene per un **seleziona** istruzione a meno che non si sostituirlo con una versione di override in fase di esecuzione, anche se è anche possibile modificare l'istruzione predefinita con parametri o un filtro.

> [!NOTE]
>  Se si specifica un nome di colonna che contiene o può contenere spazi, è necessario racchiudere il nome nelle parentesi quadre. Ad esempio, il nome "First Name" deve essere "[nome]".

Per sostituire il valore predefinito **selezionate** istruzione, passare una stringa contenente una completa **selezionare** istruzione quando si chiama `Open`. Anziché costruire una stringa personalizzata predefinita, il recordset Usa la stringa specificata. Se l'istruzione di sostituzione contiene un **in cui** clausola, non si specifica un filtro in `m_strFilter` perché si disporrebbe di due istruzioni di filtro. Analogamente, se l'istruzione di sostituzione contiene un' **ORDER BY** clausola, non si specifica un ordinamento in `m_strSort` in modo che non avranno due istruzioni di ordinamento.

> [!NOTE]
>  Se si usano le stringhe letterali in filtri (o in altre parti dell'istruzione SQL), potrebbe essere necessario "offerta" (racchiudere tra parentesi delimitatori specificati) tali stringhe con un prefisso letterale specifici del DBMS e suffissi (o più caratteri).

Potrebbe anche verificarsi speciali requisiti sintattici per operazioni quali gli outer join, a seconda del sistema DBMS. Usare funzioni ODBC per ottenere queste informazioni dal driver per il sistema DBMS. Ad esempio, chiamare `::SQLGetTypeInfo` per un particolare tipo di dati, ad esempio `SQL_VARCHAR`, per richiedere i caratteri:: SQLGetTypeInfo e SQL_VARCHAR. Se si sta scrivendo codice indipendente dal database, vedere [appendice c: Grammatica SQL](/sql/odbc/reference/appendixes/appendix-c-sql-grammar) nella [riferimento per programmatori ODBC](/sql/odbc/reference/odbc-programmer-s-reference) per informazioni dettagliate sulla sintassi.

Un oggetto recordset costruisce l'istruzione SQL che viene usato per selezionare i record a meno che non si passa un'istruzione SQL personalizzata. Questa operazione dipende principalmente dal valore passato nel *lpszSQL* parametro del `Open` funzione membro.

Il formato generale di un database SQL **seleziona** istruzione è:

```
SELECT [ALL | DISTINCT] column-list FROM table-list
    [WHERE search-condition][ORDER BY column-list [ASC | DESC]]
```

Per aggiungere il **DISTINCT** parola chiave all'istruzione SQL del recordset consiste nell'incorporare la parola chiave nella chiamata alla funzione RFX prima in `DoFieldExchange`. Ad esempio:

```
...
    RFX_Text(pFX, "DISTINCT CourseID", m_strCourseID);
...
```

> [!NOTE]
>  Usare questa tecnica solo con un set di record aperto in sola lettura.

## <a name="overriding-the-sql-statement"></a>L'istruzione SQL viene sottoposto a override

Nella tabella seguente mostra le diverse possibilità per i *lpszSQL* parametro per `Open`. I casi nella tabella vengono illustrati la tabella seguente.

**La stringa risultante SQL e il parametro lpszSQL**

|Case|Che cos'è passare lpszSQL|L'istruzione SELECT risulta|
|----------|------------------------------|------------------------------------|
|1|NULL|**Selezionare** *elenco di campi rfx* **FROM** *-nome della tabella*<br /><br /> `CRecordset::Open` le chiamate `GetDefaultSQL` per ottenere il nome della tabella. La stringa risultante è uno dei casi 2 a 5, a seconda di ciò che `GetDefaultSQL` restituisce.|
|2|Un nome di tabella|**Selezionare** *elenco di campi rfx* **FROM** *-nome della tabella*<br /><br /> Elenco dei campi viene eseguito dalle istruzioni RFX in `DoFieldExchange`. Se `m_strFilter` e `m_strSort` non sono vuoti, aggiunge il **in cui** e/o **ORDER BY** clausole.|
|3 \*|Completa **selezionate** istruzione ma senza una **in cui** oppure **ORDER BY** clausola|Valore passato. Se `m_strFilter` e `m_strSort` non sono vuoti, aggiunge il **in cui** e/o **ORDER BY** clausole.|
|4 \*|Completa **selezionate** istruzione con un **in cui** e/o **ORDER BY** clausola|Valore passato. `m_strFilter` e/o `m_strSort` deve rimanere vuoto o due filtri e/o istruzioni di ordinamento vengono prodotte.|
|5 \*|Una chiamata a una stored procedure|Valore passato.|

\* `m_nFields` deve essere minore o uguale al numero di colonne specificato nella **seleziona** istruzione. Il tipo di dati di ogni colonna specificata nella **seleziona** istruzione deve essere lo stesso come il tipo di dati della colonna di output corrispondente RFX.

### <a name="case-1---lpszsql--null"></a>Case 1   lpszSQL = NULL

La selezione di recordset dipende da che cosa `GetDefaultSQL` restituisce quando `CRecordset::Open` lo chiama. Le stringhe possibili vengono descritti i casi 2 a 5.

### <a name="case-2---lpszsql--a-table-name"></a>Caso 2 lpszSQL = un nome di tabella

Il set di record Usa il trasferimento di campi di record (RFX) per compilare l'elenco di colonne dai nomi di colonna forniti nelle chiamate di RFX (funzione) nell'override della classe recordset di `DoFieldExchange`. Se si usa una procedura guidata per dichiarare una classe dell'oggetto recordset, in questo caso ha lo stesso risultato di caso 1 (a condizione che venga passato lo stesso nome di tabella specificato nella procedura guidata). Se non si esegue una procedura guidata per scrivere la classe, case 2 è il modo più semplice per costruire l'istruzione SQL.

Nell'esempio seguente crea un'istruzione SQL che seleziona i record da un'applicazione database MFC. Quando il framework chiama il `GetDefaultSQL` funzione membro, la funzione restituisce il nome della tabella, `SECTION`.

```cpp
CString CEnrollSet::GetDefaultSQL()
{
    return "SECTION";
}
```

Per ottenere i nomi delle colonne per il codice SQL **selezionate** istruzione, il framework chiama il `DoFieldExchange` funzione membro.

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

Al termine dell'esercitazione, l'istruzione SQL è simile al seguente:

```sql
SELECT CourseID, InstructorID, RoomNo, Schedule, SectionNo
    FROM SECTION
```

### <a name="case-3---lpszsql--a-selectfrom-statement"></a>Caso 3 lpszSQL = un'istruzione SELECT o dall'istruzione

Specificare l'elenco di colonne manualmente piuttosto che basarsi su RFX a crearlo automaticamente. Si potrebbe voler eseguire questa operazione quando:

- Per specificare il **DISTINCT** parola **seleziona**.

   L'elenco di colonne deve corrispondere i nomi delle colonne e i tipi nello stesso ordine in cui sono elencati `DoFieldExchange`.

- È necessario recuperare manualmente i valori di colonna usando la funzione ODBC `::SQLGetData` piuttosto che basarsi su RFX per eseguire l'associazione e recuperare le colonne per l'utente.

   È possibile, ad esempio includere le nuove colonne a che un cliente dell'applicazione aggiunti alle tabelle del database dopo l'applicazione è stata distribuita. È necessario aggiungere questi membri dati di campo aggiuntivi, che non sono noti al momento che è stata dichiarata la classe con una procedura guidata.

   L'elenco di colonne deve corrispondere i nomi delle colonne e i tipi nello stesso ordine in cui sono elencati `DoFieldExchange`, seguita dai nomi delle colonne associate manualmente. Per altre informazioni, vedere [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

- Si vuole unire le tabelle specificando più tabelle nel **FROM** clausola.

   Per informazioni ed esempi, vedere [Recordset: Esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

### <a name="case-4---lpszsql--selectfrom-plus-where-andor-order-by"></a>Caso 4 lpszSQL = SELECT / FROM e WHERE e/o ORDER BY

È necessario specificare: l'elenco di colonne (in chiamate RFX in base `DoFieldExchange`), l'elenco di tabelle e il contenuto di un **in cui** e/o un' **ORDER BY** clausola. Se si specifica il **in cui** e/o **ORDER BY** clausole in questo modo, non usare `m_strFilter` e/o `m_strSort`.

### <a name="case-5---lpszsql--a-stored-procedure-call"></a>Caso 5 lpszSQL = una chiamata di Stored Procedure

Se è necessario chiamare una query predefinita (ad esempio una stored procedure in un database Microsoft SQL Server), è necessario scrivere una **CHIAMARE** istruzione nella stringa di cui si passa a *lpszSQL*. Le procedure guidate non supportano la dichiarazione di una classe recordset per la chiamata di una query predefinita. Non tutte le query predefinite restituiscono i record.

Se una query predefinita non restituisce i record, è possibile usare la `CDatabase` funzione membro `ExecuteSQL` direttamente. Per una query predefinita che restituiscono record, è necessario scrivere manualmente anche le chiamate RFX in `DoFieldExchange` per tutte le colonne restituite. Le chiamate RFX devono essere nello stesso ordine e restituire gli stessi tipi, la query predefinita. Per altre informazioni, vedere [Recordset: Dichiarazione di una classe per una Query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).

## <a name="see-also"></a>Vedere anche

[SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)<br/>
[SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
