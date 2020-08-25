---
title: Parole chiave C
ms.date: 10/09/2018
helpviewer_keywords:
- keywords [C]
- redefining keywords
- Microsoft-specific keywords
ms.assetid: 2d932335-97bf-45cd-b367-4ae00db0ff42
ms.openlocfilehash: 1b49da349a6552022dfd9e8e66e85634f4694645
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88838776"
---
# <a name="c-keywords"></a>Parole chiave C

Le parole chiave sono parole con significato particolare per il compilatore C. Nelle fasi di conversione 7 e 8 un identificatore non può avere la stessa ortografia e gli stessi caratteri maiuscoli/minuscoli di una parola chiave C. (Vedere una descrizione delle [fasi di conversione](../preprocessor/phases-of-translation.md) nella Guida di *riferimento al preprocessore*. per informazioni sugli identificatori, vedere [identificatori](../c-language/c-identifiers.md).) Il linguaggio C usa le parole chiave seguenti:

:::row:::
    :::column:::
        **`auto`**\
        **`double`**\
        **`int`**\
        **`struct`**\
        **`break`**\
        **`else`**\
        **`long`**\
        **`switch`**
    :::column-end:::
    :::column:::
        **`case`**\
        **`enum`**\
        **`register`**\
        **`typedef`**\
        **`char`**\
        **`extern`**\
        **`return`**\
        **`union`**
    :::column-end:::
    :::column:::
        **`const`**\
        **`float`**\
        **`short`**\
        **`unsigned`**\
        **`continue`**\
        **`for`**\
        **`signed`**\
        **`void`**
    :::column-end:::
    :::column:::
        **`default`**\
        **`goto`**\
        **`sizeof`**\
        **`volatile`**\
        **`do`**\
        **`if`**\
        **`static`**\
        **`while`**
    :::column-end:::
:::row-end:::

Non è possibile ridefinire le parole chiave. È possibile tuttavia specificare il testo da sostituire alle parole chiave prima della compilazione tramite le [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) C.

**Specifico di Microsoft**

Lo standard ANSI C consente agli identificatori con due caratteri di sottolineatura iniziali di essere riservati per le implementazioni del compilatore. Di conseguenza, la convenzione di Microsoft consiste nel far precedere i nomi delle parole chiave specifiche di Microsoft da un doppio carattere di sottolineatura. Queste parole non possono essere usate come nomi di identificatori. Per una descrizione delle regole ANSI per la denominazione degli identificatori, incluso l'uso del doppio carattere di sottolineatura, vedere [Identificatori](../c-language/c-identifiers.md).

Le parole chiave e gli identificatori speciali seguenti sono riconosciuti dal compilatore C Microsoft:

:::row:::
    :::column:::
        **`__asm`**<sup>3</sup>\
        **`dllimport`**<sup>2</sup>\
        **`__int8`**<sup>3</sup>\
        **`naked`**<sup>2</sup>\
        **`__based`**<sup>1, 3</sup>
    :::column-end:::
    :::column:::
        **`__except`**<sup>3</sup>\
        **`__int16`**<sup>3</sup>\
        **`__stdcall`**<sup>3</sup>\
        **`__cdecl`**<sup>3</sup>\
        **`__fastcall`**
    :::column-end:::
    :::column:::
        **`__int32`**<sup>3</sup>\
        **`thread`**<sup>2</sup>\
        **`__declspec`**<sup>3</sup>\
        **`__finally`**<sup>3</sup>\
        **`__int64`**<sup>3</sup>
    :::column-end:::
    :::column:::
        **`__try`**<sup>3</sup>\
        **`dllexport`**<sup>2</sup>\
        **`__inline`**<sup>3</sup>\
        **`__leave`**<sup>3</sup>
    :::column-end:::
:::row-end:::

<sup>1</sup> la **`__based`** parola chiave ha usi limitati per le compilazioni di destinazione a 32 bit e a 64 bit.

<sup>2</sup> si tratta di identificatori speciali se usati con **`__declspec`** ; l'uso in altri contesti non è limitato.

<sup>3</sup> Per garantire la compatibilità con le versioni precedenti, queste parole chiave sono disponibili sia con due caratteri di sottolineatura iniziali sia con un singolo carattere di sottolineatura iniziale quando sono abilitate le estensioni Microsoft.

Le estensioni Microsoft sono attivate per impostazione predefinita. Per assicurarsi che i programmi siano completamente portabili, è possibile disabilitare le estensioni Microsoft specificando l'opzione [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) durante la compilazione. In questo caso, vengono disabilitate alcune parole chiave specifiche di Microsoft.

Quando le estensioni Microsoft sono abilitate, è possibile utilizzare le parole chiave elencate in precedenza nei programmi. Per la compatibilità ANSI, la maggior parte di tali parole chiave è preceduta da un doppio carattere di sottolineatura. Le quattro eccezioni,,, **`dllexport`** **`dllimport`** **`naked`** e **`thread`** , vengono utilizzate solo con **`__declspec`** e pertanto non richiedono un doppio carattere di sottolineatura. Ai fini della compatibilità con le versioni precedenti, sono supportate le versioni con singolo carattere di sottolineatura delle parole chiave rimanenti.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Elementi di C](../c-language/elements-of-c.md)
