---
title: 'Recordset: Applicazione di filtri di record (ODBC) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data [MFC], filtering
- recordsets [C++], filtering
- filtering recordsets
- ODBC recordsets [C++], filtering records
- filters [C++], recordset object
ms.assetid: 5c075f37-c837-464d-90c1-d028a9d1c175
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6cdd5882c259c2f1746d1c6f41572631da4a2788
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50079948"
---
# <a name="recordset-filtering-records-odbc"></a>Recordset: applicazione di filtri ai record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Questo argomento illustra come filtrare un set di record in modo che seleziona solo un sottoinsieme particolare di record disponibili. Ad esempio, è possibile selezionare solo le sezioni di classe per un corso specifico, ad esempio MATH101. Un filtro è una condizione di ricerca definita dal contenuto di un database SQL **in cui** clausola. Quando il framework viene accodato all'istruzione SQL del recordset, il **in cui** clausola vincola la selezione.

È necessario specificare il filtro di un oggetto recordset dopo la creazione dell'oggetto, ma prima di chiamare relativi `Open` funzione membro (o prima di chiamare il `Requery` dell'oggetto la cui funzione membro per un set di record esistente `Open` dispone di funzione membro stato chiamato in precedenza).

#### <a name="to-specify-a-filter-for-a-recordset-object"></a>Per specificare un filtro per un oggetto recordset

1. Creare un nuovo oggetto recordset (o preparare una chiamata a `Requery` per un oggetto esistente).

1. Impostare il valore dell'oggetto [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) (membro dati).

   Il filtro è una stringa con terminazione null che contiene il contenuto di SQL **in cui** clausola, ma non la parola chiave **in cui**. Ad esempio, usare:

    ```
    m_pSet->m_strFilter = "CourseID = 'MATH101'";
    ```

   not

    ```
    m_pSet->m_strFilter = "WHERE CourseID = 'MATH101'";
    ```

    > [!NOTE]
    >  La stringa letterale "MATH101" viene visualizzata con virgolette singole precedente. Nella specifica ODBC SQL, le virgolette singole vengono utilizzate per indicare un valore letterale stringa di caratteri. Controllare la documentazione del driver ODBC per i requisiti di delimitazione del DBMS in questa situazione. Questa sintassi è illustrata in modo più dettagliato alla fine di questo argomento.

1. Impostare le opzioni che necessarie, come ordinamento, la modalità di blocco o parametri. Se si specifica un parametro è particolarmente utile. Per informazioni sull'uso dei parametri di filtro, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

1. Chiamare `Open` per il nuovo oggetto (o `Requery` per un oggetto aperto in precedenza).

> [!TIP]
>  Utilizzo di parametri del filtro è potenzialmente il metodo più efficiente per il recupero dei record.

> [!TIP]
>  Sono utili per i filtri di recordset [aggiunta](../../data/odbc/recordset-performing-a-join-odbc.md) tabelle e per l'uso [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) basato sulle informazioni specificate o calcolate in fase di esecuzione.

Il recordset seleziona solo i record che soddisfano la condizione di ricerca specificato. Ad esempio, per specificare il filtro del corso descritto in precedenza (presupponendo che una variabile `strCourseID` attualmente impostato, ad esempio, per "MATH101"), eseguire le operazioni seguenti:

```
// Using the recordset pointed to by m_pSet

// Set the filter
m_pSet->m_strFilter = "CourseID = " + strCourseID;

// Run the query with the filter in place
if ( m_pSet->Open( CRecordset::snapshot, NULL, CRecordset::readOnly ) )

// Use the recordset
```

Il set di record contiene record per tutte le sezioni di classe per MATH101.

Si noti come la stringa di filtro è stata impostata nell'esempio precedente, utilizzando una variabile di stringa. Questo è l'utilizzo tipico. Ma si supponga che si desidera specificare il valore letterale 100 per l'ID del corso. Il codice seguente viene illustrato come impostare la stringa di filtro in modo corretto con un valore letterale:

```
m_strFilter = "StudentID = '100'";   // correct
```

Si noti l'uso dei caratteri di virgoletta singola. Se si imposta la stringa di filtro direttamente, la stringa di filtro viene **non**:

```
m_strFilter = "StudentID = 100";   // incorrect for some drivers
```

Le virgolette sopra è conforme alla specifica ODBC, ma alcuni DBMS potrebbero richiedere altri caratteri di virgoletta. Per altre informazioni, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

> [!NOTE]
>  Se si sceglie di eseguire l'override della stringa del recordset predefiniti SQL passando la stringa SQL personalizzata per `Open`, non è necessario impostare un filtro se la stringa personalizzata contiene una **dove** clausola. Per altre informazioni sulle ignorando l'impostazione predefinita, SQL, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)<br/>
[Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)<br/>
[Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)<br/>
[Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)