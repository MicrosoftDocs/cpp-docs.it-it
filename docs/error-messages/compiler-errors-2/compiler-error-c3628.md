---
title: "Errore del compilatore C3628 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3628"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3628"
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3628
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'base class': le classi gestite o WinRT supportano solo l'ereditarietà pubblica  
  
 Si è tentato di usare una classe gestita o WinRT come classe di base [privata](../../cpp/private-cpp.md) o [protetta](../../cpp/protected-cpp.md).  Una classe gestita o WinRT può essere usata solo come classe di base con accesso [pubblico](../../cpp/public-cpp.md).  
  
 L'esempio seguente genera l'errore C3628 e mostra come risolverlo:  
  
```  
// C3628a.cpp  
// compile with: /clr  
ref class B {  
};  
  
ref class D : private B {   // C3628  
  
// The following line resolves the error.  
// ref class D : public B {  
};  
  
int main() {  
}  
```  
  
 L'esempio seguente genera l'errore C3628 e mostra come risolverlo:  
  
```  
// C3628b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__gc class B {  
};  
  
__gc class D : B {   // C3628, private is the default access level  
  
// The following line resolves the error.  
// __gc class D : public B {  
};  
  
int main() {  
}  
```