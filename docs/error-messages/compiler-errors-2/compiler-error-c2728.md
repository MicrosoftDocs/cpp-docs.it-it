---
title: "Errore del compilatore C2728 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2728"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2728"
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Errore del compilatore C2728
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': una matrice nativa non può contenere questo tipo  
  
 La sintassi di creazione della matrice è stata usata per creare una matrice di oggetti gestiti o WinRT.  Non è possibile creare una matrice di oggetti gestiti o WinRT usando la sintassi di matrice nativa.  
  
 Per altre informazioni, vedere [array](../../windows/arrays-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C2728 e mostra come risolverlo:  
  
```  
// C2728.cpp  
// compile with: /clr  
  
int main() {  
   int^ arr[5];   // C2728  
  
   // try the following line instead  
   array<int>^arr2;  
}  
```  
  
 Una matrice [\_\_nogc](../../misc/nogc.md) non può essere di tipo [\_\_gc](../../misc/gc.md).  
  
 L'esempio seguente genera l'errore C2728 e mostra come risolverlo:  
  
```  
// C2728_b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
int main() {  
   int __gc* arr __nogc[5];   // C2728  
  
   // try the following line instead  
   int arr2 __gc[];  
}  
```