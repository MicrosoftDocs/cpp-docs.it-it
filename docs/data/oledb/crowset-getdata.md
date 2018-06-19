---
title: CRowset::GetData | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CRowset<TAccessor>::GetData
- ATL::CRowset<TAccessor>::GetData
- ATL::CRowset::GetData
- ATL.CRowset<TAccessor>.GetData
- CRowset<TAccessor>.GetData
- CRowset::GetData
- CRowset.GetData
- ATL.CRowset.GetData
dev_langs:
- C++
helpviewer_keywords:
- GetData method [OLE DB]
ms.assetid: 1e0347b5-3e24-4ff8-a790-839616c1522f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c0a8268f115f6c6d5a887bea7aad8a244d7e530c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33096444"
---
# <a name="crowsetgetdata"></a>CRowset::GetData
Recupera dati da una copia del set di righe della riga.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetData() throw();   


HRESULT GetData(int nAccessor) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nAccessor`  
 [in] Il numero di indice (zero offset) della funzione di accesso da utilizzare per l'accesso ai dati.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Se si specifica una funzione di accesso che non è un sia automatica o meno in [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md), utilizzare questo metodo per ottenere in modo esplicito i dati passando il numero delle funzioni di accesso.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)