---
title: Errore del compilatore C2142 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2142
dev_langs:
- C++
helpviewer_keywords:
- C2142
ms.assetid: d0dbe10e-0952-49a4-8b33-e82fb7558b19
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 11fd3cd62b236daa93424f53a0896888a89fe33d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2142"></a>Errore del compilatore C2142
le dichiarazioni di funzione sono diversi, parametri variabili specificati solo in uno di essi  
  
 Una dichiarazione della funzione contiene un elenco di parametri variabile. Non è un'altra dichiarazione. ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) solo.  
  
 L'esempio seguente genera l'errore C2142:  
  
```  
// C2142.c  
// compile with: /Za /c  
void func();  
void func( int, ... );   // C2142  
void func2( int, ... );   // OK  
```