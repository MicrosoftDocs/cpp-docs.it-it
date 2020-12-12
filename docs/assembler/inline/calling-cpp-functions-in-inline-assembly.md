---
description: "Altre informazioni su: chiamata di funzioni C++ nell'assembly inline"
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
ms.openlocfilehash: 3efd4f00eae5810b287a27546bba3160f479b8f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117965"
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline

**Specifico di Microsoft**

Un **`__asm`** blocco può chiamare solo le funzioni C++ globali che non sono in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.

È anche possibile chiamare qualsiasi funzione dichiarata con il collegamento **extern "C"** . In questo modo un **`__asm`** blocco all'interno di un programma C++ può chiamare le funzioni della libreria C, perché tutti i file di intestazione standard dichiarano le funzioni di libreria con collegamento **extern "C"** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
