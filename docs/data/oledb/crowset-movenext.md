---
title: 'CRowset:: MoveNext | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CRowset<TAccessor>.MoveNext
- ATL.CRowset.MoveNext
- ATL::CRowset<TAccessor>::MoveNext
- CRowset<TAccessor>.MoveNext
- CRowset.MoveNext
- CRowset<TAccessor>::MoveNext
- CRowset::MoveNext
- ATL::CRowset::MoveNext
dev_langs: C++
helpviewer_keywords: MoveNext method
ms.assetid: 0df3288c-2bce-494f-99c0-6344b54a4adf
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e2b0a3a3a10ae2cc18ab83800cc50f25903a3607
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetmovenext"></a>CRowset::MoveNext
Sposta il cursore al record successivo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT MoveNext( ) throw( );   
HRESULT MoveNext(   
   LONG lSkip,   
   bool bForward = true    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `lSkip`  
 [in] Il numero di righe da ignorare prima di recupero.  
  
 `bForward`  
 [in] Passare **true** per spostarsi in avanti al record successivo, **false** per spostarsi all'indietro.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Quando è stata raggiunta la fine del set di righe, restituisce **DB_S_ENDOFROWSET**.  
  
## <a name="remarks"></a>Note  
 Recupera la riga successiva sequenza dal `CRowset` oggetto, memorizzando la posizione precedente. Facoltativamente, è possibile scegliere di ignorare `lSkip` righe o spostamento con le versioni precedenti.  
  
 Questo metodo richiede l'impostazione delle proprietà seguenti prima di chiamare **aprire** la tabella o un comando contenente il set di righe:  
  
-   **DBPROP_CANSCROLLBACKWARDS** deve essere `VARIANT_TRUE` se `lSkip` < 0  
  
-   **DBPROP_CANFETCHBACKWARDS** deve essere `VARIANT_TRUE` se `bForward` = false  
  
 In caso contrario (se `lSkip` > = 0 e `bForward` = true), non è necessario impostare proprietà aggiuntive.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset:: MoveFirst](../../data/oledb/crowset-movefirst.md)   
 [CRowset:: MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset:: MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)