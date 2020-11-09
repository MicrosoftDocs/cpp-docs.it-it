---
title: Direttive pragma e parola chiave __pragma
description: Descrive le direttive pragma disponibili in Microsoft Visual C e C++ (MSVC)
ms.date: 10/30/2020
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
ms.openlocfilehash: 784cd413b6b81033c9e49b22d979ece72e5ee101
ms.sourcegitcommit: 3f0c1dcdcce25865d1a1022bcc5b9eec79f69025
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2020
ms.locfileid: "94381545"
---
# <a name="pragma-directives-and-the-__pragma-keyword"></a>Direttive pragma e parola chiave __pragma

Le direttive pragma specificano funzionalità del compilatore specifiche del computer o del sistema operativo. La parola chiave **__pragma** , che è specifica del compilatore Microsoft, consente di codificare le direttive pragma all'interno delle definizioni di macro.

## <a name="syntax"></a>Sintassi

> **#`pragma`***stringa di token*\
> **`__pragma(`***stringa* **`)`** di token due caratteri di sottolineatura iniziali, ovvero **`_Pragma(`** *stringa di estensione specifica di Microsoft, valore letterale* **`)`** //C99

## <a name="remarks"></a>Commenti

Ogni implementazione di C e C++ supporta alcune funzionalità esclusive del computer host o del sistema operativo di utilizzo. Alcuni programmi, ad esempio, devono esercitare un controllo preciso sulla posizione dei dati in memoria o controllare il modo in cui determinate funzioni ricevono parametri. Le direttive **#pragma** consentono a ogni compilatore di offrire funzionalità specifiche del sistema operativo e del computer, mantenendo al tempo stesso la compatibilità complessiva con i linguaggi C e C++.

I pragma sono specifici del computer o del sistema operativo per definizione e sono in genere diversi per ogni compilatore. I pragma possono essere usati nelle direttive condizionali, per fornire nuove funzionalità del preprocessore o per fornire al compilatore informazioni definite dall'implementazione.

