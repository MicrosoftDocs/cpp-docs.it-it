---
title: Conversioni di assegnazione
ms.date: 11/04/2016
helpviewer_keywords:
- conversions, assignment
- assignment conversions
ms.assetid: 4ee01013-de32-4aae-b12e-0051d0cde927
ms.openlocfilehash: cc75bdd8227c09247f6d4270f1fc21235de2eb05
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211840"
---
# <a name="assignment-conversions"></a>Conversioni di assegnazione

Nelle operazioni di assegnazione, il tipo del valore assegnato viene convertito nel tipo della variabile che riceve l'assegnazione. C consente le conversioni per assegnazione tra i tipi integrali e mobili, anche se le informazioni vengono perse nella conversione. Il metodo di conversione usato dipende dai tipi interessati nell'assegnazione, come descritto in [Conversioni aritmetiche comuni](../c-language/usual-arithmetic-conversions.md) e nelle sezioni seguenti:

- [Conversioni dai tipi integrali con segno](../c-language/conversions-from-signed-integral-types.md)

- [Conversioni dai tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md)

- [Conversioni dai tipi a virgola mobile](../c-language/conversions-from-floating-point-types.md)

- [Conversioni da e verso tipi di puntatore](../c-language/conversions-to-and-from-pointer-types.md)

- [Conversioni da altri tipi](../c-language/conversions-from-other-types.md)

I qualificatori di tipo non influiscono sull'ammissibilità della conversione anche se **`const`** non è possibile usare un l-value sul lato sinistro dell'assegnazione.

## <a name="see-also"></a>Vedere anche

[Conversioni di tipi](../c-language/type-conversions-c.md)
