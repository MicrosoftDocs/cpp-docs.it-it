---
title: Avviso del compilatore (livello 1) C4182
ms.date: 11/04/2016
f1_keywords:
- C4182
helpviewer_keywords:
- C4182
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
ms.openlocfilehash: 49e3e2f62b4be50d14cb8da3d776b4640be7160c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486112"
---
# <a name="compiler-warning-level-1-c4182"></a>Avviso del compilatore (livello 1) C4182

\#include a livello di nidificazione: 'number' profonde; possibile ricorsione infinita

Il compilatore ha esaurito lo spazio nell'heap a causa del numero di file di inclusione annidati. Un file di inclusione è annidato quando viene incluso da un altro file di inclusione.

Questo messaggio è puramente informativo e precede l'errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).