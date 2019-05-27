---
title: interior_ptr (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- stdcli::language::interior_ptr
- interior_ptr_cpp
- interior_ptr
helpviewer_keywords:
- interior_ptr keyword [C++]
ms.assetid: 25160f74-569e-492d-9e3c-67ece7486baa
ms.openlocfilehash: 0fba04efeaa634f5e21600768297aee0d999d1c6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515696"
---
# <a name="interiorptr-ccli"></a>interior_ptr (C++/CLI)

Un *puntatore interno* dichiara un puntatore all'interno di un tipo riferimento, ma non all'oggetto stesso. Un puntatore interno può puntare a un handle di riferimento, un tipo di valore, un handle di tipo boxed, un membro di un tipo gestito o un elemento di una matrice gestita.

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
Qualificatori **const** o **volatile**.

*type*<br/>
Tipo di *initializer*.

*var*<br/>
Nome della variabile **interior_ptr**.

*initializer*<br/>
Membro di un tipo di riferimento, elemento di una matrice gestita o qualsiasi altro oggetto che è possibile assegnare a un puntatore nativo.

### <a name="remarks"></a>Osservazioni

Tramite un puntatore nativo non è possibile tenere traccia di un elemento mentre la relativa posizione cambia nell'heap gestito a causa dello spostamento di istanze di un oggetto da parte del Garbage Collector. Affinché il riferimento di un puntatore all'istanza sia corretto, il puntatore deve essere aggiornato dal runtime in base all'oggetto appena posizionato.

Un oggetto **interior_ptr** rappresenta un superset della funzionalità di un puntatore nativo.  Qualsiasi elemento che può essere assegnato a un puntatore nativo può quindi anche essere assegnato a un oggetto **interior_ptr**.  In un puntatore interno può essere eseguito lo stesso set di operazioni dei puntatori nativi, inclusi il confronto e l'aritmetica dei puntatori.

Un puntatore interno può essere dichiarato solo nello stack  e non come membro di una classe.

Poiché i puntatori interni sono disponibili solo nello stack, se si accetta l'indirizzo di un puntatore interno viene generato un puntatore non gestito.

L'oggetto **interior_ptr** dispone di una conversione implicita a **bool**, che ne consente l'uso nelle istruzioni condizionali.

Per informazioni su come dichiarare un puntatore interno che punta a un oggetto che non può essere spostato nell'heap sottoposto a Garbage Collection, vedere [pin_ptr](pin-ptr-cpp-cli.md).

**interior_ptr** si trova nello spazio dei nomi cli.  Per altre informazioni, vedere [Spazi dei nomi Platform, default e cli](platform-default-and-cli-namespaces-cpp-component-extensions.md).

Per ulteriori informazioni sui puntatori interni, vedere

- [Procedura: Dichiarare e usare i puntatori interni e le matrici gestite (C++/CLI)](how-to-declare-and-use-interior-pointers-and-managed-arrays-cpp-cli.md)

- [Procedura: Dichiarare tipi valore con la parola chiave interior_ptr (C++/CLI)](how-to-declare-value-types-with-the-interior-ptr-keyword-cpp-cli.md)

- [Procedura: Eseguire l'overload di funzioni con puntatori interni e puntatori nativi (C++/CLI)](how-to-overload-functions-with-interior-pointers-and-native-pointers-cpp-cli.md)

- [Procedura: Dichiarare i puntatori interni con la parola chiave const (C++/CLI)](how-to-declare-interior-pointers-with-the-const-keyword-cpp-cli.md)

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

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)