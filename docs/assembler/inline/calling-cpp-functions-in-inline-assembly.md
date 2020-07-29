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
ms.openlocfilehash: 781b60c8973593039c0fdfa2f457170e95048597
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87192535"
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline

**Specifico di Microsoft**

Un **`__asm`** blocco può chiamare solo le funzioni C++ globali che non sono in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.

È anche possibile chiamare qualsiasi funzione dichiarata con il collegamento **extern "C"** . In questo modo un **`__asm`** blocco all'interno di un programma C++ può chiamare le funzioni della libreria C, perché tutti i file di intestazione standard dichiarano le funzioni di libreria con collegamento **extern "C"** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
