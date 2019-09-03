---
title: Direttive pragma e parola chiave __pragma
ms.date: 08/29/2019
f1_keywords:
- '#pragma'
helpviewer_keywords:
- '#pragma directives, C/C++'
- __pragma keyword
- pragma directives, C/C++
- pragmas, C/C++
- preprocessor
- pragmas
- preprocessor, pragmas
- pragma directives (#pragma)
ms.assetid: 9867b438-ac64-4e10-973f-c3955209873f
ms.openlocfilehash: 2cf075e4ff8049593a1e77c5d2c1c259b224877b
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222295"
---
# <a name="pragma-directives-and-the-__pragma-keyword"></a>Direttive pragma e parola chiave __pragma

Le direttive pragma specificano funzionalità del compilatore specifiche del computer o del sistema operativo. La parola chiave **__pragma** , che è specifica del compilatore Microsoft, consente di codificare le direttive pragma all'interno delle definizioni di macro.

## <a name="syntax"></a>Sintassi

> **#pragma** *stringa di token*\
> **__pragma (** *token-String* **)**

## <a name="remarks"></a>Note

Ogni implementazione di C e C++ supporta alcune funzionalità esclusive del computer host o del sistema operativo di utilizzo. Alcuni programmi, ad esempio, devono esercitare un controllo preciso sulla posizione dei dati in memoria o controllare il modo in cui determinate funzioni ricevono parametri. Le direttive **#pragma** consentono a ogni compilatore di offrire funzionalità specifiche del sistema operativo e del computer, mantenendo al tempo stesso la compatibilità complessiva con i linguaggi C++ C e.

I pragma sono specifici del computer o del sistema operativo per definizione e sono in genere diversi per ogni compilatore. I pragma possono essere usati nelle direttive condizionali, per fornire nuove funzionalità del preprocessore o per fornire al compilatore informazioni definite dall'implementazione.

La *stringa di token* è una serie di caratteri che fornisce una specifica istruzione del compilatore e gli eventuali argomenti. Il simbolo di cancelletto ( **#** ) deve essere il primo carattere diverso da uno spazio vuoto nella riga che contiene il pragma. Gli spazi vuoti possono separare il simbolo di cancelletto e la parola "pragma". Dopo **#pragma**, scrivere il testo che il convertitore può analizzare come token di pre-elaborazione. L'argomento da **#pragma** è soggetto all'espansione della macro.

Il compilatore genera un avviso quando rileva un pragma che non riconosce e continua la compilazione.

I compilatori Microsoft C e C++ riconoscono i seguenti pragma:

||||
|-|-|-|
|[alloc_text](../preprocessor/alloc-text.md)|[auto_inline](../preprocessor/auto-inline.md)|[bss_seg](../preprocessor/bss-seg.md)|
|[check_stack](../preprocessor/check-stack.md)|[code_seg](../preprocessor/code-seg.md)|[comment](../preprocessor/comment-c-cpp.md)|
|[component](../preprocessor/component.md)|[conform](../preprocessor/conform.md) <sup>1</sup>|[const_seg](../preprocessor/const-seg.md)|
|[data_seg](../preprocessor/data-seg.md)|[deprecated](../preprocessor/deprecated-c-cpp.md)|[detect_mismatch](../preprocessor/detect-mismatch.md)|
|[fenv_access](../preprocessor/fenv-access.md)|[float_control](../preprocessor/float-control.md)|[fp_contract](../preprocessor/fp-contract.md)|
|[function](../preprocessor/function-c-cpp.md)|[hdrstop](../preprocessor/hdrstop.md)|[include_alias](../preprocessor/include-alias.md)|
|[init_seg](../preprocessor/init-seg.md) <sup>1</sup>|[inline_depth](../preprocessor/inline-depth.md)|[inline_recursion](../preprocessor/inline-recursion.md)|
|[intrinsic](../preprocessor/intrinsic.md)|[loop](../preprocessor/loop.md) <sup>1</sup>|[make_public](../preprocessor/make-public.md)|
|[managed](../preprocessor/managed-unmanaged.md)|[message](../preprocessor/message.md)|[omp](../preprocessor/omp.md)|
|[once](../preprocessor/once.md)|[optimize](../preprocessor/optimize.md)|[pack](../preprocessor/pack.md)|
|[pointers_to_members](../preprocessor/pointers-to-members.md) <sup>1</sup>|[pop_macro](../preprocessor/pop-macro.md)|[push_macro](../preprocessor/push-macro.md)|
|[region, endregion](../preprocessor/region-endregion.md)|[runtime_checks](../preprocessor/runtime-checks.md)|[section](../preprocessor/section.md)|
|[setlocale](../preprocessor/setlocale.md)|[strict_gs_check](../preprocessor/strict-gs-check.md)|[unmanaged](../preprocessor/managed-unmanaged.md)|
|[vtordisp](../preprocessor/vtordisp.md) <sup>1</sup>|[warning](../preprocessor/warning.md)||

<sup>1</sup> supportato solo dal C++ compilatore.

## <a name="pragmas-and-compiler-options"></a>Pragma e opzioni del compilatore

Alcuni pragma offrono la stessa funzionalità delle opzioni del compilatore. Quando viene rilevato un pragma nel codice sorgente, viene eseguito l'override del comportamento specificato dall'opzione del compilatore. Ad esempio, se è stato specificato [/ZP8](../build/reference/zp-struct-member-alignment.md), è possibile eseguire l'override di questa impostazione del compilatore per sezioni specifiche del codice con [Pack](../preprocessor/pack.md):

```cmd
cl /Zp8 some_file.cpp
```

```cpp
// some_file.cpp - packing is 8
// ...
#pragma pack(push, 1) - packing is now 1
// ...
#pragma pack(pop) - packing is 8 again
// ...
```

## <a name="the-__pragma-keyword"></a>Parola chiave __pragma ()

**Specifico di Microsoft**

Il compilatore supporta inoltre la parola chiave **__pragma** , che ha la stessa funzionalità della direttiva **#pragma** . La differenza è che la parola chiave **__pragma** può essere utilizzata inline in una definizione di macro. La direttiva **#pragma** non è utilizzabile in una definizione di macro, perché il compilatore interpreta il carattere di cancelletto (' #') nella direttiva come [operatore per (#)](../preprocessor/stringizing-operator-hash.md).

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare la parola chiave **__pragma** in una macro. Questo codice è stato estratto dall'intestazione mfcdual.h presente nell'esempio ACDUAL in "Esempi di supporto COM per il compilatore":

```cpp
#define CATCH_ALL_DUAL \
CATCH(COleException, e) \
{ \
_hr = e->m_sc; \
} \
AND_CATCH_ALL(e) \
{ \
__pragma(warning(push)) \
__pragma(warning(disable:6246)) /*disable _ctlState prefast warning*/ \
AFX_MANAGE_STATE(pThis->m_pModuleState); \
__pragma(warning(pop)) \
_hr = DualHandleException(_riidSource, e); \
} \
END_CATCH_ALL \
return _hr; \
```

**Termina specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Riferimenti perC++ il preprocessore C/](../preprocessor/c-cpp-preprocessor-reference.md)\
[Pragma C](../c-language/c-pragmas.md)\
[Parole chiave](../cpp/keywords-cpp.md)
