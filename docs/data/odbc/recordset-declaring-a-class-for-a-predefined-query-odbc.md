---
title: 'Recordset: dichiarazione di una classe per una query già definita (ODBC)'
ms.date: 05/09/2019
helpviewer_keywords:
- ODBC recordsets, queries
- predefined queries and recordsets
- stored procedures, and recordsets
- recordsets, predefined queries
- recordsets, stored procedures
ms.assetid: d27c4df9-dad2-4484-ba72-92ab0c8ff928
ms.openlocfilehash: 9d19328fb82503519fd8eca083e0dd11e10883ea
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212953"
---
# <a name="recordset-declaring-a-class-for-a-predefined-query-odbc"></a>Recordset: dichiarazione di una classe per una query già definita (ODBC)

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come creare una classe recordset per una query predefinita (talvolta denominata stored procedure, come in Microsoft SQL Server).

> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se viene implementato il recupero di massa di righe, il processo è molto simile. Per comprendere le differenze tra i recordset che implementano il recupero di righe bulk e quelli che non lo sono, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Alcuni sistemi di gestione di database (DBMS) consentono di creare una query predefinita e di chiamarla dai programmi come una funzione. La query dispone di un nome, può accettare parametri e può restituire record. La procedura descritta in questo argomento illustra come chiamare una query predefinita che restituisce record (ed eventualmente accetta parametri).

Le classi di database non supportano l'aggiornamento delle query predefinite. La differenza tra una query predefinita snapshot e una query predefinita dynaset non è l'aggiornabilità, ma il fatto che le modifiche apportate da altri utenti (o altri recordset nel programma) siano visibili o meno nel recordset.

> [!TIP]
>  Non è necessario un recordset per chiamare una query predefinita che non restituisce record. Preparare l'istruzione SQL come descritto di seguito, ma eseguirla chiamando la funzione `CDatabase`ExecuteSQL[ del membro ](../../mfc/reference/cdatabase-class.md#executesql).

È possibile creare una singola classe recordset per gestire la chiamata di una query predefinita, ma è necessario eseguire alcune operazioni manualmente. Le procedure guidate non supportano la creazione di una classe per questo scopo specifico.

#### <a name="to-create-a-class-for-calling-a-predefined-query-stored-procedure"></a>Per creare una classe per la chiamata di una query predefinita (stored procedure)

1. Usare la [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) da **Aggiungi classe** per creare una classe recordset per la tabella che contiene la maggior parte delle colonne restituite dalla query. Questo offre un punto di partenza.

1. Aggiungere manualmente i membri dati di campo per tutte le colonne di tutte le tabelle restituite dalla query, ma che la procedura guidata non ha creato automaticamente.

   Se ad esempio la query restituisce tre colonne, ciascuna da due tabelle aggiuntive, aggiungere alla classe sei membri dati di campo (dei tipi di dati appropriati).

1. Aggiungere manualmente le chiamate di funzione [RFX](../../data/odbc/record-field-exchange-rfx.md) nella funzione membro [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) della classe, una corrispondente al tipo di dati di ognuno dei membri dati di campo aggiunti.

    ```cpp
    Immediately before these RFX calls, call <MSHelp:link keywords="_mfc_CFieldExchange.3a3a.SetFieldType" TABINDEX="0">SetFieldType</MSHelp:link>, as shown here:
    pFX->SetFieldType( CFieldExchange::outputColumn );
    ```

    > [!NOTE]
    >  È necessario conoscere i tipi di dati e l'ordine delle colonne restituite nel set di risultati. L'ordine delle chiamate di funzione RFX in `DoFieldExchange` deve corrispondere all'ordine delle colonne del set di risultati.

1. Aggiungere manualmente le inizializzazioni per i nuovi membri dati di campo nel costruttore della classe recordset.

   È anche necessario incrementare il valore di inizializzazione per il membro dati [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields). La procedura guidata scrive l'inizializzazione, ma include solo i membri dati di campo aggiunti automaticamente. Ad esempio:

    ```cpp
    m_nFields += 6;
    ```

   Alcuni tipi di dati non devono essere inizializzati qui, ad esempio `CLongBinary` o matrici di byte.

1. Se la query accetta parametri, aggiungere un membro dati di parametro per ogni parametro, nonché una chiamata di funzione RFX e un'inizializzazione per ognuno.

1. È necessario incrementare `m_nParams` per ciascun parametro aggiunto, com'è stato fatto con `m_nFields` per i campi aggiunti nel passaggio 4 di questa procedura. Per ulteriori informazioni, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

1. Scrivere manualmente una stringa di istruzione SQL nel formato seguente:

    ```
    {CALL proc-name [(? [, ?]...)]}
    ```

   dove **CALL** è una parola chiave ODBC, **process-name** è il nome della query nell'origine dati e gli elementi "?" sono segnaposto per gli eventuali valori dei parametri forniti al recordset in fase di esecuzione. Nell'esempio seguente viene preparato un segnaposto per un parametro:

    ```
    CString mySQL = "{CALL Delinquent_Accts (?)}";
    ```

1. Nel codice che apre il recordset, impostare i valori dei membri dati di parametro del recordset e quindi chiamare la funzione membro `Open`, passando la stringa SQL per il parametro *lpszSQL*. In alternativa, sostituire la stringa restituita dalla funzione membro `GetDefaultSQL` nella classe.

Negli esempi seguenti viene illustrata la procedura per la chiamata di una query predefinita, denominata `Delinquent_Accts`, che accetta un parametro per un numero di zona di vendita. Questa query restituisce tre colonne: `Acct_No`, `L_Name` e `Phone`. Tutte le colonne provengono dalla tabella Customers.

Il recordset seguente specifica i membri dati di campo per le colonne restituite dalla query e un parametro per il numero della zona di vendita richiesto in fase di esecuzione.

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

Questa dichiarazione di classe è stata scritta dalla procedura guidata, ad eccezione del membro `m_lDistParam`, che è stato aggiunto manualmente. Gli altri membri non sono riportati.

L'esempio seguente mostra le inizializzazioni per i membri dati nel costruttore `CDelinquents`.

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

Si notino le inizializzazioni per [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) e [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams). La procedura guidata inizializza `m_nFields`, mentre `m_nParams` viene inizializzato da noi.

Nell'esempio seguente sono illustrate le funzioni RFX `CDelinquents::DoFieldExchange`:

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

Oltre a effettuare le chiamate RFX per le tre colonne restituite, questo codice gestisce l'associazione del parametro passato in fase di esecuzione. Il parametro è collegato alla colonna `Dist_No` (numero di zona).

L'esempio seguente illustra come configurare la stringa SQL e come usarla per aprire il recordset.

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

Questo codice crea uno snapshot, gli passa un parametro ottenuto in precedenza dall'utente e chiama la query predefinita. Quando la query viene eseguita, restituisce i record per la zona di vendita specificata. Ogni record contiene le colonne per il numero di account, il cognome del cliente e il numero di telefono del cliente.

> [!TIP]
>  È possibile gestire un valore restituito (parametro di output) da una stored procedure. Per altre informazioni e un esempio, vedere [CFieldExchange::SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ripetizione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)
