---
title: Ottimizzazione dell'assembly Inline
ms.date: 08/30/2018
helpviewer_keywords:
- storage, optimizing in inline assembly
- optimization, inline assembly
- inline assembly, optimizing
- optimizing performance, inline assembly
- __asm keyword [C++], optimizing
ms.assetid: 52a7ec83-9782-4d96-94c1-53bb2ac9e8c8
ms.openlocfilehash: 0051b16ddc19e233cfac2688c0b77e1e023f0833
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169266"
---
# <a name="optimizing-inline-assembly"></a>Ottimizzazione dell'assembly Inline

**Sezione specifica Microsoft**

La presenza di un blocco `__asm` in una funzione influisce sull'ottimizzazione in diversi modi. Innanzitutto, il compilatore non tenta di ottimizzare il blocco `__asm` stesso. Ciò che viene scritto in linguaggio assembly è esattamente il risultato che si ottiene. In secondo luogo, la presenza di un blocco `__asm` influisce sull'archiviazione della variabile registro. Il compilatore evita la registrazione delle variabili in un blocco `__asm` se il contenuto del registro deve essere modificato dal blocco `__asm`. Infine, altre ottimizzazioni a livello di funzione sono interessate dall'inclusione del linguaggio assembly in una funzione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
