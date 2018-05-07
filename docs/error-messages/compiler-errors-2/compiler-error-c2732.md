---
title: Errore del compilatore C2732 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2732
dev_langs:
- C++
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef2faf21eb6f0c73d02ea32c7d4ed53f86eec3de
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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