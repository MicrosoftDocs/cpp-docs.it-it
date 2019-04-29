---
title: Errore del compilatore C2414
ms.date: 11/04/2016
f1_keywords:
- C2414
helpviewer_keywords:
- C2414
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
ms.openlocfilehash: 84fa715c8bd567770f361552e203a37c44ffdde4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402983"
---
# <a name="compiler-error-c2414"></a>Errore del compilatore C2414

numero non valido di operandi

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con un diverso numero di operandi. Modificare il [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) possibilità di usare il processore più aggiornato.