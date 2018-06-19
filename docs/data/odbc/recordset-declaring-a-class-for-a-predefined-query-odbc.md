---
title: 'Recordset: Dichiarazione di una classe per una Query già definita (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC recordsets, queries
- predefined queries and recordsets
- stored procedures, and recordsets
- recordsets, predefined queries
- recordsets, stored procedures
ms.assetid: d27c4df9-dad2-4484-ba72-92ab0c8ff928
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cbbb9202aaf56681a792e1acf2a0c02eff5636d9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33092375"
---
# <a name="recordset-declaring-a-class-for-a-predefined-query-odbc"></a>Recordset: dichiarazione di una classe per una query già definita (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 In questo argomento viene illustrato come creare una classe per una query già definita (talvolta definita come una stored procedure, come Microsoft SQL Server).  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se viene implementato il recupero di massa di righe, il processo è molto simile. Per comprendere le differenze tra i recordset che implementano il recupero di massa di righe e quelli che non, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Alcuni sistemi di gestione di database (DBMS) consentono di creare una query predefinita e lo chiama da programmi come una funzione. La query ha un nome, può accettare parametri e può restituire i record. La procedura descritta in questo argomento viene descritto come chiamare una query predefinita che restituisce i record (e probabilmente accetta parametri).  
  
 Le classi di database non supportano l'aggiornamento delle query predefinita. La differenza tra una query di snapshot predefinita e una query predefinita dynaset non aggiornabilità ma se le modifiche apportate da altri utenti (o altri recordset nel programma) sono visibili nel recordset.  
  
> [!TIP]
>  Non è necessario un recordset per chiamare una query predefinita che non restituisce i record. Preparare l'istruzione SQL, come descritto di seguito, ma eseguirla chiamando il `CDatabase` funzione membro [ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql).  
  
 È possibile creare una classe recordset singolo per gestire la chiamata di una query già definita, ma è necessario eseguire alcune delle operazioni manualmente. Le procedure guidate non supportano la creazione di una classe per questo scopo specifico.  
  
#### <a name="to-create-a-class-for-calling-a-predefined-query-stored-procedure"></a>Per creare una classe per la chiamata di una query predefinita (stored procedure)  
  
1.  Utilizzare il [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) da **Aggiungi classe** per creare una classe per la tabella contenente più colonne restituite dalla query. Questo offre un punto di partenza.  
  
2.  Aggiungere manualmente i membri di dati campo per tutte le colonne di tutte le tabelle restituite dalla query, ma che la procedura guidata non è stata creata automaticamente.  
  
     Ad esempio, se la query restituisce tre colonne da due tabelle aggiuntive, aggiungere alla classe sei membri di dati di campo (dei tipi di dati appropriato).  
  
3.  Aggiungere manualmente [RFX](../../data/odbc/record-field-exchange-rfx.md) funzione chiama la [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) aggiunto di funzione membro della classe, uno corrispondente al tipo di dati di ogni membro dati di campo.  
  
    ```  
    Immediately before these RFX calls, call <MSHelp:link keywords="_mfc_CFieldExchange.3a3a.SetFieldType" TABINDEX="0">SetFieldType</MSHelp:link>, as shown here:   
    pFX->SetFieldType( CFieldExchange::outputColumn );  
    ```  
  
    > [!NOTE]
    >  È necessario conoscere i tipi di dati e l'ordine delle colonne restituite nel risultato è impostato. L'ordine delle chiamate alle funzioni RFX chiamate `DoFieldExchange` deve corrispondere all'ordine delle colonne del set di risultati.  
  
4.  Aggiungere manualmente le inizializzazioni per i nuovi membri dati di campo nel costruttore della classe recordset.  
  
     È inoltre necessario incrementare il valore di inizializzazione per il [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) (membro dati). La procedura guidata scrive l'inizializzazione, ma comprende solo membri di dati del campo che viene aggiunto automaticamente. Ad esempio:  
  
    ```  
    m_nFields += 6;  
    ```  
  
     Alcuni tipi di dati non devono essere inizializzati in questo caso, ad esempio, `CLongBinary` o matrici di byte.  
  
5.  Se la query accetta parametri, aggiungere un membro dati di parametro per ogni parametro, una chiamata alla funzione RFX e un'inizializzazione.  
  
6.  È necessario incrementare `m_nParams` per ciascun parametro, viene aggiunto come `m_nFields` per i campi aggiunti nel passaggio 4 di questa procedura. Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
7.  Consente di scrivere manualmente una stringa di istruzione SQL con il formato seguente:  
  
    ```  
    {CALL proc-name [(? [, ?]...)]}  
    ```  
  
     dove **CHIAMARE** è una parola chiave ODBC, **nome procedura** è il nome della query sull'origine dati, è noto e "?" sono i segnaposto per i valori dei parametri forniti per il recordset in fase di esecuzione (se presente) . Nell'esempio seguente viene preparato un segnaposto per un parametro:  
  
    ```  
    CString mySQL = "{CALL Delinquent_Accts (?)}";  
    ```  
  
8.  Nel codice che apre il recordset, impostare i valori di parametro del recordset membri dati e quindi chiamare il **aprire** funzione membro, passando la stringa SQL il **lpszSQL** parametro. In alternativa, sostituire la stringa restituita dal `GetDefaultSQL` funzione membro nella classe.  
  
 Negli esempi seguenti viene illustrano la procedura per la chiamata di una query già definita, denominata `Delinquent_Accts`, che accetta un parametro per un numero di zona di vendita. Questa query restituisce tre colonne: `Acct_No`, `L_Name`, `Phone`. Tutte le colonne sono dalla tabella Customers.  
  
 Il recordset seguente specifica i membri di dati campo per le colonne restituite dalla query e un parametro per le vendite della zona richiesto in fase di esecuzione.  
  
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
  
 Questa dichiarazione di classe viene dalla procedura guidata, tranne che per il `m_lDistParam` membro aggiunto manualmente. Altri membri non vengono visualizzati qui.  
  
 Nell'esempio seguente vengono illustrate le inizializzazioni per i membri dati di `CDelinquents` costruttore.  
  
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
  
 Si notino le inizializzazioni per [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) e [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams). La procedura guidata consente di inizializzare `m_nFields`; è inizializzare `m_nParams`.  
  
 L'esempio successivo mostra le funzioni RFX `CDelinquents::DoFieldExchange`:  
  
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
  
 Oltre a rendere RFX per le tre colonne restituite, questo codice gestisce l'associazione il parametro passato in fase di esecuzione. Il parametro viene immesso il `Dist_No` colonna (numero di zona).  
  
 Nell'esempio seguente viene illustrato come impostare la stringa SQL e come utilizzarla per aprire il recordset.  
  
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
  
 Questo codice crea uno snapshot, lo passa un parametro ottenuto in precedenza dall'utente e chiama la query predefinita. Quando la query viene eseguita, restituisce i record per la zona di vendita specificato. Ogni record contiene colonne per il numero di account, il cognome del cliente e il numero di telefono del cliente.  
  
> [!TIP]
>  È possibile gestire un valore restituito (parametro di output) da una stored procedure. Per ulteriori informazioni e un esempio, vedere [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)   
 [Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)   
 [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)