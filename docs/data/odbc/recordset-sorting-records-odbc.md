---
title: 'Recordset: ordinamento dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- sorting data, recordset data
- ODBC recordsets, sorting
- recordsets, sorting
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
ms.openlocfilehash: 708ba8e851fa81ef2adb4360fe582880acd23c31
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50621274"
---
# <a name="recordset-sorting-records-odbc"></a>Recordset: ordinamento dei record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

In questo argomento viene illustrato l'ordinamento del recordset. È possibile specificare uno o più colonne su cui basare l'ordinamento ed è possibile specificare l'ordine crescente o decrescente (**ASC** oppure **DESC**; **ASC** è l'impostazione predefinita) per ciascuna colonna specificata. Ad esempio, se si specificano due colonne, i record sono ordinati nella prima colonna denominata e quindi in base alla seconda. Un database SQL **ORDER BY** clausola definisce un ordinamento. Quando il framework aggiunge il **ORDER BY** clausola to SQL del recordset esegue una query, i controlli di clausola di selezione dell'ordinamento.

È necessario stabilire l'ordinamento del recordset dopo la creazione dell'oggetto, ma prima di chiamare relativi `Open` funzione membro (o prima di chiamare il `Requery` dell'oggetto la cui funzione membro per un set di record esistente `Open` funzione membro è stato chiamato in precedenza).

#### <a name="to-specify-a-sort-order-for-a-recordset-object"></a>Per specificare un ordine per un oggetto recordset

1. Creare un nuovo oggetto recordset (o preparare una chiamata a `Requery` per uno esistente).

1. Impostare il valore dell'oggetto [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) (membro dati).

   L'ordinamento è una stringa con terminazione null. I contenuti del **ORDER BY** clausola, ma non la parola chiave **ORDER BY**. Ad esempio, usare:

    ```
    recordset.m_strSort = "LastName DESC, FirstName DESC";
    ```

   not

    ```
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";
    ```

1. Impostare le opzioni che necessarie, come un filtro, la modalità di blocco o parametri.

1. Chiamare `Open` per il nuovo oggetto (o `Requery` per un oggetto esistente).

I record selezionati vengono ordinati come specificato. Ad esempio, per ordinare un set di record in ordine decrescente per cognome e quindi al nome, eseguire le operazioni seguenti:

```cpp
// Construct the recordset
CStudentSet rsStudent( NULL );
// Set the sort
rsStudent.m_strSort = "LastName DESC, FirstName DESC";
// Run the query with the sort in place
rsStudent.Open( );
```

Il set di record contiene tutti i record di studenti, vengono ordinati in senso decrescente (dalla Z alla A) il cognome, quindi in base al nome.

> [!NOTE]
>  Se si sceglie di eseguire l'override della stringa del recordset predefiniti SQL passando la stringa SQL personalizzata per `Open`, non impostare un ordinamento se la stringa personalizzata è un' **ORDER BY** clausola.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)