---
title: 'Metodo comptr:: Getaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::GetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- GetAddressOf method
ms.assetid: 972a41d0-c2ef-4ae3-b2cd-77cc45156ac9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c1be1dd844b08be23312848f007e4a57dbd893b5
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646985"
---
# <a name="comptrgetaddressof-method"></a>Metodo ComPtr::GetAddressOf
Recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore all'interfaccia rappresentata da questa **ComPtr**.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
T* const* GetAddressOf() const;  
T** GetAddressOf();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'indirizzo di una variabile.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)