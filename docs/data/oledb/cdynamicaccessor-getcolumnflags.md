---
title: 'CDynamicAccessor:: Getcolumnflags | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDynamicAccessor.GetColumnFlags
- ATL::CDynamicAccessor::GetColumnFlags
- ATL.CDynamicAccessor.GetColumnFlags
- CDynamicAccessor::GetColumnFlags
- GetColumnFlags
dev_langs:
- C++
helpviewer_keywords:
- GetColumnFlags method
ms.assetid: b2ba2f3a-2c61-4a49-abfb-75823908ccf4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 59ccf83160538c06f766fbe227149d299fddb476
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdynamicaccessorgetcolumnflags"></a>CDynamicAccessor::GetColumnFlags
Recupera le caratteristiche della colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```
bool GetColumnFlags(DBORDINAL nColumn,   
  DBCOLUMNFLAGS* pFlags) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore 0 si intende la colonna del segnalibro, se presente.  
  
 `pFlags`  
 [out] Puntatore a una maschera di bit che descrive le caratteristiche della colonna. Vedere la sezione "Tipo enumerato DBCOLUMNFLAGS" in [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce **true** se le caratteristiche di colonna vengono recuperate correttamente. Negli altri casi, viene restituito **false**.  
  
## <a name="remarks"></a>Note  
 Il numero di colonna offset da uno. Colonna zero è un caso speciale: il segnalibro è se disponibile.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)