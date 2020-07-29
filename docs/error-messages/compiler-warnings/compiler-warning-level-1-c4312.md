---
title: Avviso del compilatore (livello 1) C4312
ms.date: 11/04/2016
f1_keywords:
- C4312
helpviewer_keywords:
- C4312
ms.assetid: 541906ed-4f62-4bcb-947f-cf9ae7411bcb
ms.openlocfilehash: 379803260492449da4985e62d36750f121b4e7fa
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233262"
---
# <a name="compiler-warning-level-1-c4312"></a>Avviso del compilatore (livello 1) C4312

'operazione': conversione da 'tipo1' a 'tipo2', di dimensioni maggiori

Questo avviso rileva un tentativo di assegnare un valore a 32 bit a un tipo di puntatore a 64 bit, ad esempio eseguendo il cast di un 32 bit **`int`** o **`long`** a un puntatore a 64 bit.

Può essere una conversione non affidabile anche per i valori dei puntatori a 32 bit quando si verifica l'estensione del segno. Se un numero intero a 32 bit negativo viene assegnato a un tipo di puntatore a 64 bit, l'estensione del segno fa in modo che il valore del puntatore faccia riferimento a un indirizzo di memoria diverso dal valore del numero intero.

Questo avviso viene generato solo per le destinazioni di compilazione a 64 bit. Per ulteriori informazioni, vedere [regole per l'utilizzo di puntatori](/windows/win32/WinProg64/rules-for-using-pointers).

L'esempio di codice seguente genera l'errore C4312 quando viene eseguita la compilazione per le destinazioni a 64 bit:

```cpp
// C4312.cpp
// compile by using: cl /W1 /LD C4312.cpp
void* f(int i) {
   return (void*)i;   // C4312 for 64-bit targets
}

void* f2(__int64 i) {
   return (void*)i;   // OK
}
```
