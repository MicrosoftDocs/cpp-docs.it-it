---
title: Errore del compilatore C2530 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2530
dev_langs: C++
helpviewer_keywords: C2530
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f9438937ad99e66d9e623e1e3703dc6496f8153a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2530"></a>Errore del compilatore C2530
'identifier': i riferimenti devono essere inizializzati  
  
 È necessario inizializzare un riferimento quando è stata dichiarata, a meno che non è già dichiarato:  
  
-   Con la parola chiave [extern](../../cpp/using-extern-to-specify-linkage.md).  
  
-   Come membro di classe, struttura o unione (e viene inizializzato nel costruttore).  
  
-   Come parametro in una definizione o dichiarazione di funzione.  
  
-   Come tipo restituito di una funzione.  
  
 L'esempio seguente genera l'errore C2530:  
  
```  
// C2530.cpp  
int main() {  
   int i = 0;  
   int &j;   // C2530  
   int &k = i;   // OK  
}  
```