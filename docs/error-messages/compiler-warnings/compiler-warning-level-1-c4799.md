---
title: Avviso del compilatore (livello 1) C4799
ms.date: 11/04/2016
f1_keywords:
- C4799
helpviewer_keywords:
- C4799
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
ms.openlocfilehash: ec92da425718cd5ddc579d1d733a0bc4e56dc04a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175103"
---
# <a name="compiler-warning-level-1-c4799"></a>Avviso del compilatore (livello 1) C4799

> Nessun EMMS alla fine della funzione '*Function*'

La funzione presenta almeno un'istruzione MMX, ma non dispone di un'istruzione `EMMS`. Quando si usa un'istruzione multimediale, è necessario usare anche un'istruzione `EMMS` o un `_mm_empty` intrinseco per cancellare la parola del tag multimediale alla fine del codice MMX.

È possibile ottenere C4799 quando si utilizza IVEC. h, a indicare che il codice non viene utilizzato correttamente per eseguire l'istruzione EMMS prima di restituire. Si tratta di un falso avviso per queste intestazioni. È possibile disattivarla definendo _SILENCE_IVEC_C4799 in IVEC. h. Tenere tuttavia presente che in questo modo il compilatore non fornisce avvisi corretti di questo tipo.

Per informazioni correlate, vedere [set di istruzioni MMX di Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).
