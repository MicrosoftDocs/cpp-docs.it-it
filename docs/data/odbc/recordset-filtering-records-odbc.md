---
title: 'Recordset: applicazione di filtri ai record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- data [MFC], filtering
- recordsets [C++], filtering
- filtering recordsets
- ODBC recordsets [C++], filtering records
- filters [C++], recordset object
ms.assetid: 5c075f37-c837-464d-90c1-d028a9d1c175
ms.openlocfilehash: 56b8c4f52ec294f58a760e1309d32aa81286ddec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367010"
---
# <a name="recordset-filtering-records-odbc"></a>Recordset: applicazione di filtri ai record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come filtrare un recordset in modo da selezionare solo un sottoinsieme specifico dei record disponibili. Ad esempio, è possibile selezionare solo le sezioni del corso per un determinato corso, ad esempio MATH101. Un filtro è una condizione di ricerca definita dal contenuto di una clausola **SQL WHERE.** Quando il framework lo aggiunge all'istruzione SQL del recordset, la clausola **WHERE** vincola la selezione.

È necessario stabilire il filtro di un oggetto recordset dopo `Open` aver creato l'oggetto `Requery` ma prima di chiamare `Open` la relativa funzione membro (o prima di chiamare la funzione membro per un oggetto recordset esistente la cui funzione membro è stata chiamata in precedenza).

#### <a name="to-specify-a-filter-for-a-recordset-object"></a>Per specificare un filtro per un oggetto recordset

1. Costruire un nuovo oggetto recordset `Requery` (o prepararsi a chiamare per un oggetto esistente).

1. Impostare il valore del membro dati [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) dell'oggetto.

   Il filtro è una stringa con terminazione null che include il contenuto della clausola SQL **WHERE** ma non la parola chiave **WHERE**. Ad esempio, usare:

    ```
    m_pSet->m_strFilter = "CourseID = 'MATH101'";
    ```

   not

    ```
    m_pSet->m_strFilter = "WHERE CourseID = 'MATH101'";
    ```

    > [!NOTE]
    >  La stringa letterale "MATH101" viene visualizzata con virgolette singole sopra. Nella specifica SQL ODBC, le virgolette singole vengono utilizzate per indicare un valore letterale stringa di caratteri. Controllare la documentazione del driver ODBC per i requisiti di citazione del DBMS in questa situazione. Questa sintassi viene inoltre descritta più avanti verso la fine di questo argomento.

1. Impostare le altre opzioni necessarie, ad esempio l'ordinamento, la modalità di blocco o i parametri. Specificare un parametro è particolarmente utile. Per informazioni sulla parametrizzazione del filtro, vedere Recordset: applicazione di parametri a [un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

1. Chiamare `Open` per il nuovo `Requery` oggetto (o per un oggetto aperto in precedenza).

> [!TIP]
> L'utilizzo di parametri nel filtro è potenzialmente il metodo più efficiente per il recupero dei record.

> [!TIP]
> I filtri Recordset sono utili per [unire tabelle](../../data/odbc/recordset-performing-a-join-odbc.md) e utilizzare [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) basati su informazioni ottenute o calcolate in fase di esecuzione.

Il recordset seleziona solo i record che soddisfano la condizione di ricerca specificata. Ad esempio, per specificare il filtro del `strCourseID` corso descritto in precedenza (supponendo che una variabile attualmente impostata, ad esempio, su "MATH101"), eseguire le operazioni seguenti:

```
// Using the recordset pointed to by m_pSet

// Set the filter
m_pSet->m_strFilter = "CourseID = " + strCourseID;

// Run the query with the filter in place
if ( m_pSet->Open( CRecordset::snapshot, NULL, CRecordset::readOnly ) )

// Use the recordset
```

Il recordset contiene record per tutte le sezioni di classe per MATH101.

Si noti come la stringa di filtro è stata impostata nell'esempio precedente, utilizzando una variabile stringa. Questo è l'utilizzo tipico. Si supponga tuttavia di voler specificare il valore letterale 100 per l'ID corso. Il codice seguente mostra come impostare correttamente la stringa del filtro con un valore letterale:The following code shows how to set the filter string correctly with a literal value:

```
m_strFilter = "StudentID = '100'";   // correct
```

Si noti l'utilizzo di virgolette singole; se si imposta direttamente la stringa di filtro, la stringa di filtro **non**sarà:

```
m_strFilter = "StudentID = 100";   // incorrect for some drivers
```

L'offerta illustrata in precedenza è conforme alla specifica ODBC, ma alcuni DBMS potrebbero richiedere altri caratteri di virgolette. Per ulteriori informazioni, vedere [SQL: personalizzazione dell'istruzione SQL (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md)del recordset.

> [!NOTE]
> Se si sceglie di eseguire l'override della stringa SQL `Open`predefinita del recordset passando una stringa SQL personalizzata a , non è necessario impostare un filtro se la stringa personalizzata include una clausola **WHERE.** Per ulteriori informazioni sull'override del codice SQL predefinito, vedere [SQL: personalizzazione dell'istruzione SQL (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md)del recordset.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)<br/>
[Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)<br/>
[Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)<br/>
[Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
