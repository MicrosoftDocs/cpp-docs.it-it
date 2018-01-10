---
title: Errore del compilatore C2865 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2865
dev_langs: C++
helpviewer_keywords: C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 149ca019ef30d66dba63bc927d79064a269d8c70
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865
'function': confronto non valido per handle_o_puntatore  
  
 È possibile confrontare i riferimenti a [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o a diversi oggetti gestiti (! =).  
  
 Non è possibile confrontarli per ordinarli, in quanto il runtime .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificando il risultato del test.