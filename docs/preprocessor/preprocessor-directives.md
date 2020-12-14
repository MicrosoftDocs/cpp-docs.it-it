---
description: 'Altre informazioni su: direttive per il preprocessore'
title: Direttive per il preprocessore
ms.date: 08/29/2019
helpviewer_keywords:
- directives, preprocessor
- preprocessor, directives
ms.assetid: e0fc4564-b6cf-4a36-bf51-6ccd7abd0a94
ms.openlocfilehash: 016021fb21961e71b56a734941d6c495cc6f6741
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240520"
---
# <a name="preprocessor-directives"></a>Direttive per il preprocessore

Le direttive per il preprocessore, ad esempio `#define` e `#ifdef` , vengono in genere utilizzate per semplificare la modifica e la compilazione di programmi di origine in ambienti di esecuzione diversi. Le direttive nel file di origine indicano al preprocessore di eseguire azioni specifiche. Ad esempio, il preprocessore può sostituire i token nel testo, inserire il contenuto di altri file nel file di origine o eliminare la compilazione di parte del file rimuovendo sezioni di testo. Le righe del preprocessore vengono riconosciute ed eseguite prima dell'espansione di una macro. Se pertanto una macro si espande in un elemento simile a un comando del preprocessore, non viene riconosciuta dal preprocessore.

Le istruzioni del preprocessore utilizzano lo stesso set di caratteri delle istruzioni del file di origine, con l'eccezione che le sequenze di escape non sono supportate. Il set di caratteri utilizzati nelle istruzioni del preprocessore equivale al set di caratteri di esecuzione. Il preprocessore riconosce anche i valori di carattere negativi.

Il preprocessore riconosce le direttive seguenti:

:::row:::
   :::column span="":::
      [`#define`](../preprocessor/hash-define-directive-c-cpp.md)\
      [`#elif`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)\
      [`#else`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)\
      [`#endif`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`#error`](../preprocessor/hash-error-directive-c-cpp.md)\
      [`#if`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)\
      [`#ifdef`](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)\
      [`#ifndef`](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`#import`](../preprocessor/hash-import-directive-cpp.md)\
      [`#include`](../preprocessor/hash-include-directive-c-cpp.md)\
      [`#line`](../preprocessor/hash-line-directive-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`#pragma`](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
      [`#undef`](../preprocessor/hash-undef-directive-c-cpp.md)\
      [`#using`](../preprocessor/hash-using-directive-cpp.md)
   :::column-end:::
:::row-end:::

Il simbolo di cancelletto ( `#` ) deve essere il primo carattere di spazio non vuoto nella riga contenente la direttiva. Gli spazi vuoti possono apparire tra il simbolo di cancelletto e la prima lettera della direttiva. Alcune direttive includono argomenti o valori. Qualsiasi testo che segue una direttiva (eccetto un argomento o un valore che fa parte della direttiva) deve essere preceduto dal delimitatore di commento a riga singola ( `//` ) o racchiuso tra delimitatori di commento ( `/* */` ). Le righe che contengono le direttive per il preprocessore possono essere continuate immediatamente prima del marcatore di fine riga con una barra rovesciata ( `\` ).

Le direttive per il preprocessore possono essere visualizzate in qualsiasi punto di un file di origine, ma si applicano solo al resto del file di origine, dopo che sono state visualizzate.

## <a name="see-also"></a>Vedi anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)\
[Macro predefinite](../preprocessor/predefined-macros.md)\
[riferimenti per il preprocessore c/c++](../preprocessor/c-cpp-preprocessor-reference.md)
