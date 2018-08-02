---
title: 'Comptr:: operator! = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator!=
dev_langs:
- C++
ms.assetid: 63647240-dec7-4eb9-9272-96c07d01493c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0a4c15946862a66c0d4d830f590230763ce3e6f9
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461822"
---
# <a name="comptroperator-operator"></a>Operatore ComPtr::operator!=
Indica se due **ComPtr** oggetti non sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
bool operator!=(  
   const ComPtr<T>& a,  
   const ComPtr<U>& b  
);  
  
bool operator!=(  
   const ComPtr<T>& a,  
   decltype(__nullptr)  
);  
  
bool operator!=(  
   decltype(__nullptr),  
   const ComPtr<T>& a  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *a*  
 Un riferimento a un **ComPtr** oggetto.  
  
 *b*  
 Un riferimento a un'altra **ComPtr** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Primo operatore rese **true** se oggetti *una* non è uguale all'oggetto *b*; in caso contrario, **false**.  
  
 Il secondo e terzo operatore yield **true** se oggetti *una* non è uguale a **nullptr**; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft:: wrl](../windows/microsoft-wrl-namespace.md)   
 [Classe ComPtr](../windows/comptr-class.md)