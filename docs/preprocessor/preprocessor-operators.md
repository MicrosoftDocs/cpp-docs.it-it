---
title: Operatori del preprocessore
ms.date: 11/04/2016
helpviewer_keywords:
- preprocessor operators
- operators [C++], preprocessor
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
ms.openlocfilehash: 0b105cc2039e2aa50c11b796e5474a97d8c5c702
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59035689"
---
# <a name="preprocessor-operators"></a>Operatori del preprocessore
Quattro operatori specifici del preprocessore vengono utilizzati nel contesto della direttiva `#define` (vedere il seguente elenco per un riepilogo di ciascun operatore). Gli operatori per la creazione di stringhe, caratteri e concatenamento dei token sono descritti nelle tre sezioni seguenti. Per informazioni sul `defined` operatore, vedere [#if, #elif, #else e #endif direttive](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

|Operatore|Operazione|
|--------------|------------|
|[Operatore per la creazione di stringhe (#)](../preprocessor/stringizing-operator-hash.md)|Racchiude l'argomento corrispondente tra virgolette doppie|
|[Operatore per la creazione di caratteri (#@)](../preprocessor/charizing-operator-hash-at.md)|Racchiude l'argomento corrispondente tra virgolette singole e lo considera come un carattere (Microsoft Specific)|
|[Operatore di concatenamento dei token (##)](../preprocessor/token-pasting-operator-hash-hash.md)|Consente ai token utilizzati come argomenti effettivi di essere concatenati per formare altri token|
|[Operatore defined](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|Semplifica la scrittura di espressioni composte in alcune direttive macro|

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)<br/>
[Macro predefinite](../preprocessor/predefined-macros.md)<br/>
[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)