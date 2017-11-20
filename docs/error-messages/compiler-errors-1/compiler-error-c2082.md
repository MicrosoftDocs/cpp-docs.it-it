---
title: Errore del compilatore C2082 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2082
dev_langs: C++
helpviewer_keywords: C2082
ms.assetid: 87a6d442-157c-46e8-9bff-8388f8338ae0
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fc76b22d70f23639758706f6fdcb13a0adbfbb69
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2082"></a>Errore del compilatore C2082
ridefinizione del parametro formale 'identifier'  
  
 Un parametro formale in una funzione è dichiarato di nuovo all'interno del corpo della funzione. Per risolvere l'errore, rimuovere la ridefinizione.  
  
 L'esempio seguente genera l'errore C2082:  
  
```  
// C2082.cpp  
void func(int i) {  
   int i;   // C2082  
   int ii;   // OK  
}  
```