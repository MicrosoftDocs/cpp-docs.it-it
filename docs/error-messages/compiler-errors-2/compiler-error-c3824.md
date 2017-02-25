---
title: "Errore del compilatore C3824 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3824"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3824"
ms.assetid: b6c6adf1-0a29-401c-a06e-616fd50d4c37
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3824
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': questo tipo non può apparire in questo contesto \(parametro di funzione, tipo restituito o membro statico\)  
  
 I puntatori di blocco non possono essere parametri di funzione, tipi restituiti o valori `static` dichiarati.  
  
 Il seguente codice di esempio genera l'errore C3824:  
  
```  
// C3824a.cpp  
// compile with: /clr /c  
void func() {  
   static pin_ptr<int> a; // C3824  
   pin_ptr<int> b; // OK  
}  
```  
  
 **Estensioni gestite per C\+\+**  
  
 I puntatori locali dichiarati con la parola chiave `__pin` non possono essere dichiarati `static` e non possono essere puntatori interni.  
  
 Il seguente codice di esempio genera l'errore C3824:  
  
```  
// C3824b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
  
__gc struct A {};  
  
void func() {  
   static A __pin* a;   // C3824  
   A __pin* b;   // OK  
}  
```