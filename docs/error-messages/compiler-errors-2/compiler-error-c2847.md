---
title: "Errore del compilatore C2847 | Microsoft Docs"
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
  - "C2847"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2847"
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2847
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile applicare sizeof a un tipo gestito o WinRT 'class'  
  
 L'operatore [sizeof](../../cpp/sizeof-operator.md) ottiene il valore di un oggetto in fase di compilazione.  Le dimensioni di un tipo di classe, interfaccia o valore gestito o WinRT sono dinamiche e quindi non sono note in fase di compilazione.  
  
 L'esempio seguente genera l'errore C2847:  
  
```  
// C2847.cpp  
// compile with: /clr  
ref class A {};  
  
int main() {  
   A ^ xA = gcnew A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```  
  
 L'esempio seguente genera l'errore C2847:  
  
```  
// C2847_b.cpp  
// compile with: /clr:oldSyntax  
__gc class A {};  
  
int main() {  
   A *xA = new A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```