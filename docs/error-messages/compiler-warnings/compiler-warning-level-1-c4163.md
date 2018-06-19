---
title: Compilatore avviso (livello 1) C4163 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4163
dev_langs:
- C++
helpviewer_keywords:
- C4163
ms.assetid: b08413fd-03fc-4f41-9167-a98976ac12f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d39297a17c5e7c7b6b95fd0e43f33849c092fa1d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275541"
---
# <a name="compiler-warning-level-1-c4163"></a>Avviso del compilatore (livello 1) C4163
'identifier': non disponibile come funzione intrinseca  
  
 La funzione specificata non può essere usata come funzione [intrinsic](../../preprocessor/intrinsic.md) . Il compilatore ignora il nome di funzione non valido.  
  
 L'esempio seguente genera l'errore C4163:  
  
```  
// C4163.cpp  
// compile with: /W1 /LD  
#include <math.h>  
#pragma intrinsic(mysin)   // C4163  
// try the following line instead  
// #pragma intrinsic(sin)  
```