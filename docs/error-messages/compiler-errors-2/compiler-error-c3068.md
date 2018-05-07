---
title: Errore del compilatore C3068 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3068
dev_langs:
- C++
helpviewer_keywords:
- C3068
ms.assetid: 613e3447-b4a8-4268-a661-297bed63ccdf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f378a60c79defed4fb1738515ca5b65b2851056
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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