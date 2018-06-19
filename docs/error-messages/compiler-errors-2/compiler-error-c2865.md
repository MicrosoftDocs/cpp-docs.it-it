---
title: Errore del compilatore C2865 | Documenti Microsoft
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
ms.openlocfilehash: 70b2c6c831fde18f9054e139a120d834a75b6950
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33246216"
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865
'function': confronto non valido per handle_o_puntatore  
  
 È possibile confrontare i riferimenti a [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o a diversi oggetti gestiti (! =).  
  
 Non è possibile confrontarli per ordinarli, in quanto il runtime .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificando il risultato del test.