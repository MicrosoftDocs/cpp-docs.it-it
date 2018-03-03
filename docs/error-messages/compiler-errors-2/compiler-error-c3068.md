---
title: Errore del compilatore C3068 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3068
dev_langs:
- C++
helpviewer_keywords:
- C3068
ms.assetid: 613e3447-b4a8-4268-a661-297bed63ccdf
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 448a0b9e9c626523c08a0bd30ab285ef2c29312c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3068"></a>Errore del compilatore C3068
'function': una funzione 'naked' non può contenere oggetti che richiedono la rimozione se si è verificata un'eccezione C++  
  
 Il compilatore non è riuscito a eseguire la rimozione dello stack su un [naked](../../cpp/naked-cpp.md) funzione che ha generato un'eccezione perché è stato creato un oggetto temporaneo nella funzione e la gestione delle eccezioni C++ ([/EHsc](../../build/reference/eh-exception-handling-model.md)) è stato specificato.  
  
 Per correggere l'errore, eseguire almeno una delle operazioni seguenti:  
  
-   Non eseguire la compilazione con /EHsc.  
  
-   Non contrassegnare la funzione come `naked`.  
  
-   Non creare un oggetto temporaneo nella funzione.  
  
 Se una funzione crea un oggetto temporaneo nello stack, se la funzione genera un'eccezione e se è abilitata la gestione delle eccezioni C++, il compilatore eseguirà la pulizia dello stack se viene generata un'eccezione.  
  
 Quando viene generata un'eccezione, codice, chiamati il prologo generato dal compilatore e di epilogo e cui non sono presenti in una funzione naked, viene eseguita per una funzione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3068:  
  
```  
// C3068.cpp  
// compile with: /EHsc  
// processor: x86  
class A {  
public:  
   A(){}  
   ~A(){}  
};  
  
void b(A){}  
  
__declspec(naked) void c() {  
   b(A());   // C3068   
};  
```