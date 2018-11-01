---
title: Utilizzo di un recordset ADO esistente
ms.date: 11/04/2016
helpviewer_keywords:
- ADO recordsets [C++]
- OLE DB consumer templates, ADO recordsets
- recordsets [C++], using in OLE DB
ms.assetid: a9b1de8a-d379-49b1-a26e-578741e9f6a8
ms.openlocfilehash: 62e56b818a766bf3b7efddf9243ffd47ad2cb46f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50610600"
---
# <a name="using-an-existing-ado-recordset"></a>Utilizzo di un recordset ADO esistente

Per combinare i modelli consumer OLE DB e Active Data Objects (ADO), utilizzare ADO per aprire un set di record (corrispondente a un set di righe nei modelli Consumer OLE DB). Quando si dispone di un set di record, eseguire le operazioni seguenti per connettersi a un set di righe OLE DB:

1. Chiamare `QueryInterface` per il `IRowset` e `IAccessor` puntatori.

    ```cpp
    IRowset* lpRowset = NULL;
    IAccessor* lpAccessor = NULL;
    lpUnk->QueryInterface(IID_IRowset, (void**)&lpRowset);
    lpUnk->QueryInterface(IID_IAccessor, (void**)&lpAccessor);
    ```

    > [!NOTE]
    > *lpUnk* punta al `IUnknown` oggetto del recordset ADO.

1. Collegare la funzione di accesso e un set di righe per le classi di modello di consumer OLE DB appropriati.

    ```cpp
    CRowset rs;
    CAccessor accessor;

    accessor.AddAccessorInfo(0ul);      // 0 is the ordinal of an ADO accessor
    rs.m_spRowset.Attach(lpRowset);      // use the Attach method of CComPtr<>
    rs.SetAccessor(accessor);
    ```

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)