---
title: 'Metodo comptr:: Releaseandgetaddressof | Microsoft Docs'
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
ms.openlocfilehash: 3bded6992abc5b22e2c02a3364431a3f68b76ad6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649848"
---
# <a name="comptrreleaseandgetaddressof-method"></a>Metodo ComPtr::ReleaseAndGetAddressOf
Rilascia l'interfaccia associato a questo **ComPtr** e quindi recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore a interfaccia che è stata rilasciata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
T** ReleaseAndGetAddressOf();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dati di questo **ComPtr**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtr (classe)](../windows/comptr-class.md)   
 [Membro ComPtr::ptr_ Data](../windows/comptr-ptr-data-member.md)