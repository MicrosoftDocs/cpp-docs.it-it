---
title: Compilatore avviso (livello 1) C4711 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4711
dev_langs:
- C++
helpviewer_keywords:
- C4711
ms.assetid: 270506ab-fead-4328-b714-2978113be238
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d184d5043dad1138f774ca7288a773bcc38c6d9f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46069945"
---
# <a name="compiler-warning-level-1-c4711"></a>Avviso del compilatore (livello 1) C4711

funzione "funzione" selezionata per l'espansione inline

Il compilatore ha eseguito l'incorporamento della funzione specificata, anche se non è stato contrassegnato per l'incorporamento.

C4711 è abilitato se [/Ob2](../../build/reference/ob-inline-function-expansion.md) è specificato.

L'inlining viene eseguita a discrezione del compilatore. Si tratta di un avviso informativo.

Per impostazione predefinita, questo avviso non è attivo. Per abilitare un avviso, usare [#pragma avviso](../../preprocessor/warning.md). Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .