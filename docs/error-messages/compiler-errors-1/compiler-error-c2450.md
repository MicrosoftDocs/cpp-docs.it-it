---
title: Errore del compilatore C2450 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2450
dev_langs: C++
helpviewer_keywords: C2450
ms.assetid: 929f1c06-8774-468b-be2a-f428757875a2
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 484eeb2c8c586a3f552cb77b5afd1671c199a551
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2450"></a>Errore del compilatore C2450
le espressioni switch di tipo 'type' non sono valida  
  
 Il `switch` espressione restituisce un tipo non valido. Deve restituire un tipo integer o un tipo di classe con la conversione non ambigua a un tipo integer. Se restituisce un tipo definito dall'utente, è necessario fornire un operatore di conversione.  
  
 L'esempio seguente genera l'errore C2450:  
  
```  
// C2450.cpp  
class X {  
public:  
   int i;  
} x;  
  
class Y {  
public:  
   int i;  
   operator int() { return i; }   // conversion operator  
} y;  
  
int main() {  
   int j = 1;  
   switch ( x ) {   // C2450, x is not type int  
   // try the following line instead  
   // switch ( y ) {  
      default:  ;  
   }  
}  
```