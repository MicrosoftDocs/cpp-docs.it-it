---
title: "Recordset: dichiarazione di una classe per una query gi&#224; definita (ODBC) | Microsoft Docs"
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
  - "recordset ODBC, query"
  - "query e recordset predefiniti"
  - "recordset, query predefinite"
  - "recordset, stored procedure"
  - "stored procedure, e recordset"
ms.assetid: d27c4df9-dad2-4484-ba72-92ab0c8ff928
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset: dichiarazione di una classe per una query gi&#224; definita (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento viene illustrata la creazione di una classe di recordset per una query già definita, talvolta detta stored procedure, come in Microsoft SQL Server.  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Qualora venga implementato il recupero di massa di righe, la procedura sarà simile.  Per comprendere le differenze tra i recordset che implementano il recupero di massa di righe e quelli che non lo implementano, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Alcuni sistemi di gestione di database \(DBMS\) consentono di creare una query già definita e di chiamarla dai programmi come una funzione.  La query ha un nome, può accettare parametri e restituire record.  Nella procedura riportata in questo argomento viene descritta la chiamata a una query già definita che restituisce record e probabilmente accetta parametri.  
  
 Le classi di database non supportano l'aggiornamento delle query già definite.  La differenza tra una query già definita per snapshot e una query già definita per dynaset non sta nella possibilità di aggiornarle ma nella capacità di visualizzare le modifiche apportate da altri utenti \(o da altri recordset del programma\) nel recordset.  
  
> [!TIP]
>  Non è necessario utilizzare un recordset per chiamare una query già definita che non restituisce record.  Preparare l'istruzione SQL come descritto di seguito, ma eseguirla chiamando la funzione membro [ExecuteSQL](../Topic/CDatabase::ExecuteSQL.md) di `CDatabase`.  
  
 È possibile creare un'unica classe di recordset per la gestione delle chiamate a una query già definita. Tuttavia, è necessario impostare manualmente parte dell'operazione,  in quanto le procedure guidate non supportano la creazione di una classe per questo scopo specifico.  
  
#### Per creare una classe per le chiamate a una query già definita \(stored procedure\)  
  
1.  Utilizzare la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) tramite il comando **Aggiungi classe** per creare una classe di recordset per la tabella contenente la maggior parte delle colonne restituite dalla query.  In tal modo, è possibile porre le basi da cui partire.  
  
2.  Aggiungere manualmente i membri dati di campo per tutte le colonne di tutte le tabelle restituite dalla query, ma non create automaticamente dalla procedura guidata.  
  
     Se ad esempio la query restituisce tre colonne, ciascuna delle quali è contenuta in due tabelle aggiuntive, aggiungere alla classe sei membri dati di campo con tipi di dati appropriati.  
  
3.  Aggiungere manualmente le chiamate alle funzioni [RFX](../../data/odbc/record-field-exchange-rfx.md) nella funzione membro [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) della classe, di cui una corrispondente al tipo di dati di ciascun membro dati di campo aggiunto.  
  
    ```  
    Immediately before these RFX calls, call <MSHelp:link keywords="_mfc_CFieldExchange.3a3a.SetFieldType" TABINDEX="0">SetFieldType</MSHelp:link>, as shown here:   
    pFX->SetFieldType( CFieldExchange::outputColumn );  
    ```  
  
    > [!NOTE]
    >  È necessario conoscere i tipi di dati e l'ordine delle colonne restituite nel gruppo di risultati.  È necessario inoltre che ci sia una corrispondenza tra l'ordine delle chiamate alle funzioni RFX in `DoFieldExchange` e l'ordine delle colonne nel gruppo di risultati.  
  
4.  Aggiungere manualmente le inizializzazioni per i nuovi membri dati di campo nel costruttore della classe del recordset.  
  
     È inoltre necessario incrementare il valore di inizializzazione per il membro dati [m\_nFields](../Topic/CRecordset::m_nFields.md).  La procedura guidata scrive l'inizializzazione solo per i membri dati di campo aggiunti automaticamente.  Di seguito è riportato un esempio.  
  
    ```  
    m_nFields += 6;  
    ```  
  
     Non è necessario inizializzare in questa fase alcuni tipi di dati, come `CLongBinary` o le matrici di byte.  
  
5.  Se la query accetta parametri, aggiungere un membro dati di parametro, una chiamata alla funzione RFX e un'inizializzazione per ogni parametro.  
  
6.  È necessario incrementare `m_nParams` per ciascun parametro aggiunto, come è stato fatto per `m_nFields` per i campi aggiunti nel passaggio 4 di questa procedura.  Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
7.  Scrivere manualmente una stringa di istruzione SQL con il seguente formato:  
  
    ```  
    {CALL proc-name [(? [, ?]...)]}  
    ```  
  
     dove **CALL** è una parola chiave ODBC, **proc\-name** è il nome della query noto all'origine dati e gli elementi ? sono segnaposto per i valori dei parametri forniti al recordset in fase di esecuzione, se disponibili.  Nell'esempio riportato di seguito viene illustrata la preparazione di un segnaposto per un parametro.  
  
    ```  
    CString mySQL = "{CALL Delinquent_Accts (?)}";  
    ```  
  
