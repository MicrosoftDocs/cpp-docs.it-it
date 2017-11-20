---
title: Classe discard_block_engine | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: random/std::discard_block_engine
dev_langs: C++
helpviewer_keywords: discard_block_engine class
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b5163956cf2c8bd2fd258adf1fcde7c038d15f69
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="discardblockengine-class"></a>Classe discard_block_engine
Genera una sequenza casuale, eliminando i valori restituiti dal motore di base corrispondente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Engine, size_t P, size_t R>  
class discard_block_engine;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Engine`  
 Tipo del motore di base.  
  
 `P`  
 **Dimensioni del blocco**. Numero di valori in ogni blocco.  
  
 `R`  
 **Blocco usato**. Numero di valori usati in ogni blocco. Il resto viene scartato ( `P` - `R`). **Precondizione**:`0 < R ≤ P`  
  
## <a name="members"></a>Membri  
  
||||  
|-|-|-|  
|`discard_block_engine::discard_block_engine`|`discard_block_engine::base`|`discard_block_engine::discard`|  
|`discard_block_engine::operator()`|`discard_block_engine::base_type`|`discard_block_engine::seed`|  
  
 Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Note  
 Questa classe modello descrive un adattatore del motore che produce valori scartando alcuni dei valori restituiti dal rispettivo motore di base.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)

