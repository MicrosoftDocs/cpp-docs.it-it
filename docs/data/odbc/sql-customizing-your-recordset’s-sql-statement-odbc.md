---
title: "SQL: personalizzazione dell&#39;istruzione SQL del recordset (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "personalizzazione di istruzioni SQL"
  - "recordset ODBC, SQL (istruzioni)"
  - "override, SQL (istruzioni)"
  - "recordset, SQL (istruzioni)"
  - "SQL (istruzioni), personalizzazione"
  - "SQL (istruzioni), recordset"
  - "SQL, apertura di recordset"
ms.assetid: 72293a08-cef2-4be2-aa1c-30565fcfbaf9
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SQL: personalizzazione dell&#39;istruzione SQL del recordset (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono fornite informazioni su:  
  
-   Creazione di un'istruzione SQL  
  
-   Override dell'istruzione SQL  
  
> [!NOTE]
>  Queste informazioni si riferiscono alle classi ODBC MFC.  Se si utilizzano le classi DAO di MFC, vedere l'argomento relativo al confronto tra la sintassi SQL del modulo di gestione di database Microsoft Jet e quella ANSI nella Guida di DAO.  
  
## Creazione di un'istruzione SQL  
 Il recordset basa la selezione dei record principalmente su un'istruzione SQL **SELECT**.  Quando si dichiara la classe tramite una procedura guidata, viene scritta una versione di override della funzione membro `GetDefaultSQL`. Di seguito è riportato un esempio di tale funzione per una classe di recordset denominata `CAuthors`.  
  
```  
CString CAuthors::GetDefaultSQL()  
{  
    return "AUTHORS";  
}  
```  
  
 per impostazione predefinita, l'override riportato nell'esempio restituisce il nome della tabella specificato con la procedura guidata.  Nell'esempio la tabella è denominata AUTHORS. Quando successivamente si chiama la funzione membro **Open** del recordset, **Open** crea un'istruzione **SELECT** completa con il formato seguente:  
  
```  
SELECT rfx-field-list FROM table-name [WHERE m_strFilter]   
       [ORDER BY m_strSort]  
```  
  
 in cui `table-name` è ottenuto mediante una chiamata a `GetDefaultSQL` e `rfx-field-list` è ottenuto mediante le chiamate alle funzioni RFX in `DoFieldExchange`.  Questi sono gli elementi restituiti da un'istruzione **SELECT**, a meno che non venga sostituita da una versione di override in fase di esecuzione, sebbene sia anche possibile modificare l'istruzione predefinita mediante parametri o un filtro.  
  
> [!NOTE]
>  Se si specifica il nome di una colonna che contiene o potrebbe contenere spazi, è necessario racchiudere il nome tra parentesi quadre.  Il nome Nome autore dovrà ad esempio essere specificato come \[Nome autore\].  
  
 Per eseguire l'override dell'istruzione **SELECT** predefinita, quando si chiama **Open** è necessario passare una stringa contenente un'istruzione **SELECT** completa.  Il recordset utilizza la stringa specificata, anziché creare una stringa personalizzata predefinita.  Se l'istruzione di sostituzione contiene una clausola **WHERE**, non specificare alcun filtro in **m\_strFilter** per evitare la generazione di due istruzioni di filtro.  In modo analogo, se l'istruzione di sostituzione contiene una clausola **ORDER BY**, non specificare un criterio di ordinamento in `m_strSort` per evitare che vengano create due istruzioni di ordinamento.  
  
