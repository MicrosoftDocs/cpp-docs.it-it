---
title: Parole chiave C
description: Parole chiave nelle estensioni standard C e del compilatore C Microsoft.
ms.date: 12/8/2020
helpviewer_keywords:
- keywords [C]
- redefining keywords
- Microsoft-specific keywords
ms.openlocfilehash: 1bcef118881a0596406d6ff455dd453220ff81c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300380"
---
# <a name="c-keywords"></a>Parole chiave C

Le *parole chiave* sono parole con un significato speciale per il compilatore C. Nelle fasi 7 e 8 della traduzione un identificatore non può avere la stessa ortografia e la stessa combinazione di maiuscole e minuscole della parola chiave C. Per altre informazioni, vedere [fasi di conversione](../preprocessor/phases-of-translation.md) in *riferimenti al preprocessore*. Per ulteriori informazioni sugli identificatori, vedere [identificatori](../c-language/c-identifiers.md).

## <a name="standard-c-keywords"></a>Parole chiave C standard

Nel linguaggio C vengono utilizzate le parole chiave seguenti:

:::row:::
    :::column:::
        **`auto`**\
        **`break`**\
        **`case`**\
        **`char`**\
        **`const`**\
        **`continue`**\
        **`default`**\
        **`do`**\
        **`double`**\
        **`else`**\
        **`enum`**
    :::column-end:::
    :::column:::
        **`extern`**\
        **`float`**\
        **`for`**\
        **`goto`**\
        **`if`**\
        **`inline`**<sup>1, a</sup>\
        **`int`**\
        **`long`**\
        **`register`**\
        **`restrict`**<sup>1, a</sup>\
        **`return`**
    :::column-end:::
    :::column:::
        **`short`**\
        **`signed`**\
        **`sizeof`**\
        **`static`**\
        **`struct`**\
        **`switch`**\
        **`typedef`**\
        **`union`**\
        **`unsigned`**\
        **`void`**\
        **`volatile`**
    :::column-end:::
    :::column:::
        **`while`**\
        **`_Alignas`**<sup>2, a</sup>\
        **`_Alignof`**<sup>2, a</sup>\
        **`_Atomic`**<sup>2, b</sup>\
        **`_Bool`**<sup>1, a</sup>\
        **`_Complex`**<sup>1, b</sup>\
        **[`_Generic`](generic_selection.md)**<sup>2, a</sup>\
        **`_Imaginary`**<sup>1, b</sup>\
        **`_Noreturn`**<sup>2, a</sup>\
        **`_Static_assert`**<sup>2, a</sup>\
        **`_Thread_local`**<sup>2, b</sup>
    :::column-end:::
:::row-end:::

<sup>1</sup>  parole chiave introdotte in C99 ISO.

<sup>2</sup>   parole chiave introdotte in ISO C11.

<sup>a partire da</sup>  Visual Studio 2019 versione 16,8, queste parole chiave sono supportate nel codice compilato come C quando **`/std:c11`** **`/std:c17`** si specificano le opzioni del compilatore o.

<sup>b</sup>  a partire da Visual Studio 2019 versione 16,8, queste parole chiave vengono riconosciute ma non supportate dal compilatore nel codice compilato come C **`/std:c11`** quando **`/std:c17`** si specificano le opzioni del compilatore o.

Non è possibile ridefinire le parole chiave. Tuttavia, è possibile specificare il testo per sostituire le parole chiave prima della compilazione usando le [direttive per il preprocessore](../preprocessor/preprocessor-directives.md)C.

## <a name="microsoft-specific-c-keywords"></a>Parole chiave C specifiche di Microsoft

Gli standard ANSI e ISO C consentono agli identificatori con due caratteri di sottolineatura iniziali di essere riservati per le implementazioni del compilatore. La convenzione Microsoft prevede di precedere i nomi delle parole chiave specifiche di Microsoft con due caratteri di sottolineatura. Queste parole non possono essere usate come nomi di identificatori. Per una descrizione delle regole per la denominazione degli identificatori, incluso l'uso di due caratteri di sottolineatura, vedere [identificatori](../c-language/c-identifiers.md).

Le parole chiave e gli identificatori speciali seguenti sono riconosciuti dal compilatore C Microsoft:

:::row:::
    :::column:::
        **`__asm`**<sup>5</sup>\
        **`__based`**<sup>3, 5</sup>\
        **`__cdecl`**<sup>5</sup>\
        **`__declspec`**<sup>5</sup>\
        **`__except`**<sup>5</sup>\
        **`__fastcall`**\
        **`__finally`**<sup>5</sup>
    :::column-end:::
    :::column:::
        **`__inline`**<sup>5</sup>\
        **`__int16`**<sup>5</sup>\
        **`__int32`**<sup>5</sup>\
        **`__int64`**<sup>5</sup>\
        **`__int8`**<sup>5</sup>\
        **`__leave`**<sup>5</sup>\
        **`__restrict`**
    :::column-end:::
    :::column:::
        **`__stdcall`**<sup>5</sup>\
        **`__try`**<sup>5</sup>\
        **`dllexport`**<sup>4</sup>\
        **`dllimport`**<sup>4</sup>\
        **`naked`**<sup>4</sup>\
        **`static_assert`**<sup>6</sup>\
        **`thread`**<sup>4</sup>
    :::column-end:::
:::row-end:::

<sup>3</sup> la **`__based`** parola chiave ha usi limitati per le compilazioni di destinazione a 32 bit e a 64 bit.

<sup>4</sup> si tratta di identificatori speciali se usati con. **`__declspec`** l'uso in altri contesti non è limitato.

<sup>5</sup> per compatibilità con le versioni precedenti, queste parole chiave sono disponibili con due caratteri di sottolineatura iniziali e un singolo carattere di sottolineatura principale quando le estensioni Microsoft sono abilitate.

<sup>6</sup> se non si include <> Assert. h, il compilatore Microsoft Visual C esegue **`static_assert`** il mapping alla **`_Static_assert`** parola chiave C11.

Le estensioni Microsoft sono attivate per impostazione predefinita. Per semplificare la creazione di codice portabile, è possibile disabilitare le estensioni Microsoft specificando l'opzione [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) durante la compilazione. Quando si usa questa opzione, alcune parole chiave specifiche di Microsoft sono disabilitate.

Quando le estensioni Microsoft sono abilitate, è possibile utilizzare le parole chiave elencate in precedenza nei programmi. Per la conformità agli standard, la maggior parte di queste parole chiave è preceduta da un doppio carattere di sottolineatura. Le quattro eccezioni,,, **`dllexport`** **`dllimport`** **`naked`** e **`thread`** , vengono utilizzate solo con **`__declspec`** e non richiedono un doppio carattere di sottolineatura iniziali. Ai fini della compatibilità con le versioni precedenti, sono supportate le versioni con singolo carattere di sottolineatura delle parole chiave rimanenti.

## <a name="see-also"></a>Vedi anche

[Elementi di C](../c-language/elements-of-c.md)
