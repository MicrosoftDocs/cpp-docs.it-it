---
title: 'Recordset: Dichiarazione di una classe per una Query predefinita (ODBC) | Microsoft Docs'
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
ms.openlocfilehash: 9161cccf9b3efd918f65ab2a703808041f3eb209
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46113747"
---
# <a name="recordset-declaring-a-class-for-a-predefined-query-odbc"></a>Recordset: dichiarazione di una classe per una query già definita (ODBC)

Questo argomento si applica alle classi ODBC MFC.  
  
Questo argomento illustra come creare una classe per una query predefinita (talvolta chiamata una stored procedure, come in Microsoft SQL Server).  
  
> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se viene implementato il recupero di righe bulk, il processo è molto simile. Per comprendere le differenze tra recordset che implementano il recupero di righe bulk e quelli che non li supportano, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
Alcuni sistemi di gestione di database (DBMS) consentono di creare una query predefinita e lo chiama da programmi, ad esempio una funzione. La query ha un nome, può accettare parametri e potrebbe restituire i record. La procedura descritta in questo argomento descrive come chiamare una query predefinita che restituisce i record (e probabilmente accetta parametri).  
  
Le classi di database non supportano l'aggiornamento di query predefinite. La differenza tra una query predefinita dello snapshot e una query predefinita dynaset non updateability ma se le modifiche apportate da altri utenti (o altri set di record nel programma) sono visibili nel set di record.  
  
> [!TIP]
>  Non è necessario un recordset per chiamare una query predefinita che non restituisce i record. Preparare l'istruzione SQL come descritto di seguito, ma eseguirla chiamando il `CDatabase` funzione membro [ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql).  
  
È possibile creare una classe recordset singolo per gestire la chiamata a una query predefinita, ma è necessario eseguire alcune operazioni manualmente. Le procedure guidate non supportano la creazione di una classe per questo scopo specifico.  
  
#### <a name="to-create-a-class-for-calling-a-predefined-query-stored-procedure"></a>Per creare una classe per la chiamata di una query predefinita (stored procedure)  
  
1. Usare la [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) dalla **Aggiungi classe** per creare una classe per la tabella contenente più colonne restituite dalla query. Questo offre un punto di partenza.  
  
1. Aggiungere manualmente i membri di dati campo per tutte le colonne di tutte le tabelle restituite dalla query, ma che la procedura guidata non è stato creato automaticamente.  
  
     Ad esempio, se la query restituisce tre colonne ciascuna delle due tabelle aggiuntive, aggiungere alla classe sei membri di dati di campi (dei tipi di dati appropriato).  
  
1. Aggiungere manualmente [RFX](../../data/odbc/record-field-exchange-rfx.md) chiamate della funzione nel [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione membro della classe, uno corrispondente al tipo di dati della ognuno aggiunti membro del campo dati.  
  
    ```cpp  
    Immediately before these RFX calls, call <MSHelp:link keywords="_mfc_CFieldExchange.3a3a.SetFieldType" TABINDEX="0">SetFieldType</MSHelp:link>, as shown here:   
    pFX->SetFieldType( CFieldExchange::outputColumn );  
    ```  
  
    > [!NOTE]
    >  È necessario conoscere i tipi di dati e l'ordine delle colonne restituite nel risultato impostato. L'ordine delle chiamate alle funzioni RFX chiamate `DoFieldExchange` deve corrispondere all'ordine delle colonne del set di risultati.  
  
1. Aggiungere manualmente le inizializzazioni per i nuovi membri dati di campo nel costruttore della classe recordset.  
  
     È anche necessario incrementare il valore di inizializzazione per il [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) (membro dati). La procedura guidata scrive l'inizializzazione, ma include solo i membri di dati di campo che viene aggiunto automaticamente. Ad esempio:  
  
    ```cpp  
    m_nFields += 6;  
    ```  
  
     Alcuni tipi di dati non devono essere inizializzati in questo caso, ad esempio, `CLongBinary` o matrici di byte.  
  
1. Se la query accetta parametri, aggiungere un membro dati di parametro per ogni parametro, una chiamata alla funzione RFX e un'inizializzazione per ognuno.  
  
1. È necessario incrementare `m_nParams` per ciascun parametro, viene aggiunto come è stato fatto `m_nFields` per i campi aggiunti nel passaggio 4 di questa procedura. Per altre informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
1. Scrivere manualmente una stringa di istruzione SQL nel formato seguente:  
  
    ```  
    {CALL proc-name [(? [, ?]...)]}  
    ```  
  
     in cui **CHIAMARE** è una parola chiave ODBC **process-name** è il nome della query, poiché è conosciuto nell'origine dati e il "?" gli elementi sono segnaposto per i valori dei parametri forniti al set di record in fase di esecuzione (se presente) . Nell'esempio seguente prepara un segnaposto per un parametro:  
  
    ```  
    CString mySQL = "{CALL Delinquent_Accts (?)}";  
    ```  
  
1. Nel codice che apre il recordset, impostare i valori del parametro del recordset membri dati e quindi chiamare il `Open` funzione di membro, passando la stringa SQL il *lpszSQL* parametro. In alternativa, sostituire la stringa restituita dal `GetDefaultSQL` funzione membro nella classe.  
  
Gli esempi seguenti illustrano la procedura per la chiamata di una query predefinita, denominata `Delinquent_Accts`, che accetta un parametro per un numero di zona di vendita. Questa query restituisce tre colonne: `Acct_No`, `L_Name`, `Phone`. Tutte le colonne sono contenuti nella tabella Customers.  
  
Il recordset seguente specifica i membri di dati campo per le colonne restituite dalla query e un parametro per le vendite numero richiesto in fase di esecuzione della zona.  
  
```cpp  
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
  
Questa dichiarazione di classe è come la procedura guidata scrive, fatta eccezione per il `m_lDistParam` membro aggiunto manualmente. Gli altri membri non vengono visualizzati qui.  
  
L'esempio seguente mostra le inizializzazioni per i membri dati di `CDelinquents` costruttore.  
  
```cpp  
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
  
L'esempio seguente mostra le funzioni RFX `CDelinquents::DoFieldExchange`:  
  
```cpp  
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
  
Oltre a rendere RFX per le tre colonne restituite, questo codice gestisce l'associazione di parametro passato in fase di esecuzione. Il parametro viene immesso il `Dist_No` colonna (numero di zona).  
  
L'esempio successivo illustra come configurare la stringa SQL e come usarlo per aprire il recordset.  
  
```cpp  
// Construct a CDelinquents recordset object  
CDelinquents rsDel( NULL );  
CString strSQL = "{CALL Delinquent_Accts (?)}"  
// Specify a parameter value (obtained earlier from the user)  
rsDel.m_lDistParam = lDistrict;  
// Open the recordset and run the query  
if( rsDel.Open( CRecordset::snapshot, strSQL ) )  
    // Use the recordset ...  
```  
  
Questo codice crea uno snapshot, lo passa un parametro ottenuto in precedenza dall'utente e chiama la query predefinita. Quando la query viene eseguita, restituisce i record per la zona di vendita specificato. Ogni record contiene le colonne per il numero di account, il cognome del cliente e il numero di telefono del cliente.  
  
> [!TIP]
>  È possibile gestire un valore restituito (parametro di output) da una stored procedure. Per altre informazioni e un esempio, vedere [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype).  
  
## <a name="see-also"></a>Vedere anche  

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ripetizione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)