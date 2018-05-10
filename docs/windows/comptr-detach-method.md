---
title: 'Metodo comptr:: Detach | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method
ms.assetid: b9016775-1ade-4581-be1f-0d6f9c2ca658
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: afa5976d26351ed3022c58fa8226b6038fa816c0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptrdetach-method"></a>Metodo ComPtr::Detach
Rimuove l'associazione di questo oggetto `ComPtr` dall'interfaccia da esso rappresentata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
T* Detach();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore all'interfaccia rappresentata da questo oggetto `ComPtr`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)