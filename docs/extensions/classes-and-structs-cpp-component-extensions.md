---
title: ref class e ref struct (C++/CLI e C++/CX)
ms.date: 05/30/2019
ms.topic: reference
f1_keywords:
- ref class
- value class
- ref struct
- value struct
helpviewer_keywords:
- ref class keyword [C++]
- value class keyword [C++]
- value struct keyword [C++]
- ref struct keyword [C++]
ms.assetid: 5c360764-b229-49c6-9357-66213afbc372
ms.openlocfilehash: 78cf7cf16c4ccf29f72038fd79c5d7a1689c05ac
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80172568"
---
# <a name="ref-class-and-ref-struct--ccli-and-ccx"></a>ref class e ref struct (C++/CLI e C++/CX)

Le estensioni **ref class** e **ref struct** dichiarano una classe o uno struct la cui *durata dell'oggetto* viene amministrata automaticamente. Quando l'oggetto non è più accessibile o esce dall'ambito, la memoria viene liberata.

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
(Facoltativo) Accessibilità della classe o dello struct all'esterno dell'assembly. I valori possibili sono **public** e **private** (**private** è quello predefinito). Le classi o gli struct annidati non possono avere un identificatore *class_access*.

*nome*<br/>
Nome della classe o dello struct.

*modifier*<br/>
(Facoltativo) [abstract](abstract-cpp-component-extensions.md) e [sealed](sealed-cpp-component-extensions.md) sono modificatori validi.

*inherit_access*<br/>
(Facoltativo) Accessibilità di *base_type*. L'unico valore consentito per l'accessibilità è **public** (**public** è il valore predefinito).

*base_type*<br/>
(Facoltativo) Tipo di base. Tuttavia, un tipo valore non può fungere da tipo di base.

Per altre informazioni, vedere le descrizioni specifiche del linguaggio di questo parametro nelle sezioni Windows Runtime e Common Language Runtime.

### <a name="remarks"></a>Osservazioni

L'accessibilità del membro predefinita di un oggetto dichiarato con **ref class** o **value class** è **private**. L'accessibilità del membro predefinita di un oggetto dichiarato con **ref struct** o **value struct** è **public**.

Quando un tipo riferimento eredita da un altro tipo riferimento, le funzioni virtuali nella classe base devono essere sottoposte a override esplicito (con [override](override-cpp-component-extensions.md)) o nascoste (con [new (nuovo slot in vtable)](new-new-slot-in-vtable-cpp-component-extensions.md)). Anche le funzioni di classi derivate devono essere contrassegnate in modo esplicito come **virtual**.

Per rilevare in fase di compilazione se un tipo è una **classe di riferimento** o uno **struct di riferimento** oppure una **classe di valore** o uno **struct di valore**, usare `__is_ref_class (type)`, `__is_value_class (type)` o `__is_simple_value_class (type)`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

Per altre informazioni sulle classi e gli struct, vedere

- [Creazione di istanze di classi e struct](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md)

- [Semantica dello stack C++ per i tipi di riferimento](../dotnet/cpp-stack-semantics-for-reference-types.md)

- [Classi, strutture e unioni](../cpp/classes-and-structs-cpp.md)

- [Distruttori e finalizzatori in procedura: definire e utilizzare classi e struct (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)

- [Operatori definiti dall'utente (C++/CLI)](../dotnet/user-defined-operators-cpp-cli.md)

- [Conversioni definite dall'utente (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md)

- [Procedura: Eseguire il wrapping di una classe nativa affinché possa essere usata in C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)

- [Classi generiche (C++/CLI)](generic-classes-cpp-cli.md)

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Osservazioni

Vedere [Classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md) e [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).

### <a name="parameters"></a>Parametri

*base_type*<br/>
(Facoltativo) Tipo di base. Una **classe di riferimento** o uno **struct di riferimento** può ereditare da zero o più interfacce e da uno o zero tipi **ref**. Una **classe di valore** o uno **struct di valore** può ereditare solo da zero o più interfacce.

Quando si dichiara un oggetto usando la parola chiave **ref class** o **ref struct**, l'accesso all'oggetto avviene tramite un handle a un oggetto, ovvero un puntatore reference-counter all'oggetto. Quando la variabile dichiarata esce dall'ambito, il compilatore elimina automaticamente l'oggetto sottostante. Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un handle per l'oggetto.

Quando si dichiara un oggetto usando la parola chiave **value class** o **value struct**, la durata dell'oggetto dichiarato non viene controllata. L'oggetto è come qualsiasi altra classe o struct C++ standard.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Osservazioni

La tabella seguente elenca le differenze dalla sintassi mostrata nella sezione **Tutti i runtime** specifiche per C++/CLI.

### <a name="parameters"></a>Parametri

*base_type*<br/>
(Facoltativo) Tipo di base. Una **classe di riferimento** o uno **struct di riferimento** può ereditare da zero o più interfacce gestite e da uno o zero tipi ref. Una **classe di valore** o uno **struct di valore** può ereditare solo da zero o più interfacce gestite.

Le parole chiave **ref class** e **ref struct** indicano al compilatore che la classe o la struttura deve essere allocata nell'heap. Quando l'oggetto viene utilizzato come parametro in una chiamata o viene archiviato in una variabile, viene effettivamente passato o archiviato un riferimento all'oggetto.

Le parole chiave **value class** e **value struct** indicano al compilatore che il valore della classe o della struttura allocata viene passato a funzioni o archiviato in membri.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
