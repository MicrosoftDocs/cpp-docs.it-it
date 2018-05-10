---
title: 'Metodo comptr:: Releaseandgetaddressof | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- ReleaseAndGetAddressOf method
ms.assetid: 3751dcb4-d50e-432c-89e4-e736be34d434
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 32d846a1fc41596812ca6e8578f25f9ae8115182
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptrreleaseandgetaddressof-method"></a>Metodo ComPtr::ReleaseAndGetAddressOf
Rilascia l'interfaccia associata a questo ComPtr, quindi recupera l'indirizzo del membro dati [ptr_](../windows/comptr-ptr-data-member.md) , che contiene un puntatore a interfaccia che è stata rilasciata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
T** ReleaseAndGetAddressOf();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dati di questo ComPtr.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtr (classe)](../windows/comptr-class.md)   
 [Membro ComPtr::ptr_ Data](../windows/comptr-ptr-data-member.md)