---
title: Funzioni senza prototipo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: dbc9324753f6ec2c9a332af00a00dd85116e1943
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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