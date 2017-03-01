---
title: Errore del compilatore C2865 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2865
dev_langs:
- C++
helpviewer_keywords:
- C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 3bb55d094e00400c57617857aa1ac29677f1b72a
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865
'funzione': confronto non valido per handle_o_puntatore  
  
 È possibile confrontare i riferimenti a [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o a diversi oggetti gestiti (! =).  
  
 Non è possibile confrontarli per ordinarli, in quanto il runtime .NET potrà spostare gli oggetti gestiti in qualsiasi momento, modificando il risultato del test.
