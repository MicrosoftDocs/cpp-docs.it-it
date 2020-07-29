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
ms.openlocfilehash: a558761ff49c2b508a5bad6172cda2283801e30e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191729"
---
# <a name="optimizing-inline-assembly"></a>Ottimizzazione dell'assembly Inline

**Specifico di Microsoft**

La presenza di un **`__asm`** blocco in una funzione influiscono sull'ottimizzazione in diversi modi. In primo luogo, il compilatore non tenta di ottimizzare il **`__asm`** blocco. Ciò che viene scritto in linguaggio assembly è esattamente il risultato che si ottiene. In secondo luogo, la presenza di un **`__asm`** blocco influiscono sull'archiviazione delle variabili di registro. Il compilatore evita di registrare le variabili in un **`__asm`** blocco se il contenuto del registro viene modificato dal **`__asm`** blocco. Infine, altre ottimizzazioni a livello di funzione sono interessate dall'inclusione del linguaggio assembly in una funzione.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
