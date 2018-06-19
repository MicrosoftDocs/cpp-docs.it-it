---
title: Ordine di utilizzo | Documenti Microsoft
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
ms.openlocfilehash: b6f711636089a6f2966002002220aac88cebe17a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379858"
---
# <a name="stack-usage"></a>Utilizzo dello stack
Tutta la memoria oltre l'indirizzo corrente di RSP viene considerata come volatile: il sistema operativo o un debugger, potrà sovrascrivere la memoria durante una sessione di debug di utente o un gestore di interrupt. Di conseguenza, RSP deve sempre essere impostato prima di tentare di leggere o scrivere valori a uno stack frame.  
  
 In questa sezione vengono illustrate l'allocazione di spazio dello stack per le variabili locali e **alloca** intrinseco.  
  
-   [Allocazione nello stack](../build/stack-allocation.md)  
  
-   [Costruzione dinamica dell'area dello stack di parametri](../build/dynamic-parameter-stack-area-construction.md)  
  
-   [Tipi di funzioni](../build/function-types.md)  
  
-   [Allineamento malloc](../build/malloc-alignment.md)  
  
-   [alloca](../build/alloca.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)