---
title: /Zc (Conformità)
description: Le opzioni del compilatore di conformità/ZC abilitano o disabilitano il supporto per il comportamento compatibile con le versioni precedenti.
ms.date: 01/23/2021
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.openlocfilehash: 066e6712b07dbc28e88a7e01a5055dab90289326
ms.sourcegitcommit: 74e58bee5cffb30b66e17be6dbfde2544369638e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2021
ms.locfileid: "98763887"
---
# <a name="zc-conformance"></a>`/Zc` Conformità

È possibile usare le **`/Zc`** Opzioni del compilatore per specificare il comportamento del compilatore standard o specifico di Microsoft.

## <a name="syntax"></a>Sintassi

> **`/Zc:`**_opzione_{,_Option_ ...}

È possibile impostare più **`/Zc`** opzioni separate da virgole in una singola **`/Zc`** opzione del compilatore. Se un' **`/Zc`** opzione è abilitata e disabilitata nello stesso comando, viene utilizzata l'opzione che viene visualizzata per ultima.

## <a name="remarks"></a>Osservazioni

Quando Visual Studio ha implementato un'estensione in C o C++ non compatibile con lo standard, è possibile usare un' **`/Zc`** opzione di conformità per specificare un comportamento standard o specifico di Microsoft. Per alcune opzioni, il comportamento specifico di Microsoft è l'impostazione predefinita, per evitare modifiche di rilievo su larga scala nel codice esistente. In altri casi, l'impostazione predefinita è il comportamento standard, in cui i miglioramenti in sicurezza, prestazioni o compatibilità superano i costi delle modifiche di rilievo. L'impostazione predefinita di ogni opzione di conformità può variare nelle versioni più recenti di Visual Studio. Per ulteriori informazioni su ogni opzione di conformità, vedere l'articolo relativo all'opzione specifica. L' [`/permissive-`](permissive-standards-conformance.md) opzione del compilatore imposta in modo implicito le opzioni di conformità che non sono impostate per impostazione predefinita sulle impostazioni di conformità.

Ecco le **`/Zc`** Opzioni del compilatore:

| Opzione | Comportamento |
|--|--|
| [`/Zc:alignedNew`](zc-alignednew.md) | Abilitare l'allocazione dinamica allineata a C++ 17 (attivato per impostazione predefinita in C++ 17). |
| [`/Zc:auto`](zc-auto-deduce-variable-type.md) | Applicare il nuovo significato C++ standard per **`auto`** (on per impostazione predefinita). |
| [`/Zc:__cplusplus`](zc-cplusplus.md) | Abilitare la `__cplusplus` macro per segnalare lo standard supportato (disattivato per impostazione predefinita). |
| [`/Zc:externConstexpr`](zc-externconstexpr.md) | Abilitare il collegamento esterno per le **`constexpr`** variabili (disattivato per impostazione predefinita). |
| [`/Zc:forScope`](zc-forscope-force-conformance-in-for-loop-scope.md) | Applicare **`for`** le regole di ambito C++ standard (abilitata per impostazione predefinita). |
| [`/Zc:hiddenFriend`](zc-hiddenfriend.md) | Imponi regole friend C++ nascoste standard (implicite da **`/permissive-`** ) |
| [`/Zc:implicitNoexcept`](zc-implicitnoexcept-implicit-exception-specifiers.md) | Abilitare implicito **`noexcept`** sulle funzioni obbligatorie (attivato per impostazione predefinita). |
| [`/Zc:inline`](zc-inline-remove-unreferenced-comdat.md) | Rimuovere le funzioni o i dati senza riferimenti se sono COMDAT o hanno solo collegamento interno (disattivato per impostazione predefinita). |
| [`/Zc:noexceptTypes`](zc-noexcepttypes.md) | Applicare le regole C++ 17 (abilitata **`noexcept`** per impostazione predefinita in c++ 17 o versioni successive). |
| [`/Zc:preprocessor`](zc-preprocessor.md) | Usare il nuovo preprocessore conforme (disattivato per impostazione predefinita, ad eccezione di C11/C17). |
| [`/Zc:referenceBinding`](zc-referencebinding-enforce-reference-binding-rules.md) | Un tipo definito dall'utente temporaneo non verrà associato a un riferimento lvalue non const (disattivato per impostazione predefinita). |
| [`/Zc:rvalueCast`](zc-rvaluecast-enforce-type-conversion-rules.md) | Applicare regole di conversione dei tipi esplicite C++ standard (disattivato per impostazione predefinita). |
| [`/Zc:sizedDealloc`](zc-sizeddealloc-enable-global-sized-dealloc-functions.md) | Abilitare le funzioni di deallocazione delle dimensioni globali di C++ 14 (attivato per impostazione predefinita). |
| [`/Zc:strictStrings`](zc-strictstrings-disable-string-literal-type-conversion.md) | Disabilitare stringa-valore letterale `char*` o `wchar_t*` conversione (disattivata per impostazione predefinita). |
| [`/Zc:ternary`](zc-ternary.md) | Applicare le regole di operatore condizionale sui tipi di operando (disattivato per impostazione predefinita). |
| [`/Zc:threadSafeInit`](zc-threadsafeinit-thread-safe-local-static-initialization.md) | Abilitare l'inizializzazione statica locale thread-safe (attivato per impostazione predefinita). |
| [`/Zc:throwingNew`](zc-throwingnew-assume-operator-new-throws.md) | Si supponga che venga **`operator new`** generato in caso di errore (disattivato per impostazione predefinita). |
| [`/Zc:trigraphs`](zc-trigraphs-trigraphs-substitution.md) | Abilitare i trigrammi (obsoleto, disattivato per impostazione predefinita). |
| [`/Zc:twoPhase`](zc-twophase.md) | Utilizzare il comportamento di analisi del modello non conforme (conforme per impostazione predefinita). |
| [`/Zc:wchar_t`](zc-wchar-t-wchar-t-is-native-type.md) | **`wchar_t`** è un tipo nativo, non un typedef (per impostazione predefinita). |

Per ulteriori informazioni sui problemi di conformità in MSVC, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
