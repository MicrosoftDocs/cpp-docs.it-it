---
title: "Errore del compilatore C2784 | Microsoft Docs"
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
  - "C2784"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2784"
ms.assetid: 3d761fe2-881c-48bd-afae-e2e714e20473
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2784
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'declaration': impossibile dedurre un argomento modello per 'type' da 'type'  
  
 Il compilatore non può determinare un argomento modello dagli argomenti della funzione forniti.  
  
 L'esempio seguente genera l'errore C2784 e mostra come risolverlo:  
  
```  
// C2784.cpp  
template<class T> class X {};  
template<class T> void f(X<T>) {}  
  
int main() {  
   X<int> x;  
   f(1);   // C2784  
  
   // To fix it, try the following line instead  
   f(x);  
}  
```