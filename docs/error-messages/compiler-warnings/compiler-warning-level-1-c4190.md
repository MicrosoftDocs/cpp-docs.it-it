---
title: Compilatore (livello 1) Avviso C4190 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4190
dev_langs:
- C++
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 4ac033535632e94a365aa8dafd849f2ab28a3af7
ms.openlocfilehash: bf45c0737f52da93f93c1f95d313771f0e92a10e
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4190"></a>Compilatore (livello 1) Avviso C4190
'identifier1' ha specificato il collegamento C, ma restituisce 'identificatore2' non è compatibile con C tipo definito dall'utente  
  
 Una funzione o un puntatore a funzione contiene un tipo definito dall'utente (definita dall'utente tipo, ovvero una classe, struttura, enum o union) come tipo restituito e `extern` collegamento "C". Tale operazione è valida se:  
  
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
