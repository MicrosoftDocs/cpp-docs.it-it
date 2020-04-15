---
title: Preprocessore
ms.date: 08/29/2019
helpviewer_keywords:
- preprocessor
ms.assetid: e120eda3-b413-49f1-a07c-e9fb128cf500
ms.openlocfilehash: 7188d7a6803c9eec109a59906cf0c016a460819d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337494"
---
# <a name="preprocessor"></a>Preprocessore

Il preprocessore è un processore di testo che modifica il testo di un file di origine durante la prima fase di traslazione. Il preprocessore non analizza il testo di origine, ma lo suddivide in token per individuare le chiamate di macro. Sebbene il compilatore in genere richiami il preprocessore nel primo test superato, il preprocessore può essere anche richiamato separatamente per elaborare il testo senza compilazione.

Il materiale di riferimento sul preprocessore include le sezioni seguenti:

- [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)

- [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)

- [Macro predefinite](../preprocessor/predefined-macros.md)

- [Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

**Specifico di Microsoft**

È possibile ottenere un elenco del codice sorgente dopo la pre-elaborazione utilizzando l'opzione del compilatore [/E](../build/reference/e-preprocess-to-stdout.md) o [/EP.](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) Entrambe le opzioni richiamano il preprocessore e inviano il testo risultante al dispositivo di output standard, che, nella maggior parte dei casi, è la console. La differenza tra le `/E` due `#line` opzioni è `/EP` che include direttive e rimuove queste direttive.

**FINE Specifico di Microsoft**

## <a name="special-terminology"></a><a name="_predir_special_terminology"></a>Terminologia speciale

Nella documentazione del preprocessore, il termine "argomento" si riferisce all'entità che viene passata a una funzione. In alcuni casi, viene modificato da "effettivo" o "formale", che descrive l'espressione di argomento specificata nella chiamata di funzione e la dichiarazione di argomento specificata rispettivamente nella definizione della funzione.

Il termine "variabile" si riferisce a un oggetto dati di tipo C semplice. Il termine "oggetto" si riferisce sia agli oggetti che alle variabili di C. è un termine inclusivo.

## <a name="see-also"></a>Vedere anche

[Riferimento per il preprocessore C/C](../preprocessor/c-cpp-preprocessor-reference.md)\
[Fasi di traduzione](../preprocessor/phases-of-translation.md)
