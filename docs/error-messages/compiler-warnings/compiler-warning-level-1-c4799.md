---
title: Compilatore avviso (livello 1) C4799 | Documenti Microsoft
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
ms.openlocfilehash: f888d6a941ad487ce122e46c43582e1c96525c70
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4799"></a>Avviso del compilatore (livello 1) C4799  
  
> Nessuna istruzione EMMS alla fine della funzione '*funzione*'  
  
La funzione dispone almeno di istruzioni MMX, ma non esiste un `EMMS` istruzione. Quando viene utilizzata un'istruzione multimediale, un `EMMS` istruzione o `_mm_empty` intrinseco deve essere utilizzato anche per cancellare la parola tag multimediale alla fine del codice MMX.  
  
È possibile ottenere C4799 quando utilizza ivec. h, che indica che il codice non utilizza correttamente eseguire l'istruzione EMMS prima della restituzione. Si tratta di un avviso per le intestazioni. È possibile disattivarli definendo SILENCE_IVEC_C4799 in ivec. Tuttavia, tenere presente che questo sarà anche impedire al compilatore fornendo avvisi corretti di questo tipo.  
  
Per informazioni correlate, vedere [Set di istruzioni MMX Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).