---
title: Errore del compilatore C3768 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3768
dev_langs:
- C++
helpviewer_keywords:
- C3768
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3634ecf3eb1417095cce144706838113b5ad2a0e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3768"></a>Errore del compilatore C3768
Impossibile accettare l'indirizzo di una funzione vararg virtuale in codice gestito pure  
  
 Il **/clr: pure** l'opzione del compilatore è deprecato in Visual Studio 2015.  
  
 Durante la compilazione con `/clr:pure`, è possibile accettare l'indirizzo di una macchina `vararg` (funzione).  
  
## <a name="example"></a>Esempio  

 L'esempio seguente genera l'errore C3768:  
  
```  
// C3768.cpp  
// compile with: /clr:pure  
struct A  
{  
   virtual void f(...);  
};  
  
int main()  
{  
   &(A::f);   // C3768  
}  
```