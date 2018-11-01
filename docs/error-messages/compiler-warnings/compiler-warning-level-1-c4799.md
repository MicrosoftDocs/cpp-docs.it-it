---
title: Avviso del compilatore (livello 1) C4799
ms.date: 11/04/2016
f1_keywords:
- C4799
helpviewer_keywords:
- C4799
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
ms.openlocfilehash: 475451b47d461e7ea1428eb715a876fb023694d1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552256"
---
# <a name="compiler-warning-level-1-c4799"></a>Avviso del compilatore (livello 1) C4799

> Nessuna istruzione EMMS alla fine della funzione '*funzione*'

La funzione ha almeno un'istruzione MMX, ma non ha un `EMMS` (istruzione). Quando viene usata un'istruzione multimediale, un' `EMMS` (istruzione) o `_mm_empty` intrinseco deve essere utilizzato anche per cancellare la parola multimediali tag alla fine del codice MMX.

È possibile ricevere C4799 quando con ivec, che indica che il codice non utilizzato in modo corretto eseguire l'istruzione EMMS prima della restituzione. Si tratta di un avviso false per queste intestazioni. Si potrà disattivare queste definendo SILENCE_IVEC_C4799 ivec. Tuttavia, tenere presente che questo anche manterrà il compilatore potrà fornire avvisi corretti di questo tipo.

Per informazioni correlate, vedere [Set di istruzioni MMX Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).