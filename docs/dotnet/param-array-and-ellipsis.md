---
title: Matrice di parametri e puntini di sospensione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- function overloading, argument matching
ms.assetid: 492e3f6c-1c4c-4e0c-a358-72f2d39c30be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2caf6415fdbceb506b736e209c6e7e384b567c5a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384377"
---
# <a name="param-array-and-ellipsis"></a>Matrice di parametri e puntini di sospensione

La priorità della matrice di parametri per la risoluzione di chiamate di funzione in overload è stato modificato dalle estensioni gestite per C++ in Visual C++.

In estensioni gestite e la nuova sintassi, non vi è alcun supporto esplicito per la matrice di parametri che supportano linguaggi c# e Visual Basic. Al contrario, un contrassegno matrice ordinaria con un attributo, come indicato di seguito:

```
void Trace1( String* format, [ParamArray]Object* args[] );
void Trace2( String* format, Object* args[] );
```

Nonostante lo stesso, l'aspetto di `ParamArray` attributo questo tag per c# o altri linguaggi CLR come una matrice richiede un numero variabile di elementi con ogni chiamata. La modifica del comportamento nei programmi tra le estensioni gestite e la nuova sintassi è la risoluzione di una funzione in overload set in cui un'istanza dichiara i puntini di sospensione e una seconda dichiara un `ParamArray` attributo, come illustrato di seguito fornita da Artur Laksberg.

```
int fx(...); // 1
int fx( [ParamArray] Int32[] ); // 2
```

Nelle estensioni gestite, i puntini di sospensione è stata assegnata la precedenza sull'attributo che è ragionevole poiché l'attributo non è un aspetto del linguaggio formale. Tuttavia, nella nuova sintassi, la matrice di parametri è ora supportata direttamente all'interno del linguaggio e venga assegnata la precedenza sui puntini di sospensione poiché è più fortemente tipizzato. Pertanto, nelle estensioni gestite, la chiamata

```
fx( 1, 2 );
```

si risolve in `fx(...)` anche se nella nuova sintassi, viene risolto nel `ParamArray` istanza. Nel caso che il comportamento del programma dipende la chiamata dell'istanza di puntini di sospensione rispetto a quella del `ParamArray`, sarà necessario modificare la firma o la chiamata.

## <a name="see-also"></a>Vedere anche

[Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)