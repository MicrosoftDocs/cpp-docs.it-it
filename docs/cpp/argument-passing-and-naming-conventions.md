---
title: Passaggio di argomenti e convenzioni di denominazione
ms.date: 12/17/2018
helpviewer_keywords:
- argument passing [C++], conventions
- arguments [C++], widening
- coding conventions, arguments
- arguments [C++], passing
- registers, return values
- thiscall keyword [C++]
- naming conventions [C++], arguments
- arguments [C++], naming
- passing arguments [C++], conventions
- conventions [C++], argument names
ms.assetid: de468979-eab8-4158-90c5-c198932f93b9
ms.openlocfilehash: 32f32ceb56267dc39b58b8eed1b30af697ca6d74
ms.sourcegitcommit: d5a7ea8e462f555fbb3852d6fe5112521fef3133
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/30/2020
ms.locfileid: "96324176"
---
# <a name="argument-passing-and-naming-conventions"></a>Passaggio di argomenti e convenzioni di denominazione

**Specifico di Microsoft**

I compilatori Microsoft C++ consentono di specificare le convenzioni per il passaggio di argomenti e valori restituiti tra funzioni e chiamanti. Non tutte le convenzioni sono disponibili in tutte le piattaforme supportate e alcune convenzioni utilizzano implementazioni specifiche della piattaforma. Nella maggior parte dei casi, le parole chiave o le opzioni del compilatore che specificano una convenzione non supportata su una determinata piattaforma vengono ignorate e viene utilizzata la convenzione predefinita della piattaforma.

Sulle piattaforme x86, quando vengono passati tutti gli argomenti vengono ampliati a 32 bit. I valori restituiti vengono estesi anche a 32 bit e vengono restituiti nel registro EAX, eccetto le strutture a 8 byte, che vengono restituite nella coppia di registri EDX:EAX. Le strutture di dimensioni maggiori vengono restituite nel registro EAX come puntatori alle strutture di ritorno nascoste. I parametri vengono inseriti nello stack da destra a sinistra. Le strutture che non sono POD non verranno restituite nei registri.

Il compilatore genera un codice di epilogo e di prologo per salvare e ripristinare i registri ESI, EDI, EBX e EBP, se sono utilizzati nella funzione.

> [!NOTE]
> Quando uno struct, un'unione o una classe vengono restituiti da una funzione per valore, tutte le definizioni del tipo devono essere uguali, altrimenti il programma può avere esito negativo in fase di esecuzione.

Per informazioni su come definire il codice di prologo e di epilogo della funzione, vedere [naked function calls](../cpp/naked-function-calls.md).

Per informazioni sulle convenzioni di chiamata predefinite nel codice destinato alle piattaforme x64, vedere [convenzione di chiamata x64](../build/x64-calling-convention.md). Per informazioni sui problemi relativi alle convenzioni di chiamata nel codice destinato alle piattaforme ARM, vedere [problemi comuni di migrazione di arm Visual C++](../build/common-visual-cpp-arm-migration-issues.md).

Le seguenti convenzioni di chiamata sono supportate dal compilatore Visual C/C++.

|Parola chiave|Pulizia dello stack|Passaggio dei parametri|
|-------------|-------------------|-----------------------|
|[__cdecl](../cpp/cdecl.md)|Chiamante|Inserisce i parametri nello stack in ordine inverso (da destra a sinistra)|
|[__clrcall](../cpp/clrcall.md)|n/d|Carica in ordine i parametri nello stack dell'espressione CLR (da sinistra a destra).|
|[__stdcall](../cpp/stdcall.md)|Chiamato|Inserisce i parametri nello stack in ordine inverso (da destra a sinistra)|
|[__fastcall](../cpp/fastcall.md)|Chiamato|Archiviati nei registri, quindi inseriti nello stack|
|[__thiscall](../cpp/thiscall.md)|Chiamato|Push eseguito nello stack; **`this`** puntatore archiviato in ECX|
|[__vectorcall](../cpp/vectorcall.md)|Chiamato|Archiviato nei registri, quindi sottoposto a push nello stack in ordine inverso (da destra a sinistra)|

Per informazioni correlate, vedere [convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
