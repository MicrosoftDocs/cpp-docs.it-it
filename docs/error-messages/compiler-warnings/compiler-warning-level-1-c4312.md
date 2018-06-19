---
title: Compilatore avviso (livello 1) C4312 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4312
dev_langs:
- C++
helpviewer_keywords:
- C4312
ms.assetid: 541906ed-4f62-4bcb-947f-cf9ae7411bcb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18039e44a5616330c66603e448bcafd6d18ff7aa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279675"
---
# <a name="compiler-warning-level-1-c4312"></a>Avviso del compilatore (livello 1) C4312
'operazione': conversione da 'tipo1' a 'tipo2', di dimensioni maggiori  
  
 Questo avviso indica un tentativo di assegnare un valore a 32 bit a un tipo di puntatore a 64 bit, ad esempio eseguendo il cast di un oggetto `int` o `long` a 32 bit a un puntatore a 64 bit.  
  
 Può essere una conversione non affidabile anche per i valori dei puntatori a 32 bit quando si verifica l'estensione del segno. Se un numero intero a 32 bit negativo viene assegnato a un tipo di puntatore a 64 bit, l'estensione del segno fa in modo che il valore del puntatore faccia riferimento a un indirizzo di memoria diverso dal valore del numero intero.  
  
 Questo avviso viene generato solo per le destinazioni di compilazione a 64 bit. Per ulteriori informazioni, vedere [regole per usare i puntatori](http://msdn.microsoft.com/library/windows/desktop/aa384242).  
  
 L'esempio di codice seguente genera l'errore C4312 quando viene eseguita la compilazione per le destinazioni a 64 bit:  
  
```  
// C4312.cpp  
// compile by using: cl /W1 /LD C4312.cpp  
void* f(int i) {  
   return (void*)i;   // C4312 for 64-bit targets  
}  
  
void* f2(__int64 i) {  
   return (void*)i;   // OK  
}  
```