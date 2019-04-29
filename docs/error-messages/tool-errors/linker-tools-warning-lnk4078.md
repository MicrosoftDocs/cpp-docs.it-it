---
title: Avviso degli strumenti del linker LNK4078
ms.date: 11/04/2016
f1_keywords:
- LNK4078
helpviewer_keywords:
- LNK4078
ms.assetid: 5a16796d-6caf-42d9-8f65-b042843eafb8
ms.openlocfilehash: d20eb0523ffebe9229d05b6316772259661f6020
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399936"
---
# <a name="linker-tools-warning-lnk4078"></a>Avviso degli strumenti del linker LNK4078

più sezioni 'section name' con attributi differenti

Sono state rilevate due o più sezioni con lo stesso nome ma diversi attributi.

Questo avviso può essere causato da un file di libreria o esportazioni importazione che è stato creato da una versione precedente di collegamento o LIB.

Ricreare il file e ripetere il collegamento.

## <a name="example"></a>Esempio

LNK4078 può essere causato anche da una modifica importante: la sezione denominata da [init_seg](../../preprocessor/init-seg.md) x86 era in lettura/scrittura, è ora di sola lettura.

L'esempio seguente genera l'errore LNK4078.

```
// LNK4078.cpp
// compile with: /W1
// LNK4078 expected
#include <stdio.h>
#pragma warning(disable : 4075)
typedef void (__cdecl *PF)(void);
int cxpf = 0;   // number of destructors to call
PF pfx[200];   // pointers to destructors.

struct A { A() {} };

int myexit (PF pf) { return 0; }

#pragma section(".mine$a", read, write)
// try the following line instead
// #pragma section(".mine$a", read)
__declspec(allocate(".mine$a")) int ii = 1;

#pragma section(".mine$z", read, write)
// try the following line instead
// #pragma section(".mine$z", read)
__declspec(allocate(".mine$z")) int i = 1;

#pragma data_seg()
#pragma init_seg(".mine$m", myexit)
A bbbb;
A cccc;
int main() {}
```