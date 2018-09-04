---
title: Chiamata di funzioni C++ in Assembly Inline | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- functions [C++], calling in inline assembly
- function calls, C++ functions
- function calls, in inline assembly
- Visual C++, functions
- inline assembly, calling functions
- __asm keyword [C++], calling functions
ms.assetid: 1f0d1eb3-54cf-45d5-838d-958188616b38
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4717ae24dc1a0b6f51f7a00f68f6569c2f988c65
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43678944"
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline

**Sezione specifica Microsoft**

Un blocco `__asm` può chiamare solo le funzioni globali C++ non in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.

È anche possibile chiamare qualsiasi funzione dichiarata con **extern "C"** un collegamento. In questo modo un' `__asm` blocco all'interno di un programma C++ può chiamare le funzioni della libreria C, perché tutti i file di intestazione standard dichiarano le funzioni della libreria abbiano **extern "C"** un collegamento.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>