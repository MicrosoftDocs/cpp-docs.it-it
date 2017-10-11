---
title: Errore del compilatore C2732 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2732
dev_langs:
- C++
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 38b364ac890118ce90164c3003a76e0d3c2e100d
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2732"></a>Errore del compilatore C2732
le specifiche di collegamento contraddicono le precedenti specifiche di 'function'  
  
 La funzione è già stata dichiarata con un identificatore di collegamento diverso.  
  
 Questo errore può essere causato da file di inclusione con identificatori di collegamento diversi.  
  
 Per correggere l'errore, modificare le istruzioni `extern` in modo che i collegamenti concordino. In particolare, non eseguire il wrapping di direttive `#include` in blocchi `extern "C"`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2732:  
  
```  
// C2732.cpp  
extern void func( void );   // implicit C++ linkage  
extern "C" void func( void );   // C2732  
```
