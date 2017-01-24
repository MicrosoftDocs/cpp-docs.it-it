---
title: "Errore del compilatore C2690 | Microsoft Docs"
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
  - "C2690"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2690"
ms.assetid: f165a806-14bd-4942-99b7-8a9fc7dea227
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2690
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': impossibile utilizzare l'aritmetica dei puntatori su una matrice gestita o WinRT  
  
 L'aritmetica dei puntatori non è consentita su una matrice gestita o WinRT.  Usare la notazione dell'indice di matrice per attraversare la matrice.  
  
 **Estensioni gestite per C\+\+**  
  
 L'aritmetica dei puntatori non è consentita su una matrice [\_\_gc](../../misc/gc.md).  Usare la notazione dell'indice di matrice per attraversare la matrice.  
  
 L'esempio seguente genera l'errore C2690:  
  
```  
// C2690b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
int main() {  
   String* x[] = new String*[10];  
   x[0] = "test";  
   Console::WriteLine(x[0]);  
   x++;   // C2690  
}  
```