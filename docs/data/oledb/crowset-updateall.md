---
title: CRowset::UpdateAll | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRowset::UpdateAll
- ATL.CRowset.UpdateAll
- CRowset<TAccessor>.UpdateAll
- ATL.CRowset<TAccessor>.UpdateAll
- UpdateAll
- CRowset.UpdateAll
- ATL::CRowset<TAccessor>::UpdateAll
- CRowset<TAccessor>::UpdateAll
- ATL::CRowset::UpdateAll
dev_langs:
- C++
helpviewer_keywords:
- UpdateAll method
ms.assetid: e5b26c0a-40fc-4c91-a293-5084951788e6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 759b00cddb37a2ceab97fe25762b88d53e3ec0ab
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="crowsetupdateall"></a>CRowset::UpdateAll
Trasmette le modifiche apportate a tutte le righe dall'ultimo recupero in sospeso o **aggiornamento** chiamare su di esso.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT UpdateAll(DBCOUNTITEM* pcRows = NULL,   
   HROW** pphRow = NULL,   
   DBROWSTATUS** ppStatus = NULL) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `pcRows`  
 [out] Un puntatore alla posizione in cui `UpdateAll` restituisce il numero di righe di cui si è tentato di aggiornare, se necessario.  
  
 `pphRow`  
 [out] Puntatore alla memoria in cui `UpdateAll` restituisce l'handle della riga di cui si è tentato di aggiornare. Se non viene restituito alcun handle `pphRow` è null.  
  
 `ppStatus`  
 [out] Un puntatore alla posizione in cui **aggiornamento** restituisce il valore di stato di riga. Se non viene restituito alcun stato `ppStatus` è null.  
  
## <a name="remarks"></a>Note  
 Trasmette le modifiche in sospeso apportate a tutte le righe, poiché tali righe sono state ultimo recupero o aggiornata mediante [aggiornamento](../../data/oledb/crowset-update.md) o `UpdateAll`. `UpdateAll` aggiornerà tutte le righe che sono stata modificata, indipendentemente dal fatto se si conosce ancora l'handle per tali (vedere `pphRow`) o non.  
  
 Ad esempio, se è stato utilizzato **inserire** per inserire cinque righe in un set di righe, è possibile chiamare **aggiornare** cinque volte oppure chiamare `UpdateAll` una volta per aggiornarli tutti.  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetUpdate** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset::SetData](../../data/oledb/crowset-setdata.md)   
 [CRowset::Update](../../data/oledb/crowset-update.md)