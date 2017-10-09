---
title: Errore del compilatore C2289 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2289
dev_langs:
- C++
helpviewer_keywords:
- C2289
ms.assetid: cb41a29e-1b06-47dc-bfce-8d73bd63a0df
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 6c771780ad3bbaefd51be10c9ff1454127f8439b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2289"></a>Errore del compilatore C2289
stesso qualificatore di tipo utilizzato più di una volta  
  
 Una definizione o dichiarazione di tipo usa più volte un qualificatore di tipo (`const`, `volatile`, `signed`o `unsigned`). Questo causa un errore di compatibilità ANSI (**/Za**).  
  
 L'esempio seguente genera l'errore C2286:  
  
```  
// C2289.cpp  
// compile with: /Za /c  
volatile volatile int i;   // C2289  
volatile int j;   // OK  
```
