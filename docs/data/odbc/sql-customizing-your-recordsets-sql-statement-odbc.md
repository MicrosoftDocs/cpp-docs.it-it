---
title: 'SQL: Personalizzazione di istruzione SQL del Recordset (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- recordsets, SQL statements
- ODBC recordsets, SQL statements
- SQL statements, customizing
- SQL statements, recordset
- customizing SQL statements
- overriding, SQL statements
- SQL, opening recordsets
ms.assetid: 72293a08-cef2-4be2-aa1c-30565fcfbaf9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f385127d1b61e1453eb7a079963da727f82f1874
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="sql-customizing-your-recordsets-sql-statement-odbc"></a>SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)
Questo argomento viene illustrato:  
  
-   Come il framework crea un'istruzione SQL  
  
-   Come eseguire l'override dell'istruzione SQL  
  
> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere l'argomento "Confronto del Database del motore SQL e ANSI SQL di Microsoft Jet" nella Guida di DAO.  
  
## <a name="sql-statement-construction"></a>Costruzione di istruzioni SQL  
 Il recordset basa selezione dei record principalmente su un database SQL **selezionare** istruzione. Quando si dichiara la classe con una procedura guidata, viene scritta una versione di override di `GetDefaultSQL` funzione membro che è simile alla seguente (per una classe recordset chiamato `CAuthors`).  
  
```  
CString CAuthors::GetDefaultSQL()  
{  
    return "AUTHORS";  
}  
```  
  
 Per impostazione predefinita, questo override restituisce il nome di tabella specificato con la procedura guidata. Nell'esempio, il nome della tabella è "Autori". Quando si chiama in un secondo momento il recordset **aprire** funzione membro, **aprire** crea un' **selezionare** istruzione del form:  
  
```  
SELECT rfx-field-list FROM table-name [WHERE m_strFilter]   
       [ORDER BY m_strSort]  
```  
  
 dove `table-name` viene ottenuto chiamando `GetDefaultSQL` e `rfx-field-list` ottenuto da chiamate alle funzioni RFX in `DoFieldExchange`. Questo è il risultato per un **selezionare** istruzione a meno che non si sostituirlo con una versione di override in fase di esecuzione, sebbene sia possibile anche modificare l'istruzione predefinita con parametri o un filtro.  
  
> [!NOTE]
>  Se si specifica un nome di colonna che contiene o può contenere spazi, è necessario racchiudere il nome tra parentesi quadre. Ad esempio, il nome "Nome" deve essere "[nome]".  
  
 Per ignorare l'impostazione predefinita **selezionare** istruzione, passare una stringa contenente un completo **selezionare** istruzione quando si chiama **aprire**. Anziché costruire una stringa personalizzata predefinita, il recordset utilizza la stringa specificata. Se l'istruzione di sostituzione contiene un **in** clausola, non si specifica un filtro in **m_strFilter** perché si disporrebbe di due istruzioni di filtro. Analogamente, se l'istruzione di sostituzione contiene un **ORDER BY** clausola, non specificare un ordinamento in `m_strSort` in modo che non avranno due istruzioni di ordinamento.  
  
