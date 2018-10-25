---
title: delegare (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- delegate_cpp
- delegate
dev_langs:
- C++
helpviewer_keywords:
- delegate keyword [C++]
ms.assetid: 03caf23d-7873-4a23-9b34-becf42aaf429
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fd0f63aebaa6dd742e1ce701e42cf8238fb6033f
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50068095"
---
# <a name="delegate--ccli-and-ccx"></a>delegare (C + c++ /CLI e c++ /CX)

Dichiara un tipo che rappresenta un puntatore a funzione.

## <a name="all-runtimes"></a>Tutti i runtime

Sia Windows Runtime e common language runtime supporta i delegati.

### <a name="remarks"></a>Note

**delegare** è una parola chiave sensibile al contesto. Per altre informazioni, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).

Per rilevare in fase di compilazione se un tipo è un delegato, usare il `__is_delegate()` tratto di tipo. Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

C + c++ /CX supporta i delegati con la sintassi seguente.

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
(facoltativo) L'accessibilità del delegato, che può essere **pubbliche** (predefinito) o **privati**. Il prototipo di funzione può anche essere qualificato con il **const** oppure **volatile** parole chiave.

*tipo restituito*<br/>
Il tipo restituito del prototipo di funzione.

*Identificatore di tipo delegato*<br/>
Nome del tipo del delegato dichiarata.

*Parametri*<br/>
(Facoltativo) I tipi e gli identificatori del prototipo di funzione.

### <a name="remarks"></a>Note

Usare la *delegato-type-identifier* per dichiarare un evento con lo stesso prototipo del delegato. Per altre informazioni, vedere [delegati (C + c++ /CX)](../cppcx/delegates-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Common language runtime supporta i delegati con la sintassi seguente.

### <a name="syntax"></a>Sintassi

```cpp
access
delegate
function_declaration
```

### <a name="parameters"></a>Parametri

*access*<br/>
(facoltativo) L'accessibilità del delegato all'esterno dell'assembly può essere pubblico o privato.  Il valore predefinito è privato.  All'interno di una classe, un delegato può avere qualsiasi accessibilità.

*function_declaration*<br/>
La firma della funzione che può essere associata al delegato. Il tipo restituito di un delegato può essere qualsiasi tipo gestito. Per motivi di interoperabilità, è consigliabile che il tipo restituito del delegato essere un tipo a CLS.

Per definire un delegato non associato, il primo parametro nel *function_declaration* deve essere il tipo delle **ciò** puntatore per l'oggetto.

### <a name="remarks"></a>Note

I delegati sono multicast: "puntatore a funzione" può essere associato a uno o più metodi all'interno di una classe gestita. Il **delegare** (parola chiave) definisce un tipo di delegato multicast con una firma di metodo specifico.

Un delegato può anche essere associato a un metodo di una classe di valore, ad esempio un metodo statico.

Un delegato presenta le caratteristiche seguenti:

- Eredita da `System::MulticastDelegate`.

- È disponibile un costruttore che accetta due argomenti: un puntatore a una classe gestita o NULL (nel caso di associazione a un metodo statico) e un metodo completamente qualificato del tipo specificato.

- Ha un metodo denominato `Invoke`, la cui firma corrisponde alla firma del delegato dichiarata.

Quando viene richiamato un delegato, le funzioni vengono chiamati nell'ordine in cui sono stati collegati.

Il valore restituito di un delegato è il valore restituito dalla relativa ultima funzione membro associato.

I delegati non possono essere sottoposti a overload.

I delegati possono essere associati o non associati.

Quando si crea un'istanza di un delegato associato, il primo argomento deve essere un riferimento all'oggetto. Il secondo argomento della creazione di un'istanza di delegato dovrà entrambi corrispondere all'indirizzo di un metodo di un oggetto di classe gestita o un puntatore a un metodo di un tipo valore. Il secondo argomento della creazione di un'istanza di delegato deve denominare il metodo con la sintassi di ambito di classe completo e applicare l'operatore address-of.

Quando si crea un'istanza di un delegato non associato, il primo argomento deve essere l'indirizzo di un metodo di un oggetto di classe gestita o un puntatore a un metodo di un tipo valore. L'argomento deve denominare il metodo con la sintassi dell'ambito completo della classe e applicare l'operatore address-of.

Quando si crea un delegato a una funzione statica o globale, è necessario un solo parametro: la funzione (facoltativamente, l'indirizzo della funzione).

Per altre informazioni sui delegati, vedere

- [Procedura: Definire e usare delegati (C++/CLI)](../dotnet/how-to-define-and-use-delegates-cpp-cli.md)

- [I delegati generici (C + + CLI)](../windows/generic-delegates-visual-cpp.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Nell'esempio seguente viene illustrato come dichiarare, inizializzare e richiamare delegati.

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

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)