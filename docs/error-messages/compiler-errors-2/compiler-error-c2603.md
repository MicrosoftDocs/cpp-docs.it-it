---
title: Errore del compilatore C2603 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2603
dev_langs:
- C++
helpviewer_keywords:
- C2603
ms.assetid: 9ca520d0-f082-4b65-933d-17c3bcf8b02c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 68bde3e3fd3319b4c37adcffad4e95aa2544f9fa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2603"></a>Errore del compilatore C2603  
  
> '*funzione*': troppi oggetti statici in ambito blocco aventi costruttore e/distruttori nella funzione  
  
Nelle versioni del compilatore Visual C++ prima di Visual Studio 2015, o quando il [/Zc:threadSafeInit-](../../build/reference/zc-threadsafeinit-thread-safe-local-static-initialization.md) è specificata l'opzione del compilatore, è previsto un limite di 31 il numero di oggetti statici è consentito in una funzione inline visibile esternamente .  
  
Per risolvere questo problema, è consigliabile adottare la versione più recente del set di strumenti del compilatore Visual C++ o, se possibile, rimuovere l'opzione del compilatore /Zc:threadSafeInit-. In caso contrario, prendere in considerazione la combinazione di oggetti statici. Se gli oggetti sono dello stesso tipo, provare a usare una matrice statica di quel tipo e fare riferimento a singoli membri in base alle esigenze.
  
## <a name="example"></a>Esempio  
  
Il codice seguente genera l'errore C2603 e viene illustrato un modo per risolvere questo problema:  
  
```cpp  
// C2603.cpp  
// Compile by using: cl /W4 /c /Zc:threadSafeInit- C2603.cpp
struct C { C() {} };  
extern inline void f1() {  
    static C C01, C02, C03, C04, C05, C06, C07, C08, C09, C10;
    static C C11, C12, C13, C14, C15, C16, C17, C18, C19, C20;
    static C C21, C22, C23, C24, C25, C26, C27, C28, C29, C30, C31;  
    static C C32;   // C2603 Comment this line out to avoid error  
}  
```
