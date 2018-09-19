---
title: Del compilatore (livello 1) avviso C4311 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4311
dev_langs:
- C++
helpviewer_keywords:
- C4311
ms.assetid: ddc579d0-d051-47bc-915d-71ffb32323c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e01aef8ffe6314452ad4644f2192583c89a42ea
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46114423"
---
# <a name="compiler-warning-level-1-c4311"></a>Avviso del compilatore (livello 1) C4311

'variabile': troncamento puntatore da 'tipo' a 'tipo'

Questo avviso rileva problemi di troncamento del puntatore a 64 bit. Ad esempio, se il codice viene compilato per un'architettura a 64 bit, il valore di un puntatore (64 bit) verrà troncato se viene assegnato a un `int` (32 bit). Per altre informazioni, vedere [regole per usare i puntatori](/windows/desktop/WinProg64/rules-for-using-pointers).

Per altre informazioni sulle cause comuni dell'avviso C4311, vedere [errori comuni del compilatore](/windows/desktop/WinProg64/common-compiler-errors).

L'esempio di codice seguente genera l'errore C4311 quando viene eseguita la compilazione per una destinazione a 64 bit e quindi illustra come risolverlo:

```
// C4311.cpp
// compile by using: cl /W1 C4311.cpp
int main() {
   void* p = &p;
   unsigned int i = (unsigned int) p;   // C4311 for 64-bit targets
   unsigned long long j = (unsigned long long) p;   // OK
}

```