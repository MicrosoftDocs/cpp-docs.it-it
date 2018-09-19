---
title: Compilatore avviso (livello 1) C4799 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4799
dev_langs:
- C++
helpviewer_keywords:
- C4799
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b3d83917289e5ad76a874587894a66e163fed90a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088228"
---
# <a name="compiler-warning-level-1-c4799"></a>Avviso del compilatore (livello 1) C4799

> Nessuna istruzione EMMS alla fine della funzione '*funzione*'

La funzione ha almeno un'istruzione MMX, ma non ha un `EMMS` (istruzione). Quando viene usata un'istruzione multimediale, un' `EMMS` (istruzione) o `_mm_empty` intrinseco deve essere utilizzato anche per cancellare la parola multimediali tag alla fine del codice MMX.

È possibile ricevere C4799 quando con ivec, che indica che il codice non utilizzato in modo corretto eseguire l'istruzione EMMS prima della restituzione. Si tratta di un avviso false per queste intestazioni. Si potrà disattivare queste definendo SILENCE_IVEC_C4799 ivec. Tuttavia, tenere presente che questo anche manterrà il compilatore potrà fornire avvisi corretti di questo tipo.

Per informazioni correlate, vedere [Set di istruzioni MMX Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).