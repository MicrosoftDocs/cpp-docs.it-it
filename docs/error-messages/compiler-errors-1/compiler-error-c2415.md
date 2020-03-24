---
title: Errore del compilatore C2415
ms.date: 11/04/2016
f1_keywords:
- C2415
helpviewer_keywords:
- C2415
ms.assetid: f225c913-2bea-46b1-b096-3d358ac94a15
ms.openlocfilehash: a0cdd528eca8ea267c62e6d44752d29ae16830c4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80205621"
---
# <a name="compiler-error-c2415"></a>Errore del compilatore C2415

tipo di operando non valido

Il codice operativo non usa operandi di questo tipo.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento per il linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con tipi aggiuntivi. Modificare l'opzione di [/Arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) per utilizzare il processore successivo.
