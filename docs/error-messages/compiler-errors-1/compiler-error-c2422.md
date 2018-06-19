---
title: Errore del compilatore C2422 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2422
dev_langs:
- C++
helpviewer_keywords:
- C2422
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 89a808e4b324b11c88be38ae7d8815bee4e232cd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196347"
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