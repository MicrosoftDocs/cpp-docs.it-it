---
title: Coprocessore a virgola mobile e convenzioni di chiamata
ms.date: 11/04/2016
helpviewer_keywords:
- floating-point numbers [C++]
- floating-point coprocessor
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
ms.openlocfilehash: 7e9184d66bde26ab0e2b345f8f10c2e28619fd2b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50625109"
---
# <a name="floating-point-coprocessor-and-calling-conventions"></a>Coprocessore a virgola mobile e convenzioni di chiamata

Se si sta scrivendo assembly routine per Mobile punto del coprocessore, è necessario conservare mobile punto parola di controllo e pulire lo stack del coprocessore a meno che non si restituisce un **float** oppure **double** valore (in cui la funzione deve restituire in ST(0)).

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)