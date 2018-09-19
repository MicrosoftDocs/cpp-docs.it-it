---
title: Errore del compilatore C2414 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2414
dev_langs:
- C++
helpviewer_keywords:
- C2414
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 642cb00605ed13146288edf5d39cb5d0c14c6e9f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46089918"
---
# <a name="compiler-error-c2414"></a>Errore del compilatore C2414

numero non valido di operandi

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con un diverso numero di operandi. Modificare il [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) possibilità di usare il processore più aggiornato.