---
title: Compilatore avviso (livello 1) C4036 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4036
dev_langs:
- C++
helpviewer_keywords:
- C4036
ms.assetid: f0b15359-4d62-48ec-8cb1-a7b36587a47f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2d7032825b23f5886d8c28c61e56cd1591315031
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4036"></a>Avviso del compilatore (livello 1) C4036
'type' senza nome come parametro effettivo  
  
 Non è stato specificato alcun nome di tipo per una struttura, unione, enumerazione o classe usata come parametro effettivo. Se si usa [/Zg](../../build/reference/zg-generate-function-prototypes.md) per generare prototipi di funzione, il compilatore genera questo avviso e imposta come commento il parametro formale nel prototipo generato.  
  
 Per risolvere il problema, specificare un nome di tipo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4036.  
  
```  
// C4036.c  
// compile with: /Zg /W1  
// D9035 expected  
typedef struct { int i; } T;  
void f(T* t) {}   // C4036  
  
// OK  
typedef struct MyStruct { int i; } T2;  
void f2(T2 * t) {}  
```