---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4078'
title: Avviso degli strumenti del linker LNK4078
ms.date: 11/04/2016
f1_keywords:
- LNK4078
helpviewer_keywords:
- LNK4078
ms.assetid: 5a16796d-6caf-42d9-8f65-b042843eafb8
ms.openlocfilehash: 3fd22316d0775561c18fc2662c2f2ca843e64977
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210127"
---
# <a name="linker-tools-warning-lnk4078"></a>Avviso degli strumenti del linker LNK4078

trovate più sezioni ' section name ' con attributi diversi

Il collegamento ha trovato due o più sezioni con lo stesso nome ma con attributi diversi.

Questo avviso può essere causato da una libreria di importazione o da un file di esportazione creato da una versione precedente di LINK o LIB.

Ricreare il file e ricollegarlo.

## <a name="example"></a>Esempio

LNK4078 può anche essere causato da una modifica di rilievo: la sezione denominata da [init_seg](../../preprocessor/init-seg.md) su x86 è di lettura/scrittura, ora è di sola lettura.

L'esempio seguente genera l'LNK4078.

```cpp
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
