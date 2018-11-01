---
title: Operatori del preprocessore
ms.date: 11/04/2016
helpviewer_keywords:
- preprocessor operators
- operators [C++], preprocessor
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
ms.openlocfilehash: 3573ce2d86f38193a4f8f7c1c0f310283f304648
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50584392"
---
# <a name="preprocessor-operators"></a>Operatori del preprocessore
Quattro operatori specifici del preprocessore vengono utilizzati nel contesto della direttiva `#define` (vedere il seguente elenco per un riepilogo di ciascun operatore). Gli operatori per la creazione di stringhe, caratteri e concatenamento dei token sono descritti nelle tre sezioni seguenti. Per informazioni sul `defined` operatore, vedere [#if, #elif, #else e #endif direttive](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

|Operatore|Operazione|
|--------------|------------|
|[Creazione di stringhe operatore # (#)](../preprocessor/stringizing-operator-hash.md)|Racchiude l'argomento corrispondente tra virgolette doppie|
|[Operatore per (#@)](../preprocessor/charizing-operator-hash-at.md)|Racchiude l'argomento corrispondente tra virgolette singole e lo considera come un carattere (Microsoft Specific)|
|[Operatore di Incolla per token (#)](../preprocessor/token-pasting-operator-hash-hash.md)|Consente ai token utilizzati come argomenti effettivi di essere concatenati per formare altri token|
|[operatore definito](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|Semplifica la scrittura di espressioni composte in alcune direttive macro|

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)<br/>
[Macro predefinite](../preprocessor/predefined-macros.md)<br/>
[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)