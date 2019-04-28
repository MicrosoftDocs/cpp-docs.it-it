---
title: Direttive per il preprocessore
ms.date: 06/28/2018
helpviewer_keywords:
- directives, preprocessor
- preprocessor, directives
ms.assetid: e0fc4564-b6cf-4a36-bf51-6ccd7abd0a94
ms.openlocfilehash: 9481e977f2afb3de27a74278893a217fde48044b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179971"
---
# <a name="preprocessor-directives"></a>Direttive per il preprocessore

Le direttive del preprocessore, ad esempio `#define` e `#ifdef`, vengono in genere usati per rendere i programmi di origine facile da modificare e compilare in ambienti di esecuzione diversi. Le direttive nel file di origine indicano al preprocessore di eseguire azioni specifiche. Ad esempio, il preprocessore può sostituire i token nel testo, inserire il contenuto di altri file nel file di origine o eliminare la compilazione di parte del file rimuovendo sezioni di testo. Le righe del preprocessore vengono riconosciute ed eseguite prima dell'espansione di una macro. Pertanto, se una macro si espande in modo da risultare simile a un comando del preprocessore, tale comando non sarà riconosciuto dal preprocessore.

Le istruzioni del preprocessore utilizzano lo stesso set di caratteri delle istruzioni del file di origine, con l'eccezione che le sequenze di escape non sono supportate. Il set di caratteri utilizzati nelle istruzioni del preprocessore equivale al set di caratteri di esecuzione. Il preprocessore riconosce anche i valori di carattere negativi.

Il preprocessore riconosce le direttive seguenti:

|||||
|-|-|-|-|
|[#define](../preprocessor/hash-define-directive-c-cpp.md)|[#error](../preprocessor/hash-error-directive-c-cpp.md)|[#import](../preprocessor/hash-import-directive-cpp.md)|[#undef](../preprocessor/hash-undef-directive-c-cpp.md)|
|[#elif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|[#if](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|[#include](../preprocessor/hash-include-directive-c-cpp.md)|[#using](../preprocessor/hash-using-directive-cpp.md)|
|[#else](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|[#ifdef](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)|[#line](../preprocessor/hash-line-directive-c-cpp.md)|[#endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|
|[#ifndef](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)|[#pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)|||

Il simbolo di cancelletto (**#**) deve essere il primo carattere diverso dallo spazio sulla riga contenente la direttiva; gli spazi vuoti possono apparire tra il simbolo di cancelletto e la prima lettera della direttiva. Alcune direttive includono argomenti o valori. Qualsiasi testo che segue una direttiva (eccetto un argomento o un valore che è parte di essa) deve essere preceduto dal delimitatore di commento a riga singola (**//**) o racchiuderlo tra delimitatori di commento ( __/ \*\*/__). Le righe contenenti le direttive del preprocessore possono essere continuate precedendo immediatamente il marcatore di fine della riga con una barra rovesciata (**\\**).

Le direttive del preprocessore possono essere visualizzate in qualsiasi punto di un file di origine, ma si applicano solo al resto del file di origine.

## <a name="see-also"></a>Vedere anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)<br/>
[Macro predefinite](../preprocessor/predefined-macros.md)<br/>
[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)
