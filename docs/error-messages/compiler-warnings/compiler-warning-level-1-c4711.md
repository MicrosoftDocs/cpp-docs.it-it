---
title: Avviso del compilatore (livello 1) C4711
ms.date: 11/04/2016
f1_keywords:
- C4711
helpviewer_keywords:
- C4711
ms.assetid: 270506ab-fead-4328-b714-2978113be238
ms.openlocfilehash: 9e2adf3583012a670f936c2b86a9ddc393fe53c6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175337"
---
# <a name="compiler-warning-level-1-c4711"></a>Avviso del compilatore (livello 1) C4711

funzione "funzione" selezionata per l'espansione inline

Il compilatore ha eseguito l'incorporamento sulla funzione specificata, anche se non è stato contrassegnato per l'incorporamento.

C4711 è abilitato se si specifica [/Ob2](../../build/reference/ob-inline-function-expansion.md) .

L'incorporamento viene eseguito a discrezione del compilatore. Si tratta di un avviso informativo.

Per impostazione predefinita, questo avviso non è attivo. Per abilitare un avviso, usare [#pragma avviso](../../preprocessor/warning.md). Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .
