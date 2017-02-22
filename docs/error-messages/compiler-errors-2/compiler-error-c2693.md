---
title: "Errore del compilatore C2693 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2693"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2693"
ms.assetid: b7364ca8-b6be-48c0-97d6-6029787fb171
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Errore del compilatore C2693
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': confronto non valido per i riferimenti a una matrice gestita o WinRT  
  
 Non è possibile testare qualsiasi tipo di disuguaglianza in una matrice gestita o WinRT.  Ad esempio, è possibile verificare se le matrici gestite sono uguali, ma non è possibile verificare se una matrice è maggiore o minore di un'altra matrice.  
  
 **Estensioni gestite per C\+\+**  
  
 Non è possibile testare qualsiasi tipo di disuguaglianza in una matrice [\_\_gc](../../misc/gc.md).  Ad esempio, è possibile verificare se le matrici gestite sono uguali, ma non è possibile verificare se una matrice è maggiore o minore di un'altra matrice.  
  
 L'esempio seguente genera l'errore C2693:  
  
```  
// C2693b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
int func3(int a __gc[], int b __gc[]) {  
   return a < b;    // C2693  
}  
int func1(int a __gc[], int b __gc[]) {  
   return a != b;   // OK  
}  
  
int func2(int a __gc[], int b __gc[]) {  
   return a == b;   // OK  
}  
```