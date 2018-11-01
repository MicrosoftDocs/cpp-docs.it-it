---
title: Direttive pragma e parola chiave __Pragma
ms.date: 11/04/2016
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
ms.openlocfilehash: 9e79ba7378e28fdea863af010decb7064df415cd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660096"
---
# <a name="pragma-directives-and-the-pragma-keyword"></a>Direttive pragma e parola chiave __Pragma

Le direttive pragma specificano funzionalità del compilatore specifiche del computer o del sistema operativo. Il **pragma** parola chiave, che è specifico per il compilatore Microsoft, consente di codificare direttive pragma all'interno delle definizioni di macro.

## <a name="syntax"></a>Sintassi

```
#pragma token-string
__pragma(token-string)
```

## <a name="remarks"></a>Note

Ogni implementazione di C e C++ supporta alcune funzionalità esclusive del computer host o del sistema operativo di utilizzo. Alcuni programmi, ad esempio, devono esercitare un controllo preciso sulle aree di memoria in cui i dati vengono immessi o controllare il modo in cui alcune funzioni ricevono i parametri. Il **#pragma** direttive offrono un modo per ogni compilatore per fornire funzionalità specifiche del sistema operativo e del computer mantenendo la compatibilità generale con i linguaggi C e C++.

I pragma sono per definizione specifici del computer o del sistema operativo e, in genere, sono diversi per ogni compilatore. I pragma possono essere utilizzati nelle istruzioni condizionali, per fornire nuove funzionalità del preprocessore o per fornire al compilatore informazioni definite dall'implementazione.

La stringa `token-string` è una serie di caratteri che fornisce a un compilatore specifico eventuali istruzioni e argomenti. Il simbolo di cancelletto (**#**) deve essere il primo carattere non spazio vuoto sulla riga che contiene il pragma; gli spazi vuoti possono separare il simbolo di cancelletto e la parola "pragma". Seguendo **#pragma**, scrivere un testo che il convertitore può analizzare come token di pre-elaborazione. L'argomento **#pragma** è soggetto all'espansione di macro.

Se il compilatore rileva un pragma che non riconosce, genera un messaggio di avviso e continua la compilazione.

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
|[intrinsic](../preprocessor/intrinsic.md)|[ciclo](../preprocessor/loop.md) <sup>1</sup>|[make_public](../preprocessor/make-public.md)|
|[managed](../preprocessor/managed-unmanaged.md)|[message](../preprocessor/message.md)||
|[omp](../preprocessor/omp.md)|[once](../preprocessor/once.md)||
|[optimize](../preprocessor/optimize.md)|[pack](../preprocessor/pack.md)|[pointers_to_members](../preprocessor/pointers-to-members.md) <sup>1</sup>|
|[pop_macro](../preprocessor/pop-macro.md)|[push_macro](../preprocessor/push-macro.md)|[region, endregion](../preprocessor/region-endregion.md)|
|[runtime_checks](../preprocessor/runtime-checks.md)|[section](../preprocessor/section.md)|[setlocale](../preprocessor/setlocale.md)|
|[strict_gs_check](../preprocessor/strict-gs-check.md)|[unmanaged](../preprocessor/managed-unmanaged.md)|[vtordisp](../preprocessor/vtordisp.md) <sup>1</sup>|
|[warning](../preprocessor/warning.md)|||

<sup>1</sup> supportato solo dal compilatore C++.

## <a name="pragmas-and-compiler-options"></a>Opzioni relative a compilatore e pragma

Alcuni pragma offrono la stessa funzionalità delle opzioni del compilatore. Quando viene rilevato un pragma nel codice sorgente, viene eseguito l'override del comportamento specificato dall'opzione del compilatore. Ad esempio, se è stato specificato [/zp8](../build/reference/zp-struct-member-alignment.md), è possibile eseguire l'override di questa impostazione del compilatore per alcune sezioni specifiche del codice con [pack](../preprocessor/pack.md):

```
cl /Zp8 ...

<file> - packing is 8
// ...
#pragma pack(push, 1) - packing is now 1
// ...
#pragma pack(pop) - packing is 8
</file>
```

## <a name="the-pragma-keyword"></a>Parola chiave __pragma()

**Specifiche di Microsoft**

Il compilatore supporta anche il **pragma** parola chiave, che ha la stessa funzionalità come la **#pragma** direttiva, ma può essere utilizzata inline in una definizione di macro. Il **#pragma** direttiva non può essere utilizzata in una definizione di macro perché il compilatore interpreta il carattere segno di cancelletto ('#') nella direttiva di [operatore per (#)](../preprocessor/stringizing-operator-hash.md).

L'esempio di codice seguente illustra come la **pragma** parola chiave può essere utilizzata in una macro. Questo codice è stato estratto dall'intestazione mfcdual.h presente nell'esempio ACDUAL in "Esempi di supporto COM per il compilatore":

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)<br/>
[Pragma C](../c-language/c-pragmas.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)