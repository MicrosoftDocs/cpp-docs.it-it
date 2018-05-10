---
title: SafeLessThan | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeLessThan
dev_langs:
- C++
helpviewer_keywords:
- SafeLessThan function
ms.assetid: 9d85bc0d-8d94-4d59-9b72-ef3c63a120a0
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ed6f114d13b006425cd3e94e898b2fe924ec732d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="safelessthan"></a>SafeLessThan
Determina se un numero è minore di un altro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeLessThan (  
   const T t,  
   const U u  
) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `t`  
 Primo numero. Deve essere di tipo T.  
  
 [in] `u`  
 Il secondo numero. Deve essere di tipo U.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se `t` è minore `u`; in caso contrario `false`.  
  
## <a name="remarks"></a>Note  
 Questo metodo consente di migliorare l'operatore di confronto standard perché `SafeLessThan` consente di confrontare due diversi tipi di numero.  
  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per un'operazione di confronto singolo senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).  
  
> [!NOTE]
>  Questo metodo deve essere utilizzato solo quando è necessario proteggere una singola operazione matematica. Se sono presenti più operazioni, è necessario utilizzare la `SafeInt` classe anziché chiamare le singole funzioni autonome.  
  
 Per ulteriori informazioni sui tipi di modello T e U, vedere [funzioni SafeInt](../windows/safeint-functions.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** Microsoft:: Utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni SafeInt](../windows/safeint-functions.md)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [SafeInt (classe)](../windows/safeint-class.md)   
 [SafeLessThanEquals](../windows/safelessthanequals.md)   
 [SafeGreaterThan](../windows/safegreaterthan.md)   
 [SafeGreaterThanEquals](../windows/safegreaterthanequals.md)