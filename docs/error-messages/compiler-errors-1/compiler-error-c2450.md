---
title: Errore del compilatore C2450 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2450
dev_langs:
- C++
helpviewer_keywords:
- C2450
ms.assetid: 929f1c06-8774-468b-be2a-f428757875a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db8702703337d01bf8073dd31bcb54d876010c10
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33225394"
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