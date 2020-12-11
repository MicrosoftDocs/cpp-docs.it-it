---
description: 'Ulteriori informazioni su: utilizzo di un recordset ADO esistente'
title: Utilizzo di un recordset ADO esistente
ms.date: 11/04/2016
helpviewer_keywords:
- ADO recordsets [C++]
- OLE DB consumer templates, ADO recordsets
- recordsets [C++], using in OLE DB
ms.assetid: a9b1de8a-d379-49b1-a26e-578741e9f6a8
ms.openlocfilehash: 4b5c3b5f621f3cbdba6f2d42fd95436495a5661e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160948"
---
# <a name="using-an-existing-ado-recordset"></a>Utilizzo di un recordset ADO esistente

Per combinare OLE DB modelli di consumer e ADO (Active Data Objects), usare ADO per aprire un recordset (corrispondente a un set di righe nei modelli di consumer OLE DB). Quando si dispone di un recordset, eseguire le operazioni seguenti per connettersi a un set di righe OLE DB:

1. Chiamare `QueryInterface` per i `IRowset` `IAccessor` puntatori e.

    ```cpp
    IRowset* lpRowset = NULL;
    IAccessor* lpAccessor = NULL;
    lpUnk->QueryInterface(IID_IRowset, (void**)&lpRowset);
    lpUnk->QueryInterface(IID_IAccessor, (void**)&lpAccessor);
    ```

    > [!NOTE]
    > *lpUnk* punta all' `IUnknown` oggetto del recordset ADO.

1. Alleghi la funzione di accesso e il set di righe alle classi di modelli di consumer appropriate OLE DB.

    ```cpp
    CRowset rs;
    CAccessor accessor;

    accessor.AddAccessorInfo(0ul);      // 0 is the ordinal of an ADO accessor
    rs.m_spRowset.Attach(lpRowset);      // use the Attach method of CComPtr<>
    rs.SetAccessor(accessor);
    ```

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
