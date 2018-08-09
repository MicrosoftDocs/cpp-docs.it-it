---
title: SafeLessThan | Microsoft Docs
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
ms.openlocfilehash: 923c1f46d8d4212eb61cd9834af1c47d521bf369
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40020040"
---
# <a name="safelessthan"></a>SafeLessThan
Determina se un numero è minore di un altro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T, typename U>  
inline bool SafeLessThan (  
   const T t,  
   const U u  
) throw ();  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *t*  
 Primo numero. Deve essere di tipo `T`.  
  
 [in] *u*  
 Il secondo numero. Deve essere di tipo `U`.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se *t* è minore di *u*; in caso contrario **false**.  
  
## <a name="remarks"></a>Note  
 Questo metodo consente di migliorare l'operatore di confronto standard poiché **SafeLessThan** consente di confrontare due tipi diversi di numero.  
  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettato per una singola operazione di confronto senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).  
  
> [!NOTE]
>  Questo metodo deve essere utilizzato solo quando è necessario proteggere una singola operazione matematica. Se sono presenti più operazioni, è consigliabile usare il `SafeInt` classe invece di chiamare le singole funzioni autonome.  
  
 Per altre informazioni sui tipi di modello `T` e `U`, vedere [funzioni SafeInt](../windows/safeint-functions.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** Microsoft:: Utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni SafeInt](../windows/safeint-functions.md)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeInt](../windows/safeint-class.md)   
 [SafeLessThanEquals](../windows/safelessthanequals.md)   
 [SafeGreaterThan](../windows/safegreaterthan.md)   
 [SafeGreaterThanEquals](../windows/safegreaterthanequals.md)