---
title: Classe conditional | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::conditional
dev_langs:
- C++
helpviewer_keywords:
- conditional class
- conditional
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 2c764bfc42d633a3036f2e567078b9ea39feea8b
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="conditional-class"></a>Classe conditional
Seleziona uno dei tipi, a seconda della condizione specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <bool B, class T1, class T2>  
struct conditional;

template <bool _Test, class _T1, class _T2>  
using conditional_t = typename conditional<_Test, _T1, _T2>::type;
```  
  
#### <a name="parameters"></a>Parametri  
 `B`  
 Valore che determina il tipo selezionato.  
  
 `T1`  
 Il risultato di tipo quando B è true.  
  
 `T2`  
 Il risultato di tipo quando B è false.  
  
## <a name="remarks"></a>Note  
 L'oggetto typedef `conditional<B, T1, T2>::type` del membro del modello restituisce `T1` quando `B` restituisce `true`e restituisce `T2` quando `B` restituisce `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



