---
title: Utilizzo di un Recordset ADO esistente | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ADO recordsets [C++]
- OLE DB consumer templates, ADO recordsets
- recordsets [C++], using in OLE DB
ms.assetid: a9b1de8a-d379-49b1-a26e-578741e9f6a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1433b51a6dfe6f558b98360812e694d42ebfb9f5
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50051953"
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