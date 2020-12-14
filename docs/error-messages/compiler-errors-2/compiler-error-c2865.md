---
description: 'Altre informazioni su: errore del compilatore C2865'
title: Errore del compilatore C2865
ms.date: 11/04/2016
f1_keywords:
- C2865
helpviewer_keywords:
- C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
ms.openlocfilehash: 0c57fdb120eb147b3877cc834e142ab92f147aaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220747"
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865

' Function ': confronto non valido per handle_or_pointer

È possibile confrontare i riferimenti a [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento gestiti solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o a oggetti diversi (! =).

Non è possibile confrontarli per l'ordinamento perché il Runtime .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificando il risultato del test.
