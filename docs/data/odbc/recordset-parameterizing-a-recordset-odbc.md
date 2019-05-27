---
title: 'Recordset: parametrizzazione di un recordset (ODBC)'
ms.date: 05/09/2019
helpviewer_keywords:
- parameterizing recordsets
- ODBC recordsets, parameterizing
- recordsets, parameterizing
- passing parameters, to queries at runtime
ms.assetid: 7d1dfeb6-5ee0-45e2-aacc-63bc52a465cd
ms.openlocfilehash: 499741693009fb27df58f0ed3cde046d5e6b8c2d
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707800"
---
# <a name="recordset-parameterizing-a-recordset-odbc"></a>Recordset: parametrizzazione di un recordset (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In alcuni casi, potrebbe essere necessario selezionare i record in fase di esecuzione usando informazioni calcolate o ottenute dall'utente finale. I parametri del recordset consentono di raggiungere tale obiettivo.

In questo argomento:

- [Scopo di un recordset con parametri](#_core_parameterized_recordsets).

- [Quando e perché impostare i parametri per un recordset](#_core_when_to_use_parameters).

- [Come dichiarare i membri dati di parametro nella classe recordset](#_core_parameterizing_your_recordset_class).

- [Come passare le informazioni sui parametri a un oggetto recordset in fase di esecuzione](#_core_passing_parameter_values_at_run_time).

##  <a name="_core_parameterized_recordsets"></a> Recordset con parametri

Un recordset con parametri consente di passare le informazioni sui parametri in fase di esecuzione. Questo ha due effetti importanti:

- Può migliorare la velocità di esecuzione.

- Consente di creare una query in fase di esecuzione, in base a informazioni non disponibili al momento della progettazione, ad esempio informazioni specificate dall'utente finale o calcolate in fase di esecuzione.

Quando si chiama `Open` per eseguire la query, il recordset usa le informazioni sui parametri per completare l'istruzione **SQL SELECT**. È possibile impostare parametri per qualsiasi recordset.

##  <a name="_core_when_to_use_parameters"></a> Quando usare i parametri

Gli usi tipici per i parametri includono:

- Passaggio di argomenti in fase di esecuzione a una query predefinita.

   Per passare parametri a una stored procedure, è necessario specificare un'istruzione ODBC **CALL** personalizzata completa (con segnaposto per i parametri) quando si chiama `Open`, eseguendo l'override dell'istruzione SQL predefinita del recordset. Per altre informazioni, vedere [CRecordset::Open](../../mfc/reference/crecordset-class.md#open) nelle *informazioni di riferimento sulla libreria di classi*, [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md) e [Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).

- Esecuzione efficiente di numerose ripetizioni di query con informazioni diverse sui parametri.

   Ad esempio, ogni volta che l'utente finale cerca le informazioni relative a un determinato studente nel database di registrazione degli studenti, è possibile specificare il nome o l'ID dello studente come un parametro ottenuto dall'utente. Quindi, quando si chiama la funzione membro `Requery` del recordset, la query seleziona solo il record dello studente.

   La stringa di filtro del recordset, archiviata in `m_strFilter`, è simile alla seguente:

    ```cpp
    "StudentID = ?"
    ```

   Si supponga di ottenere l'ID dello studente nella variabile `strInputID`. Quando si imposta un parametro su `strInputID` (ad esempio, l'ID studente 100), il valore della variabile è associato al segnaposto del parametro rappresentato da "?" nella stringa di filtro.

   Assegnare il valore del parametro come indicato di seguito:

    ```cpp
    strInputID = "100";
    ...
    m_strParam = strInputID;
    ```

   È preferibile non impostare una stringa di filtro in questo modo:

    ```cpp
    m_strFilter = "StudentID = 100";   // 100 is incorrectly quoted
                                       // for some drivers
    ```

   Per informazioni su come usare in modo corretto le virgolette per le stringhe di filtro, vedere [Recordset: filtro di record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

   Il valore del parametro è diverso ogni volta che viene ripetuta la query sul recordset per un nuovo ID studente.

   > [!TIP]
   > L'uso di un parametro è più efficiente di un semplice filtro. Per un recordset con parametri, il database deve elaborare un'istruzione SQL **SELECT** una sola volta. Per un recordset filtrato senza parametri, l'istruzione **SELECT** deve essere elaborata ogni volta che si esegue `Requery` con un nuovo valore di filtro.

Per altre informazioni sui filtri, vedere [Recordset: filtro di record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

##  <a name="_core_parameterizing_your_recordset_class"></a> Impostazione dei parametri della classe recordset

> [!NOTE]
> Questa sezione si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si usa il recupero di massa di righe, l'implementazione dei parametri è un processo simile. Per altre informazioni, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Prima di creare la classe recordset, determinare i parametri necessari, i relativi tipi di dati e come devono essere usati dal recordset.

#### <a name="to-parameterize-a-recordset-class"></a>Per impostare i parametri della classe recordset

> [!NOTE] 
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare questa funzionalità manualmente.

1. Eseguire la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) da **Aggiungi classe** per creare la classe.

1. Specificare i membri dati di campo per le colonne del recordset.

1. Dopo che la procedura guidata scrive la classe in un file nel progetto, passare al file con estensione h e aggiungere manualmente uno o più membri dati di parametro alla dichiarazione della classe. L'aggiunta potrebbe essere simile all'esempio seguente, parte di una classe snapshot progettata per rispondere alla query "Quali sono gli studenti nella classe senior?"

    ```cpp
    class CStudentSet : public CRecordset
    {
    // Field/Param Data
        CString m_strFirstName;
        CString m_strLastName;
        CString m_strStudentID;
        CString m_strGradYear;

        CString m_strGradYrParam;
    };
    ```

   Aggiungere i membri dati di parametro dopo i membri dati di campo generati dalla procedura guidata. La convenzione consiste nell'aggiungere la parola "Param" a ogni nome di parametro definito dall'utente.

1. Modificare la definizione della funzione membro [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) nel file con estensione cpp. Aggiungere una chiamata di funzione RFX per ogni membro dati di parametro che è stato aggiunto alla classe. Per informazioni sulla scrittura di funzioni RFX, vedere [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md). Anteporre alle chiamate RFX per i parametri una singola chiamata a:

    ```cpp
    pFX->SetFieldType( CFieldExchange::param );
    // RFX calls for parameter data members
    ```

1. Nel costruttore della classe recordset incrementare il conteggio dei parametri, `m_nParams`.

   Per informazioni, vedere [Trasferimento di campi di record: uso con il codice di procedure guidate](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md).

1. Quando si scrive il codice che crea un oggetto recordset di questa classe, inserire "?" (punto interrogativo) in ogni posizione nelle stringhe delle istruzioni SQL in cui deve essere sostituito un parametro.

   In fase di esecuzione, i segnaposto "?" vengono sostituiti, in ordine, dai valori dei parametri che vengono passati. Il primo membro dati di parametro impostato dopo la chiamata [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) sostituisce il primo "?"nella stringa SQL, il secondo membro dati di parametro sostituisce il secondo "?" e così via.

> [!NOTE]
> L'ordine dei parametri è importante: l'ordine delle chiamate RFX per i parametri nella funzione `DoFieldExchange` deve corrispondere all'ordine dei segnaposto per i parametri nella stringa SQL.

> [!TIP]
> La stringa usata più di frequente è quella (eventualmente) specificata per il membro dati [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) della classe, ma alcuni driver ODBC potrebbero consentire parametri in altre clausole SQL.

##  <a name="_core_passing_parameter_values_at_run_time"></a> Passaggio dei valori dei parametri in fase di esecuzione

È necessario specificare i valori dei parametri prima di chiamare `Open` (per un nuovo oggetto recordset) o `Requery` (per uno esistente).

#### <a name="to-pass-parameter-values-to-a-recordset-object-at-run-time"></a>Per passare i valori dei parametri a un oggetto recordset in fase di esecuzione

1. Costruire l'oggetto recordset.

1. Preparare una o più stringhe, come la stringa `m_strFilter`, contenente l'istruzione SQL o alcune parti di essa. Inserire i segnaposto "?" nella posizione in cui inserire le informazioni sul parametro.

1. Assegnare un valore di parametro in fase di esecuzione a ogni membro dati di parametro dell'oggetto.

1. Chiamare la funzione membro `Open` (o `Requery`, per un recordset esistente).

Si supponga, ad esempio, di voler specificare una stringa di filtro per il recordset usando le informazioni ottenute in fase di esecuzione. Presupponendo di aver costruito un recordset della classe `CStudentSet` in precedenza, denominato `rsStudents`, ora si vuole ripetere la query per un particolare tipo di informazioni sugli studenti.

```cpp
// Set up a filter string with
// parameter placeholders
rsStudents.m_strFilter = "GradYear <= ?";

// Obtain or calculate parameter values
// to pass--simply assigned here
CString strGradYear = GetCurrentAcademicYear( );

// Assign the values to parameter data members
rsStudents.m_strGradYrParam = strGradYear;

// Run the query
if( !rsStudents.Requery( ) )
    return FALSE;
```

Il recordset contiene i record per gli studenti i cui record soddisfano le condizioni specificate dal filtro, che è stato costruito da parametri in fase di esecuzione. In questo caso, il recordset contiene i record per tutti gli studenti senior.

> [!NOTE]
>  Se necessario, è possibile impostare il valore di un membro dati di parametro su Null, tramite [SetParamNull](../../mfc/reference/crecordset-class.md#setparamnull). È inoltre possibile verificare se un membro dati di parametro è Null, tramite [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)<br/>
[Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)