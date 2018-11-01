---
title: Errore del compilatore C2415
ms.date: 11/04/2016
f1_keywords:
- C2415
helpviewer_keywords:
- C2415
ms.assetid: f225c913-2bea-46b1-b096-3d358ac94a15
ms.openlocfilehash: 81e2da31b39b323919132ae86cd365d9c119be32
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50553517"
---
# <a name="compiler-error-c2415"></a>Errore del compilatore C2415

tipo di operando improprio

Il codice operativo non usa operandi di questo tipo.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con altri tipi. Modificare il [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) possibilità di usare il processore più aggiornato.