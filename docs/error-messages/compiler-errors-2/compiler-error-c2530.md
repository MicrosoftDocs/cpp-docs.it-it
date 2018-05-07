---
title: Errore del compilatore C2530 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2530
dev_langs:
- C++
helpviewer_keywords:
- C2530
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9b226ef5ca0e839c745e13d4118264a69ca408db
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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