La *stringa di token* è una serie di caratteri che rappresentano una specifica istruzione del compilatore e gli eventuali argomenti. Il simbolo di cancelletto ( **#** ) deve essere il primo carattere diverso da uno spazio vuoto nella riga che contiene il pragma. Gli spazi vuoti possono separare il simbolo di cancelletto e la parola "pragma". Dopo **#pragma** , scrivere il testo che il convertitore può analizzare come token di pre-elaborazione. L'argomento da **#pragma** è soggetto all'espansione della macro.

Il *valore letterale stringa* è l'input per `_Pragma` . Le virgolette esterne e gli spazi vuoti iniziali e finali vengono rimossi. `\"` viene sostituito con `"` e `\\` viene sostituito con `\` .

Il compilatore genera un avviso quando rileva un pragma che non riconosce e continua la compilazione.

I compilatori Microsoft C e C++ riconoscono i seguenti pragma:

:::row:::
   :::column span="":::
      [`alloc_text`](../preprocessor/alloc-text.md)\
      [`auto_inline`](../preprocessor/auto-inline.md)\
      [`bss_seg`](../preprocessor/bss-seg.md)\
      [`check_stack`](../preprocessor/check-stack.md)\
      [`code_seg`](../preprocessor/code-seg.md)\
      [`comment`](../preprocessor/comment-c-cpp.md)\
      [`component`](../preprocessor/component.md)\
      [`conform`](../preprocessor/conform.md)<sup>1</sup>\
      [`const_seg`](../preprocessor/const-seg.md)\
      [`data_seg`](../preprocessor/data-seg.md)\
      [`deprecated`](../preprocessor/deprecated-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`detect_mismatch`](../preprocessor/detect-mismatch.md)\
      [`fenv_access`](../preprocessor/fenv-access.md)\
      [`float_control`](../preprocessor/float-control.md)\
      [`fp_contract`](../preprocessor/fp-contract.md)\
      [`function`](../preprocessor/function-c-cpp.md)\
      [`hdrstop`](../preprocessor/hdrstop.md)\
      [`include_alias`](../preprocessor/include-alias.md)\
      [`init_seg`](../preprocessor/init-seg.md)<sup>1</sup>\
      [`inline_depth`](../preprocessor/inline-depth.md)\
      [`inline_recursion`](../preprocessor/inline-recursion.md)
   :::column-end:::
   :::column span="":::
      [`intrinsic`](../preprocessor/intrinsic.md)\
      [`loop`](../preprocessor/loop.md)<sup>1</sup>\
      [`make_public`](../preprocessor/make-public.md)\
      [`managed`](../preprocessor/managed-unmanaged.md)\
      [`message`](../preprocessor/message.md)\
      [`omp`](../preprocessor/omp.md)\
      [`once`](../preprocessor/once.md)\
      [`optimize`](../preprocessor/optimize.md)\
      [`pack`](../preprocessor/pack.md)\
      [`pointers_to_members`](../preprocessor/pointers-to-members.md)<sup>1</sup>
   :::column-end:::
   :::column span="":::
      [`pop_macro`](../preprocessor/pop-macro.md)\
      [`push_macro`](../preprocessor/push-macro.md)\
      [`region`, endregion](../preprocessor/region-endregion.md)\
      [`runtime_checks`](../preprocessor/runtime-checks.md)\
      [`section`](../preprocessor/section.md)\
      [`setlocale`](../preprocessor/setlocale.md)\
      [`strict_gs_check`](../preprocessor/strict-gs-check.md)\
      [`unmanaged`](../preprocessor/managed-unmanaged.md)\
      [`vtordisp`](../preprocessor/vtordisp.md)<sup>1</sup>\
      [`warning`](../preprocessor/warning.md)
   :::column-end:::
:::row-end:::

<sup>1</sup> supportato solo dal compilatore C++.

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

Il compilatore supporta inoltre la **`__pragma`** parola chiave specifica di Microsoft, che ha la stessa funzionalità della **`#pragma`** direttiva. La differenza è che la **`__pragma`** parola chiave può essere utilizzata inline in una definizione di macro. La **`#pragma`** direttiva non può essere utilizzata in una definizione di macro, perché il compilatore interpreta il carattere di cancelletto (' #') nella direttiva come [operatore per (#)](../preprocessor/stringizing-operator-hash.md).

Nell'esempio di codice seguente viene illustrato come **`__pragma`** è possibile utilizzare la parola chiave in una macro. Questo codice viene estratto dall'intestazione *MFCDUAL. h* nell'esempio ACDUAL in "esempi di supporto com del compilatore":

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

## <a name="the-_pragma-preprocessing-operator-c99-c11"></a>`_Pragma`Operatore di pre-elaborazione (C99, c++ 11)

`_Pragma` è simile alla parola chiave specifica di Microsoft [`__pragma`](#the-__pragma-keyword) , ad eccezione del fatto che fa parte dello standard. È stata introdotta per C in C99. Per C++, è stato introdotto in C++ 11.

 Consente di inserire i pragma in una definizione di macro. Ha un carattere di sottolineatura iniziale `_` anziché due caratteri di sottolineatura iniziali `__` che la parola chiave specifica di Microsoft ha e la prima lettera è in maiuscolo.

Il valore letterale stringa deve essere quello che verrà altrimenti inserito in seguito a un' *`#pragma`* istruzione. Ad esempio:

```c
#pragma message("the #pragma way")
_Pragma ("message( \"the _Pragma way\")") 
```

Le virgolette e le barre rovesciate devono essere precedute da un carattere di escape, come illustrato in precedenza. Una stringa pragma che non viene riconosciuta viene ignorata.

Nell'esempio di codice seguente viene illustrata la modalità di **`_Pragma`** utilizzo della parola chiave in una macro simile a un'asserzione quando non si desidera ricevere un avviso quando l'espressione della condizione risulta costante. 

La definizione della macro usa l'idioma do/while (0) per le macro con più istruzioni, in modo che possa essere usato come se si trattasse di un'istruzione. Per ulteriori informazioni, vedere la [macro multiriga C](https://stackoverflow.com/questions/1067226/c-multi-line-macro-do-while0-vs-scope-block) in stack overflow. L'istruzione _Pragma si applica solo alla riga di codice successiva.

```C
// Compile with /W4

#include <stdio.h>
#include <stdlib.h>

#define MY_ASSERT(BOOL_EXPRESSION) \
    do { \
        _Pragma("warning(suppress: 4127)") /* C4127 conditional expression is constant */  \
        if (!(BOOL_EXPRESSION)) {   \
            printf("MY_ASSERT FAILED: \"" #BOOL_EXPRESSION "\" on %s(%d)", __FILE__, __LINE__); \
            exit(-1); \
        } \
    } while (0)

int main()
{
    MY_ASSERT(0 && "Note that there is no warning: C4127 conditional expression is constant");

    return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Riferimenti per il preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)\
[Pragma C](../c-language/c-pragmas.md)\
[Parole chiave](../cpp/keywords-cpp.md)
