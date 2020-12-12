---
description: 'Ulteriori informazioni su: Recordset: ordinamento dei record (ODBC)'
title: 'Recordset: ordinamento dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- sorting data, recordset data
- ODBC recordsets, sorting
- recordsets, sorting
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
ms.openlocfilehash: fbf2ef3c42061bac9b41550a0c44a20f68c099b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204420"
---
# <a name="recordset-sorting-records-odbc"></a>Recordset: ordinamento dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come ordinare il recordset. È possibile specificare una o più colonne su cui basare l'ordinamento ed è possibile specificare l'ordine crescente o decrescente (**ASC** o **desc**; **ASC** è l'impostazione predefinita) per ogni colonna specificata. Se, ad esempio, si specificano due colonne, i record vengono ordinati prima nella prima colonna denominata e quindi nella seconda colonna denominata. Una clausola SQL **Order by** definisce un ordinamento. Quando il Framework aggiunge la clausola **Order by** alla query SQL del recordset, la clausola controlla l'ordinamento della selezione.

È necessario stabilire il tipo di ordinamento di un recordset dopo la costruzione dell'oggetto, ma prima `Open` di chiamare la funzione membro (o prima `Requery` di chiamare la funzione membro per un oggetto recordset esistente la cui `Open` funzione membro è stata chiamata in precedenza).

#### <a name="to-specify-a-sort-order-for-a-recordset-object"></a>Per specificare un ordinamento per un oggetto recordset

1. Costruire un nuovo oggetto recordset o prepararsi a chiamarne uno `Requery` esistente.

1. Impostare il valore del membro dati [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) dell'oggetto.

   L'ordinamento è una stringa con terminazione null. Contiene il contenuto della clausola **Order by** , ma non la parola chiave **Order by**. Ad esempio, usare:

    ```
    recordset.m_strSort = "LastName DESC, FirstName DESC";
    ```

   not

    ```
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";
    ```

1. Impostare le altre opzioni necessarie, ad esempio un filtro, la modalità di blocco o i parametri.

1. Chiamare `Open` per il nuovo oggetto o `Requery` per un oggetto esistente.

I record selezionati vengono ordinati come specificato. Per ordinare, ad esempio, un set di record di studenti in ordine decrescente in base al cognome e quindi al nome, eseguire le operazioni seguenti:

```cpp
// Construct the recordset
CStudentSet rsStudent( NULL );
// Set the sort
rsStudent.m_strSort = "LastName DESC, FirstName DESC";
// Run the query with the sort in place
rsStudent.Open( );
```

Il recordset contiene tutti i record degli studenti, ordinati in ordine decrescente (da Z a A) in base al cognome, quindi in base al nome.

> [!NOTE]
> Se si sceglie di eseguire l'override della stringa SQL predefinita del recordset passando la propria stringa SQL a `Open` , non impostare un ordinamento se la stringa personalizzata include una clausola **Order by** .

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)