> [!NOTE]
>  Se si utilizzano stringhe letterali nei filtri o in altre parti dell'istruzione SQL, potrebbe essere necessario racchiudere tra specifici delimitatori tali stringhe con uno o più caratteri specifici di valore letterale per prefissi e suffissi del DBMS.  
  
 È inoltre possibile che siano necessari requisiti sintattici specifici per operazioni quali gli outer join, a seconda del DBMS utilizzato.  Per ottenere queste informazioni dal driver per il DBMS, utilizzare le funzioni ODBC.  Per richiedere i caratteri **LITERAL\_PREFIX** e **LITERAL\_SUFFIX**, chiamare, ad esempio, **::SQLGetTypeInfo** per un determinato tipo di dati, quale **SQL\_VARCHAR**.  Per informazioni dettagliate sulla sintassi in caso di scrittura di codice indipendente dal database, vedere l'appendice C in *ODBC SDK* *Programmer's Reference* nel CD di MSDN Library.  
  
 L'oggetto recordset crea l'istruzione SQL utilizzata per la selezione dei record, a meno che non venga passata un'istruzione SQL personalizzata.  La modalità di esecuzione di tale operazione dipende principalmente dal valore passato nel parametro `lpszSQL` della funzione membro **Open**.  
  
 Il formato generico di un'istruzione SQL **SELECT** è il seguente:  
  
```  
SELECT [ALL | DISTINCT] column-list FROM table-list  
    [WHERE search-condition][ORDER BY column-list [ASC | DESC]]  
```  
  
 Per aggiungere la parola chiave **DISTINCT** all'istruzione SQL del recordset, è possibile inserirla nella prima chiamata alla funzione RFX in `DoFieldExchange`.  Di seguito è riportato un esempio.  
  
```  
...  
    RFX_Text(pFX, "DISTINCT CourseID", m_strCourseID);  
...  
```  
  
> [!NOTE]
>  Utilizzare questa tecnica esclusivamente con un recordset aperto in sola lettura.  
  
## Override dell'istruzione SQL  
 Nella tabella riportata di seguito vengono elencati i possibili valori del parametro `lpszSQL` della funzione **Open**.  Dopo la tabella sono descritti in ordine i diversi casi.  
  
 **Parametro lpszSQL e stringa SQL risultante**  
  
|Case|Valore passato in lpszSQL|Istruzione SELECT risultante|  
|----------|-------------------------------|----------------------------------|  
|1|**NULL**|**SELECT** *rfx\-field\-list* **FROM** *table\-name*<br /><br /> `CRecordset::Open` chiama `GetDefaultSQL` per recuperare il nome della tabella.  La stringa risultante è una delle stringhe illustrate nei casi da 2 a 5, a seconda del valore restituito da `GetDefaultSQL`.|  
|2|Nome di una tabella|**SELECT** *rfx\-field\-list* **FROM** *table\-name*<br /><br /> L'elenco dei campi viene ricavato dalle istruzioni RFX in `DoFieldExchange`.  Se **m\_strFilter** e `m_strSort` non sono vuoti, verranno aggiunte le clausole **WHERE** e\/o **ORDER BY**.|  
|3 \*|Un'istruzione **SELECT** completa senza la clausola **WHERE** o **ORDER BY**|Valore passato.  Se **m\_strFilter** e `m_strSort` non sono vuoti, verranno aggiunte le clausole **WHERE** e\/o **ORDER BY**.|  
|4 \*|Un'istruzione **SELECT** completa con una clausola **WHERE** e\/o **ORDER BY**|Valore passato.  È necessario che **m\_strFilter** e\/o `m_strSort` rimangano vuoti, altrimenti verranno generate due istruzioni di filtro e\/o di ordinamento.|  
|5 \*|Una chiamata a una stored procedure|Valore passato.|  
  
 \* È necessario che `m_nFields` sia minore o uguale al numero di colonne specificato nell'istruzione **SELECT**.  Il tipo di dati di ciascuna colonna specificata nell'istruzione **SELECT** deve essere uguale al tipo di dati della colonna di output RFX corrispondente.  
  
### Caso 1   lpszSQL \= NULL  
 La selezione del recordset dipende dal valore restituito dalla funzione `GetDefaultSQL` quando viene chiamata da `CRecordset::Open`.  I casi da 2 a 5 descrivono le stringhe possibili.  
  
