---
title: /Zc (Conformità)
description: Le opzioni del compilatore di conformità/ZC abilitano o disabilitano il supporto per il comportamento compatibile con le versioni precedenti.
ms.date: 09/10/2020
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: 13e06cd75f1ee684c2ee1ad6239aeb77b805675e
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041523"
---
# <a name="zc-conformance"></a>`/Zc` Conformità

È possibile usare le **`/Zc`** Opzioni del compilatore per specificare il comportamento del compilatore standard o specifico di Microsoft.

## <a name="syntax"></a>Sintassi

> **`/Zc:`**_opzione_{,_opzione_}

## <a name="remarks"></a>Commenti

Quando Visual Studio ha implementato un'estensione in C o C++ non compatibile con lo standard, è possibile usare un' **`/Zc`** opzione di conformità per specificare un comportamento standard o specifico di Microsoft. Per alcune opzioni, il comportamento specifico di Microsoft è l'impostazione predefinita, per evitare modifiche di rilievo su larga scala nel codice esistente. In altri casi, l'impostazione predefinita è il comportamento standard, in cui i miglioramenti in sicurezza, prestazioni o compatibilità superano i costi delle modifiche di rilievo. L'impostazione predefinita di ogni opzione di conformità può variare nelle versioni più recenti di Visual Studio. Per ulteriori informazioni su ogni opzione di conformità, vedere l'argomento relativo all'opzione specifica. L' [`/permissive-`](permissive-standards-conformance.md) opzione del compilatore imposta in modo implicito le opzioni di conformità che non sono impostate per impostazione predefinita sull'impostazione conforme.

Queste sono le **`/Zc`** Opzioni del compilatore:

| Opzione | Comportamento |
|--|--|
| [`/Zc:alignedNew`](zc-alignednew.md) | Abilitare l'allocazione dinamica allineata a C++ 17 (attivato per impostazione predefinita in C++ 17). |
| [`/Zc:auto`](zc-auto-deduce-variable-type.md) | Applicare il nuovo significato C++ standard per **`auto`** (on per impostazione predefinita). |
| [`/Zc__cplusplus`](zc-cplusplus.md) | Abilitare la `__cplusplus` macro per segnalare lo standard supportato (disattivato per impostazione predefinita). |
| [`/Zc:externConstexpr`](zc-externconstexpr.md) | Abilitare il collegamento esterno per le **`constexpr`** variabili (disattivato per impostazione predefinita). |
| [`/Zc:forScope`](zc-forscope-force-conformance-in-for-loop-scope.md) | Applicare **`for`** le regole di ambito C++ standard (abilitata per impostazione predefinita). |
| [`/ZcimplicitNoexcept`](zc-implicitnoexcept-implicit-exception-specifiers.md) | Abilitare implicito **`noexcept`** sulle funzioni obbligatorie (attivato per impostazione predefinita). |
| [`/Zc:inline`](zc-inline-remove-unreferenced-comdat.md) | Rimuovere la funzione o i dati senza riferimenti se è COMDAT o ha solo un collegamento interno (disattivato per impostazione predefinita). |
| [`/Zc:noexceptTypes`](zc-noexcepttypes.md) | Applicare le regole C++ 17 (abilitata **`noexcept`** per impostazione predefinita in c++ 17 o versioni successive). |
| [`/Zc:preprocessor`](zc-preprocessor.md) | Usare il nuovo preprocessore conforme (disattivato per impostazione predefinita, ad eccezione di C11/C17). |
| [`/Zc:referenceBinding`](zc-referencebinding-enforce-reference-binding-rules.md) | Un tipo definito dall'utente temporaneo non viene associato a un riferimento lvalue non const (disattivato per impostazione predefinita). |
| [`/Zc:rvalueCast`](zc-rvaluecast-enforce-type-conversion-rules.md) | Applicare regole di conversione dei tipi esplicite C++ standard (disattivato per impostazione predefinita). |
| [`/Zc:sizedDealloc`](zc-sizeddealloc-enable-global-sized-dealloc-functions.md) | Abilitare le funzioni di deallocazione delle dimensioni globali di C++ 14 (attivato per impostazione predefinita). |
| [`/Zc:strictStrings`](zc-strictstrings-disable-string-literal-type-conversion.md) | Disabilitare stringa-valore letterale `char*` o `wchar_t*` conversione (disattivata per impostazione predefinita). |
| [`/Zc:ternary`](zc-ternary.md) | Applicare le regole di operatore condizionale sui tipi di operando (disattivato per impostazione predefinita). |
| [`/Zc:threadSafeInit`](zc-threadsafeinit-thread-safe-local-static-initialization.md) | Abilitare l'inizializzazione statica locale thread-safe (attivato per impostazione predefinita). |
| [`/Zc:throwingNew`](zc-throwingnew-assume-operator-new-throws.md) | Si supponga che venga **`operator new`** generato in caso di errore (disattivato per impostazione predefinita). |
| [`/Zc:trigraphs`](zc-trigraphs-trigraphs-substitution.md) | Abilitare i trigrammi (obsoleto, disattivato per impostazione predefinita). |
| [`/Zc:twoPhase`](zc-twophase.md) | Utilizzare il comportamento di analisi del modello non conforme (conforme per impostazione predefinita). |
| [`/Zc:wchar_t`](zc-wchar-t-wchar-t-is-native-type.md) | **`wchar_t`** è un tipo nativo, non un typedef (per impostazione predefinita). |

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
