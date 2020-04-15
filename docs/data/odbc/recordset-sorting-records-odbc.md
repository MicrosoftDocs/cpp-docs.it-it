---
title: 'Recordset: ordinamento dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- sorting data, recordset data
- ODBC recordsets, sorting
- recordsets, sorting
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
ms.openlocfilehash: 8b4deea1d8cbd4abe01ccc7a4114131378abe463
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366917"
---
# <a name="recordset-sorting-records-odbc"></a>Recordset: ordinamento dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come ordinare il recordset. È possibile specificare una o più colonne su cui basare l'ordinamento ed è possibile specificare l'ordine crescente o decrescente (**ASC** o **DESC**; **ASC** è l'impostazione predefinita) per ogni colonna specificata. Ad esempio, se si specificano due colonne, i record vengono ordinati prima in base alla prima colonna denominata e quindi alla seconda colonna denominata. Una clausola SQL **ORDER BY** definisce un ordinamento. Quando il framework aggiunge la clausola **ORDER BY** alla query SQL del recordset, la clausola controlla l'ordinamento della selezione.

È necessario stabilire l'ordinamento di un recordset dopo `Open` aver creato l'oggetto `Requery` ma prima di chiamare `Open` la relativa funzione membro (o prima di chiamare la funzione membro per un oggetto recordset esistente la cui funzione membro è stata chiamata in precedenza).

#### <a name="to-specify-a-sort-order-for-a-recordset-object"></a>Per specificare un criterio di ordinamento per un oggetto recordset

1. Costruire un nuovo oggetto recordset `Requery` (o prepararsi a chiamare per uno esistente).

1. Impostare il valore del membro dati [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) dell'oggetto.

   L'ordinamento è una stringa con terminazione null. Contiene il contenuto della clausola **ORDER BY** ma non la parola chiave **ORDER BY**. Ad esempio, usare:

    ```
    recordset.m_strSort = "LastName DESC, FirstName DESC";
    ```

   not

    ```
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";
    ```

1. Impostare le altre opzioni necessarie, ad esempio un filtro, la modalità di blocco o i parametri.

1. Chiamare `Open` per il nuovo `Requery` oggetto (o per un oggetto esistente).

I record selezionati vengono ordinati come specificato. Ad esempio, per ordinare un set di record degli studenti in ordine decrescente in base al cognome, quindi al nome, eseguire le operazioni seguenti:

```cpp
// Construct the recordset
CStudentSet rsStudent( NULL );
// Set the sort
rsStudent.m_strSort = "LastName DESC, FirstName DESC";
// Run the query with the sort in place
rsStudent.Open( );
```

Il recordset contiene tutti i record degli studenti, ordinati in ordine decrescente (dalla z alla A) in base al cognome, quindi in base al nome.

> [!NOTE]
> Se si sceglie di eseguire l'override della stringa SQL `Open`predefinita del recordset passando una stringa SQL personalizzata a , non impostare un ordinamento se la stringa personalizzata include una clausola **ORDER BY.**

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)
