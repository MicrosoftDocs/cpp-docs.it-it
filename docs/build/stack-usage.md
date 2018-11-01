---
title: Utilizzo dello stack
ms.date: 11/04/2016
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
ms.openlocfilehash: 5ee9da50a03e1137ed6543cd349481148c9127d6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452221"
---
# <a name="stack-usage"></a>Utilizzo dello stack

Tutta la memoria oltre l'indirizzo corrente di RSP viene considerata volatile: il sistema operativo o un debugger, può sovrascrivere questa memoria durante una sessione di debug utente o un gestore di interrupt. Di conseguenza, RSP deve sempre essere impostato prima di tentare di leggere o scrivere valori in uno stack frame.

Questa sezione vengono illustrati l'allocazione di spazio dello stack per le variabili locali e il **alloca** intrinseco.

- [Allocazione nello stack](../build/stack-allocation.md)

- [Costruzione dinamica dell'area dello stack di parametri](../build/dynamic-parameter-stack-area-construction.md)

- [Tipi di funzioni](../build/function-types.md)

- [Allineamento malloc](../build/malloc-alignment.md)

- [alloca](../build/alloca.md)

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)