---
title: Compilatore avviso (livello 1) C4036 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4036
dev_langs:
- C++
helpviewer_keywords:
- C4036
ms.assetid: f0b15359-4d62-48ec-8cb1-a7b36587a47f
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 30ff24d9d8746d914ba4dd098e715d8b5ecb55c9
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4036"></a>Avviso del compilatore (livello 1) C4036
'type' senza nome come parametro effettivo  
  
 Non è stato specificato alcun nome di tipo per una struttura, unione, enumerazione o classe usata come parametro effettivo. Se si utilizza [Zg](../../build/reference/zg-generate-function-prototypes.md) per generare prototipi di funzione, il compilatore genera questo avviso e un commento il parametro formale nel prototipo generato.  
  
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
