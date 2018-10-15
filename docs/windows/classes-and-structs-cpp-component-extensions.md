---
title: delle classi e struct di riferimento (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
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
ms.openlocfilehash: f2d7ceea7dd3253b28eab5b5fad28381f115225f
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328074"
---
# <a name="ref-class-and-ref-struct--ccli-and-ccx"></a>delle classi e struct di riferimento (C + c++ /CLI e c++ /CX)

Il **classe di riferimento** oppure **uno struct di riferimento** estensioni dichiarano una classe o struct cui *durata degli oggetti* amministrata automaticamente. Quando l'oggetto non è più accessibile o esce dall'ambito, la memoria viene liberata.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="syntax"></a>Sintassi

```cpp
      class_access
      ref class
      name
      modifier :  inherit_accessbase_type {};
class_accessref structnamemodifier :  inherit_accessbase_type {};
class_accessvalue classnamemodifier :  inherit_accessbase_type {};
class_accessvalue structnamemodifier :  inherit_accessbase_type {};

```

### <a name="parameters"></a>Parametri

*class_access*<br/>
(Facoltativo) L'accessibilità della classe o struct all'esterno dell'assembly. I valori possibili sono **pubbliche** e **privato** (**private** è l'impostazione predefinita). Le classi annidate o gli struct non possono avere una *class_access* identificatore.

*name*<br/>
Nome della classe o dello struct.

*Modificatore*<br/>
(Facoltativo) [astratto](../windows/abstract-cpp-component-extensions.md) e [sealed](../windows/sealed-cpp-component-extensions.md) sono modificatori validi.

*inherit_access*<br/>
(Facoltativo) L'accessibilità delle *base_type*. L'unica accessibilità consentito è **pubbliche** (**pubblico** è l'impostazione predefinita).

*base_type*<br/>
(Facoltativo) Tipo di base. Tuttavia, un tipo valore non può fungere da tipo di base.

Per altre informazioni, vedere le descrizioni specifiche del linguaggio di questo parametro nelle sezioni di Windows Runtime e Common Language Runtime.

### <a name="remarks"></a>Note

L'accessibilità del membro predefinito di un oggetto dichiarato con **classe di riferimento** oppure **classe di valori** viene **private**. E l'accessibilità del membro predefinito di un oggetto dichiarato con **uno struct di riferimento** oppure **struct di valore** viene **pubblica**.

Quando un tipo riferimento eredita da un altro tipo riferimento, le funzioni virtuali nella classe di base devono essere sottoposto a override esplicito (con [eseguire l'override](../windows/override-cpp-component-extensions.md)) o nascoste (con [new (nuovo slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)). Le funzioni della classe derivata devono anche essere contrassegnate in modo esplicito come **virtuale**.

Per rilevare in fase di compilazione se un tipo è un **classe di riferimento** o **uno struct di riferimento**, o un **classe di valori** oppure **struct di valore**, usare `__is_ref_class (type)`, `__is_value_class (type)`, o `__is_simple_value_class (type)`. Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

Per altre informazioni sulle classi e gli struct, vedere

- [Istanze di classi e struct](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md)

- [Semantica dello stack C++ per i tipi di riferimento](../dotnet/cpp-stack-semantics-for-reference-types.md)

- [Le classi, strutture e unioni](../cpp/classes-and-structs-cpp.md)

- [Distruttori e finalizzatori in Procedura: definire e usare classi e struct (C + + / CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)

- [Operatori definiti dall'utente (C++/CLI)](../dotnet/user-defined-operators-cpp-cli.md)

- [Conversioni definite dall'utente (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md)

- [Procedura: Eseguire il wrapping di una classe nativa affinché possa essere usata in C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)

- [Classi generiche (C++/CLI)](../windows/generic-classes-cpp-cli.md)

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Note

Visualizzare [le classi e struct](../cppcx/ref-classes-and-structs-c-cx.md) e [classi e struct di valore](https://msdn.microsoft.com/library/windows/apps/hh699861.aspx).

### <a name="parameters"></a>Parametri

*base_type*<br/>
(Facoltativo) Tipo di base. Oggetto **classe di riferimento** oppure **uno struct di riferimento** può ereditare da zero o più interfacce e zero o uno **ref** tipi. Oggetto **classe di valori** oppure **struct di valore** può ereditare solo da zero o più interfacce.

Quando si dichiara un oggetto utilizzando il **classe di riferimento** oppure **uno struct di riferimento** parole chiave, l'oggetto avviene tramite un handle a un oggetto, vale a dire un puntatore reference-counter all'oggetto. Quando la variabile dichiarata esce dall'ambito, il compilatore elimina automaticamente l'oggetto sottostante. Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un handle per l'oggetto.

Quando si dichiara un oggetto utilizzando il **classe di valori** oppure **struct di valore** parole chiave, la durata dell'oggetto dichiarato senza supervisione. L'oggetto è come qualsiasi altra classe o struct C++ standard.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Note

Nella tabella seguente vengono elencate le differenze di sintassi illustrata nella **tutti i runtime** sezione specifiche per C + + / CLI.

### <a name="parameters"></a>Parametri

*base_type*<br/>
(Facoltativo) Tipo di base. Oggetto **classe di riferimento** oppure **ref struct** può ereditare da zero o più gestiti interfacce e zero o solo un tipo riferimento. Oggetto **classe di valori** oppure **struct di valore** può ereditare solo da zero o più interfacce gestite.

Il **classe di riferimento** e **ref struct** parole chiave indicano al compilatore che la classe o struttura deve essere allocata nell'heap. Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un riferimento all'oggetto.

Il **classe di valori** e **struct di valore** parole chiave indica al compilatore che il valore della classe allocato o della struttura viene passato alle funzioni o archiviato nei membri.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)