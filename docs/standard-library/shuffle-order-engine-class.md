---
title: Classe shuffle_order_engine | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- shuffle_order_engine
- random/std::shuffle_order_engine
- random/std::shuffle_order_engine::base
- random/std::shuffle_order_engine::discard
- random/std::shuffle_order_engine::operator()
- random/std::shuffle_order_engine::base_type
- random/std::shuffle_order_engine::seed
dev_langs:
- C++
helpviewer_keywords:
- shuffle_order_engine class
ms.assetid: 0bcd1fb0-44d7-4e59-bb1b-4a9b673a960d
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 93c5721a4b651315bc4d67cc9d5a0cb7d2f852a3
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="shuffleorderengine-class"></a>Classe shuffle_order_engine
Genera una sequenza casuale riordinando i valori restituiti dal motore di base corrispondente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Engine, size_t K>  
class shuffle_order_engine;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Engine`  
 Tipo del motore di base.  
  
 `K`  
 **Dimensioni tabella**. Numero di elementi nel buffer (tabella). **Precondizione**: `0 < K`  
  
## <a name="members"></a>Membri  
  
||||  
|-|-|-|  
|`shuffle_order_engine::shuffle_order_engine`|`shuffle_order_engine::base`|`shuffle_order_engine::discard`|  
|`shuffle_order_engine::operator()`|`shuffle_order_engine::base_type`|`shuffle_order_engine::seed`|  
  
 Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Note  
 Questa classe modello descrive un *adattatore del motore* che produce valori riordinando quelli restituiti dal rispettivo motore di base. Ogni costruttore inserisce nella tabella interna i valori `K` restituiti dal motore di base e un elemento casuale è selezionato dalla tabella quando viene richiesto un valore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)


