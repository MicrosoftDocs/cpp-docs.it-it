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
ms.openlocfilehash: bb4b67a4c534598a8e26eb9ab5f297b108b67b6d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212992"
---
# <a name="recordset-architecture-odbc"></a>Recordset: architettura (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento vengono descritti i membri dati che costituiscono l'architettura di un oggetto recordset:

- [Membri dati di campo](#_core_field_data_members)

- [Membri dati di parametro](#_core_parameter_data_members)

- [Uso di membri dati m_nFields e m_nParams](#_core_using_m_nfields_and_m_nparams)

> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se viene implementato il recupero di massa di righe, l'architettura è simile. Per comprendere le differenze, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="sample-class"></a><a name="_core_a_sample_class"></a> Classe di esempio

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

Quando si usa la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) dalla procedura guidata **Aggiungi classe** per dichiarare una classe recordset derivata da `CRecordset`, la classe risultante ha la struttura generale illustrata nella semplice classe seguente:

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

All'inizio della classe, la procedura guidata scrive un set di [membri dati di campo](#_core_field_data_members). Quando si crea la classe, è necessario specificare uno o più membri dati di campo. Se la classe è con parametri, come nel caso della classe di esempio (con il membro dati `m_strIDParam`), è necessario aggiungere manualmente i [membri dati di parametro](#_core_parameter_data_members). La procedura guidata non supporta l'aggiunta di parametri a una classe.

##  <a name="field-data-members"></a><a name="_core_field_data_members"></a> Membri dati di campo

I membri più importanti della classe recordset sono i membri dati di campo. Per ogni colonna selezionata dall'origine dati, la classe contiene un membro dati del tipo di dati appropriato per la colonna. Ad esempio, la [classe di esempio](#_core_a_sample_class) riportata all'inizio di questo argomento contiene due membri dati di campo, entrambi di tipo `CString`, denominati `m_strCourseID` e `m_strCourseTitle`.

Quando il recordset seleziona un set di record, il framework associa automaticamente le colonne del record corrente (dopo la chiamata `Open`, il primo record è quello corrente) per i membri dati di campo dell'oggetto. In altre parole, il framework usa il membro dati di campo appropriato come un buffer in cui archiviare il contenuto di una colonna di record.

Quando l'utente esegue lo scorrimento a un nuovo record, il framework usa i membri dati di campo per rappresentare il record corrente. Il framework aggiorna i membri dati di campo, sostituendo i valori del record precedente. I membri dati di campo vengono anche usati per l'aggiornamento del record corrente e per l'aggiunta di nuovi record. Nell'ambito del processo di aggiornamento di un record, è possibile specificare i valori di aggiornamento assegnando direttamente i valori a uno o più membri dati di campo appropriati.

##  <a name="parameter-data-members"></a><a name="_core_parameter_data_members"></a> Membri dati di parametro

Se la classe è con parametri, dispone di uno o più membri dati di parametro. Una classe con parametri consente di basare una query recordset su informazioni ottenute o calcolate in fase di esecuzione.

In genere, il parametro consente di restringere la selezione, come nell'esempio seguente. In base alla [classe di esempio](#_core_a_sample_class) riportata all'inizio di questo argomento, l'oggetto recordset potrà eseguire l'istruzione SQL seguente:

```sql
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = ?
```

"?" è un segnaposto per un valore di parametro che viene fornito in fase di esecuzione. Quando si costruisce il recordset e si imposta il relativo membro dati `m_strIDParam` su MATH101, l'istruzione SQL effettiva per il recordset diventa:

```sql
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = MATH101
```

Attraverso la definizione dei membri dati di parametro, è possibile indicare al framework i parametri nella stringa SQL. Il framework associa il parametro, che consente a ODBC di sapere come ottenere i valori con cui sostituire il segnaposto. Nell'esempio, il recordset risultante contiene solo il record della tabella Course con una colonna CourseID il cui valore è MATH101. Vengono selezionate tutte le colonne specificate di questo record. È possibile specificare tutti i parametri (e i segnaposto) necessari.

> [!NOTE]
>  MFC non esegue alcuna operazione con i parametri: in particolare, non esegue la sostituzione di testo. Al contrario, MFC indica a ODBC come ottenere il parametro. ODBC recupera quindi i dati ed esegue la parametrizzazione necessaria.

> [!NOTE]
>  L'ordine dei parametri è importante. Per informazioni su questa e altre informazioni sui parametri, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

##  <a name="using-m_nfields-and-m_nparams"></a><a name="_core_using_m_nfields_and_m_nparams"></a> Uso di membri dati m_nFields e m_nParams

Quando una procedura guidata scrive un costruttore per la classe, inizializza anche il membro dati [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields), che specifica il numero di [membri dati di campo](#_core_field_data_members) nella classe. Se si aggiungono [parametri](#_core_parameter_data_members) alla classe, è necessario aggiungere anche un'inizializzazione per il membro dati [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams), che specifica il numero di membri dati di parametro. Il framework usa questi valori per lavorare con i membri dati.

Per ulteriori informazioni ed esempi, vedere [trasferimento di campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)
