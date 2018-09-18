---
title: Errore del compilatore C2865 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2865
dev_langs:
- C++
helpviewer_keywords:
- C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cc0a49f8e6ab42f7e607cd5f4f7cc91f6895abe0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46035168"
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865

'function': confronto non valido per handle_o_puntatore

È possibile confrontare i riferimenti a [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o per diversi oggetti gestiti (! =).

Non è possibile confrontarli per l'ordinamento poiché il runtime di .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificare il risultato del test.