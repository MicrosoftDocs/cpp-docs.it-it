---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4799'
title: Avviso del compilatore (livello 1) C4799
ms.date: 11/04/2016
f1_keywords:
- C4799
helpviewer_keywords:
- C4799
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
ms.openlocfilehash: 9bfa84791a713d5ed5c0382402b958c255e30521
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334943"
---
# <a name="compiler-warning-level-1-c4799"></a>Avviso del compilatore (livello 1) C4799

> Nessun EMMS alla fine della funzione '*Function*'

La funzione presenta almeno un'istruzione MMX, ma non dispone di un' `EMMS` istruzione. Quando si usa un'istruzione multimediale, è `EMMS` necessario usare anche un'istruzione o una `_mm_empty` funzione intrinseca per cancellare la parola del tag multimediale alla fine del codice MMX.

È possibile ottenere C4799 quando si utilizza IVEC. h, a indicare che il codice non viene utilizzato correttamente per eseguire l'istruzione EMMS prima di restituire. Si tratta di un falso avviso per queste intestazioni. È possibile disattivarla definendo _SILENCE_IVEC_C4799 in IVEC. h. Tenere tuttavia presente che in questo modo il compilatore non fornisce avvisi corretti di questo tipo.

Per informazioni correlate, vedere [set di istruzioni MMX di Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).
