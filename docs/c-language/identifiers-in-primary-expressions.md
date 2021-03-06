---
description: 'Altre informazioni su: identificatori nelle espressioni primarie'
title: Identificatori in espressioni primarie
ms.date: 11/04/2016
helpviewer_keywords:
- identifiers, designating objects
ms.assetid: d4602fe6-e7e6-40cc-9823-3b1ebf5d3d38
ms.openlocfilehash: 63fbadeb786edda232282a5073dd85b22f487e9b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182177"
---
# <a name="identifiers-in-primary-expressions"></a>Identificatori in espressioni primarie

Gli identificatori possono avere un tipo integrale,,,,, una **`float`** **`enum`** **`struct`** **`union`** matrice, un puntatore o un tipo di funzione. Un identificatore è un'espressione primaria purché sia stato dichiarato come definente un oggetto (nel qual caso si tratta di un l-value) o come funzione (nel qual caso si tratta di un indicatore di funzione). Per una definizione di un l-value, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).

Il valore di puntatore rappresentato da un identificatore di matrice non è una variabile, quindi un identificatore di matrice non può formare l'operando sinistro di un'operazione di assegnazione e pertanto non è un l-value modificabile.

Un identificatore dichiarato come funzione rappresenta un puntatore il cui valore è l'indirizzo della funzione. Il puntatore fa riferimento a una funzione che restituisce un valore di un tipo specificato. Pertanto, gli identificatori di funzione non possono anche essere l-value nelle operazioni di assegnazione. Per altre informazioni, vedere [Identificatori](../c-language/c-identifiers.md).

## <a name="see-also"></a>Vedi anche

[Espressioni primarie C](../c-language/c-primary-expressions.md)
