---
title: "__declspec | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__declspec_cpp"
  - "__declspec"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++]"
ms.assetid: 832db681-e8e1-41ca-b78c-cd9d265cdb87
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# __declspec
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 La sintassi degli attributi estesa per specificare le informazioni relative alla classe di archiviazione utilizza la parola chiave `__declspec`, che specifica che un'istanza di un tipo specificato deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft elencato di seguito.  Gli esempi degli altri modificatori della classe di archiviazione includono le parole chiave `extern` e `static`.  Tuttavia, queste parole chiave fanno parte della specifica ANSI dei linguaggi C e C\+\+ e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa.  La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche Microsoft in base ai linguaggi C e C\+\+.  
  
## Grammatica  
 *decl\-specifier*:  
 `__declspec (`  *extended\-decl\-modifier\-seq*  `)`  
  
 *extended\-decl\-modifier\-seq*:  
 *extended\-decl\-modifier* opt  
  
 *extended\-decl\-modifier extended\-decl\-modifier\-seq*  
  
 *extended\-decl\-modifier*:  
 `align(` *\#* `)`  
  
 `allocate("` *segname* `")`  
  
 `appdomain`  
  
 `code_seg("` *segname* `")`  
  
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
  
 `property(`{`get=`*get\_func\_name*&#124;`,put=`*put\_func\_name*}`)`  
  
 `restrict`  
  
 `safebuffers`  
  
 `selectany`  
  
 `thread`  
  
 `uuid("` *ComObjectGUID* `")`  
  
 Uno spazio vuoto separa la sequenza dei modificatori di dichiarazione.  Gli esempi vengono visualizzati nelle sezioni successive.  
  
 La grammatica dell'attributo estesa supporta i seguenti attributi della classe di archiviazione specifici di Microsoft: [align](../cpp/align-cpp.md), [allocate](../cpp/allocate.md), [appdomain](../cpp/appdomain.md), [code\_seg](../cpp/code-seg-declspec.md), [deprecated](../cpp/deprecated-cpp.md), [dllexport](../cpp/dllexport-dllimport.md), [dllimport](../cpp/dllexport-dllimport.md), [jitintrinsic](../cpp/jitintrinsic.md), [naked](../cpp/naked-cpp.md), [noalias](../cpp/noalias.md), [noinline](../cpp/noinline.md), [noreturn](../cpp/noreturn.md), [nothrow](../cpp/nothrow-cpp.md), [novtable](../cpp/novtable.md), [process](../cpp/process.md), [restrict](../cpp/restrict.md), [safebuffers](../cpp/safebuffers.md), [selectany](../cpp/selectany.md) e [thread](../cpp/thread.md).  Supporta inoltre gli attributi degli oggetti COM: [property](../cpp/property-cpp.md) e [uuid](../cpp/uuid-cpp.md).  
  
 Gli attributi della classe di archiviazione `code_seg`, `dllexport`, `dllimport`, `naked`, `noalias`, `nothrow`, `property`, `restrict`, `selectany`, `thread` e `uuid` sono proprietà solo della dichiarazione dell'oggetto o della funzione a cui vengono applicati.  L'attributo `thread` influisce solo sui dati e sugli oggetti.  L'attributo `naked` influisce solo sulle funzioni.  Gli attributi `dllimport` e `dllexport` influiscono sulle funzioni, sui dati e sugli oggetti.  Gli attributi `property`, `selectany` e `uuid` influiscono sugli oggetti COM.  
  
 Le parole chiave `__declspec` devono essere inserite all'inizio di una dichiarazione semplice.  Il compilatore ignora, senza avviso, qualsiasi parola chiave `__declspec` inserita dopo \* o & e prima dell'identificatore della variabile in una dichiarazione.  
  
 Un attributo `__declspec` specificato all'inizio di una dichiarazione del tipo definito dall'utente si applica alla variabile di quel tipo.  Ad esempio:  
  
```  
__declspec(dllimport) class X {} varX;  
```  
  
 In questo caso, l'attributo si applica a `varX`.  Un attributo `__declspec` inserito dopo la parola chiave `struct` o `class` si applica al tipo definito dall'utente.  Ad esempio:  
  
```  
class __declspec(dllimport) X {};  
```  
  
 In questo caso, l'attributo si applica a `X`.  
  
 Le linee guida per l'utilizzo dell'attributo `__declspec` per le dichiarazioni semplici sono le seguenti:  
  
```  
  
decl-specifier-seq declarator-list;  
```  
  
 *decl\-specifier\-seq* deve contenere, tra l'altro, un tipo di base \(ad esempio  `int`, `float`, un `typedef` o nome di classe\), una classe di archiviazione \(ad esempio  `static`, `extern`\) o l'estensione `__declspec`.  *init\-declarator\-list* deve contenere, tra l'altro, la parte di dichiarazioni del puntatore.  Ad esempio:  
  
```  
__declspec(selectany) int * pi1 = 0;   //OK, selectany & int both part of decl-specifier  
int __declspec(selectany) * pi2 = 0;   //OK, selectany & int both part of decl-specifier  
int * __declspec(selectany) pi3 = 0;   //ERROR, selectany is not part of a declarator  
```  
  
 Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo Integer e quindi inizializzata con un valore:  
  
```  
// Example of the __declspec keyword  
__declspec( thread ) int tls_i = 1;  
```  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)