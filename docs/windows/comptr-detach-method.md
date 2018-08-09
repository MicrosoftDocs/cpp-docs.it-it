---
title: 'Metodo comptr:: Detach | Microsoft Docs'
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
ms.openlocfilehash: abc30204969464323d4995310cee0866139734fc
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39648009"
---
# <a name="comptrdetach-method"></a>Metodo ComPtr::Detach
Rimuove l'associazione di questo **ComPtr** oggetto dall'interfaccia da essa rappresentato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
T* Detach();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia rappresentata da questo **ComPtr** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)