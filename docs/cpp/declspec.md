---
title: __declspec
ms.date: 03/21/2019
f1_keywords:
- __declspec_cpp
- __declspec
- _declspec
helpviewer_keywords:
- __declspec keyword [C++]
ms.openlocfilehash: e0c99ea9379aa6e29096250e8bd36ce3d4f183e8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180225"
---
# <a name="__declspec"></a>__declspec

**Sezione specifica Microsoft**

La sintassi degli attributi estesa per specificare le informazioni sulla classe di archiviazione usa la parola chiave **__declspec** , che specifica che un'istanza di un tipo specificato deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft elencato di seguito. Esempi di altri modificatori della classe di archiviazione includono le parole chiave **static** ed **extern** . Tuttavia, queste parole chiave fanno parte della specifica ANSI dei linguaggi C e C++ e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa. La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche Microsoft in base ai linguaggi C e C++.

## <a name="grammar"></a>Grammatica

*decl-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__declspec (** *Extended-decl-Modifier-Seq* **)**

*extended-decl-modifier-seq*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Extended-decl-Modifier* *Extended-decl-Modifier-Seq*

*extended-decl-modifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**align (** *#* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**allocato ("** *nomeseg* **")**<br/>
**allocatore** &nbsp;&nbsp;&nbsp;&nbsp;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**AppDomain**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**code_seg ("** *nomeseg* **")**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**deprecato**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllimport**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllexport**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**jitintrinsic**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**naked**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**noalias**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**noinline**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**noreturn**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**nothrow**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**novtable**<br/>
&nbsp;&nbsp;&nbsp;**processo** di &nbsp;<br/>
&nbsp;&nbsp;&nbsp;**Proprietà &nbsp;(** { **Get =** _get_func_name_ &#124; **, put =** _put_func_name_ } **)**<br/>
&nbsp;&nbsp;&nbsp;**limitazione** &nbsp;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**safebuffers**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**selectany**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Spectre (nomitigation)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**thread**<br/>
&nbsp;&nbsp;&nbsp;**uuid &nbsp;("** *ComObjectGUID* **")**

Uno spazio vuoto separa la sequenza dei modificatori di dichiarazione. Gli esempi vengono visualizzati nelle sezioni successive.

La grammatica degli attributi estesa supporta questi attributi della classe di archiviazione specifici di Microsoft: [align](../cpp/align-cpp.md), [allocate](../cpp/allocate.md), [allocator](../cpp/allocator.md), [AppDomain](../cpp/appdomain.md), [code_seg](../cpp/code-seg-declspec.md), [deprecated](../cpp/deprecated-cpp.md), [dllexport](../cpp/dllexport-dllimport.md), [dllimport](../cpp/dllexport-dllimport.md), [jitintrinsic](../cpp/jitintrinsic.md), [naked](../cpp/naked-cpp.md), [noalias](../cpp/noalias.md), [noinline](../cpp/noinline.md), [noreturn](../cpp/noreturn.md), [nothrow](../cpp/nothrow-cpp.md), [novtable](../cpp/novtable.md), [Process](../cpp/process.md), [Restrict](../cpp/restrict.md), [safebuffers](../cpp/safebuffers.md), [selectany](../cpp/selectany.md), [ Spectre](../cpp/spectre.md)e [thread](../cpp/thread.md). Supporta inoltre questi attributi dell'oggetto COM: [Property](../cpp/property-cpp.md) e [UUID](../cpp/uuid-cpp.md).

Gli attributi della classe di archiviazione **code_seg**, **dllexport**, **dllimport**, **naked**, **noalias**, **nothrow**, **Property**, **Restrict**, **selectany**, **thread**e **UUID** sono proprietà solo della dichiarazione dell'oggetto o della funzione a cui sono applicati. L'attributo **thread** influiscono solo sui dati e sugli oggetti. Gli attributi **naked** e **Spectre** influiscono solo sulle funzioni. Gli attributi **dllimport** e **dllexport** influiscono sulle funzioni, sui dati e sugli oggetti. Gli attributi **Property**, **selectany**e **UUID** influiscono sugli oggetti com.

Per compatibilità con le versioni precedenti, **_declspec** è un sinonimo di **__declspec** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

Le parole chiave **__declspec** devono essere inserite all'inizio di una dichiarazione semplice. Il compilatore ignora, senza avviso, eventuali parole chiave **__declspec** posizionate dopo * o & e davanti all'identificatore di variabile in una dichiarazione.

Un attributo **__declspec** specificato all'inizio di una dichiarazione di tipo definito dall'utente si applica alla variabile di quel tipo. Ad esempio:

```cpp
__declspec(dllimport) class X {} varX;
```

In questo caso, l'attributo si applica a `varX`. Un **__declspec** attributo inserito dopo la parola chiave **Class** o **struct** si applica al tipo definito dall'utente. Ad esempio:

```cpp
class __declspec(dllimport) X {};
```

In questo caso, l'attributo si applica a `X`.

Le linee guida generali per l'uso dell'attributo **__declspec** per le dichiarazioni semplici sono le seguenti:

*decl-specifier-Seq* *init-declarator-list*;

*Decl-specifier-Seq* deve contenere, tra le altre cose, un tipo di base (ad esempio **int**, **float**, un **typedef**o un nome di classe), una classe di archiviazione (ad esempio **static**, **extern**) o l'estensione **__declspec** . *Init-declarator-list* deve contenere, tra le altre cose, la parte di dichiarazioni del puntatore. Ad esempio:

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)
