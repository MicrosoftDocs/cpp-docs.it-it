---
title: "Errore del compilatore C3738 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3738"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3738"
ms.assetid: dd3ee011-e204-4264-bf3a-da32c4ef7038
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3738
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'convenzione\_chiamata': la convenzione di chiamata della creazione di istanza esplicita deve corrispondere a quella del modello la cui istanza è in corso di creazione  
  
 Si consiglia di non specificare una convenzione di chiamata in una creazione di istanza esplicita.  Se tuttavia è necessario farlo, le convenzioni di chiamata devono corrispondere.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3738:  
  
```  
// C3738.cpp  
// compile with: /clr  
// processor: x86  
#include <stdio.h>  
template< class T >  
void f ( T arg ) {   // by default calling convention is __cdecl  
   printf ( "f: %s\n", __FUNCSIG__ );  
}  
  
template   
void __stdcall f< int > ( int arg );   // C3738  
// try the following line instead  
// void f< int > ( int arg );  
  
int main () {  
   f(1);  
   f< int > ( 1 );  
}  
```