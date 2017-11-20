---
title: 'CRowset:: MoveFirst | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRowset<TAccessor>::MoveFirst
- ATL::CRowset::MoveFirst
- CRowset<TAccessor>.MoveFirst
- CRowset::MoveFirst
- CRowset.MoveFirst
- ATL.CRowset.MoveFirst
- ATL.CRowset<TAccessor>.MoveFirst
- ATL::CRowset<TAccessor>::MoveFirst
dev_langs: C++
helpviewer_keywords: MoveFirst method
ms.assetid: a17c0799-ead9-4d85-9a1d-8b17188d01e3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 912e8507e74ca6b37a8330466e25ce5a0ea5296a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetmovefirst"></a>CRowset::MoveFirst
Sposta il cursore nella posizione iniziale e recupera la riga iniziale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
HRESULT MoveFirst( ) throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Chiamate [IRowset:: RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx) per riposizionare il percorso di recupero successivo per la posizione iniziale (la posizione è la posizione successiva operazione di recupero quando è stato creato il set di righe) e recupera la riga iniziale.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset:: MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset:: MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset:: MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset:: MoveLast](../../data/oledb/crowset-movelast.md)   
 [IRowset:: RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx)