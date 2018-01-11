---
title: SafeSubtract | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: SafeSubtract
dev_langs: C++
helpviewer_keywords: SafeSubtract function
ms.assetid: c2712ddc-173f-46a1-b09c-e7ebbd9e68b2
caps.latest.revision: "5"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5b94d84e6a348b68258fc1b57c2e0ad9ad30e36d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="safesubtract"></a>SafeSubtract
Sottrae due numeri in modo che protegge dall'overflow.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeSubtract (  
   T t,  
   U u,  
   T& result  
) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `t`  
 Il primo numero nella sottrazione. Deve essere di tipo T.  
  
 [in] `u`  
 Il numero da cui sottrarre `t`. Deve essere di tipo U.  
  
 [out] `result`  
 Il parametro in cui `SafeSubtract` archivia il risultato.  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se si verifica alcun errore; `false` se si verifica un errore.  
  
## <a name="remarks"></a>Note  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per un'operazione di sottrazione singolo senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).  
  
> [!NOTE]
>  Questo metodo deve essere utilizzato solo quando è necessario proteggere una singola operazione matematica. Se sono presenti più operazioni, è necessario utilizzare la classe `SafeInt` anziché chiamare le singole funzioni autonome.  
  
 Per ulteriori informazioni sui tipi di modello T e U, vedere [funzioni SafeInt](../windows/safeint-functions.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** Microsoft:: Utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni SafeInt](../windows/safeint-functions.md)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [SafeInt (classe)](../windows/safeint-class.md)   
 [SafeAdd](../windows/safeadd.md)