---
title: Modifiche generali del linguaggio (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 79a70768-225c-4ae2-84d1-178b20a9b042
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9b48ebdf0bf25399b08f8a1cb1240a857cfad352
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46418463"
---
# <a name="general-language-changes-ccli"></a>Modifiche generali del linguaggio (C++/CLI)

Numero di funzionalità del linguaggio CLR modificato dalle estensioni gestite per C++ in Visual C++.

Le modifiche descritte in questa sezione sono una sorta di vario. Include una modifica nella gestione di valori letterali stringa, una modifica nella risoluzione dell'overload tra i puntini di sospensione e la `Param` dell'attributo, la modifica dello `typeof` a `typeid`, una modifica nel che chiama costruttore di elenchi di inizializzatori e il introduzione di nuove notazioni di cast, che di `safe_cast`.

[Valore letterale stringa](../dotnet/string-literal.md)<br/>
Viene illustrato come è stata modificata la gestione dei valori letterali stringa.

[Matrice di parametri e puntini di sospensione](../dotnet/param-array-and-ellipsis.md)<br/>
Viene illustrato come `ParamArray` ora ha la precedenza sui puntini di sospensione (`...`) per risolvere le chiamate di funzione con un numero variabile di argomenti.

[typeof passa a T::typeid](../dotnet/typeof-goes-to-t-typeid.md)<br/>
Viene illustrato come la `typeof` operatore è stato sostituito da `typeid`.

[Elenchi di inizializzatori](../dotnet/initializer-lists.md)<br/>
Vengono illustrate le modifiche nell'ordine di chiamata di elenchi di inizializzatori.

[Notazione cast e introduzione di safe_cast<>](../dotnet/cast-notation-and-introduction-of-safe-cast-angles.md)<br/>
Vengono illustrate le modifiche alla notazione cast e, in particolare l'introduzione di `safe_cast`.

## <a name="see-also"></a>Vedere anche

[Nozioni di base della migrazione in C++/CLI](../dotnet/cpp-cli-migration-primer.md)