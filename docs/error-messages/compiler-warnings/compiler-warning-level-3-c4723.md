---
title: Avviso del compilatore (livello 3) C4723
ms.date: 11/04/2016
f1_keywords:
- C4723
helpviewer_keywords:
- C4723
ms.assetid: 07669d14-3fd8-4a43-94bc-b61c50e58460
ms.openlocfilehash: 3a47c6f7e83abfc785d602d8ee0734be5d0fa962
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174089"
---
# <a name="compiler-warning-level-3-c4723"></a>Avviso del compilatore (livello 3) C4723

potenziale divisione per 0

Il secondo operando in un'operazione di divisione ha restituito zero in fase di compilazione, restituendo risultati non definiti.

Questo avviso viene generato solo quando si usa [/og](../../build/reference/og-global-optimizations.md) o un'opzione di ottimizzazione che implica/og.

È possibile che il compilatore abbia generato l'operando zero.
