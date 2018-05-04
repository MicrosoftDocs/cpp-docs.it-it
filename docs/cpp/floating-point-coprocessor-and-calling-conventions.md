---
title: Coprocessore a virgola mobile e convenzioni di chiamata | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- floating-point numbers [C++]
- floating-point coprocessor
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 46cf9c937453894ed37ad434ad94609d0744be24
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="floating-point-coprocessor-and-calling-conventions"></a>Coprocessore a virgola mobile e convenzioni di chiamata
Se si sta scrivendo assembly routine per Mobile punto del coprocessore, è necessario conservare mobile punto parola di controllo e pulire lo stack del coprocessore a meno che non viene restituito un **float** o **doppie** valore (che la funzione deve restituire in ST(0)).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)