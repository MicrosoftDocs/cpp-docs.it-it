---
title: no_auto_exclude | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_auto_exclude
dev_langs:
- C++
helpviewer_keywords:
- no_auto_exclude attribute
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5cae3a52c3434317ee26292de13d3e0471d78998
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541769"
---
# <a name="noautoexclude"></a>no_auto_exclude
**Sezione specifica C++**  
  
Disabilita l'esclusione automatica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_auto_exclude  
```  
  
## <a name="remarks"></a>Note  
 
Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi. Quando ciò avviene [avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) non venga generato per ogni elemento da escludere. È possibile disattivare questa esclusione automatica utilizzando questo attributo.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)