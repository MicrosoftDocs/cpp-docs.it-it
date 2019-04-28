---
title: Chiamare le funzioni C++ nell'assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- functions [C++], calling in inline assembly
- function calls, C++ functions
- function calls, in inline assembly
- Visual C++, functions
- inline assembly, calling functions
- __asm keyword [C++], calling functions
ms.assetid: 1f0d1eb3-54cf-45d5-838d-958188616b38
ms.openlocfilehash: 666f7b2a59f0d48a14be54a439b6402f2a4d3128
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167270"
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline

**Sezione specifica Microsoft**

Un blocco `__asm` può chiamare solo le funzioni globali C++ non in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.

È anche possibile chiamare qualsiasi funzione dichiarata con **extern "C"** un collegamento. In questo modo un' `__asm` blocco all'interno di un programma C++ può chiamare le funzioni della libreria C, perché tutti i file di intestazione standard dichiarano le funzioni della libreria abbiano **extern "C"** un collegamento.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>