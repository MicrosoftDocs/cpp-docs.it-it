---
title: 'CRowset:: Update | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRowset.Update
- ATL.CRowset.Update
- ATL.CRowset<TAccessor>.Update
- ATL::CRowset<TAccessor>::Update
- CRowset<TAccessor>::Update
- CRowset::Update
- CRowset<TAccessor>.Update
- ATL::CRowset::Update
dev_langs: C++
helpviewer_keywords: Update method
ms.assetid: cd5fedc8-2b85-4cb8-8c40-c79576316903
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 17541ea324fa7d6c314501f1e09519881a1fff7c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetupdate"></a>CRowset::Update
Trasmette le modifiche apportate alla riga corrente dall'ultimo recupero in sospeso o **aggiornamento** chiamare su di esso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Update(   
   DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `pcRows`  
 [out] Un puntatore alla posizione in cui **aggiornare** restituisce il numero di righe di cui si è tentato di aggiornare, se necessario.  
  
 `phRow`  
 [out] Un puntatore alla posizione in cui **aggiornare** restituisce l'handle della riga di cui si è tentato di aggiornare. Se non viene restituito alcun handle `phRow` è null.  
  
 `pStatus`  
 [out] Un puntatore alla posizione in cui **aggiornamento** restituisce il valore di stato di riga. Se non viene restituito alcun stato `pStatus` è null.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Trasmette le modifiche apportate alla riga corrente dall'ultimo recupero o aggiornare tale riga in sospeso (utilizzando **aggiornamento** o [UpdateAll](../../data/oledb/crowset-updateall.md)). In genere si chiama [SetData](../../data/oledb/crowset-setdata.md) per impostare i valori dei dati nelle colonne in una riga e quindi chiamare **aggiornamento** per trasmettere le modifiche.  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetUpdate** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate:: Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset:: UpdateAll](../../data/oledb/crowset-updateall.md)   
 [CRowset::SetData](../../data/oledb/crowset-setdata.md)