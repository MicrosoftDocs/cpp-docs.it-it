---
title: interior_ptr (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- stdcli::language::interior_ptr
- interior_ptr_cpp
- interior_ptr
dev_langs:
- C++
helpviewer_keywords:
- interior_ptr keyword [C++]
ms.assetid: 25160f74-569e-492d-9e3c-67ece7486baa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b7633c1fb695e99e7d653d2afd26014c2ffe9004
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381907"
---
# <a name="interiorptr-ccli"></a>interior_ptr (C++/CLI)

Un' *puntatore interno* dichiara un puntatore all'interno di un tipo riferimento, ma non all'oggetto stesso. Un puntatore interno può puntare a un handle di riferimento, un tipo di valore, un handle di tipo boxed, un membro di un tipo gestito o un elemento di una matrice gestita.

## <a name="all-runtimes"></a>Tutti i runtime

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

## <a name="windows-runtime"></a>Windows Runtime

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Nell'esempio di sintassi seguente viene illustrato un puntatore interno.

### <a name="syntax"></a>Sintassi

```cpp
cli::interior_ptr<cv_qualifier type> var = &initializer;
```

### <a name="parameters"></a>Parametri

*cv_qualifier*<br/>
**const** oppure **volatile** qualificatori.

*type*<br/>
Il tipo della *inizializzatore*.

*var*<br/>
Il nome del **interior_ptr** variabile.

*initializer*<br/>
Membro di un tipo di riferimento, elemento di una matrice gestita o qualsiasi altro oggetto che è possibile assegnare a un puntatore nativo.

### <a name="remarks"></a>Note

Tramite un puntatore nativo non è possibile tenere traccia di un elemento mentre la relativa posizione cambia nell'heap gestito a causa dello spostamento di istanze di un oggetto da parte del Garbage Collector. Affinché il riferimento di un puntatore all'istanza sia corretto, il puntatore deve essere aggiornato dal runtime in base all'oggetto appena posizionato.

Un' **interior_ptr** rappresenta un superset della funzionalità di un puntatore nativo.  Pertanto, qualsiasi elemento che può essere assegnato a un puntatore nativo può anche essere assegnato a un **interior_ptr**.  In un puntatore interno può essere eseguito lo stesso set di operazioni dei puntatori nativi, inclusi il confronto e l'aritmetica dei puntatori.

Un puntatore interno può essere dichiarato solo nello stack  e non come membro di una classe.

Poiché i puntatori interni sono disponibili solo nello stack, se si accetta l'indirizzo di un puntatore interno viene generato un puntatore non gestito.

**interior_ptr** dispone di una conversione implicita a **bool**, che consente di utilizzarlo nelle istruzioni condizionali.

Per informazioni su come dichiarare un puntatore interno che punta a un oggetto che non può essere spostato nell'heap sottoposto a garbage collection, vedere [pin_ptr](../windows/pin-ptr-cpp-cli.md).

**interior_ptr** è nello spazio dei nomi cli.  Visualizzare [Platform, default e cli gli spazi dei nomi](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md) per altre informazioni.

Per ulteriori informazioni sui puntatori interni, vedere

- [Procedura: Dichiarare e usare i puntatori interni e le matrici gestite (C++/CLI)](../windows/how-to-declare-and-use-interior-pointers-and-managed-arrays-cpp-cli.md)

- [Procedura: Dichiarare i tipi di valori con la parola chiave interior_ptr (C++/CLI)](../windows/how-to-declare-value-types-with-the-interior-ptr-keyword-cpp-cli.md)

- [Procedura: Eseguire l'overload di funzioni con puntatori interni e puntatori nativi (C++/CLI)](../windows/how-to-overload-functions-with-interior-pointers-and-native-pointers-cpp-cli.md)

- [Procedura: Dichiarare i puntatori interni con la parola chiave const (C++/CLI)](../windows/how-to-declare-interior-pointers-with-the-const-keyword-cpp-cli.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Nell'esempio riportato di seguito viene mostrato come dichiarare e utilizzare un puntatore interno in un tipo di riferimento.

```cpp
// interior_ptr.cpp
// compile with: /clr
using namespace System;

ref class MyClass {
public:
   int data;
};

int main() {
   MyClass ^ h_MyClass = gcnew MyClass;
   h_MyClass->data = 1;
   Console::WriteLine(h_MyClass->data);

   interior_ptr<int> p = &(h_MyClass->data);
   *p = 2;
   Console::WriteLine(h_MyClass->data);

   // alternatively
   interior_ptr<MyClass ^> p2 = &h_MyClass;
   (*p2)->data = 3;
   Console::WriteLine((*p2)->data);
}
```

```Output
1
2
3
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)