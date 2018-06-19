---
title: 'Comptr:: operator = (operatore) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: 1a0c2752-f7d8-4819-9443-07b88b69ef02
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f4066db37de8a993802970784f09141352fef028
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33871201"
---
# <a name="comptroperator-operator"></a>Operatore ComPtr::operator=
Assegna un valore al ComPtr corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW ComPtr& operator=(  
   decltype(__nullptr)  
);  
WRL_NOTHROW ComPtr& operator=(  
   _In_opt_ T *other  
);  
template <typename U>  
WRL_NOTHROW ComPtr& operator=(  
   _In_opt_ U *other  
);  
WRL_NOTHROW ComPtr& operator=(  
   const ComPtr &other  
);  
template<class U>  
WRL_NOTHROW ComPtr& operator=(  
   const ComPtr<U>& other  
);  
WRL_NOTHROW ComPtr& operator=(  
   _Inout_ ComPtr &&other  
);  
template<class U>  
WRL_NOTHROW ComPtr& operator=(  
   _Inout_ ComPtr<U>&& other  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `U`  
 Una classe.  
  
 `other`  
 Un riferimento rvalue, puntatore o riferimento a un tipo o un altro ComPtr.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento al ComPtr corrente.  
  
## <a name="remarks"></a>Note  
 La prima versione di questo operatore assegna un valore vuoto al ComPtr corrente.  
  
 Nella seconda versione, se il puntatore di interfaccia di assegnazione non è uguale al puntatore di interfaccia ComPtr corrente, il secondo puntatore a interfaccia viene assegnato al ComPtr corrente.  
  
 Nella terza versione, il puntatore a interfaccia l'assegnazione viene assegnato al ComPtr corrente.  
  
 Nella quarta versione, se il puntatore di interfaccia del valore di assegnazione non è uguale al puntatore di interfaccia ComPtr corrente, il secondo puntatore a interfaccia viene assegnato al ComPtr corrente.  
  
 La versione del quinto è un operatore di copia; un riferimento a un ComPtr viene assegnato al ComPtr corrente.  
  
 La versione del sesto è un operatore di copia che utilizza la semantica; di spostamento un riferimento rvalue a un ComPtr se qualsiasi tipo è statico, eseguire il cast e quindi assegnato al ComPtr corrente.  
  
 La versione del settima è un operatore di copia che utilizza la semantica; di spostamento un riferimento rvalue a un ComPtr di tipo `U` è static cast quindi e assegnato al ComPtr corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)