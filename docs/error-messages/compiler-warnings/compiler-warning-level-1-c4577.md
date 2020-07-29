---
title: Avviso del compilatore C4577
description: Descrizione e soluzione di avviso del compilatore C4577.
ms.date: 09/18/2019
f1_keywords:
- C4577
helpviewer_keywords:
- C4577
ms.openlocfilehash: fb9d412196e7764326a397a4bf6e76c8723ac2ae
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87196253"
---
# <a name="compiler-warning-level-1-c4577"></a>Avviso del compilatore (livello 1) C4577

> ' noexcept ' usato senza la modalità di gestione delle eccezioni specificata. la chiusura dell'eccezione non è garantita. Specificare/EHsc

Il compilatore ha rilevato una **`noexcept`** specifica, ma non è stata specificata la gestione delle eccezioni standard C++. Il compilatore non supporta completamente la gestione delle eccezioni in base allo standard C++, a meno che non sia stata specificata l'opzione del compilatore [/EHsc](../../build/reference/eh-exception-handling-model.md) . Per risolvere questo problema, impostare l'opzione del compilatore **/EHsc** .

Questo avviso è nuovo in Visual Studio 2015 ed è disattivato per impostazione predefinita. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
