---
title: /Zc (Conformità)
ms.date: 03/06/2018
f1_keywords:
- /zc
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: e24dd53f9c805f57ce974a81a4963434f1868095
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57821209"
---
# <a name="zc-conformance"></a>/Zc (Conformità)

È possibile usare la **/Zc** opzioni del compilatore per specificare il comportamento del compilatore standard o specifico di Microsoft.

## <a name="syntax"></a>Sintassi

> **/Zc:**_option_{,_option_}

## <a name="remarks"></a>Note

Quando Visual Studio ha implementato un'estensione C o C++ che non è compatibile con lo standard, è possibile usare un `/Zc` opzione della conformità per specificare il comportamento conforme a standard o specifico di Microsoft. Per alcune opzioni, il comportamento specifico di Microsoft è l'impostazione predefinita, per impedire modifiche di rilievo su larga scala al codice esistente. In altri casi, il valore predefinito è il comportamento standard, in cui i miglioramenti in sicurezza, prestazioni o compatibilità superano i costi delle modifiche di rilievo. L'impostazione predefinita di ogni opzione di conformità può cambiare nelle versioni più recenti di Visual Studio. Per altre informazioni su ogni opzione di conformità, vedere l'argomento per l'opzione specifica. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione del compilatore imposta in modo implicito le opzioni di conformità non sono impostate per impostazione predefinita per l'impostazione di conformità.

Questi sono i `/Zc` opzioni del compilatore:

|Opzione|Comportamento|
|---|---|
|[alignedNew\[-\]](zc-alignednew.md)|Abilita C + + 17 eccessiva dinamica allocazione allineata (attivato per impostazione predefinita in C + + 17).|
|[auto\[-\]](zc-auto-deduce-variable-type.md)|Applicare il nuovo significato di C++ Standard per `auto` (su per impostazione predefinita).|
|[__cplusplus\[-\]](zc-cplusplus.md)|Abilitare la **cplusplus** macro per segnalare lo standard supportato (disattivato per impostazione predefinita).|
|[externConstexpr\[-\]](zc-externconstexpr.md)|Abilitare il collegamento esterno per `constexpr` variabili (disattivato per impostazione predefinita).|
|[forScope\[-\]](zc-forscope-force-conformance-in-for-loop-scope.md)|Imporre Standard di C++ `for` regole di ambito (in per impostazione predefinita).|
|[implicitNoexcept\[-\]](zc-implicitnoexcept-implicit-exception-specifiers.md)|Abilita implicita `noexcept` su funzioni obbligatorie (su per impostazione predefinita).|
|[inline\[-\]](zc-inline-remove-unreferenced-comdat.md)|Rimuovi funzione senza riferimenti o i dati se è COMDAT o include un solo collegamento interno (disattivato per impostazione predefinita).|
|[noexceptTypes\[-\]](zc-noexcepttypes.md)|Imporre C regole noexcept c++17 (su per impostazione predefinita in c++17 o versioni successive).|
|[referenceBinding\[-\]](zc-referencebinding-enforce-reference-binding-rules.md)|Una variabile temporanea tipo definito dall'utente non consente il binding a un riferimento lvalue non costante (disattivato per impostazione predefinita).|
|[rvalueCast\[-\]](zc-rvaluecast-enforce-type-conversion-rules.md)|Applicare le regole di conversione esplicita di tipi C++ Standard (disattivato per impostazione predefinita).|
|[sizedDealloc\[-\]](zc-sizeddealloc-enable-global-sized-dealloc-functions.md)|Abilita C + + 14 deallocazione dimensionata globali funzioni (su per impostazione predefinita).|
|[strictStrings\[-\]](zc-strictstrings-disable-string-literal-type-conversion.md)|Valore letterale stringa a Disable `char*` o `wchar_t*` conversione (disattivato per impostazione predefinita).|
|[ternary\[-\]](zc-ternary.md)|Applicare le regole dell'operatore condizionale nei tipi di operando (disattivato per impostazione predefinita).|
|[threadSafeInit\[-\]](zc-threadsafeinit-thread-safe-local-static-initialization.md)|Abilitare l'inizializzazione statica locale thread-safe (su per impostazione predefinita).|
|[throwingNew\[-\]](zc-throwingnew-assume-operator-new-throws.md)|Si supponga `operator new` genera un'eccezione in caso di errore (disattivato per impostazione predefinita).|
|[trigraphs\[-\]](zc-trigraphs-trigraphs-substitution.md)|Abilita i trigrammi (obsoleti, disattivata per impostazione predefinita).|
|[twoPhase-](zc-twophase.md)|Usare il modello di sospettate analisi del comportamento (conforme per impostazione predefinita).|
|[wchar_t\[-\]](zc-wchar-t-wchar-t-is-native-type.md)|`wchar_t` è un tipo nativo, non un typedef (su per impostazione predefinita).|

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
