---
description: 'Altre informazioni su: override di una funzione di accesso dinamica'
title: Override di una funzione di accesso dinamica
ms.date: 10/19/2018
helpviewer_keywords:
- accessors [C++], dynamic
- dynamic accessors
- overriding, dynamic accessors
ms.assetid: cbefd156-6da5-490d-b795-c2d7d874f7ce
ms.openlocfilehash: 1057b59d7b2cd6b6f5e83511d9dd10e3726f648d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286761"
---
# <a name="overriding-a-dynamic-accessor"></a>Override di una funzione di accesso dinamica

Quando si usa una funzione di accesso dinamica, ad esempio `CDynamicAccessor` , il metodo di comando `Open` crea automaticamente una funzione di accesso, in base alle informazioni sulla colonna del set di righe aperto. È possibile eseguire l'override della funzione di accesso dinamica per controllare esattamente il modo in cui vengono associate le colonne.

Per eseguire l'override della funzione di accesso dinamica, passare **`false`** come ultimo parametro al `CCommand::Open` metodo. In questo modo si impedisce la `Open` creazione automatica di una funzione di accesso. È quindi possibile chiamare `GetColumnInfo` e chiamare `AddBindEntry` per ogni colonna che si desidera associare. Il codice seguente illustra come eseguire questa operazione:

```cpp
USES_CONVERSION;
double   dblProductID;

CCommand<CDynamicAccessor> product;
// Open the table, passing false to prevent automatic binding
product.Open(session, _T("Select * FROM Products"), NULL, NULL, DBGUID_DEFAULT, false);


ULONG         nColumns;
DBCOLUMNINFO*   pColumnInfo;
// Get the column information from the opened rowset.
product.GetColumnInfo(&nColumns, &pColumnInfo);

// Bind the product ID as a double.
pColumnInfo[0].wType          = DBTYPE_R8;
pColumnInfo[0].ulColumnSize = 8;
product.AddBindEntry(pColumnInfo[0]);

// Bind the product name as it is.
product.AddBindEntry(pColumnInfo[1]);

// Bind the reorder level as a string.
pColumnInfo[8].wType          = DBTYPE_STR;
pColumnInfo[8].ulColumnSize = 10;
product.AddBindEntry(pColumnInfo[8]);

// You have finished specifying the bindings. Go ahead and bind.
product.Bind();
// Free the memory for the column information that was retrieved in
// previous call to GetColumnInfo.
CoTaskMemFree(pColumnInfo);


char*   pszProductName;
char*   pszReorderLevel;
bool   bRC;

// Loop through the records tracing out the information.
while (product.MoveNext() == S_OK)
{
   bRC = product.GetValue(1, &dblProductID);
   pszProductName   = (char*)product.GetValue(2);
   pszReorderLevel  = (char*)product.GetValue(9);

   ATLTRACE(_T("Override = %lf \"%s\" \"%s\"\n"), dblProductID,
      A2T(pszProductName), A2T(pszReorderLevel));
}
```

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
