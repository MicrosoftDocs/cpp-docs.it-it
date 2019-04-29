---
title: Istruzione di espressione
ms.date: 11/04/2016
helpviewer_keywords:
- statements [C++], expression
- expression statements
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
ms.openlocfilehash: 2973c3e0a1cd59edfc7ef1e771454b780da23cf9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400604"
---
# <a name="expression-statement"></a>Istruzione di espressione

Le istruzioni di espressione determinano la valutazione delle espressioni. Un'istruzione di espressione non dà come risultato alcun controllo o iterazione.

La sintassi per l'istruzione di espressione è semplicemente

## <a name="syntax"></a>Sintassi

```
[expression ] ;
```

## <a name="remarks"></a>Note

Tutte le espressioni in un'istruzione di espressione vengono valutate e tutti gli effetti collaterali vengono completati prima che l'istruzione successiva venga eseguita. Le istruzioni di espressione più comuni sono assegnazioni e chiamate di funzione.  Poiché l'espressione è facoltativa, un punto e virgola da solo è considerato un'istruzione di espressione vuota, detta il [null](../cpp/null-statement.md) istruzione.

## <a name="see-also"></a>Vedere anche

[Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)