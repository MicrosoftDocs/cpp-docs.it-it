---
title: Identificatori in espressioni primarie
ms.date: 11/04/2016
helpviewer_keywords:
- identifiers, designating objects
ms.assetid: d4602fe6-e7e6-40cc-9823-3b1ebf5d3d38
ms.openlocfilehash: 053720bcdf635a7e09363712259b558d93a2972c
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56151455"
---
# <a name="identifiers-in-primary-expressions"></a>Identificatori in espressioni primarie

Gli identificatori possono essere di tipo integrale, **float**, `enum`, `struct`, **union**, matrice, puntatore o funzione. Un identificatore è un'espressione primaria purché sia stato dichiarato come definente un oggetto (nel qual caso si tratta di un l-value) o come funzione (nel qual caso si tratta di un indicatore di funzione). Per una definizione di un l-value, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).

Il valore di puntatore rappresentato da un identificatore di matrice non è una variabile, quindi un identificatore di matrice non può formare l'operando sinistro di un'operazione di assegnazione e pertanto non è un l-value modificabile.

Un identificatore dichiarato come funzione rappresenta un puntatore il cui valore è l'indirizzo della funzione. Il puntatore fa riferimento a una funzione che restituisce un valore di un tipo specificato. Pertanto, gli identificatori di funzione non possono anche essere l-value nelle operazioni di assegnazione. Per altre informazioni, vedere [Identificatori](../c-language/c-identifiers.md).

## <a name="see-also"></a>Vedere anche

[Espressioni primarie C](../c-language/c-primary-expressions.md)
