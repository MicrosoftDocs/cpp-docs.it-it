---
title: Errore del compilatore C2422 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2422
dev_langs: C++
helpviewer_keywords: C2422
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 852a495406a8baf147fc53262f8fe856fce726b5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2422"></a>Errore del compilatore C2422
override di segmento non valido in 'operando'  
  
 Codice assembly inline, in modo non corretto, Usa un operatore di override di segmento (due punti) su un operando.  Fra le cause possibili vi sono le seguenti:  
  
-   Il registro che precede l'operatore non è un registro del segmento.  
  
-   Il registro che precede l'operatore non è il Registro di segmento solo dell'operando.  
  
-   L'operatore di eseguire l'override di segmento viene visualizzato all'interno di un operatore di riferimento indiretto (parentesi quadre).  
  
-   L'espressione che segue l'operatore di eseguire l'override di segmento non è un operando immediato o un operando di memoria.  
  
 L'esempio seguente genera l'errore C2422:  
  
```  
// C2422.cpp  
// processor: x86  
int main() {  
   _asm {  
      mov AX, [BX:ES]   // C2422  
      mov AX, ES   // OK  
   }  
}  
```