---
title: "Avviso del compilatore (livello 1) C4743 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4743"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4743"
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Avviso del compilatore (livello 1) C4743
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'*type*' ha una diversa dimensione in '*file1*' e '*file2*': *number* e *number* byte  
  
 Una variabile esterna con riferimenti o definizione in due file ha tipi diversi nei due file ed è il compilatore determina che la dimensione della variabile in *file1* differisce dalla dimensione della variabile in *file2*.  
  
 Esiste un caso rilevante in cui può essere generato questo avviso per C\+\+.  Se si dichiarano gli stessi tipi con nome uguale in due file diversi e tali dichiarazioni contengono funzioni virtuali e sono differenti, è possibile che venga generato l'avviso C4744 per le tabelle delle funzioni virtuali.  L'avviso viene generato perché risultano disponibili due tabelle di funzioni virtuali con dimensioni diverse per lo stesso tipo e il linker deve stabilire quale tabella incorporare nell'eseguibile.  È possibile che il programma chiami la funzione virtuale errata.  
  
 Per evitare di visualizzare l'avviso, utilizzare la stessa definizione di tipo oppure assegnare nomi diversi ai tipi o alle variabili.  
  
## Esempio  
 In questo esempio è inclusa una definizione del tipo.  
  
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
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4743.  
  
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