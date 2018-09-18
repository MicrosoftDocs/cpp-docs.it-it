---
title: Errore irreversibile del compilatore di risorse RC1102 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC1102
dev_langs:
- C++
helpviewer_keywords:
- RC1102
ms.assetid: bd2091f8-ef5e-4151-a8d6-98043e9422b6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2be0a62b08b361f1cfa423fa3999a440e2fe4709
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46073187"
---
# <a name="resource-compiler-fatal-error-rc1102"></a>Errore irreversibile del compilatore di risorse RC1102

Errore interno: troppi argomenti per RCPP.

Sono stati passati troppi argomenti per il preprocessore del compilatore di risorse. Ridurre il numero di simboli definiti con i simboli definire (/d) opzione definendole nell'origine. Questo errore può essere causato anche specificando anche molte includono i percorsi di ricerca di file usando l'opzione di percorsi di ricerca (/ i).