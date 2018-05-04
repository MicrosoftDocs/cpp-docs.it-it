---
title: Funzioni senza prototipo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df159942832479807b2dfe2679e709292ff3f44b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="unprototyped-functions"></a>Funzioni senza prototipo
Per le funzioni senza prototipo, il chiamante passerà valori interi come valori a virgola mobile e interi come precisione doppia. Per i valori a virgola mobile, sia il registro integer e il registro a virgola mobile, conterrà il valore float nel caso in cui il chiamato prevede che il valore nei registri integer.  
  
```  
func1();  
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7  
   func1(2, 1.0, 7);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)