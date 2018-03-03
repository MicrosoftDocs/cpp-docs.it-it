---
title: "-Zc (conformità) | Documenti Microsoft"
ms.custom: 
ms.date: 9/29/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /zc
dev_langs:
- C++
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ba64cf2e866579b3377e57445c98eb9a436a1edd
ms.sourcegitcommit: ef2a263e193410782c6dfe47d00764263439537c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/17/2018
---
# <a name="zc-conformance"></a>/Zc (Conformità)

È possibile utilizzare il **/Zc** opzioni del compilatore per specificare il comportamento del compilatore standard o specifico di Microsoft.

## <a name="syntax"></a>Sintassi

> /Zc:_option_{,_option_}

## <a name="remarks"></a>Note

Quando Visual Studio ha implementato un'estensione C o C++ che non è compatibile con lo standard, è possibile utilizzare un `/Zc` opzione di conformità per specificare il comportamento conforme a standard o specifico di Microsoft. Per alcune opzioni, il comportamento specifico di Microsoft è l'impostazione predefinita, per evitare modifiche di rilievo su larga scala per il codice esistente. In altri casi, il valore predefinito è il comportamento standard, in cui i miglioramenti in sicurezza, prestazioni o compatibilità superano ai costi delle modifiche di rilievo. L'impostazione predefinita di ogni opzione di conformità potrebbe cambiare nelle versioni più recenti di Visual Studio. Per ulteriori informazioni su ogni opzione di conformità, vedere l'argomento per l'opzione specifica.

Si tratta di `/Zc` opzioni del compilatore:

|Opzione|Comportamento|
|---|---|
|[alignedNew\[-\]](zc-alignednew.md)|Abilitare C++ 17 eccessiva dinamica allocazione allineata (attivato per impostazione predefinita in C++ 17).|
|[auto\[-\]](zc-auto-deduce-variable-type.md)|Applicare il nuovo significato di C++ Standard per `auto` (in per impostazione predefinita).|
|[externConstexpr\[-\]](zc-externconstexpr.md)|Abilitare il collegamento esterno per `constexpr` variabili (disattivato per impostazione predefinita).|
|[forScope\[-\]](zc-forscope-force-conformance-in-for-loop-scope.md)|Impone C++ Standard `for` regole di ambito (in per impostazione predefinita).|
|[implicitNoexcept\[-\]](zc-implicitnoexcept-implicit-exception-specifiers.md)|Abilita implicita `noexcept` su funzioni obbligatorie (in per impostazione predefinita).|
|[inline\[-\]](zc-inline-remove-unreferenced-comdat.md)|Rimuovere la funzione senza riferimento o i dati se è COMDAT oppure contiene un solo collegamento interno (disattivato per impostazione predefinita).|
|[noexceptTypes\[-\]](zc-noexcepttypes.md)|Imporle C++ 17 noexcept (in per impostazione predefinita in C++ 17 o versione successiva).|
|[referenceBinding\[-\]](zc-referencebinding-enforce-reference-binding-rules.md)|Temporaneo di tipo definito dall'utente non verrà associato a un riferimento lvalue non costante (disattivato per impostazione predefinita).|
|[rvalueCast\[-\]](zc-rvaluecast-enforce-type-conversion-rules.md)|Applicare le regole di conversione esplicita di tipi Standard di C++ (disattivato per impostazione predefinita).|
|[sizedDealloc\[-\]](zc-sizeddealloc-enable-global-sized-dealloc-functions.md)|Abilitare C++ 14 deallocazione con dimensione globale funzioni (in per impostazione predefinita).|
|[strictStrings\[-\]](zc-strictstrings-disable-string-literal-type-conversion.md)|Valore letterale stringa a Disable `char*` o `wchar_t*` conversione (disattivato per impostazione predefinita).|
|[ternary\[-\]](zc-ternary.md)|Applicare le regole sui tipi di operando dell'operatore condizionale (disattivato per impostazione predefinita).|
|[threadSafeInit\[-\]](zc-threadsafeinit-thread-safe-local-static-initialization.md)|Abilitare l'inizializzazione statica locale thread-safe (in per impostazione predefinita).|
|[throwingNew\[-\]](zc-throwingnew-assume-operator-new-throws.md)|Si supponga `operator new` genera un'eccezione in caso di errore (disattivato per impostazione predefinita).|
|[trigraphs\[-\]](zc-trigraphs-trigraphs-substitution.md)|Abilita i trigrammi (obsoleti, disattivata per impostazione predefinita).|
|[wchar_t\[-\]](zc-wchar-t-wchar-t-is-native-type.md)|`wchar_t`è un tipo nativo, non un typedef (in per impostazione predefinita).|

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](compiler-options.md)  
[Impostazione delle opzioni del compilatore](setting-compiler-options.md)
