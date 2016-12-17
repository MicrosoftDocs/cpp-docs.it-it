---
title: "Classes and Structs  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "public"
  - "ref struct"
  - "value_CPP"
  - "ref class"
  - "value struct"
  - "ref struct_cpp"
  - "ref class_cpp"
  - "value class_cpp"
  - "value struct_cpp"
  - "value class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ref class keyword [C++]"
  - "value class keyword [C++]"
  - "value struct keyword [C++]"
  - "ref struct keyword [C++]"
ms.assetid: 5c360764-b229-49c6-9357-66213afbc372
caps.latest.revision: 32
caps.handback.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classes and Structs  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dichiara una classe o struct con *durata degli oggetti* amministrata automaticamente.  Quando l'oggetto non è più accessibile o esce dall'ambito, Visual C\+\+ rimuove automaticamente la memoria allocata per l'oggetto.  
  
## Tutti i runtime  
 **Sintassi**  
  
```  
  
          class_access ref class    name modifier :  inherit_access base_type {};  
class_access ref struct   name modifier :  inherit_access base_type {};  
class_access value class  name modifier :  inherit_access base_type {};  
class_access value struct name modifier :  inherit_access base_type {};  
  
```  
  
 **Parametri**  
  
 *class\_access* \(facoltativo\)  
 L'accessibilità della classe o dello struct all'esterno dell'assembly.  I valori possibili sono **public** e `private`. Il valore predefinito è `private`.  Nelle classi o negli struct annidati non può essere presente un identificatore *class\_access*.  
  
 *name*  
 Nome della classe o dello struct.  
  
 *modifier* \(facoltativo\)  
 [abstract](../windows/abstract-cpp-component-extensions.md) e [sealed](../windows/sealed-cpp-component-extensions.md) sono modificatori validi.  
  
 *inherit\_access* \(facoltativo\)  
 L'accessibilità di `base_type`.  L'unico valore di accessibilità consentito è `public`. Il valore predefinito è `public`.  
  
 *base\_type* \(facoltativo\)  
 Tipo di base.  Tuttavia, un tipo valore non può fungere da tipo di base.  
  
 Per altre informazioni, vedere le descrizioni specifiche del linguaggio per questo parametro nelle sezioni [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)].  
  
 **Note**  
  
 L'accessibilità del membro predefinita di un oggetto dichiarato con **ref class** o **value class** è `private`.  L'accessibilità del membro predefinita di un oggetto dichiarato con **ref struct** o **value struct** è `public`.  
  
 Quando un tipo riferimento eredita da un altro tipo riferimento, le funzioni virtuali nella classe di base devono essere sottoposte a override esplicito \(con [override](../windows/override-cpp-component-extensions.md)\) o nascoste \(con [new \(new slot in vtable\)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)\).  Inoltre, le funzioni della classe derivata devono essere contrassegnate in modo esplicito come `virtual`.  
  
 Per rilevare in fase di compilazione se un tipo è `ref class` o `ref struct` oppure `value class` o `value struct`, usare `__is_ref_class (``type``)`, `__is_value_class (``type``)` o  `__is_simple_value_class (``type``)`.  Per altre informazioni, vedere la pagina relativa al [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 Per altre informazioni sulle classi e gli struct, vedere  
  
-   [Creazione di istanze di classi e struct](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md)  
  
-   [Semantica del puntatore 'this' nei tipi di valore e di riferimento](../misc/semantics-of-the-this-pointer-in-value-and-reference-types.md)  
  
-   [Semantica dello stack C\+\+ per i tipi di riferimento](../dotnet/cpp-stack-semantics-for-reference-types.md)  
  
-   [Classi, strutture e unioni](../cpp/classes-and-structs-cpp.md)  
  
-   [public e private per le classi native](../misc/how-to-declare-public-and-private-on-native-classes.md)  
  
-   [Classi astratte implicite](../misc/implicitly-abstract-classes.md)  
  
-   [Definire costruttori statici in una classe o uno struct](../misc/how-to-define-static-constructors-in-a-class-or-struct.md)  
  
-   [Impossibile generare un costruttore di copia](../misc/copy-constructor-may-not-be-generated.md)  
  
-   [Funzioni di tipo nascondi in base alla firma in tipi di riferimento](../misc/hide-by-signature-functions-in-reference-types.md)  
  
-   [Distruttori e finalizzatori in Visual C\+\+](../misc/destructors-and-finalizers-in-visual-cpp.md)  
  
-   [Visibilità di tipi e membri](../misc/type-and-member-visibility.md)  
  
-   [Operatori definiti dall'utente](../dotnet/user-defined-operators-cpp-cli.md)  
  
-   [Conversioni definite dall'utente](../dotnet/user-defined-conversions-cpp-cli.md)  
  
-   [Procedura: eseguire il wrapping di una classe nativa affinché possa essere utilizzata in C\#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)  
  
-   [Generic Classes \(C\+\+\/CLI\)](../windows/generic-classes-cpp-cli.md)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Note**  
  
 Vedere [Classi e struct di riferimento](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx) e [Classi e struct di valore](http://msdn.microsoft.com/library/windows/apps/hh699861.aspx).  
  
 **Parametri**  
  
 *base\_type* \(facoltativo\)  
 Tipo di base.  `ref class` o `ref struct` può ereditare da zero o più interfacce e da zero o un solo tipo `ref`.  `value class` o `value struct` può ereditare solo da zero o più interfacce.  
  
 Quando si dichiara un oggetto con le parole chiave `ref class` o `ref struct`, l'accesso all'oggetto avviene tramite un handle a un oggetto, ovvero un puntatore reference\-counter all'oggetto.  Quando la variabile dichiarata esce dall'ambito, il compilatore elimina automaticamente l'oggetto sottostante.  Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un handle per l'oggetto.  
  
 Quando si dichiara un oggetto usando la parola chiave `value class` o `value struct`, non viene controllata la durata dell'oggetto dichiarato.  L'oggetto è come qualsiasi altra classe o struct C\+\+ standard.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Note**  
  
 Nella tabella seguente vengono elencate le differenze con la sintassi illustrata nella sezione **Tutti i runtime** specifiche per C\+\+\/CLI.  
  
 **Parametri**  
  
 *base\_type* \(facoltativo\)  
 Tipo di base.  `ref class` o `ref struct` può ereditare da zero o più interfacce gestite e da zero o solo un tipo riferimento.  `value class` o `value struct` può ereditare solo da zero o più interfacce gestite.  
  
 Le parole chiave `ref class` e `ref struct` indicano al compilatore che la classe o struttura deve essere allocata nell'heap.  Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un riferimento all'oggetto.  
  
 Tramite le parole chiave `value class` e `value struct` viene indicato al compilatore che il valore della classe o della struttura allocata viene passato alle funzioni o viene archiviato nei membri.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)