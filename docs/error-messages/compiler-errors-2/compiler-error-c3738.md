---
title: Errore del compilatore C3738 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3738
dev_langs: C++
helpviewer_keywords: C3738
ms.assetid: dd3ee011-e204-4264-bf3a-da32c4ef7038
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d8105ab081b939998d72d1bf470fe2b1e92addac
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3738"></a>Errore del compilatore C3738
'convenzione_chiamata': la convenzione di chiamata di creazione di istanza esplicita deve corrispondere a quello del modello viene creata un'istanza di  
  
 È consigliabile che non si specifica una convenzione di chiamata in un'istanza esplicita. Se necessario, tuttavia, le convenzioni di chiamata devono corrispondere.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3738.  
  
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