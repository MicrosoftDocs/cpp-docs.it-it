---
title: Errore del compilatore C2865
ms.date: 11/04/2016
f1_keywords:
- C2865
helpviewer_keywords:
- C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
ms.openlocfilehash: dd4374c1a577c4c39c5dec107ed5025d7cdc79c2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201696"
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865

' Function ': confronto non valido per handle_or_pointer

È possibile confrontare i riferimenti a [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento gestiti solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o a oggetti diversi (! =).

Non è possibile confrontarli per l'ordinamento perché il Runtime .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificando il risultato del test.
