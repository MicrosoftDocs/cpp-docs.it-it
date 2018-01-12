---
title: Compilatore avviso (livello 3) C4414 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4414
dev_langs: C++
helpviewer_keywords: C4414
ms.assetid: bc81d3ad-55dc-4a6b-a6f2-ec0ef38347df
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 76745a1cf505a685bcb9a6d2e74faf98bad77556
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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