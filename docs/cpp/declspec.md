---
description: 'Ulteriori informazioni su: `__declspec`'
title: __declspec
ms.date: 03/21/2019
f1_keywords:
- __declspec_cpp
- __declspec
- _declspec
helpviewer_keywords:
- __declspec keyword [C++]
ms.openlocfilehash: 1a8644bc05319332967ffd7934e6799408c3d36d
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102465528"
---
# `__declspec`

**Specifico di Microsoft**

La sintassi degli attributi estesa per specificare le informazioni sulla classe di archiviazione usa la **`__declspec`** parola chiave, che specifica che un'istanza di un tipo specificato deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft elencato di seguito. Esempi di altri modificatori della classe di archiviazione includono **`static`** le **`extern`** parole chiave e. Tuttavia, queste parole chiave fanno parte della specifica ANSI dei linguaggi C e C++ e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa. La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche Microsoft in base ai linguaggi C e C++.

## <a name="grammar"></a>Grammatica

*`decl-specifier`*:\
&emsp;**`__declspec (`**  *`extended-decl-modifier-seq`*  **`)`**

*`extended-decl-modifier-seq`*:\
&emsp;*`extended-decl-modifier`*<sub>consenso esplicito</sub>\
&emsp;*`extended-decl-modifier`* *`extended-decl-modifier-seq`*

*`extended-decl-modifier`*:\
&emsp;**`align(`***numero* di **`)`**\
&emsp;**`allocate("`***nomeseg***`")`**\
&emsp;**`allocator`**\
&emsp;**`appdomain`**\
&emsp;**`code_seg("`***nomeseg***`")`**\
&emsp;**`deprecated`**\
&emsp;**`dllimport`**\
&emsp;**`dllexport`**\
&emsp;**`jitintrinsic`**\
&emsp;**`naked`**\
&emsp;**`noalias`**\
&emsp;**`noinline`**\
&emsp;**`noreturn`**\
&emsp;**`nothrow`**\
&emsp;**`novtable`**\
&emsp;**`no_sanitize_address`**\
&emsp;**`process`**\
&emsp;**`property(`**{ **`get=`** _Get-Func-Name_ &#124; **`,put=`** _put-Func-Name_ }**`)`**\
&emsp;**`restrict`**\
&emsp;**`safebuffers`**\
&emsp;**`selectany`**\
&emsp;**`spectre(nomitigation)`**\
&emsp;**`thread`**\
&emsp;**`uuid("`***ComObjectGUID***`")`**

Uno spazio vuoto separa la sequenza dei modificatori di dichiarazione. Gli esempi vengono visualizzati nelle sezioni successive.

La grammatica degli attributi estesa supporta questi attributi della classe di archiviazione specifici di Microsoft: [`align`](../cpp/align-cpp.md) ,, [`allocate`](../cpp/allocate.md) [`allocator`](../cpp/allocator.md) , [`appdomain`](../cpp/appdomain.md) , [`code_seg`](../cpp/code-seg-declspec.md) , [`deprecated`](../cpp/deprecated-cpp.md) , [`dllexport`](../cpp/dllexport-dllimport.md) , [`dllimport`](../cpp/dllexport-dllimport.md) , [`jitintrinsic`](../cpp/jitintrinsic.md) , [`naked`](../cpp/naked-cpp.md) , [`noalias`](../cpp/noalias.md) , [`noinline`](../cpp/noinline.md) , [`noreturn`](../cpp/noreturn.md) , [`nothrow`](../cpp/nothrow-cpp.md) , [`novtable`](../cpp/novtable.md) , [`no_sanitize_address`](../cpp/no-sanitize-address.md) , [`process`](../cpp/process.md) , [`restrict`](../cpp/restrict.md) , [`safebuffers`](../cpp/safebuffers.md) , [`selectany`](../cpp/selectany.md) , [`spectre`](../cpp/spectre.md) e [`thread`](../cpp/thread.md) . Supporta inoltre questi attributi dell'oggetto COM: [`property`](../cpp/property-cpp.md) e [`uuid`](../cpp/uuid-cpp.md) .

Gli **`code_seg`** **`dllexport`** attributi della classe di archiviazione,, **`dllimport`** , **`naked`** , **`noalias`** , **`nothrow`** , **`no_sanitize_address`** , **`property`** , **`restrict`** , **`selectany`** , **`thread`** e **`uuid`** sono proprietà solo della dichiarazione dell'oggetto o della funzione a cui sono applicati. L' **`thread`** attributo influisca solo sui dati e sugli oggetti. Gli **`naked`** **`spectre`** attributi e influiscono solo sulle funzioni. Gli **`dllimport`** **`dllexport`** attributi e influiscono sulle funzioni, sui dati e sugli oggetti. Gli **`property`** **`selectany`** attributi, e **`uuid`** influiscono sugli oggetti com.

Per compatibilità con le versioni precedenti, **`_declspec`** è un sinonimo di, a **`__declspec`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

Le **`__declspec`** parole chiave devono essere inserite all'inizio di una dichiarazione semplice. Il compilatore ignora, senza avviso, eventuali **`__declspec`** parole chiave posizionate dopo * o & e davanti all'identificatore di variabile in una dichiarazione.

Un **`__declspec`** attributo specificato all'inizio di una dichiarazione di tipo definito dall'utente si applica alla variabile di quel tipo. Ad esempio:

```cpp
__declspec(dllimport) class X {} varX;
```

In questo caso, l'attributo si applica a `varX`. Un **`__declspec`** attributo inserito dopo la **`class`** **`struct`** parola chiave o si applica al tipo definito dall'utente. Ad esempio:

```cpp
class __declspec(dllimport) X {};
```

In questo caso, l'attributo si applica a `X`.

Le linee guida generali per l'utilizzo dell' **`__declspec`** attributo per le dichiarazioni semplici sono le seguenti:

*decl-specifier-Seq* *init-declarator-list*;

*Decl-specifier-Seq* deve contenere, tra le altre cose, un tipo di base (ad esempio **`int`** ,, **`float`** , **`typedef`** o un nome di classe), una classe di archiviazione (ad esempio **`static`** , **`extern`** ) o l' **`__declspec`** estensione. *Init-declarator-list* deve contenere, tra le altre cose, la parte di dichiarazioni del puntatore. Ad esempio:

```cpp
__declspec(selectany) int * pi1 = 0;   //Recommended, selectany & int both part of decl-specifier
int __declspec(selectany) * pi2 = 0;   //OK, selectany & int both part of decl-specifier
int * __declspec(selectany) pi3 = 0;   //ERROR, selectany is not part of a declarator
```

Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo Integer e quindi inizializzata con un valore:

```cpp
// Example of the __declspec keyword
__declspec( thread ) int tls_i = 1;
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Parole](../cpp/keywords-cpp.md)\
[Attributi di Storage-Class estese C](../c-language/c-extended-storage-class-attributes.md)
