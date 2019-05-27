---
title: delegate (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- delegate_cpp
- delegate
helpviewer_keywords:
- delegate keyword [C++]
ms.assetid: 03caf23d-7873-4a23-9b34-becf42aaf429
ms.openlocfilehash: 29bf305ed5e4845437b90ed672d1ab0c0de9ced6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65516486"
---
# <a name="delegate--ccli-and-ccx"></a>delegate (C++/CLI e C++/CX)

Dichiara un tipo che rappresenta un puntatore a una funzione.

## <a name="all-runtimes"></a>Tutti i runtime

Windows Runtime e Common Language Runtime supportano entrambi delegati.

### <a name="remarks"></a>Osservazioni

**delegate** è una parola chiave sensibile al contesto. Per altre informazioni, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

Per rilevare in fase di compilazione se un tipo è un delegato, usare la caratteristica di tipo `__is_delegate()`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

C++/CX supporta i delegati con la sintassi seguente.

### <a name="syntax"></a>Sintassi

```cpp
access
delegate
return-type
delegate-type-identifier
(
[ parameters ]
)
```

### <a name="parameters"></a>Parametri

*access*<br/>
(Facoltativo) Accessibilità del delegato, che può essere **public** (impostazione predefinita) o **private**. Il prototipo di funzione può essere qualificato anche con la parola chiave **const** o **volatile**.

*return-type*<br/>
Tipo restituito del prototipo di funzione.

*delegate-type-identifier*<br/>
Nome del tipo di delegato dichiarato.

*parameters*<br/>
(Facoltativo) Tipi e identificatori del prototipo di funzione.

### <a name="remarks"></a>Osservazioni

Usare *delegate-type-identifier* per dichiarare un evento con lo stesso prototipo del delegato. Per altre informazioni, vedere [Delegati (C++/CX)](../cppcx/delegates-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Common Language Runtime supporta i delegati con la sintassi seguente.

### <a name="syntax"></a>Sintassi

```cpp
access
delegate
function_declaration
```

### <a name="parameters"></a>Parametri

*access*<br/>
(Facoltativo) L'accessibilità del delegato all'esterno dell'assembly può essere public o private.  L'impostazione predefinita è private.  All'interno di una classe un delegato può avere qualsiasi accessibilità.

*function_declaration*<br/>
Firma della funzione che può essere associata al delegato. Il tipo restituito di un delegato può essere qualsiasi tipo gestito. Per motivi di interoperabilità, è consigliabile che il tipo restituito di un delegato sia un tipo CLS.

Per definire un delegato non associato, il primo parametro in *function_declaration* deve essere il tipo del puntatore **this** per l'oggetto.

### <a name="remarks"></a>Osservazioni

I delegati sono multicast: il "puntatore a funzione" può essere associato a uno o più metodi all'interno di una classe gestita. La parola chiave **delegate** definisce un tipo di delegato multicast con una firma di metodo specifica.

Un delegato può anche essere associato a un metodo di una classe di valore, ad esempio un metodo statico.

Un delegato ha le caratteristiche seguenti:

- Eredita da `System::MulticastDelegate`.

- Ha un costruttore che accetta due argomenti: un puntatore a una classe gestita oppure NULL (in caso di associazione a un metodo statico) e un metodo completo del tipo specificato.

- Ha un metodo denominato `Invoke`, la cui firma corrisponde alla firma del delegato dichiarata.

Quando viene richiamato un delegato, le funzioni del delegato vengono chiamate nell'ordine in cui sono state collegate.

Il valore restituito di un delegato è il valore restituito dell'ultima funzione membro collegata.

Non è possibile eseguire l'overload di delegati.

I delegati possono essere associati o non associati.

Quando si crea un'istanza di un delegato associato, il primo argomento deve essere un riferimento all'oggetto. Il secondo argomento della creazione di un'istanza di un delegato dovrà essere l'indirizzo di un metodo di un oggetto classe gestita o un puntatore a un metodo di un tipo valore. Il secondo argomento della creazione di un'istanza di un delegato deve denominare il metodo con la sintassi di ambito di classe completa e applicare address-of-operator.

Quando si crea un'istanza di un delegato non associato, il primo argomento sarà l'indirizzo di un metodo di un oggetto classe gestita o un puntatore a un metodo di un tipo valore. L'argomento deve denominare il metodo con la sintassi di ambito di classe completa e applicare address-of-operator.

Quando si crea un delegato per una funzione statica o globale, è necessario un solo parametro: la funzione (facoltativamente, l'indirizzo della funzione).

Per altre informazioni sui delegati, vedere

- [Procedura: Definire e usare delegati (C++/CLI)](../dotnet/how-to-define-and-use-delegates-cpp-cli.md)

- [Delegati generici (C++/CLI)](generic-delegates-visual-cpp.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente mostra come dichiarare, inizializzare e richiamare delegati.

```cpp
// mcppv2_delegate.cpp
// compile with: /clr
using namespace System;

// declare a delegate
public delegate void MyDel(int i);

ref class A {
public:
   void func1(int i) {
      Console::WriteLine("in func1 {0}", i);
   }

   void func2(int i) {
      Console::WriteLine("in func2 {0}", i);
   }

   static void func3(int i) {
      Console::WriteLine("in static func3 {0}", i);
   }
};

int main () {
   A ^ a = gcnew A;

   // declare a delegate instance
   MyDel^ DelInst;

   // test if delegate is initialized
   if (DelInst)
      DelInst(7);

   // assigning to delegate
   DelInst = gcnew MyDel(a, &A::func1);

   // invoke delegate
   if (DelInst)
      DelInst(8);

   // add a function
   DelInst += gcnew MyDel(a, &A::func2);

   DelInst(9);

   // remove a function
   DelInst -= gcnew MyDel(a, &A::func1);

   // invoke delegate with Invoke
   DelInst->Invoke(10);

   // make delegate to static function
   MyDel ^ StaticDelInst = gcnew MyDel(&A::func3);
   StaticDelInst(11);
}
```

```Output
in func1 8

in func1 9

in func2 9

in func2 10

in static func3 11
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)