---
title: Classi e struct (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ref class keyword [C++]
- value class keyword [C++]
- value struct keyword [C++]
- ref struct keyword [C++]
ms.assetid: 5c360764-b229-49c6-9357-66213afbc372
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9863786e5e017b69217f984e3aa6d1db597e74d3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="classes-and-structs--c-component-extensions"></a>Classi e struct (Estensioni del componente C++)
Dichiara una classe o struct i cui *durata degli oggetti* amministrata automaticamente. Quando l'oggetto non è più accessibile o esce dall'ambito, Visual C++ rimuove automaticamente la memoria allocata per l'oggetto.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 **Sintassi**  
  
```  
  
      class_access  
      ref class  
      name  
      modifier :  inherit_accessbase_type {};  
class_accessref structnamemodifier :  inherit_accessbase_type {};  
class_accessvalue classnamemodifier :  inherit_accessbase_type {};  
class_accessvalue structnamemodifier :  inherit_accessbase_type {};  
  
```  
  
 **Parametri**  
  
 *class_access* (facoltativo)  
 L'accessibilità della classe o dello struct all'esterno dell'assembly. I valori possibili sono **pubblica** e `private` (`private` è l'impostazione predefinita). Classi annidate o struct non può avere un *class_access* identificatore.  
  
 *name*  
 Nome della classe o dello struct.  
  
 *modificatore* (facoltativo)  
 [astratto](../windows/abstract-cpp-component-extensions.md) e [sealed](../windows/sealed-cpp-component-extensions.md) sono modificatori validi.  
  
 *inherit_access* (facoltativo)  
 L'accessibilità di `base_type`. L'unico valore di accessibilità consentito è `public`. Il valore predefinito è `public`.  
  
 *base_type* (facoltativo)  
 Tipo di base. Tuttavia, un tipo valore non può fungere da tipo di base.  
  
 Per ulteriori informazioni, vedere le descrizioni specifiche della lingua di questo parametro in Windows Runtime e Common Language Runtimesections.  
  
 **Note**  
  
 L'accessibilità del membro predefinito di un oggetto dichiarato con **classe di riferimento** o **classe di valori** è `private`. E l'accessibilità del membro predefinito di un oggetto dichiarato con **ref struct** o **struct di valore** è `public`.  
  
 Quando un tipo riferimento eredita da un altro tipo di riferimento, le funzioni virtuali nella classe di base devono essere sottoposto a override esplicito (con [override](../windows/override-cpp-component-extensions.md)) o nascoste (con [new (nuovo slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)). Inoltre, le funzioni della classe derivata devono essere contrassegnate in modo esplicito come `virtual`.  
  
 Per rilevare in fase di compilazione se un tipo è un `ref class` o `ref struct`, o un `value class` o `value struct`, utilizzare `__is_ref_class (type)`, `__is_value_class (type)`, o `__is_simple_value_class (type)`. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 Per altre informazioni sulle classi e gli struct, vedere  
  
-   [Creazione di istanze di classi e struct](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md)  
  
 
  
-   [Semantica dello stack C++ per i tipi di riferimento](../dotnet/cpp-stack-semantics-for-reference-types.md)  
  
-   [Classi, strutture e unioni](../cpp/classes-and-structs-cpp.md)  
  
-   [Distruttori e finalizzatori nella procedura: definire e usare classi e struct (C + c++ /CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)  
  
-   [Operatori definiti dall'utente (C++/CLI)](../dotnet/user-defined-operators-cpp-cli.md)  
  
-   [Conversioni definite dall'utente (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md)  
  
-   [Procedura: Eseguire il wrapping di una classe nativa affinché possa essere usata in C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)  
  
-   [Classi generiche (C++/CLI)](../windows/generic-classes-cpp-cli.md)  
  
## <a name="windows-runtime"></a>Windows Runtime  
 **Note**  
  
 Vedere [le classi e struct](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx) e [classi e struct di valore](http://msdn.microsoft.com/library/windows/apps/hh699861.aspx).  
  
 **Parametri**  
  
 *base_type* (facoltativo)  
 Tipo di base. `ref class` o `ref struct` può ereditare da zero o più interfacce e da zero o un solo tipo `ref`. `value class` o `value struct` può ereditare solo da zero o più interfacce.  
  
 Quando si dichiara un oggetto con le parole chiave `ref class` o `ref struct`, l'accesso all'oggetto avviene tramite un handle a un oggetto, ovvero un puntatore reference-counter all'oggetto. Quando la variabile dichiarata esce dall'ambito, il compilatore elimina automaticamente l'oggetto sottostante. Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un handle per l'oggetto.  
  
 Quando si dichiara un oggetto usando la parola chiave `value class` o `value struct`, non viene controllata la durata dell'oggetto dichiarato. L'oggetto è come qualsiasi altra classe o struct C++ standard.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 Nella tabella seguente vengono elencate le differenze nella sintassi di **tutti i runtime** sezione specifiche di C + + CLI.  
  
 **Parametri**  
  
 *base_type* (facoltativo)  
 Tipo di base. `ref class` o `ref struct` può ereditare da zero o più interfacce gestite e da zero o solo un tipo riferimento. `value class` o `value struct` può ereditare solo da zero o più interfacce gestite.  
  
 Le parole chiave `ref class` e `ref struct` indicano al compilatore che la classe o struttura deve essere allocata nell'heap. Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un riferimento all'oggetto.  
  
 Il `value class` e `value struct` parole chiave indica al compilatore che il valore della classe allocato o della struttura è passato alle funzioni o archiviato nei membri.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)