---
title: Coprocessore a virgola mobile e convenzioni di chiamata
ms.date: 11/04/2016
helpviewer_keywords:
- floating-point numbers [C++]
- floating-point coprocessor
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
ms.openlocfilehash: c70dd3b049ca353acc8a504df52b2c61feaf1974
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188622"
---
# <a name="floating-point-coprocessor-and-calling-conventions"></a>Coprocessore a virgola mobile e convenzioni di chiamata

Se si scrivono routine di assembly per il coprocessore a virgola mobile, è necessario mantenere la parola di controllo a virgola mobile e pulire lo stack del coprocessore a meno che non si stia restituendo un valore **float** o **Double** (che la funzione deve restituire in St (0)).

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