### Caso 2   lpszSQL \= nome di una tabella  
 Il recordset utilizza il trasferimento di campi di record \(RFX\) per compilare l'elenco delle colonne dai nomi delle colonne forniti nelle chiamate alle funzioni RFX nell'override di `DoFieldExchange` della classe recordset.  Se si dichiara la classe recordset mediante una procedura guidata, questo caso produrrà lo stesso risultato del caso 1, a condizione che venga passato lo stesso nome di tabella specificato nella procedura guidata.  Se la scrittura della classe non viene effettuata tramite una procedura guidata, il caso 2 rappresenta la soluzione più semplice per creare l'istruzione SQL.  
  
 Nell'esempio riportato di seguito viene creata un'istruzione SQL che seleziona i record da un'applicazione di database MFC.   Quando il framework chiama la funzione membro `GetDefaultSQL`, tale funzione restituisce il nome della tabella, ovvero `SECTION`.  
  
```  
CString CEnrollSet::GetDefaultSQL()  
{  
    return "SECTION";  
}  
```  
  
 Per recuperare i nomi delle colonne per l'istruzione SQL **SELECT**, il framework chiama la funzione membro `DoFieldExchange`.  
  
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
  
 Al termine, l'istruzione SQL ha il seguente aspetto.  
  
```  
SELECT CourseID, InstructorID, RoomNo, Schedule, SectionNo   
    FROM SECTION  
```  
  
### Caso 3   lpszSQL \= istruzione SELECT\/FROM  
 L'elenco delle colonne viene specificato manualmente anziché automaticamente tramite RFX.  Si consiglia di effettuare questa operazione nei seguenti casi.  
  
-   Quando si desidera specificare la parola chiave **DISTINCT** dopo **SELECT**.  
  
     È necessario che l'elenco di colonne corrisponda all'elenco in `DoFieldExchange` per i nomi delle colonne, i tipi e l'ordine delle colonne.  
  
-   Quando, per varie ragioni, si desidera recuperare manualmente i valori delle colonne mediante la funzione ODBC **::SQLGetData** anziché utilizzare RFX per associare e recuperare automaticamente le colonne.  
  
     Se, ad esempio, si desidera includere le nuove colonne aggiunte da un utente alle tabelle del database dopo la distribuzione dell'applicazione creata,  è necessario aggiungere ulteriori membri dati di campo, non conosciuti al momento della dichiarazione della classe tramite una procedura guidata.  
  
     È necessario che l'elenco di colonne corrisponda all'elenco in `DoFieldExchange` per i nomi delle colonne, i tipi e l'ordine delle colonne e sia seguito dai nomi delle colonne associate manualmente.  Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
-   Quando si desidera unire più tabelle specificandole nella clausola **FROM**.  
  
     Per informazioni e per un esempio, vedere [Recordset: esecuzione di un join \(ODBC\)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  
### Caso 4   lpszSQL \= SELECT\/FROM più WHERE e\/o ORDER BY  
 È necessario specificare l'elenco delle colonne, in base alle chiamate RFX in `DoFieldExchange`, l'elenco delle tabelle e il contenuto di una clausola **WHERE** e\/o **ORDER BY**.  Se si specificano le clausole **WHERE** e\/o **ORDER BY** in questo modo, non utilizzare **m\_strFilter** e\/o `m_strSort`.  
  
### Caso 5   lpszSQL \= chiamata a una stored procedure  
 Se si desidera chiamare una query già definita, ad esempio una stored procedure in un database Microsoft SQL Server, è necessario scrivere un'istruzione **CALL** nella stringa passata al parametro `lpszSQL`.  Le procedure guidate non supportano la dichiarazione di una classe di recordset per la chiamata di una query già definita.  Non tutte le query già definite restituiscono record.  
  
 Se una query già definita non restituisce record, è possibile utilizzare direttamente la funzione membro `ExecuteSQL` di `CDatabase`.  Nel caso di una query già definita che restituisce record, è necessario scrivere manualmente le chiamate RFX in `DoFieldExchange` per qualsiasi colonna restituita dalla routine.  Le chiamate RFX devono essere eseguite nello stesso ordine e restituire gli stessi tipi della query già definita.  Per ulteriori informazioni, vedere [Recordset: dichiarazione di una classe per una query già definita \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).  
  
## Vedere anche  
 [SQL: tipi di dati SQL e C\+\+ \(ODBC\)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)   
 [SQL: esecuzione di chiamate SQL dirette \(ODBC\)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)