> [!NOTE]
>  Se si utilizzano stringhe letterali i filtri (o altre parti dell'istruzione SQL), potrebbe essere necessario "offerta" (racchiudere tra i delimitatori specificati) tali stringhe letterali e con un prefisso letterale DBMS specifici suffissi caratteri (o caratteri).  
  
 Potrebbe anche verificarsi speciali requisiti sintattici per operazioni quali gli outer join, a seconda del sistema DBMS. Utilizzare le funzioni ODBC per ottenere queste informazioni dal driver del sistema DBMS. Ad esempio, chiamare **:: SQLGetTypeInfo** per un particolare tipo di dati, ad esempio **SQL_VARCHAR**, per richiedere il **:: SQLGetTypeInfo** e **SQL_VARCHAR** caratteri. Se si scrive codice indipendente dal database, vedere l'appendice C nel *ODBC SDK * * di riferimento per programmatori* sul CD di MSDN Library per informazioni dettagliate sulla sintassi.  
  
 Un oggetto recordset costruisce l'istruzione SQL utilizzata per selezionare i record, a meno che non si passa un'istruzione SQL personalizzata. Questa procedura dipende principalmente dal valore passato nel `lpszSQL` parametro del **aprire** funzione membro.  
  
 Il formato generale di un database SQL **selezionare** istruzione:  
  
```  
SELECT [ALL | DISTINCT] column-list FROM table-list  
    [WHERE search-condition][ORDER BY column-list [ASC | DESC]]  
```  
  
 Per aggiungere il **DISTINCT** parola chiave per l'istruzione SQL del recordset consiste nell'incorporare la parola chiave nella prima chiamata di funzione RFX in `DoFieldExchange`. Ad esempio:  
  
```  
...  
    RFX_Text(pFX, "DISTINCT CourseID", m_strCourseID);  
...  
```  
  
> [!NOTE]
>  Utilizzare questa tecnica solo con un recordset è aperto in sola lettura.  
  
## <a name="overriding-the-sql-statement"></a>L'istruzione SQL viene sottoposto a override  
 La tabella seguente illustra i possibili valori di `lpszSQL` parametro **aprire**. I casi illustrati nella tabella sono illustrati nella tabella seguente.  
  
 **Il parametro lpszSQL e la stringa SQL risultante**  
  
|Case|Passare in lpszSQL|L'istruzione SELECT risulta|  
|----------|------------------------------|------------------------------------|  
|1|**NULL**|**Selezionare** *rfx-field-list* **FROM** *-nome della tabella*<br /><br /> `CRecordset::Open` chiamate `GetDefaultSQL` per ottenere il nome della tabella. La stringa risultante è uno dei casi da 2 a 5, a seconda di ciò `GetDefaultSQL` restituisce.|  
|2|Un nome di tabella|**Selezionare** *rfx-field-list* **FROM** *-nome della tabella*<br /><br /> Elenco dei campi viene ricavato dalle istruzioni RFX in `DoFieldExchange`. Se **m_strFilter** e `m_strSort` non sono vuoti, aggiunge il **in** e/o **ORDER BY** clausole.|  
|3 *|Completa **selezionare** istruzione ma senza un **in** o **ORDER BY** clausola|Valore passato. Se **m_strFilter** e `m_strSort` non sono vuoti, aggiunge il **in** e/o **ORDER BY** clausole.|  
|4 *|Completa **selezionare** istruzione con un **in** e/o **ORDER BY** clausola|Valore passato. **m_strFilter** e/o `m_strSort` deve rimanere vuoto o filtro di due e/o generate istruzioni di ordinamento.|  
|5 *|Una chiamata a una stored procedure|Valore passato.|  
  
 \* `m_nFields` deve essere minore o uguale al numero di colonne specificate nella **selezionare** istruzione. Il tipo di dati di ogni colonna specificata nel **selezionare** istruzione deve essere lo stesso come il tipo di dati della colonna di output RFX corrispondente.  
  
### <a name="case-1---lpszsql--null"></a>Caso 1 lpszSQL = NULL  
 La selezione del recordset dipende da quali `GetDefaultSQL` restituisce quando `CRecordset::Open` chiama. Le stringhe possibili vengono descritti i casi 2 a 5.  
  
### <a name="case-2---lpszsql--a-table-name"></a>Caso 2 lpszSQL = un nome di tabella  
 Il recordset utilizza il trasferimento di campi di record (RFX) per compilare l'elenco di colonne dai nomi delle colonne forniti nelle chiamate RFX funzione nell'override della classe recordset di `DoFieldExchange`. Se si usa una procedura guidata per dichiarare una classe dell'oggetto recordset, il case ha lo stesso risultato caso 1 (a condizione che venga passato lo stesso nome di tabella specificata nella procedura guidata). Se non si utilizza una procedura guidata per scrivere la classe, case 2 è il modo più semplice per costruire l'istruzione SQL.  
  
 Il seguente esempio crea un'istruzione SQL che seleziona i record da un'applicazione database MFC. Quando il framework chiama la `GetDefaultSQL` funzione membro, la funzione restituisce il nome della tabella, `SECTION`.  
  
```  
CString CEnrollSet::GetDefaultSQL()  
{  
    return "SECTION";  
}  
```  
  
 Per ottenere i nomi delle colonne per l'istruzione SQL **selezionare** istruzione, il framework chiama la `DoFieldExchange` funzione membro.  
  
```  
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
  
 Al termine, l'istruzione SQL è simile al seguente:  
  
```  
SELECT CourseID, InstructorID, RoomNo, Schedule, SectionNo   
    FROM SECTION  
```  
  
### <a name="case-3---lpszsql--a-selectfrom-statement"></a>Caso 3 lpszSQL = un'istruzione SELECT o dall'istruzione  
 Specificare l'elenco di colonne manualmente anziché basarsi sulla RFX per crearlo automaticamente. È necessario eseguire questa operazione quando:  
  
-   Per specificare il **DISTINCT** seguente parola chiave **selezionare**.  
  
     Elenco di colonne deve corrispondere i nomi di colonna e i tipi nello stesso ordine in cui sono elencati `DoFieldExchange`.  
  
-   È necessario recuperare manualmente i valori di colonna utilizzando la funzione ODBC **:: SQLGetData** anziché basarsi sulla RFX per associare e recuperare le colonne per l'utente.  
  
     Ad esempio, voler includere le nuove colonne a che un cliente della propria applicazione aggiunti alle tabelle del database dopo l'applicazione è stata distribuita. È necessario aggiungere questi membri dati di campo aggiuntivo, che non sono stati noto in fase di che dichiarazione della classe con una procedura guidata.  
  
     Elenco di colonne deve corrispondere i nomi di colonna e i tipi nello stesso ordine in cui sono elencati `DoFieldExchange`, seguito dai nomi delle colonne associate manualmente. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
-   Si desidera unire in join tabelle specificando più tabelle di **FROM** clausola.  
  
     Per informazioni ed esempi, vedere [Recordset: esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  
### <a name="case-4---lpszsql--selectfrom-plus-where-andor-order-by"></a>Caso 4 lpszSQL = selezionare / da e in cui e/o ORDER BY  
 È necessario specificare: elenco di colonne (in base alle chiamate RFX in `DoFieldExchange`), l'elenco di tabella e il contenuto di un **in** e/o un **ORDER BY** clausola. Se si specifica il **in** e/o **ORDER BY** clausole in questo modo, non utilizzare **m_strFilter** e/o `m_strSort`.  
  
### <a name="case-5---lpszsql--a-stored-procedure-call"></a>Caso 5 lpszSQL = una chiamata di Stored Procedure  
 Se è necessario chiamare una query predefinita (ad esempio una stored procedure in un database di Microsoft SQL Server), è necessario scrivere un **CHIAMARE** istruzione nella stringa di cui si passa a `lpszSQL`. Le procedure guidate non supportano la dichiarazione di una classe per la chiamata di una query predefinita. Non tutte le query predefinite restituiscono record.  
  
 Se una query predefinita non restituisce i record, è possibile utilizzare il `CDatabase` funzione membro `ExecuteSQL` direttamente. Per una query predefinita che restituisce record, è necessario scrivere manualmente le chiamate RFX in `DoFieldExchange` per tutte le colonne restituite. Le chiamate a RFX devono essere nello stesso ordine e restituire gli stessi tipi, la query predefinita. Per ulteriori informazioni, vedere [Recordset: dichiarazione di una classe per una Query già definita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [SQL: SQL e i tipi di dati C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)   
 [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
