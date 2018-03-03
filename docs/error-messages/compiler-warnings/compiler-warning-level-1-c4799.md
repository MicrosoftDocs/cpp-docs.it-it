---
title: Compilatore avviso (livello 1) C4799 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4799
dev_langs:
- C++
helpviewer_keywords:
- C4799
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9f41535c01d67e28baa2569ace2684865407a1d1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4799"></a>Avviso del compilatore (livello 1) C4799  
  
> Nessuna istruzione EMMS alla fine della funzione '*funzione*'  
  
La funzione dispone almeno di istruzioni MMX, ma non esiste un `EMMS` istruzione. Quando viene utilizzata un'istruzione multimediale, un `EMMS` istruzione o `_mm_empty` intrinseco deve essere utilizzato anche per cancellare la parola tag multimediale alla fine del codice MMX.  
  
È possibile ottenere C4799 quando utilizza ivec. h, che indica che il codice non utilizza correttamente eseguire l'istruzione EMMS prima della restituzione. Si tratta di un avviso per le intestazioni. È possibile disattivarli definendo SILENCE_IVEC_C4799 in ivec. Tuttavia, tenere presente che questo sarà anche impedire al compilatore fornendo avvisi corretti di questo tipo.  
  
Per informazioni correlate, vedere [Set di istruzioni MMX Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).