8.  Nel codice che apre il recordset impostare i valori dei membri dati di parametro del recordset, quindi chiamare la funzione membro **Open**, passando la stringa SQL per il parametro **lpszSQL**.  In alternativa, sostituire la stringa restituita dalla funzione membro `GetDefaultSQL` nella classe.  
  
 Negli esempi riportati di seguito viene illustrata la procedura per chiamare una query già definita, denominata `Delinquent_Accts`, che utilizza un parametro per un numero di zona di vendita.  Questa query restituisce tre colonne: `Acct_No`, `L_Name`, `Phone`.  Tutte le colonne sono contenute nella tabella Customers.  
  
 Nel recordset riportato di seguito sono specificati i membri dati di campo per le colonne restituite dalla query e un parametro per il numero della zona di vendita richiesto in fase di esecuzione.  
  
```  
class CDelinquents : public CRecordset  
{  
// Field/Param Data  
    LONG m_lAcct_No;  
    CString m_strL_Name;  
    CString m_strPhone;  
    LONG m_lDistParam;  
    // ...  
};  
```  
  
 Questa dichiarazione di classe viene scritta automaticamente dalla procedura guidata, fatta eccezione per il membro `m_lDistParam` aggiunto manualmente.  Gli altri membri non sono riportati in questa sede.  
  
 Nell'esempio riportato di seguito vengono illustrate le inizializzazioni per i membri dati nel costruttore `CDelinquents`.  
  
```  
CDelinquents::CDelinquents(CDatabase* pdb)  
   : CRecordset(pdb)  
{  
    // Wizard-generated params:  
    m_lAcct_No = 0;  
    m_strL_Name = "";  
    m_strPhone = "";  
    m_nFields = 3;  
    // User-defined params:  
    m_nParams = 1;  
    m_lDistParam = 0;  
}  
```  
  
 Si notino le inizializzazioni per [m\_nFields](../Topic/CRecordset::m_nFields.md) e [m\_nParams](../Topic/CRecordset::m_nParams.md).  `m_nFields` viene inizializzato dalla procedura guidata, mentre `m_nParams` dal programmatore.  
  
 Nell'esempio seguente sono illustrate le funzioni RFX in `CDelinquents::DoFieldExchange`:  
  
```  
void CDelinquents::DoFieldExchange(CFieldExchange* pFX)  
{  
    pFX->SetFieldType(CFieldExchange::outputColumn);  
    RFX_Long(pFX, "Acct_No", m_lAcct_No);  
    RFX_Text(pFX, "L_Name", m_strL_Name);  
    RFX_Text(pFX, "Phone", m_strPhone);  
    pFX->SetFieldType(CFieldExchange::param);  
    RFX_Long(pFX, "Dist_No", m_lDistParam);  
}  
```  
  
 Oltre a effettuare le chiamate a RFX per le tre colonne restituite, questo codice gestisce l'associazione del parametro passato in fase di esecuzione.  Il parametro viene immesso nella colonna `Dist_No` \(numero della zona\).  
  
 Nell'esempio riportato di seguito viene illustrata l'impostazione della stringa SQL e l'utilizzo di tale stringa per l'apertura del recordset.  
  
```  
// Construct a CDelinquents recordset object  
CDelinquents rsDel( NULL );  
CString strSQL = "{CALL Delinquent_Accts (?)}"  
// Specify a parameter value (obtained earlier from the user)  
rsDel.m_lDistParam = lDistrict;  
// Open the recordset and run the query  
if( rsDel.Open( CRecordset::snapshot, strSQL ) )  
    // Use the recordset ...  
```  
  
 Questo codice crea uno snapshot, a cui passa un parametro ottenuto in precedenza dall'utente, e chiama la query già definita.  Durante l'esecuzione della query, vengono restituiti i record relativi alla zona di vendita specificata.  Ciascun record contiene le colonne per il numero di conto, il cognome e il numero di telefono del cliente.  
  
> [!TIP]
>  Si consiglia di gestire un valore restituito \(parametro di output\) da una stored procedure.  Per ulteriori informazioni e un esempio, vedere [CFieldExchange::SetFieldType](../Topic/CFieldExchange::SetFieldType.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: ripetizione di una query in un recordset \(ODBC\)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)   
 [Recordset: dichiarazione di una classe per una tabella \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)   
 [Recordset: esecuzione di un join \(ODBC\)](../../data/odbc/recordset-performing-a-join-odbc.md)