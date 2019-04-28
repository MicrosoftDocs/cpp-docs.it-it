---
title: Errore del compilatore C2865
ms.date: 11/04/2016
f1_keywords:
- C2865
helpviewer_keywords:
- C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
ms.openlocfilehash: 38b7dd86a57c3cd89811c6489e51fb4271fd7b79
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62165151"
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865

'function': confronto non valido per handle_o_puntatore

È possibile confrontare i riferimenti a [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o per diversi oggetti gestiti (! =).

Non è possibile confrontarli per l'ordinamento poiché il runtime di .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificare il risultato del test.