---
title: 'Recordset: applicazione di parametri a un recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- parameterizing recordsets
- ODBC recordsets, parameterizing
- recordsets, parameterizing
- passing parameters, to queries at runtime
ms.assetid: 7d1dfeb6-5ee0-45e2-aacc-63bc52a465cd
ms.openlocfilehash: f58a33a0c43cb0d70d98f3f2ae33f766058b1c23
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51331269"
---
# <a name="recordset-parameterizing-a-recordset-odbc"></a>Recordset: applicazione di parametri a un recordset (ODBC)

Questo argomento si applica alle classi ODBC MFC.

In alcuni casi si potrebbe voler essere in grado di selezionare i record in fase di esecuzione utilizzando le informazioni calcolate o ottenuto da parte dell'utente finale. Recordset parametri consentono di raggiungere tale obiettivo.

Questo argomento viene illustrato:

- [Lo scopo di un recordset con parametri](#_core_parameterized_recordsets).

- [Quando e perché si potrebbe voler impostare i parametri per un set di record](#_core_when_to_use_parameters).

- [Come dichiarare i membri di dati nella classe recordset parametro](#_core_parameterizing_your_recordset_class).

- [Per passare le informazioni di parametro a un oggetto recordset in fase di esecuzione](#_core_passing_parameter_values_at_run_time).

##  <a name="_core_parameterized_recordsets"></a> Recordset con parametri

Un set di record con parametri consente di passare le informazioni sui parametri in fase di esecuzione. Ciò ha due effetti importanti:

- Potrebbe comportare una migliore velocità di esecuzione.

- Consente di compilare una query in fase di esecuzione, in base alle informazioni non disponibili in fase di progettazione, ad esempio le informazioni specificate dall'utente finale o calcolati in fase di esecuzione.

Quando si chiama `Open` per eseguire la query, il recordset utilizza le informazioni sui parametri per il completamento relativo **SQL SELECT** istruzione. È possibile impostare i parametri di qualsiasi oggetto recordset.

##  <a name="_core_when_to_use_parameters"></a> Quando usare i parametri

Gli usi tipici per i parametri includono:

- Passaggio di argomenti in fase di esecuzione per una query predefinita.

   Per passare parametri a una stored procedure, è necessario specificare un ODBC personalizzato completo **CHIAMARE** istruzione, ovvero con i segnaposto dei parametri, ovvero quando si chiama `Open`, si esegue l'override di istruzione SQL predefinita del recordset. Per altre informazioni, vedere [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) nel *Class Library Reference* e [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md) e [ Recordset: Dichiarazione di una classe per una Query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).

- Esegue in modo efficiente numerose ripetizioni di query con le informazioni di parametro diversi.

   Per ogni volta che l'utente finale cerca le informazioni relative a un determinato studente nel database di registrazione per studenti, ad esempio, è possibile specificare il nome o ID di student come parametro ottenuto dall'utente. Quindi, quando si chiama il recordset `Requery` funzione membro, la query seleziona solo i record dello studente.

   Stringa di filtro del recordset archiviato in `m_strFilter`, simile alla seguente:

    ```cpp
    "StudentID = ?"
    ```

   Si supponga che si ottiene l'ID dello studente nella variabile `strInputID`. Quando si imposta un parametro su `strInputID` (ad esempio, l'ID studente 100) il valore della variabile è associato il segnaposto del parametro rappresentato dal "?" nella stringa di filtro.

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

   Per informazioni su come usare le virgolette in modo corretto per le stringhe di filtro, vedere [Recordset: applicazione di filtri dei record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

   Il valore del parametro è diverso ogni volta che viene ripetuta la query di set di record per un nuovo ID di studente.

   > [!TIP]
   > Utilizzo di un parametro è semplicemente un filtro più efficiente. Per un recordset con parametri, il database deve elaborare un database SQL **seleziona** istruzione una sola volta. Per un recordset filtrato senza parametri, il **selezionate** istruzione deve essere elaborata ogni volta che si `Requery` con un nuovo valore di filtro.

Per altre informazioni sui filtri, vedere [Recordset: applicazione di filtri dei record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

##  <a name="_core_parameterizing_your_recordset_class"></a> Uso dei parametri della classe Recordset

> [!NOTE]
> In questa sezione si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa di massa di righe il recupero, l'implementazione di parametri è un processo simile. Per altre informazioni, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Prima di creare la classe del recordset, determinare i parametri necessari, quali sono i tipi di dati e come verranno utilizzati dal recordset.

#### <a name="to-parameterize-a-recordset-class"></a>Per parametrizzare una classe recordset

1. Eseguire la [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) dalla **Aggiungi classe** per creare la classe.

1. Specificare i membri di dati campo per le colonne del recordset.

1. Dopo la procedura guidata scrive la classe in un file nel progetto, passare al file con estensione h e aggiungere manualmente uno o più membri di dati di parametro alla dichiarazione di classe. L'aggiunta potrebbe essere simile al seguente, parte di una classe di snapshot è progettato per rispondere alla query "che gli studenti sono nella classe senior?"

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

   Aggiungere i membri dati del parametro dopo i membri dati del campo generate dalla procedura guidata. La convenzione consiste nell'aggiungere la parola "Param" per ogni nome di parametro definito dall'utente.

1. Modificare il [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) definizione di funzione membro nel file con estensione cpp. Aggiungere una chiamata di funzione RFX per ogni membro di dati di parametro che è stato aggiunto alla classe. Per informazioni sulla scrittura delle funzioni RFX, vedere [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md). Far precedere le chiamate RFX per i parametri con una singola chiamata a:

    ```cpp
    pFX->SetFieldType( CFieldExchange::param );
    // RFX calls for parameter data members
    ```

1. Nel costruttore della classe recordset, incrementare il conteggio dei parametri, `m_nParams`.

   Per informazioni, vedere [Record Field Exchange: utilizzo di codice della procedura guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md).

1. Quando si scrive il codice che crea un oggetto recordset di questa classe, inserire un "?" (punto interrogativo) in ogni punto stringhe dell'istruzione SQL in un parametro da sostituire.

   In fase di esecuzione "?" vengono sostituiti, in ordine, per i valori dei parametri è passare. Il primo membro di dati di parametro impostato dopo la [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) chiamata sostituisce il primo "?"nella stringa SQL, il secondo membro di dati di parametro sostituisce la seconda"?" e così via.

> [!NOTE]
> L'ordine dei parametri è importante: l'ordine delle RFX chiamate per i parametri in di `DoFieldExchange` funzione deve corrispondere all'ordine dei segnaposto di parametro nella stringa SQL.

> [!TIP]
> La stringa per lavorare con più probabile è la stringa specificata (se presente) per la classe [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) (membro dati), ma alcuni driver ODBC potrebbero consentire i parametri in altre clausole SQL.

##  <a name="_core_passing_parameter_values_at_run_time"></a> Passaggio di valori di parametro in fase di esecuzione

È necessario specificare i valori dei parametri prima di chiamare `Open` (per un nuovo oggetto recordset) o `Requery` (per uno esistente).

#### <a name="to-pass-parameter-values-to-a-recordset-object-at-run-time"></a>Per passare i valori dei parametri per un oggetto recordset in fase di esecuzione

1. Creare l'oggetto recordset.

1. Preparare una o più stringhe, ad esempio il `m_strFilter` string contenente l'istruzione SQL o parti di esso. Inserire "?" in cui deve passare le informazioni sul parametro di segnaposto.

1. Assegnare un valore di parametro in fase di esecuzione per ogni membro di dati di parametro dell'oggetto.

1. Chiamare il `Open` funzione membro (o `Requery`, per un set di record esistente).

Si supponga, ad esempio specificare una stringa di filtro per il recordset utilizzando le informazioni ottenute in fase di esecuzione. Si presuma un recordset della classe `CStudentSet` in precedenza, ovvero chiamato `rsStudents` : vuole rieseguire una query per un particolare tipo di informazioni sugli studenti.

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

Il set di record contiene record per gli studenti i cui record soddisfano le condizioni specificate per il filtro, che è stato costruito da parametri run-time. In questo caso, il set di record contiene i record per tutti gli studenti senior.

> [!NOTE]
>  Se necessario, è possibile impostare il valore di un membro di dati del parametro su Null, tramite [SetParamNull](../../mfc/reference/crecordset-class.md#setparamnull). È inoltre possibile verificare se un membro dati di parametro è Null, tramite [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)<br/>
[Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)