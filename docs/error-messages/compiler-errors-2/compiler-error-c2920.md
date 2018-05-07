---
title: Errore del compilatore C2920 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2920
dev_langs:
- C++
helpviewer_keywords:
- C2920
ms.assetid: 0a4cb2de-00a0-4209-8160-c7ce6ed7d9ab
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18a2ccc8809b18d9a28b1fc60f5460dd4272a49c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2920"></a>Errore del compilatore C2920
ridefinizione: 'class': modello di classe o generico già dichiarato come 'type'  
  
 Un generico o un modello di classe dispone di più dichiarazioni, che non sono equivalenti. Per correggere l'errore, usare un nome diverso per ogni tipo o rimuovere la ridefinizione del nome del tipo.  
  
 L'esempio seguente genera l'errore C2920 e mostra come risolverlo:  
  
```  
// C2920.cpp  
// compile with: /c  
typedef int TC1;  
template <class T>   
struct TC1 {};   // C2920  
struct TC2 {};   // OK - fix by using a different name  
```  
  
 C2920 può verificarsi anche quando si usano i generics:  
  
```  
// C2920b.cpp  
// compile with: /clr /c  
typedef int GC1;  
generic <class T>   
ref struct GC1 {};   // C2920  
ref struct GC2 {};   // OK - fix by using a different name  
```