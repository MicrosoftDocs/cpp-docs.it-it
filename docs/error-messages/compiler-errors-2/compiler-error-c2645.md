---
title: Errore del compilatore C2645 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2645
dev_langs: C++
helpviewer_keywords: C2645
ms.assetid: 6609c2fa-c3b2-4a6b-8e8d-58fb52f67175
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: aaccf62efbc5926f65ac2e59359e0c73e8d0e680
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2645"></a>Errore del compilatore C2645
Nessun nome completo per un puntatore a membro (trovato ':: *')  
  
 La dichiarazione di un puntatore a un membro non specifica una classe.  
  
 L'esempio seguente genera l'errore C2645:  
  
```  
// C2645.cpp  
class A {};  
int main() {  
   int B::* bp;   // C2645 B not defined  
   int A::* ap;   // OK  
}  
```