---
title: Ottimizzazione dell'Assembly Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- storage, optimizing in inline assembly
- optimization, inline assembly
- inline assembly, optimizing
- optimizing performance, inline assembly
- __asm keyword [C++], optimizing
ms.assetid: 52a7ec83-9782-4d96-94c1-53bb2ac9e8c8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c494594e3b7c541487f34fd33359b0e31f73dd61
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="optimizing-inline-assembly"></a>Ottimizzazione dell'assembly Inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 La presenza di un blocco `__asm` in una funzione influisce sull'ottimizzazione in diversi modi. Innanzitutto, il compilatore non tenta di ottimizzare il blocco `__asm` stesso. Ciò che viene scritto in linguaggio assembly è esattamente il risultato che si ottiene. In secondo luogo, la presenza di un blocco `__asm` influisce sull'archiviazione della variabile registro. Il compilatore evita la registrazione delle variabili in un blocco `__asm` se il contenuto del registro deve essere modificato dal blocco `__asm`. Infine, altre ottimizzazioni a livello di funzione sono interessate dall'inclusione del linguaggio assembly in una funzione.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)