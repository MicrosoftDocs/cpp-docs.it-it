---
title: __declspec
ms.date: 03/21/2019
f1_keywords:
- __declspec_cpp
- __declspec
- _declspec
helpviewer_keywords:
- __declspec keyword [C++]
ms.openlocfilehash: 945202beca6c5deb525bd19886b947331f6f3ac3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228947"
---
# `__declspec`

**Specifico di Microsoft**

La sintassi degli attributi estesa per specificare le informazioni sulla classe di archiviazione usa la **`__declspec`** parola chiave, che specifica che un'istanza di un tipo specificato deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft elencato di seguito. Esempi di altri modificatori della classe di archiviazione includono **`static`** le **`extern`** parole chiave e. Tuttavia, queste parole chiave fanno parte della specifica ANSI dei linguaggi C e C++ e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa. La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche Microsoft in base ai linguaggi C e C++.

## <a name="grammar"></a>Grammatica

*decl-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__declspec (`**  *Extended-decl-Modifier-Seq*  **`)`**

*extended-decl-modifier-seq*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Extended-decl-Modifier* *Extended-decl-Modifier-Seq*

*extended-decl-modifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`align(`** *#* **`)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`allocate("`***nomeseg***`")`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`allocator`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`appdomain`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`code_seg("`***nomeseg***`")`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`deprecated`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllimport`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllexport`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`jitintrinsic`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`naked`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`noalias`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`noinline`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`noreturn`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`nothrow`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`novtable`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`process`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`property(`**{ **`get=`** _get_func_name_ &#124; **`,put=`** _put_func_name_ }**`)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`restrict`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`safebuffers`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`selectany`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`spectre(nomitigation)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`thread`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`uuid("`***ComObjectGUID***`")`**

Uno spazio vuoto separa la sequenza dei modificatori di dichiarazione. Gli esempi vengono visualizzati nelle sezioni successive.

La grammatica degli attributi estesa supporta questi attributi della classe di archiviazione specifici di Microsoft: [`align`](../cpp/align-cpp.md) ,, [`allocate`](../cpp/allocate.md) [`allocator`](../cpp/allocator.md) , [`appdomain`](../cpp/appdomain.md) , [`code_seg`](../cpp/code-seg-declspec.md) , [`deprecated`](../cpp/deprecated-cpp.md) , [`dllexport`](../cpp/dllexport-dllimport.md) , [`dllimport`](../cpp/dllexport-dllimport.md) , [`jitintrinsic`](../cpp/jitintrinsic.md) , [`naked`](../cpp/naked-cpp.md) , [`noalias`](../cpp/noalias.md) , [`noinline`](../cpp/noinline.md) , [`noreturn`](../cpp/noreturn.md) , [`nothrow`](../cpp/nothrow-cpp.md) , [`novtable`](../cpp/novtable.md) , [`process`](../cpp/process.md) , [`restrict`](../cpp/restrict.md) , [`safebuffers`](../cpp/safebuffers.md) , [`selectany`](../cpp/selectany.md) , [`spectre`](../cpp/spectre.md) e [`thread`](../cpp/thread.md) . Supporta inoltre questi attributi dell'oggetto COM: [`property`](../cpp/property-cpp.md) e [`uuid`](../cpp/uuid-cpp.md) .

Gli **`code_seg`** **`dllexport`** attributi della classe di archiviazione,, **`dllimport`** , **`naked`** , **`noalias`** , **`nothrow`** , **`property`** , **`restrict`** , **`selectany`** , **`thread`** e **`uuid`** sono proprietà solo della dichiarazione dell'oggetto o della funzione a cui sono applicati. L' **`thread`** attributo influisca solo sui dati e sugli oggetti. Gli **`naked`** **`spectre`** attributi e influiscono solo sulle funzioni. Gli **`dllimport`** **`dllexport`** attributi e influiscono sulle funzioni, sui dati e sugli oggetti. Gli **`property`** **`selectany`** attributi, e **uu'id** influiscono sugli oggetti com.

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

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)
