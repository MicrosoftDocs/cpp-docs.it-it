---
title: Programma e collegamento (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 04/09/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4154f0951b46b1c8badc0224845d2881cc8ad573
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32421367"
---
# <a name="program-and-linkage--c"></a>Programma e collegamento (C++)

In un programma C++, ogni simbolo globale può essere definita una sola volta, anche se il programma è costituito da più unità di conversione. Un'unità di conversione è costituito da un file di implementazione (con estensione cpp .hpp,. cxx, e così via) e tutte le intestazioni che include direttamente o indirettamente. Un programma è costituito da uno o più unità di conversione collegate tra loro. 

## <a name="linkage-vs-scope"></a>Collegamento e ambito

Il concetto di *collegamento* si intende la visibilità dei simboli globali (ad esempio variabili, i nomi dei tipi e i nomi delle funzioni) all'interno del programma nel suo complesso in unità di conversione. Il concetto di *ambito* fa riferimento ai simboli dichiarati all'interno di un blocco, ad esempio un spazio dei nomi, classe o corpo della funzione. Tali simboli sono visibili solo all'interno dell'ambito in cui sono definiti; il concetto di collegamento non si applica ad essi.

## <a name="external-vs-internal-linkage"></a>Esterno rispetto al collegamento interno

Le variabili globali non const e le funzioni disponibili per impostazione predefinita dispongono di collegamento esterno; sono visibili da qualsiasi unità di conversione nel programma. È possibile eseguire l'override di questo comportamento mediante esplicita dichiararli come **statica** che limita la visibilità per la stessa unità di conversione in cui sono dichiarati. Il significato dei **statica** è diverso da quello relativo significato quando applicato a variabili locali. Le variabili dichiarate come **const** dispongono di collegamenti interni per impostazione predefinita.

## <a name="extern-constexpr-linkage"></a>Collegamento constexpr extern

Nelle versioni precedenti di Visual Studio, il compilatore ha sempre fornito di un collegamento interno variabile constexpr anche quando la variabile è stato contrassegnato come esterno. In Visual Studio 2017 versione 15.5 una nuova opzione del compilatore (/Zc:externConstexpr) abilita il comportamento corretto conforme agli standard. Questo diventerà infine il comportamento predefinito.

```cpp
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

Se un file di intestazione contiene una variabile dichiarata extern constexpr, deve essere contrassegnato **__declspec(selectany)** per avere correttamente relative dichiarazioni duplicati combinati:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

## <a name="see-also"></a>Vedere anche

 [Concetti di base](../cpp/basic-concepts-cpp.md)