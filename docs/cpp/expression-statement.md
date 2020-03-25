---
title: Istruzione di espressione
ms.date: 11/04/2016
helpviewer_keywords:
- statements [C++], expression
- expression statements
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
ms.openlocfilehash: 2f12bbbafd9be50f851e36f472098431f9ac0d5d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189000"
---
# <a name="expression-statement"></a>Istruzione di espressione

Le istruzioni di espressione determinano la valutazione delle espressioni. Un'istruzione di espressione non dà come risultato alcun controllo o iterazione.

La sintassi per l'istruzione di espressione è semplicemente

## <a name="syntax"></a>Sintassi

```
[expression ] ;
```

## <a name="remarks"></a>Osservazioni

Tutte le espressioni in un'istruzione di espressione vengono valutate e tutti gli effetti collaterali vengono completati prima che l'istruzione successiva venga eseguita. Le istruzioni di espressione più comuni sono assegnazioni e chiamate di funzione.  Poiché l'espressione è facoltativa, un punto e virgola da solo viene considerato un'istruzione di espressione vuota, denominata istruzione [null](../cpp/null-statement.md) .

## <a name="see-also"></a>Vedere anche

[Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)
