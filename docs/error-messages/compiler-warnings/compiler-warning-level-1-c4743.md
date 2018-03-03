---
title: Compilatore avviso (livello 1) C4743 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4743
dev_langs:
- C++
helpviewer_keywords:
- C4743
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1a7169afdf7fb4c9a03e509f0332e738a66a06f7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4743"></a>Avviso del compilatore (livello 1) C4743
'*tipo*'ha una diversa dimensione '*file1*'e'*file2*': *numero* e *numero* byte  
  
 Una variabile esterna a cui fa riferimento o definiti in due file ha tipi diversi in tali file e il compilatore stabilito che la dimensione della variabile in *file1* differisce dalla dimensione della variabile in *file2*.  
  
 È importante case quando questo avviso può essere emessi per C++. Se si dichiarano gli stessi tipi con lo stesso nome in due file diversi, se tali dichiarazioni contengono funzioni virtuali e le dichiarazioni non sono uguali, il compilatore può generare l'avviso C4744 per le tabelle di funzione virtuale. L'avviso viene generato perché sono presenti due tabelle di funzioni virtuali con dimensioni diverse per lo stesso tipo e il linker deve stabilire uno di essi per incorporare il file eseguibile.  È possibile che il programma chiami la funzione virtuale errata.  
  
 Per risolvere il problema, utilizzare la stessa definizione di tipo o usare nomi diversi per i tipi o variabili.  
  
## <a name="example"></a>Esempio  
 In questo esempio contiene una definizione del tipo.  
  
```  
// C4743a.cpp  
// compile with: /c  
class C {  
public:  
    virtual void f1(void);  
    virtual void f2(void);  
    virtual void f3(void);  
};  
  
void C::f1(void) {}  
void C::f2(void) {}  
void C::f3(void) {}  
C q;  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4743.  
  
```  
// C4743b.cpp  
// compile with: C4743a.cpp /W1 /GL /O2  
// C4743 expected  
class C {  
public:  
    virtual void f1(void);  
    virtual void f2(void);  
    virtual void f3(void);  
    virtual void f4(void);  
    virtual void f5(void);  
};  
  
void C::f4(void) {}  
void C::f5(void) {}  
C x;  
  
int main() {}   
```