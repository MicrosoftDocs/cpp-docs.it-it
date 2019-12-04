---
title: Avviso del compilatore C4577
description: Descrizione e soluzione di avviso del compilatore C4577.
ms.date: 09/18/2019
f1_keywords:
- C4577
helpviewer_keywords:
- C4577
ms.openlocfilehash: e29e47b2a268d86f7f6a280b79a1604fe6eff8a4
ms.sourcegitcommit: 8762a3f9b5476b4dee03f0ee8064ea606550986e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/04/2019
ms.locfileid: "74810565"
---
# <a name="compiler-warning-level-1-c4577"></a>Avviso del compilatore (livello 1) C4577

> ' noexcept ' usato senza la modalità di gestione delle eccezioni specificata. la chiusura dell'eccezione non è garantita. Specificare/EHsc

Il compilatore ha rilevato una specifica di `noexcept`, C++ ma non è stata specificata la gestione delle eccezioni standard. Il compilatore non supporta completamente la gestione delle eccezioni in C++ base allo standard, a meno che non sia stata specificata l'opzione del compilatore [/EHsc](../../build/reference/eh-exception-handling-model.md) . Per risolvere questo problema, impostare l'opzione del compilatore **/EHsc** .

Questo avviso è nuovo in Visual Studio 2015 ed è disattivato per impostazione predefinita. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
