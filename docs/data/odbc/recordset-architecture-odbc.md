---
title: 'Recordset: architettura (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- recordsets, data members
- field data members, recordset architecture
- field data members
- m_nParams data member, recordsets
- recordsets, architecture
- parameter data members in recordsets
- m_nFields data member
- ODBC recordsets, architecture
- m_nParams data member
- m_nFields data member, recordsets
ms.assetid: 47555ddb-11be-4b9e-9b9a-f2931764d298
ms.openlocfilehash: fc44f2b4fcae51cef78d6b660f0cc86ee516e5e6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50651191"
---
# <a name="recordset-architecture-odbc"></a>Recordset: architettura (ODBC)

Questo argomento si applica alle classi ODBC MFC.

In questo argomento vengono descritti i membri di dati che costituiscono l'architettura di un oggetto recordset:

- [Membri dati di campo](#_core_field_data_members)

- [Membri dati di parametro](#_core_parameter_data_members)

- [Uso di membri dati m_nFields e m_nParams](#_core_using_m_nfields_and_m_nparams)

> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se viene implementato il recupero di righe bulk, l'architettura è simile. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="_core_a_sample_class"></a> Classe di esempio

Quando si usa la [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) dalla **Aggiungi classe** guidata alla dichiarazione di una classe derivata da `CRecordset`, la classe risultante ha la struttura generale illustrata di seguito semplice classe:

```cpp
class CCourse : public CRecordset
{
public:
   CCourse(CDatabase* pDatabase = NULL);
   ...
   CString m_strCourseID;
   CString m_strCourseTitle;
   CString m_strIDParam;
};
```

All'inizio della classe, la procedura guidata scrive un set di [membri dati di campo](#_core_field_data_members). Quando si crea la classe, è necessario specificare uno o più membri di dati di campo. Se la classe è con parametri, come l'esempio di classe è (con il membro dati `m_strIDParam`), è necessario aggiungere manualmente [membri dati di parametro](#_core_parameter_data_members). La procedura guidata non supporta l'aggiunta di parametri a una classe.

##  <a name="_core_field_data_members"></a> Membri dati di campo

I membri più importanti della classe recordset sono membri dati del campo. Per ogni colonna selezionata dall'origine dati, la classe contiene un membro dati di tipo di dati appropriato per la colonna. Ad esempio, il [classe di esempio](#_core_a_sample_class) mostrato all'inizio di questo argomento contiene due membri dati di campo, entrambi di tipo `CString`, denominato `m_strCourseID` e `m_strCourseTitle`.

Quando il recordset consente di selezionare un set di record, il framework viene associata automaticamente le colonne del record corrente (dopo il `Open` chiamata, il primo record è aggiornato) per i membri di dati del campo dell'oggetto. Vale a dire, il framework utilizza il membro dati di campo appropriato come un buffer in cui archiviare il contenuto di una colonna di record.

Mentre l'utente scorre in un nuovo record, il framework utilizza i membri di dati campo per rappresentare il record corrente. Il framework consente di aggiornare i membri di dati di campo, sostituendo i valori del record precedente. Membri dati del campo vengono utilizzati anche per l'aggiornamento del record corrente e per l'aggiunta di nuovi record. Come parte del processo di aggiornamento di un record, è specificare i valori di aggiornamento assegnando valori direttamente al membro dati di campo appropriato o membri.

##  <a name="_core_parameter_data_members"></a> Membri dati di parametro

Se la classe è con parametri, ha uno o più membri di dati di parametro. Una classe con parametri consente di una query di recordset di base sulle informazioni specificate o calcolate in fase di esecuzione.

In genere, il parametro consente di limitare la selezione, come nell'esempio seguente. In base il [classe di esempio](#_core_a_sample_class) all'inizio di questo argomento, l'oggetto recordset potrà eseguire l'istruzione SQL seguente:

```sql
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = ?
```

Il "?" è un segnaposto per un valore di parametro che viene fornito in fase di esecuzione. Quando si crea il recordset e impostare il `m_strIDParam` membro dati da MATH101, l'istruzione SQL effettiva per il recordset diventa:

```sql
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = MATH101
```

Con la definizione di membri dati di parametro, indicare al framework sui parametri nella stringa SQL. Il framework associa il parametro, che consente a ODBC di sapere dove ottenere i valori da sostituire il segnaposto. Nell'esempio, set di record risultante contiene solo il record della tabella Course con una colonna CourseID il cui valore è MATH101. Vengono selezionate tutte le colonne specificate di questo record. È possibile specificare tutti i parametri (e i segnaposto) in base alle esigenze.

> [!NOTE]
>  MFC non esegue alcuna operazione se stesso con i parametri, in particolare, non viene eseguita una sostituzione di testo. Bensì indica ODBC dove ottenere il parametro. ODBC recupera i dati ed esegue la parametrizzazione necessaria.

> [!NOTE]
>  L'ordine dei parametri è importante. Per informazioni su questa e altre informazioni sui parametri, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

##  <a name="_core_using_m_nfields_and_m_nparams"></a> Utilizzo di m_nFields e m_nParams

Quando una procedura guidata scrive un costruttore della classe, inizializza anche il [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) membro dei dati, che specifica il numero della [membri dati di campo](#_core_field_data_members) nella classe. Se si aggiungono [parametri](#_core_parameter_data_members) alla classe, è necessario aggiungere anche un'inizializzazione per il [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams) membro dei dati, che specifica il numero di membri dati di parametro. Il framework utilizza questi valori per lavorare con i membri dati.

Per altre informazioni ed esempi, vedere [Record Field Exchange: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)