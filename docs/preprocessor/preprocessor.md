---
description: 'Altre informazioni su: preprocessore'
title: Preprocessore
ms.date: 08/29/2019
helpviewer_keywords:
- preprocessor
ms.assetid: e120eda3-b413-49f1-a07c-e9fb128cf500
ms.openlocfilehash: dd79766777926871e7bbf849f96420ef37052eba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202080"
---
# <a name="preprocessor"></a>Preprocessore

Il preprocessore è un processore di testo che modifica il testo di un file di origine durante la prima fase di traslazione. Il preprocessore non analizza il testo di origine, ma lo suddivide in token per individuare le chiamate macro. Sebbene il compilatore in genere richiami il preprocessore nel primo test superato, il preprocessore può essere anche richiamato separatamente per elaborare il testo senza compilazione.

Il materiale di riferimento sul preprocessore include le sezioni seguenti:

- [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)

- [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)

- [Macro predefinite](../preprocessor/predefined-macros.md)

- [Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

**Specifico di Microsoft**

È possibile ottenere un elenco del codice sorgente dopo la pre-elaborazione utilizzando l'opzione del compilatore [/e](../build/reference/e-preprocess-to-stdout.md) o [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) . Entrambe le opzioni richiamano il preprocessore e inviano il testo risultante al dispositivo di output standard, che nella maggior parte dei casi è la console. La differenza tra le due opzioni è che `/E` include le `#line` direttive e `/EP` rimuove le direttive.

**TERMINA specifica Microsoft**

## <a name="special-terminology"></a><a name="_predir_special_terminology"></a> Terminologia speciale

Nella documentazione del preprocessore, il termine "argomento" si riferisce all'entità che viene passata a una funzione. In alcuni casi, viene modificato da "Actual" o "formal", che descrive l'espressione dell'argomento specificata nella chiamata di funzione e la dichiarazione dell'argomento specificata nella definizione di funzione, rispettivamente.

Il termine "variabile" si riferisce a un oggetto dati di tipo C semplice. Il termine "oggetto" si riferisce sia a oggetti C++ che a variabili; si tratta di un termine inclusivo.

## <a name="see-also"></a>Vedi anche

[Riferimenti per il preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)\
[Fasi di conversione](../preprocessor/phases-of-translation.md)
