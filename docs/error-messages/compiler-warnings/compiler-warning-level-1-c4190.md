---
title: Compilatore (livello 1) Avviso C4190 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4190
dev_langs:
- C++
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e62f6bcfaa499338d5fde1d09cb91574241ce8a0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4190"></a>Compilatore (livello 1) Avviso C4190
'identifier1' è specificato il collegamento C, ma restituisce 'identifier2' non è compatibile con C tipo definito dall'utente  
  
 Una funzione o un puntatore a funzione è un tipo definito dal definito dall'utente, ovvero una classe, struttura, enum o unione come tipo restituito e `extern` collegamento "C". Tale operazione è valida se:  
  
-   Tutte le chiamate a questa funzione si verificano da C++.  
  
-   La definizione della funzione è in C++.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// C4190.cpp  
// compile with: /W1 /LD  
struct X  
{  
   int i;  
   X ();  
   virtual ~X ();  
};  
  
extern "C" X func ();   // C4190  
```