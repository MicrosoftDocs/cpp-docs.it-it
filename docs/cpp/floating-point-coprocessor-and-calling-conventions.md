---
description: 'Altre informazioni su: coprocessore a virgola mobile e convenzioni di chiamata'
title: Coprocessore a virgola mobile e convenzioni di chiamata
ms.date: 11/04/2016
helpviewer_keywords:
- floating-point numbers [C++]
- floating-point coprocessor
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
ms.openlocfilehash: 2f68671783b8a556e787aa6637b9b5c2e5799485
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242548"
---
# <a name="floating-point-coprocessor-and-calling-conventions"></a>Coprocessore a virgola mobile e convenzioni di chiamata

Se si scrivono routine di assembly per il coprocessore a virgola mobile, è necessario mantenere la parola di controllo a virgola mobile e pulire lo stack del coprocessore a meno che non si stia restituendo un **`float`** **`double`** valore o (che la funzione deve restituire in St (0)).

## <a name="see-also"></a>Vedi anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
