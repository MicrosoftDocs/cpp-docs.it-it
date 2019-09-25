---
title: Avviso del compilatore C4577
description: Descrizione e soluzione di avviso del compilatore C4577.
ms.date: 09/18/2019
helpviewer_keywords:
- C4577
ms.openlocfilehash: 637023f4c27f93238fbbd13b4a0e652e6cd958e0
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2019
ms.locfileid: "71241101"
---
# <a name="compiler-warning-level-1-c4577"></a>Avviso del compilatore (livello 1) C4577

> ' noexcept ' usato senza la modalità di gestione delle eccezioni specificata. la chiusura dell'eccezione non è garantita. Specificare/EHsc

Il compilatore ha rilevato `noexcept` una specifica, ma C++ non è stata specificata la gestione delle eccezioni standard. Il compilatore non supporta completamente la gestione delle eccezioni in C++ base allo standard, a meno che non sia stata specificata l'opzione del compilatore [/EHsc](../../build/reference/eh-exception-handling-model.md) . Per risolvere questo problema, impostare l'opzione del compilatore **/EHsc** .

Questo avviso è nuovo in Visual Studio 2015 ed è disattivato per impostazione predefinita. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
