---
title: Compilatore (livello 1) Avviso C4190 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4190
dev_langs: C++
helpviewer_keywords: C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 127eb4327826412d605f2a4a008e411880998073
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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