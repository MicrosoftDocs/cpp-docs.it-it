---
title: Avviso del compilatore (livello 1) C4711
ms.date: 11/04/2016
f1_keywords:
- C4711
helpviewer_keywords:
- C4711
ms.assetid: 270506ab-fead-4328-b714-2978113be238
ms.openlocfilehash: c10b19b39fcb40527c9e9276f47ecff42ca5a643
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62280386"
---
# <a name="compiler-warning-level-1-c4711"></a>Avviso del compilatore (livello 1) C4711

funzione "funzione" selezionata per l'espansione inline

Il compilatore ha eseguito l'incorporamento della funzione specificata, anche se non è stato contrassegnato per l'incorporamento.

C4711 è abilitato se [/Ob2](../../build/reference/ob-inline-function-expansion.md) è specificato.

L'inlining viene eseguita a discrezione del compilatore. Si tratta di un avviso informativo.

Per impostazione predefinita, questo avviso non è attivo. Per abilitare un avviso, usare [#pragma avviso](../../preprocessor/warning.md). Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .