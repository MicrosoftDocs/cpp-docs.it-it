---
title: Ordine di utilizzo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 827a129c0b7a444cc5b48ba68a3e360712e1c08e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45721539"
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