---
title: __declspec | Microsoft Docs
ms.custom: ''
ms.date: 1/23/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __declspec_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++]
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4358712e5573095229a48a6d08b78706c608874d
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403648"
---
# <a name="declspec"></a>__declspec

**Sezione specifica Microsoft**

La sintassi degli attributi estesa per specificare informazioni utilizzate da classi di archiviazione di **declspec** parola chiave, che specifica che un'istanza di un tipo specificato deve essere archiviata con un attributo di classe di archiviazione specifico di Microsoft elencato di seguito. Esempi di altri modificatori della classe di archiviazione includono la **statici** e **extern** parole chiave. Tuttavia, queste parole chiave fanno parte della specifica ANSI dei linguaggi C e C++ e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa. La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche Microsoft in base ai linguaggi C e C++.

## <a name="grammar"></a>Grammatica

*decl-specifier*:  
&nbsp;&nbsp;&nbsp;&nbsp;**__declspec (**  *extended-decl-modifier-seq*  **)**

*extended-decl-modifier-seq*:  
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub>  
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier* *extended-decl-modifier-seq*

*extended-decl-modifier*:  
&nbsp;&nbsp;&nbsp;&nbsp;**align(** *#* **)**  
&nbsp;&nbsp;&nbsp;&nbsp;**allocate("** *segname* **")**  
&nbsp;&nbsp;&nbsp;&nbsp;**appdomain**  
&nbsp;&nbsp;&nbsp;&nbsp;**code_seg("** *segname* **")**  
&nbsp;&nbsp;&nbsp;&nbsp;**Deprecato**  
&nbsp;&nbsp;&nbsp;&nbsp;**dllimport**  
&nbsp;&nbsp;&nbsp;&nbsp;**dllexport**  
&nbsp;&nbsp;&nbsp;&nbsp;**jitintrinsic**  
&nbsp;&nbsp;&nbsp;&nbsp;**naked**  
&nbsp;&nbsp;&nbsp;&nbsp;**noalias**  
&nbsp;&nbsp;&nbsp;&nbsp;**noinline**  
&nbsp;&nbsp;&nbsp;&nbsp;**noreturn**  
&nbsp;&nbsp;&nbsp;&nbsp;**nothrow**  
&nbsp;&nbsp;&nbsp;&nbsp;**novtable**  
&nbsp;&nbsp;&nbsp;&nbsp;**Processo**  
&nbsp;&nbsp;&nbsp;&nbsp;**property(** { **get=**_get_func_name_ &#124; **,put=**_put_func_name_ } **)**  
&nbsp;&nbsp;&nbsp;&nbsp;**restrict**  
&nbsp;&nbsp;&nbsp;&nbsp;**safebuffers**  
&nbsp;&nbsp;&nbsp;&nbsp;**selectany**  
&nbsp;&nbsp;&nbsp;&nbsp;**spectre(nomitigation)**  
&nbsp;&nbsp;&nbsp;&nbsp;**thread**  
&nbsp;&nbsp;&nbsp;&nbsp;**uuid("** *ComObjectGUID* **")**  

Uno spazio vuoto separa la sequenza dei modificatori di dichiarazione. Gli esempi vengono visualizzati nelle sezioni successive.

Grammatica estesa attributo supporta questi attributi di classi di archiviazione specifico di Microsoft: [allineare](../cpp/align-cpp.md), [allocare](../cpp/allocate.md), [appdomain](../cpp/appdomain.md), [code_seg](../cpp/code-seg-declspec.md), [deprecata](../cpp/deprecated-cpp.md), [dllexport](../cpp/dllexport-dllimport.md), [dllimport](../cpp/dllexport-dllimport.md), [jitintrinsic](../cpp/jitintrinsic.md), [naked](../cpp/naked-cpp.md), [noalias](../cpp/noalias.md), [noinline](../cpp/noinline.md), [noreturn](../cpp/noreturn.md), [nothrow](../cpp/nothrow-cpp.md), [novtable](../cpp/novtable.md) , [processo](../cpp/process.md), [limitare](../cpp/restrict.md), [safebuffers](../cpp/safebuffers.md), [selectany](../cpp/selectany.md), [spectre](../cpp/spectre.md), e [thread](../cpp/thread.md). Supporta anche questi attributi di oggetti COM: [proprietà](../cpp/property-cpp.md) e [uuid](../cpp/uuid-cpp.md).

Il **code_seg**, **dllexport**, **dllimport**, **naked**, **noalias**, **nothrow** , **proprietà**, **limitare**, **selectany**, **thread**, e **uuid**gli attributi di classi di archiviazione sono proprietà solo della dichiarazione dell'oggetto o della funzione a cui vengono applicati. Il **thread** attributo influisce sui dati e solo gli oggetti. Il **naked** e **spectre** attributi interessano solo le funzioni. Il **dllimport** e **dllexport** attributi influiscono sulle funzioni, dati e oggetti. Il **proprietà**, **selectany**, e **uuid** attributi influiscono sugli oggetti COM.

Il **declspec** parole chiave devono essere inserite all'inizio di una dichiarazione semplice. Il compilatore ignora, senza avviso, qualsiasi **declspec** parole chiave inserita dopo * o & e prima dell'identificatore della variabile in una dichiarazione.

Oggetto **declspec** attributo specificato all'inizio di una dichiarazione di tipo definito dall'utente si applica alla variabile di quel tipo. Ad esempio:

```cpp
__declspec(dllimport) class X {} varX;
```

In questo caso, l'attributo si applica a `varX`. Un **declspec** attributo posizionato dopo il **classe** oppure **struct** parola chiave si applica al tipo definito dall'utente. Ad esempio:

```cpp
class __declspec(dllimport) X {};
```

In questo caso, l'attributo si applica a `X`.

Le linee guida per l'uso di **declspec** attributo per le dichiarazioni semplici è come segue:

*decl-specifier-seq* *init-declarator-list*;

Il *decl-specifier-seq* deve contenere, tra le altre cose, un tipo di base (ad esempio **int**, **float**, un **typedef**, o un nome di classe), un classe di archiviazione (ad esempio **statici**, **extern**), o nella **declspec** estensione. Il *init-declarator-list* deve contenere, tra le altre cose, la parte del puntatore di dichiarazioni. Ad esempio:

```cpp
__declspec(selectany) int * pi1 = 0;   //Recommended, selectany & int both part of decl-specifier
int __declspec(selectany) * pi2 = 0;   //OK, selectany & int both part of decl-specifier
int * __declspec(selectany) pi3 = 0;   //ERROR, selectany is not part of a declarator
```

Nel codice seguente, ad esempio, viene dichiarata una variabile thread-local di tipo Integer e quindi inizializzata con un valore:

```cpp
// Example of the __declspec keyword
__declspec( thread ) int tls_i = 1;
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche
 [Parole chiave](../cpp/keywords-cpp.md)  
 [Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)  