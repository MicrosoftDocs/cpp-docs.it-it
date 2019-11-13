---
title: Avviso del compilatore (livello 1) C4311
ms.date: 11/04/2016
f1_keywords:
- C4311
helpviewer_keywords:
- C4311
ms.assetid: ddc579d0-d051-47bc-915d-71ffb32323c9
ms.openlocfilehash: adb5c4bf3103cf98fb557a5f54b6a64013356475
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966136"
---
# <a name="compiler-warning-level-1-c4311"></a>Avviso del compilatore (livello 1) C4311

'variabile': troncamento puntatore da 'tipo' a 'tipo'

Questo avviso rileva problemi di troncamento del puntatore a 64 bit. Ad esempio, se il codice viene compilato per un'architettura a 64 bit, il valore di un puntatore (64 bit) verrà troncato se viene assegnato a un `int` (32 bit). Per ulteriori informazioni, vedere [regole per l'utilizzo di puntatori](/windows/win32/WinProg64/rules-for-using-pointers).

Per ulteriori informazioni sulle cause comuni dell'avviso C4311, vedere [errori comuni del compilatore](/windows/win32/WinProg64/common-compiler-errors).

L'esempio di codice seguente genera l'errore C4311 quando viene eseguita la compilazione per una destinazione a 64 bit e quindi illustra come risolverlo:

```cpp
// C4311.cpp
// compile by using: cl /W1 C4311.cpp
int main() {
   void* p = &p;
   unsigned int i = (unsigned int) p;   // C4311 for 64-bit targets
   unsigned long long j = (unsigned long long) p;   // OK
}
```