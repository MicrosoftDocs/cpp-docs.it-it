---
title: escludere (#import) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- exclude
dev_langs:
- C++
helpviewer_keywords:
- exclude attribute
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d700f19235ac18af27fa958420aa4ed467807624
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540598"
---
# <a name="exclude-import"></a>exclude (#import)
**Sezione specifica C++**  
  
Esclude gli elementi dai file di intestazione della libreria dei tipi generati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
exclude("Name1"[, "Name2",...])  
```  
  
### <a name="parameters"></a>Parametri  
*Nome1*  
Primo elemento da escludere.  
  
*Nome2*  
Secondo elemento da escludere (se necessario).  
  
## <a name="remarks"></a>Note  
 
Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali è un elemento di primo livello della libreria dei tipi da escludere.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)