---
title: declspec | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: __declspec_cpp
dev_langs: C++
helpviewer_keywords: __declspec keyword [C++]
ms.assetid: 832db681-e8e1-41ca-b78c-cd9d265cdb87
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 294f6060ed163906ba4e9eeaca034ab7cbfc1205
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="declspec"></a>__declspec
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 La sintassi degli attributi estesa per specificare le informazioni relative alla classe di archiviazione utilizza la parola chiave `__declspec`, che specifica che un'istanza di un tipo specificato deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft elencato di seguito. Gli esempi degli altri modificatori della classe di archiviazione includono le parole chiave `static` e `extern`. Tuttavia, queste parole chiave fanno parte della specifica ANSI dei linguaggi C e C++ e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa. La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche Microsoft in base ai linguaggi C e C++.  
  
## <a name="grammar"></a>Grammatica  
 *decl-specifier*:  
 `__declspec (`  *Extended-decl-modifier-seq*  `)`  
  
 *extended-decl-modifier-seq*:  
 *extended-decl-modifier*opz  
  
 *Extended-decl-modifier extended-decl-modifier-seq*  
  
 *extended-decl-modifier*:  
 `align(` *#* `)`  
  
 `allocate("`*segname*`")`  
  
 `appdomain`  
  
 `code_seg("`*segname*`")`  
  
 `deprecated`  
  
 `dllimport`  
  
 `dllexport`  
  
 `jitintrinsic`  
  
 `naked`  
  
 `noalias`  
  
 `noinline`  
  
 `noreturn`  
  
 `nothrow`  
  
 `novtable`  
  
 `process`  
  
 `property(`{`get=`*get_func_name*&#124;`,put=` *put_func_name*}`)`  
  
 `restrict`  
  
 `safebuffers`  
  
 `selectany`  
  
 `thread`  
  
 `uuid("`*ComObjectGUID*`")`  
  
 Uno spazio vuoto separa la sequenza dei modificatori di dichiarazione. Gli esempi vengono visualizzati nelle sezioni successive.  
  
 Questi attributi di classe di archiviazione specifiche di Microsoft supporta la sintassi degli attributi estesa: [allineare](../cpp/align-cpp.md), [allocare](../cpp/allocate.md), [appdomain](../cpp/appdomain.md), [code_seg](../cpp/code-seg-declspec.md), [deprecato](../cpp/deprecated-cpp.md), [dllexport](../cpp/dllexport-dllimport.md), [dllimport](../cpp/dllexport-dllimport.md), [jitintrinsic](../cpp/jitintrinsic.md), [naked](../cpp/naked-cpp.md), [noalias](../cpp/noalias.md), [noinline](../cpp/noinline.md), [noreturn](../cpp/noreturn.md), [nothrow](../cpp/nothrow-cpp.md), [novtable](../cpp/novtable.md) , [processo](../cpp/process.md), [limitare](../cpp/restrict.md), [safebuffers](../cpp/safebuffers.md), [selectany](../cpp/selectany.md), e [thread](../cpp/thread.md). Supporta inoltre gli attributi dell'oggetto di COM: [proprietà](../cpp/property-cpp.md) e [uuid](../cpp/uuid-cpp.md).  
  
 Gli attributi della classe di archiviazione `code_seg`, `dllexport`, `dllimport`, `naked`, `noalias`, `nothrow`, `property`, `restrict`, `selectany`, `thread` e `uuid` sono proprietà solo della dichiarazione dell'oggetto o della funzione a cui vengono applicati. L'attributo `thread` influisce solo sui dati e sugli oggetti. L'attributo `naked` influisce solo sulle funzioni. Gli attributi `dllimport` e `dllexport` influiscono sulle funzioni, sui dati e sugli oggetti. Gli attributi `property`, `selectany` e `uuid` influiscono sugli oggetti COM.  
  
 Le parole chiave `__declspec` devono essere inserite all'inizio di una dichiarazione semplice. Il compilatore ignora, senza avviso, qualsiasi parola chiave `__declspec` inserita dopo * o & e prima dell'identificatore della variabile in una dichiarazione.  
  
 Un attributo `__declspec` specificato all'inizio di una dichiarazione del tipo definito dall'utente si applica alla variabile di quel tipo. Ad esempio:  
  
```  
__declspec(dllimport) class X {} varX;  
```  
  
 In questo caso, l'attributo si applica a `varX`. Un attributo `__declspec` inserito dopo la parola chiave `class` o `struct` si applica al tipo definito dall'utente. Ad esempio:  
  
```  
class __declspec(dllimport) X {};  
```  
  
 In questo caso, l'attributo si applica a `X`.  
  
 Le linee guida per l'utilizzo dell'attributo `__declspec` per le dichiarazioni semplici sono le seguenti:  
  
```  
  
decl-specifier-seq  
declarator-list;  
```  
  
 Il *decl-specifier-seq* deve contenere, tra le altre cose, un tipo di base (ad esempio `int`, `float`, `typedef`, o un nome di classe), una classe di archiviazione (ad esempio `static`, `extern`), o il `__declspec`estensione. Il *init-declarator-list* deve contenere, tra le altre cose, la parte del puntatore di dichiarazioni. Ad esempio:  
  
```  
__declspec(selectany) int * pi1 = 0;   //OK, selectany & int both part of decl-specifier  
int __declspec(selectany) * pi2 = 0;   //OK, selectany & int both part of decl-specifier  
int * __declspec(selectany) pi3 = 0;   //ERROR, selectany is not part of a declarator  
```  
  
 Nel codice seguente, ad esempio, viene dichiarata una variabile thread-local di tipo Integer e quindi inizializzata con un valore:  
  
```  
// Example of the __declspec keyword  
__declspec( thread ) int tls_i = 1;  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)