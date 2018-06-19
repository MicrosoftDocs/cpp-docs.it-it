---
title: Compilatore avviso (livello 3) C4414 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4414
dev_langs:
- C++
helpviewer_keywords:
- C4414
ms.assetid: bc81d3ad-55dc-4a6b-a6f2-ec0ef38347df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a1526b20732d7a1b08ec8d753cb64e33e42dd809
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33289708"
---
# <a name="compiler-warning-level-3-c4414"></a>Avviso del compilatore (livello 3) C4414
'function': salto short a funzione convertito in near  
  
 Salti short generano un'istruzione compatta quali branch a un indirizzo all'interno di un intervallo limitato dall'istruzione. L'istruzione include un offset short che rappresenta la distanza tra il collegamento e l'indirizzo di destinazione, la definizione di funzione. Durante il collegamento, una funzione può essere spostate o sottoposte a ottimizzazioni in fase di collegamento che causano la funzione di essere spostato all'esterno dell'intervallo raggiungibile da un offset short. Il compilatore deve generare un record speciale per il passaggio, che richiede l'istruzione jmp essere NEAR o FAR. Il compilatore eseguita la conversione.  
  
 Ad esempio, il codice seguente genera l'errore C4414:  
  
```  
// C4414.cpp  
// compile with: /W3 /c  
// processor: x86  
int DoParityEven();  
int DoParityOdd();  
unsigned char global;  
int __declspec(naked) DoParityEither()  
{  
   __asm  
   {  
      test global,0  
      jpe SHORT DoParityEven  // C4414  
      jmp SHORT DoParityOdd   // C4414  
   }  
}  
```