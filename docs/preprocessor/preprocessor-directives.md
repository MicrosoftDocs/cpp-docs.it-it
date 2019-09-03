---
title: Direttive per il preprocessore
ms.date: 08/29/2019
helpviewer_keywords:
- directives, preprocessor
- preprocessor, directives
ms.assetid: e0fc4564-b6cf-4a36-bf51-6ccd7abd0a94
ms.openlocfilehash: 86432ebf210523dd958f3258075d9e9c6d3bb4e6
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222274"
---
# <a name="preprocessor-directives"></a>Direttive per il preprocessore

Le direttive per il preprocessore `#define` , `#ifdef`ad esempio e, vengono in genere utilizzate per semplificare la modifica e la compilazione di programmi di origine in ambienti di esecuzione diversi. Le direttive nel file di origine indicano al preprocessore di eseguire azioni specifiche. Ad esempio, il preprocessore può sostituire i token nel testo, inserire il contenuto di altri file nel file di origine o eliminare la compilazione di parte del file rimuovendo sezioni di testo. Le righe del preprocessore vengono riconosciute ed eseguite prima dell'espansione di una macro. Se pertanto una macro si espande in un elemento simile a un comando del preprocessore, non viene riconosciuta dal preprocessore.

Le istruzioni del preprocessore utilizzano lo stesso set di caratteri delle istruzioni del file di origine, con l'eccezione che le sequenze di escape non sono supportate. Il set di caratteri utilizzati nelle istruzioni del preprocessore equivale al set di caratteri di esecuzione. Il preprocessore riconosce anche i valori di carattere negativi.

Il preprocessore riconosce le direttive seguenti:

|||||
|-|-|-|-|
|[#define](../preprocessor/hash-define-directive-c-cpp.md)|[#error](../preprocessor/hash-error-directive-c-cpp.md)|[#import](../preprocessor/hash-import-directive-cpp.md)|[#undef](../preprocessor/hash-undef-directive-c-cpp.md)|
|[#elif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|[#if](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|[#include](../preprocessor/hash-include-directive-c-cpp.md)|[#using](../preprocessor/hash-using-directive-cpp.md)|
|[#else](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|[#ifdef](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)|[#line](../preprocessor/hash-line-directive-c-cpp.md)|[#endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|
|[#ifndef](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)|[#pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)|||

Il simbolo di cancelletto (`#`) deve essere il primo carattere di spazio non vuoto nella riga contenente la direttiva. Gli spazi vuoti possono apparire tra il simbolo di cancelletto e la prima lettera della direttiva. Alcune direttive includono argomenti o valori. Qualsiasi testo che segue una direttiva (eccetto un argomento o un valore che fa parte della direttiva) deve essere preceduto dal delimitatore di commento a riga singola (`//`) o racchiuso tra delimitatori di`/* */`commento (). Le righe che contengono le direttive per il preprocessore possono essere continuate immediatamente prima del marcatore di fine riga`\`con una barra rovesciata ().

Le direttive per il preprocessore possono essere visualizzate in qualsiasi punto di un file di origine, ma si applicano solo al resto del file di origine, dopo che sono state visualizzate.

## <a name="see-also"></a>Vedere anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)\
[Macro predefinite](../preprocessor/predefined-macros.md)\
[riferimenti per il preprocessore c/c++](../preprocessor/c-cpp-preprocessor-reference.md)
