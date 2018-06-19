---
title: Compilatore avviso (livello 3) C4357 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4357
dev_langs:
- C++
helpviewer_keywords:
- C4357
ms.assetid: 9259c633-3c02-4900-b94a-2d8d366d61cd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79bb609b051def4f84924c1d9ebbcd9574d2ce77
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33289672"
---
# <a name="compiler-warning-level-3-c4357"></a>Avviso del compilatore (livello 3) C4357
argomento di matrice di parametri nell'elenco di argomenti formali per delegare 'del' ignorato durante la generazione di 'function'  
  
 Il `ParamArray` attributo è stato ignorato, e `function` non può essere chiamato con argomenti variabili.  
  
 L'esempio seguente genera l'errore C4357:  
  
```  
// C4357.cpp  
// compile with: /clr /W3 /c  
using namespace System;  
public delegate void f(int i, ... array<Object^>^ varargs);   // C4357  
  
public delegate void g(int i, array<Object^>^ varargs);   // OK  
```