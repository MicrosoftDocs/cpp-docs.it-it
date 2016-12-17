---
title: "Errore del compilatore C3262 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3262"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3262"
ms.assetid: 3e74b9aa-de3c-4492-9331-ee73012b958b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3262
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

indicizzazione matrice non valida: specificate '\#' dimensioni per ''array type' a '\#' dimensioni  
  
 Gli indici di una matrice sono stati specificati in modo non corretto. È possibile che il numero di indici non corrisponda al numero di dimensioni della matrice.  
  
 L'esempio seguente genera l'errore C3262:  
  
```  
// C3262.cpp // compile with: /clr #using <mscorlib.dll> using namespace System; #define ARRAY_SIZE 2 ref class MyClass { public: int m_i; }; // returns a multidimensional managed array of a reference type array<MyClass^, 2>^ Test0() { int i, j; array< MyClass^, 2 >^ local = new array< MyClass^, 2 > (ARRAY_SIZE, ARRAY_SIZE); for (i = 0 ; i < ARRAY_SIZE ; i++) for (j = 0 ; j < ARRAY_SIZE ; j++) { local[i][j] = new MyClass;   // C3262 // try the following line instead // local[i,j] = new MyClass; local[i,j] -> m_i = i; } return local; } int main() { int i, j; array< MyClass^, 2 >^ MyClass0; MyClass0 = Test0(); }  
```  
  
 **Estensioni gestite per C\+\+**  
  
 L'esempio seguente genera l'errore C3262:  
  
```  
// C3262b.cpp // compile with: /clr:oldSyntax #using <mscorlib.dll> int main() { int iArr __gc[,] = new int __gc[10,20]; iArr[1,2,3]; // C3262: 3 dimensions specified for 2-dimensional array }  
```