---
title: Errore del compilatore C2006 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2006
dev_langs:
- C++
helpviewer_keywords:
- C2006
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 93880e7d767de3101cd7a292af5fa2874cae86bf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2006"></a>Errore del compilatore C2006
'direttiva directive' è previsto un nome, trovato 'token'  
  
 Le direttive quali [#include](../../preprocessor/hash-include-directive-c-cpp.md) o [#import](../../preprocessor/hash-import-directive-cpp.md) richiedono un nome di file. Per correggere l'errore, verificare *token* è un nome file valido. Inoltre, inserire il nome del file in virgolette doppie o parentesi angolari.  
  
 L'esempio seguente genera l'errore C2006:  
  
```  
// C2006.cpp  
#include stdio.h   // C2006  
```  
  
 Possibile soluzione:  
  
```  
// C2006b.cpp  
// compile with: /c  
#include <stdio.h>  
```