---
title: include() | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- include()
dev_langs:
- C++
helpviewer_keywords:
- include() attribute
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ebadd9e453e8a34e92acee363d0dd6b6ff765910
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540804"
---
# <a name="include"></a>include()
**Sezione specifica C++**  
  
Disabilita l'esclusione automatica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
include("Name1"[,"Name2", ...])  
```  
  
### <a name="parameters"></a>Parametri  
*Nome1*  
Primo elemento da includere forzatamente.  
  
*Nome2*  
Secondo elemento da includere forzatamente (se necessario).  
  
## <a name="remarks"></a>Note  
 
Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi. Se gli elementi sono stati esclusi, come indicato dal [avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md), e non sarebbe stato, questo attributo può essere utilizzato per disabilitare l'esclusione automatica. Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali costituisce il nome dell'elemento della libreria dei tipi da includere.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)