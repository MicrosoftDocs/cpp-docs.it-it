---
title: Errore del compilatore C2563 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2563
dev_langs:
- C++
helpviewer_keywords:
- C2563
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 8fe3ca54a90b91151288076fd657752e3195e318
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2563"></a>Errore del compilatore C2563
mancata corrispondenza nell'elenco di parametri formali  
  
 Elenco di parametri formali di una funzione (o un puntatore a una funzione) non corrispondono a quelli di un'altra funzione (o un puntatore a una funzione membro). Di conseguenza, non può essere effettuata l'assegnazione delle funzioni o puntatori.  
  
 L'esempio seguente genera l'errore C2563:  
  
```  
// C2563.cpp  
void func( int );  
void func( int, int );  
int main() {  
   void *fp();  
   fp = func;   // C2563  
}  
```
