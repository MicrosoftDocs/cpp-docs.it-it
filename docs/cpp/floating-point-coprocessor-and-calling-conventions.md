---
title: Coprocessore a virgola mobile e convenzioni di chiamata | Microsoft Docs
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
ms.openlocfilehash: 66ccd54c4abb1d8d9761d5ded88beba76bfae043
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401354"
---
# <a name="floating-point-coprocessor-and-calling-conventions"></a>Coprocessore a virgola mobile e convenzioni di chiamata
Se si sta scrivendo assembly routine per Mobile punto del coprocessore, è necessario conservare mobile punto parola di controllo e pulire lo stack del coprocessore a meno che non si restituisce un **float** oppure **double** valore (in cui la funzione deve restituire in ST(0)).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)