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
ms.openlocfilehash: f16e466ebb5f31231411eaaf9a1a85bfcc46a34d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169578"
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline

**Sezione specifica Microsoft**

Un blocco `__asm` può chiamare solo le funzioni globali C++ non in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.

È anche possibile chiamare qualsiasi funzione dichiarata con il collegamento **extern "C"** . Questo consente a un blocco `__asm` all' C++ interno di un programma di chiamare le funzioni della libreria C, perché tutti i file di intestazione standard dichiarano le funzioni di libreria con collegamento **extern "C"** .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
