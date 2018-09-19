---
title: Errore del compilatore C2415 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2415
dev_langs:
- C++
helpviewer_keywords:
- C2415
ms.assetid: f225c913-2bea-46b1-b096-3d358ac94a15
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bd889880997828396521ddba638bb606552e7d92
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112577"
---
# <a name="compiler-error-c2415"></a>Errore del compilatore C2415

tipo di operando improprio

Il codice operativo non usa operandi di questo tipo.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con altri tipi. Modificare il [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) possibilità di usare il processore più aggiornato.