---
title: Classe independent_bits_engine | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: random/std::independent_bits_engine
dev_langs: C++
helpviewer_keywords: independent_bits_engine class
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 09ee64a2e93d909533a0b2e4968a0fc48a951b08
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="independentbitsengine-class"></a>Classe independent_bits_engine
Genera una sequenza casuale di numeri con un numero specificato di bit tramite la creazione di nuovi pacchetti di bit dai valori restituiti dal motore di base corrispondente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Engine, size_t W, class UIntType>  
class independent_bits_engine;  
```  
  
### <a name="parameters"></a>Parametri  
 `Engine`  
 Tipo del motore di base.  
  
 `W`  
 **Dimensione parola**. Dimensione, in bit, di ogni numero generato. **Precondizione**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `UIntType`  
 Tipo di risultato Unsigned Integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).  
  
## <a name="members"></a>Membri  
  
||||  
|-|-|-|  
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|  
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|  
  
 Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Note  
 Questa classe modello descrive un *adattatore del motore* che produce valori mediante la creazione di nuovi pacchetti di bit dai valori restituiti dal rispettivo motore di base, generando valori a `W` bit.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)
