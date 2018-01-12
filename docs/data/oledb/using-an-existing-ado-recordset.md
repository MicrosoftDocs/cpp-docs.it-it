---
title: Utilizzo di un Recordset ADO esistente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ADO recordsets [C++]
- OLE DB consumer templates, ADO recordsets
- recordsets [C++], using in OLE DB
ms.assetid: a9b1de8a-d379-49b1-a26e-578741e9f6a8
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 02f8f29c60601e22a1b005f435d3626336628a1e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-an-existing-ado-recordset"></a>Utilizzo di un recordset ADO esistente
Per combinare i modelli consumer OLE DB e Active Data Objects (ADO), utilizzare ADO per aprire un recordset (corrispondente a un set di righe dei modelli Consumer OLE DB). Quando si dispone di un recordset, eseguire le operazioni seguenti per connettersi a un set di righe OLE DB:  
  
1.  Chiamare `QueryInterface` per il `IRowset` e `IAccessor` puntatori.  
  
    ```  
    IRowset* lpRowset = NULL;  
    IAccessor* lpAccessor = NULL;  
    lpUnk->QueryInterface(IID_IRowset, (void**)&lpRowset);  
    lpUnk->QueryInterface(IID_IAccessor, (void**)&lpAccessor);  
    ```  
  
    > [!NOTE]
    >  *lpUnk* punta al **IUnknown** oggetto dell'oggetto recordset ADO.  
  
2.  Collegare la funzione di accesso e un set di righe per le classi di modello consumer OLE DB appropriate.  
  
    ```  
    CRowset rs;  
    CAccessor accessor;  
  
    accessor.AddAccessorInfo(0ul);      // 0 is the ordinal of an ADO accessor  
    rs.m_spRowset.Attach(lpRowset);      // use the Attach method of CComPtr<>  
    rs.SetAccessor(accessor);  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)