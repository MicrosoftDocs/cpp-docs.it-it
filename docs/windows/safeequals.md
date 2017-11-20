---
title: SafeEquals | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: SafeEquals
dev_langs: C++
helpviewer_keywords: SafeEquals function
ms.assetid: 6019627d-f170-413b-9abd-2b5b34396a72
caps.latest.revision: "6"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: dc8794975f177c07733b90f3d17663967cb756ba
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="safeequals"></a>SafeEquals
Confronta due numeri per determinare se sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeEquals (  
   const T t,  
   const U u  
) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `t`  
 Il primo numero da confrontare. Deve essere di tipo T.  
  
 [in] `u`  
 Il secondo numero da confrontare. Deve essere di tipo U.  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se `t` e `u` sono uguali; in caso contrario `false`.  
  
## <a name="remarks"></a>Note  
 Il metodo migliora `==` perché `SafeEquals` consente di confrontare due tipi diversi di numeri.  
  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per un'operazione di confronto singolo senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).  
  
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
 [SafeNotEquals](../windows/safenotequals.md)