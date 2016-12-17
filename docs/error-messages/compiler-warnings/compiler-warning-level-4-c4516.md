---
title: "Avviso del compilatore (livello 4) C4516 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4516"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4516"
ms.assetid: 6677bb1f-d26e-4ab9-8644-6b5a2a8f4ff8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4516
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe::simbolo': le dichiarazioni di accesso sono deprecate. Le dichiarazioni using di membri rappresentano una più valida alternativa  
  
 Il comitato C\+\+ ANSI ha dichiarato obsolete le dichiarazioni di accesso, ossia la modifica dell'accesso di un membro in una classe derivata senza la parola chiave [using](../../cpp/using-declaration.md).  Le dichiarazioni di accesso potrebbero non essere più supportate nelle versioni future di C\+\+.  
  
 Il seguente codice di esempio genera l'errore C4516:  
  
```  
// C4516.cpp  
// compile with: /W4  
class A  
{  
public:  
   void x(char);  
};  
  
class B : protected A  
{  
public:  
   A::x;  // C4516 on access-declaration  
   // use the following line instead  
   // using A::x; // using-declaration, ok  
};  
  
int main()  
{  
}  
```