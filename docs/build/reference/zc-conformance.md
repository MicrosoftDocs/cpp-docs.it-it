---
title: /Zc (Conformità)
ms.date: 03/06/2018
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: 4422524deab2a749c96d5e967bc3223d0c9c9873
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438665"
---
# <a name="zc-conformance"></a>/Zc (Conformità)

È possibile usare le opzioni del compilatore **/Zc** per specificare il comportamento del compilatore standard o specifico di Microsoft.

## <a name="syntax"></a>Sintassi

> **/Zc:** _Option_{,_Option_}

## <a name="remarks"></a>Osservazioni

Quando Visual Studio ha implementato un'estensione in C o C++ non compatibile con lo standard, è possibile usare un'opzione di conformità del `/Zc` per specificare un comportamento standard o specifico di Microsoft. Per alcune opzioni, il comportamento specifico di Microsoft è l'impostazione predefinita, per evitare modifiche di rilievo su larga scala nel codice esistente. In altri casi, l'impostazione predefinita è il comportamento standard, in cui i miglioramenti in sicurezza, prestazioni o compatibilità superano i costi delle modifiche di rilievo. L'impostazione predefinita di ogni opzione di conformità può variare nelle versioni più recenti di Visual Studio. Per ulteriori informazioni su ogni opzione di conformità, vedere l'argomento relativo all'opzione specifica. L'opzione del compilatore [/permissive-](permissive-standards-conformance.md) imposta in modo implicito le opzioni di conformità che non sono impostate per impostazione predefinita sull'impostazione conforme.

Queste sono le opzioni del compilatore `/Zc`:

|Opzione|Comportamento|
|---|---|
|[alignedNew\[-\]](zc-alignednew.md)|Abilitare l'allocazione dinamica allineata a C++ 17 (attivato per impostazione predefinita in C++ 17).|
|[\[automatica -\]](zc-auto-deduce-variable-type.md)|Applicare il nuovo significato C++ Standard per `auto` (abilitata per impostazione predefinita).|
|[__cplusplus\[-\]](zc-cplusplus.md)|Abilitare la macro **__cplusplus** per segnalare lo standard supportato (disattivato per impostazione predefinita).|
|[externConstexpr\[-\]](zc-externconstexpr.md)|Abilitare il collegamento esterno per le variabili `constexpr` (disattivato per impostazione predefinita).|
|[forScope\[-\]](zc-forscope-force-conformance-in-for-loop-scope.md)|Applicare le C++ regole di ambito `for` standard (abilitata per impostazione predefinita).|
|[implicitNoexcept\[-\]](zc-implicitnoexcept-implicit-exception-specifiers.md)|Abilitare la `noexcept` implicita sulle funzioni obbligatorie (attivato per impostazione predefinita).|
|[\[inline -\]](zc-inline-remove-unreferenced-comdat.md)|Rimuovere la funzione o i dati senza riferimenti se è COMDAT o ha solo un collegamento interno (disattivato per impostazione predefinita).|
|[noexceptTypes\[-\]](zc-noexcepttypes.md)|Applicare le regole noexcept di C++ 17 (abilitata per impostazione predefinita in C++ 17 o versioni successive).|
|[riferimento\[-\]](zc-referencebinding-enforce-reference-binding-rules.md)|Un tipo definito dall'utente temporaneo non viene associato a un riferimento lvalue non const (disattivato per impostazione predefinita).|
|[rvalueCast\[-\]](zc-rvaluecast-enforce-type-conversion-rules.md)|Applicare regole C++ di conversione del tipo esplicito standard (disattivato per impostazione predefinita).|
|[sizedDealloc\[-\]](zc-sizeddealloc-enable-global-sized-dealloc-functions.md)|Abilitare le funzioni di deallocazione delle dimensioni globali di C++ 14 (attivato per impostazione predefinita).|
|[strictStrings\[-\]](zc-strictstrings-disable-string-literal-type-conversion.md)|Disabilitare stringa-valore letterale per `char*` o `wchar_t*` conversione (disattivata per impostazione predefinita).|
|[\[ternari -\]](zc-ternary.md)|Applicare le regole di operatore condizionale sui tipi di operando (disattivato per impostazione predefinita).|
|[threadSafeInit\[-\]](zc-threadsafeinit-thread-safe-local-static-initialization.md)|Abilitare l'inizializzazione statica locale thread-safe (attivato per impostazione predefinita).|
|[throwingNew\[-\]](zc-throwingnew-assume-operator-new-throws.md)|Si supponga `operator new` genera un'eccezione in caso di errore (disattivato per impostazione predefinita).|
|[trigrammi\[-\]](zc-trigraphs-trigraphs-substitution.md)|Abilitare i trigrammi (obsoleto, disattivato per impostazione predefinita).|
|[twoPhase](zc-twophase.md)|Utilizzare il comportamento di analisi del modello non conforme (conforme per impostazione predefinita).|
|[wchar_t\[-\]](zc-wchar-t-wchar-t-is-native-type.md)|`wchar_t` è un tipo nativo, non un typedef (per impostazione predefinita).|

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
