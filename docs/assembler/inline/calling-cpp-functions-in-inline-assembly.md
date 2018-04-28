---
title: Chiamata di funzioni C++ in Assembly Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: ffbd8038d240bc2ab0240d172d914790b6ca02ab
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Un blocco `__asm` può chiamare solo le funzioni globali C++ non in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.  
  
 È inoltre possibile chiamare qualsiasi funzione dichiarata con **extern "C"** collegamento. In questo modo un `__asm` blocco all'interno di un programma C++ di chiamare le funzioni della libreria C, poiché tutti i file di intestazione standard dichiarano le funzioni della libreria abbiano **extern "C"** collegamento.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)