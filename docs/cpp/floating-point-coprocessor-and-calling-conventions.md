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
ms.openlocfilehash: e9f45f73e3cb1910bfc604c8a0fde871cef973a9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46075956"
---
# <a name="floating-point-coprocessor-and-calling-conventions"></a>Coprocessore a virgola mobile e convenzioni di chiamata

Se si sta scrivendo assembly routine per Mobile punto del coprocessore, è necessario conservare mobile punto parola di controllo e pulire lo stack del coprocessore a meno che non si restituisce un **float** oppure **double** valore (in cui la funzione deve restituire in ST(0)).

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)