---
description: 'Ulteriori informazioni su: Recordset: filtro di record (ODBC)'
title: 'Recordset: applicazione di filtri ai record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- data [MFC], filtering
- recordsets [C++], filtering
- filtering recordsets
- ODBC recordsets [C++], filtering records
- filters [C++], recordset object
ms.assetid: 5c075f37-c837-464d-90c1-d028a9d1c175
ms.openlocfilehash: 15cf191f7a5a037c032726bc4f16a5774fb2857b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322338"
---
# <a name="recordset-filtering-records-odbc"></a>Recordset: applicazione di filtri ai record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come filtrare un recordset in modo che selezioni solo un subset particolare dei record disponibili. Ad esempio, potrebbe essere necessario selezionare solo le sezioni della classe per un determinato corso, ad esempio MATH101. Un filtro è una condizione di ricerca definita dal contenuto di una clausola **where** SQL. Quando il Framework lo aggiunge all'istruzione SQL del recordset, la clausola **where** vincola la selezione.

È necessario stabilire un filtro per un oggetto recordset dopo la costruzione dell'oggetto, ma prima di chiamare la `Open` funzione membro (o prima di chiamare la `Requery` funzione membro per un oggetto recordset esistente la cui `Open` funzione membro è stata chiamata in precedenza).

#### <a name="to-specify-a-filter-for-a-recordset-object"></a>Per specificare un filtro per un oggetto recordset

1. Costruire un nuovo oggetto recordset o prepararsi a chiamare `Requery` per un oggetto esistente.

1. Impostare il valore del membro dati [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) dell'oggetto.

   Il filtro è una stringa con terminazione null che contiene il contenuto della clausola **where** SQL, ma non la parola chiave **where**. Ad esempio, usare:

    ```
    m_pSet->m_strFilter = "CourseID = 'MATH101'";
    ```

   not

    ```
    m_pSet->m_strFilter = "WHERE CourseID = 'MATH101'";
    ```

    > [!NOTE]
    >  La stringa letterale "MATH101" viene visualizzata con le virgolette singole sopra. Nella specifica ODBC SQL le virgolette singole vengono utilizzate per indicare un valore letterale stringa di caratteri. In questa situazione, consultare la documentazione del driver ODBC per informazioni sui requisiti del sistema DBMS. Questa sintassi viene inoltre discussa ulteriormente in prossimità della fine di questo argomento.

1. Impostare le altre opzioni necessarie, ad esempio l'ordinamento, la modalità di blocco o i parametri. La specifica di un parametro è particolarmente utile. Per informazioni su come parametrizzazione il filtro, vedere [Recordset: parametrizzazione un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

1. Chiamare `Open` per il nuovo oggetto o `Requery` per un oggetto aperto in precedenza.

> [!TIP]
> L'utilizzo di parametri nel filtro è potenzialmente il metodo più efficiente per il recupero di record.

> [!TIP]
> I filtri recordset sono utili per l' [Unione](../../data/odbc/recordset-performing-a-join-odbc.md) di tabelle e per l'utilizzo di [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) basati su informazioni ottenute o calcolate in fase di esecuzione.

Il recordset seleziona solo i record che soddisfano la condizione di ricerca specificata. Ad esempio, per specificare il filtro del corso descritto in precedenza (presupponendo che una variabile `strCourseID` attualmente impostata, ad esempio, su "MATH101"), eseguire le operazioni seguenti:

```
// Using the recordset pointed to by m_pSet

// Set the filter
m_pSet->m_strFilter = "CourseID = " + strCourseID;

// Run the query with the filter in place
if ( m_pSet->Open( CRecordset::snapshot, NULL, CRecordset::readOnly ) )

// Use the recordset
```

Il recordset contiene record per tutte le sezioni di classe per MATH101.

Si noti come la stringa di filtro è stata impostata nell'esempio precedente, usando una variabile di stringa. Si tratta dell'utilizzo tipico. Tuttavia, si supponga di voler specificare il valore letterale 100 per l'ID del corso. Nel codice seguente viene illustrato come impostare correttamente la stringa di filtro con un valore letterale:

```
m_strFilter = "StudentID = '100'";   // correct
```

Si noti l'uso di caratteri di virgoletta singola; Se si imposta direttamente la stringa di filtro, la stringa di filtro **non** è:

```
m_strFilter = "StudentID = 100";   // incorrect for some drivers
```

Le virgolette illustrate in precedenza sono conformi alla specifica ODBC, ma alcuni DBMS potrebbero richiedere altri caratteri di virgolette. Per ulteriori informazioni, vedere [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

> [!NOTE]
> Se si sceglie di eseguire l'override della stringa SQL predefinita del recordset passando la propria stringa SQL a `Open` , è consigliabile non impostare un filtro se la stringa personalizzata include una clausola **where** . Per ulteriori informazioni sull'override di SQL predefinito, vedere [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ordinamento di record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)<br/>
[Recordset: selezione di record in recordset (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)<br/>
[Recordset: aggiornamento di record in recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)<br/>
[Recordset: blocco di record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
