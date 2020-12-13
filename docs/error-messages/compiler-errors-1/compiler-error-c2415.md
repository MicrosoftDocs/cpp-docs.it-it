---
description: 'Altre informazioni su: errore del compilatore C2415'
title: Errore del compilatore C2415
ms.date: 11/04/2016
f1_keywords:
- C2415
helpviewer_keywords:
- C2415
ms.assetid: f225c913-2bea-46b1-b096-3d358ac94a15
ms.openlocfilehash: 21bbeabe0a5eacea55d2a38ab515429e6468ba57
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340346"
---
# <a name="compiler-error-c2415"></a>Errore del compilatore C2415

tipo di operando non valido

Il codice operativo non usa operandi di questo tipo.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento per il linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con tipi aggiuntivi. Modificare l'opzione di [/Arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) per utilizzare il processore successivo.
