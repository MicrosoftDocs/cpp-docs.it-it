---
description: "Altre informazioni su: concetti di base sull'uso di eccezioni gestite"
title: Concetti di base per l'utilizzo delle eccezioni gestite
ms.date: 11/04/2016
helpviewer_keywords:
- try-catch exception handling, managed applications
- __finally keyword, managed exceptions
- exceptions, managed
- try-catch exception handling
- catch blocks
- throwing exceptions, managed exceptions
- Visual C++, handling managed exceptions
ms.assetid: 40ce8931-1ecc-491a-815f-733b23fcba35
ms.openlocfilehash: 1c6e405de2a82e32375092007dcc1f0fd8f654c0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282601"
---
# <a name="basic-concepts-in-using-managed-exceptions"></a>Concetti di base per l'utilizzo delle eccezioni gestite

In questo argomento viene illustrata la gestione delle eccezioni nelle applicazioni gestite. Ovvero un'applicazione compilata con l'opzione del compilatore **/CLR** .

## <a name="in-this-topic"></a>Contenuto dell'argomento

- [Generazione di eccezioni in/CLR](#vcconbasicconceptsinusingmanagedexceptionsanchor1)

- [Blocchi try/catch per le estensioni CLR](#vcconbasicconceptsinusingmanagedexceptionsanchor2)

## <a name="remarks"></a>Commenti

Se si esegue la compilazione con l'opzione **/CLR** , è possibile gestire le eccezioni CLR <xref:System.Exception> e la classe standard fornisce molti metodi utili per l'elaborazione delle eccezioni CLR ed è consigliata come classe di base per le classi di eccezioni definite dall'utente.

Il rilevamento dei tipi di eccezione derivati da un'interfaccia non è supportato in **/CLR**. Inoltre, il Common Language Runtime non consente di intercettare le eccezioni di overflow dello stack. un'eccezione di overflow dello stack terminerà il processo.

Per ulteriori informazioni sulle differenze nella gestione delle eccezioni nelle applicazioni gestite e non gestite, vedere [differenze nel comportamento di gestione delle eccezioni in estensioni gestite per C++](../dotnet/differences-in-exception-handling-behavior-under-clr.md).

## <a name="throwing-exceptions-under-clr"></a><a name="vcconbasicconceptsinusingmanagedexceptionsanchor1"></a> Generazione di eccezioni in/CLR

L'espressione throw C++ viene estesa per generare un handle a un tipo CLR. Nell'esempio seguente viene creato un tipo di eccezione personalizzato, quindi viene generata un'istanza di tale tipo:

```cpp
// clr_exception_handling.cpp
// compile with: /clr /c
ref struct MyStruct: public System::Exception {
public:
   int i;
};

void GlobalFunction() {
   MyStruct^ pMyStruct = gcnew MyStruct;
   throw pMyStruct;
}
```

È necessario eseguire il Boxing di un tipo di valore prima di generarlo:

```cpp
// clr_exception_handling_2.cpp
// compile with: /clr /c
value struct MyValueStruct {
   int i;
};

void GlobalFunction() {
   MyValueStruct v = {11};
   throw (MyValueStruct ^)v;
}
```

## <a name="trycatch-blocks-for-clr-extensions"></a><a name="vcconbasicconceptsinusingmanagedexceptionsanchor2"></a> Blocchi try/catch per le estensioni CLR

La stessa **`try`** / **`catch`** struttura di blocco può essere utilizzata per intercettare le eccezioni CLR e native:

```cpp
// clr_exception_handling_3.cpp
// compile with: /clr
using namespace System;
ref struct MyStruct : public Exception {
public:
   int i;
};

struct CMyClass {
public:
   double d;
};

void GlobalFunction() {
   MyStruct^ pMyStruct = gcnew MyStruct;
   pMyStruct->i = 11;
   throw pMyStruct;
}

void GlobalFunction2() {
   CMyClass c = {2.0};
   throw c;
}

int main() {
   for ( int i = 1; i >= 0; --i ) {
      try {
         if ( i == 1 )
            GlobalFunction2();
         if ( i == 0 )
            GlobalFunction();
      }
      catch ( CMyClass& catchC ) {
         Console::WriteLine( "In 'catch(CMyClass& catchC)'" );
         Console::WriteLine( catchC.d );
      }
      catch ( MyStruct^ catchException ) {
         Console::WriteLine( "In 'catch(MyStruct^ catchException)'" );
         Console::WriteLine( catchException->i );
      }
   }
}
```

### <a name="output"></a>Output

```
In 'catch(CMyClass& catchC)'
2
In 'catch(MyStruct^ catchException)'
11
```

### <a name="order-of-unwinding-for-c-objects"></a>Ordine di rimozione per gli oggetti C++

La rimozione si verifica per qualsiasi oggetto C++ con distruttori che può trovarsi nello stack di runtime tra la funzione di generazione e la funzione di gestione. Poiché i tipi CLR sono allocati nell'heap, la rimozione non è applicabile.

L'ordine degli eventi per un'eccezione generata è il seguente:

1. Il runtime percorre lo stack cercando la clausola catch appropriata o, nel caso di SEH, un filtro except per SEH, per intercettare l'eccezione. Le clausole catch vengono ricercate prima in ordine lessicale e quindi in modo dinamico nello stack di chiamate.

1. Una volta individuato il gestore corretto, lo stack viene rimosso fino a quel momento. Per ogni chiamata di funzione nello stack, i relativi oggetti locali sono destructed e vengono eseguiti __finally blocchi, dal più annidato verso l'esterno.

1. Una volta rimosso lo stack, viene eseguita la clausola catch.

### <a name="catching-unmanaged-types"></a>Rilevamento di tipi non gestiti

Quando viene generato un tipo di oggetto non gestito, questo viene sottoposto a wrapper con un'eccezione di tipo <xref:System.Runtime.InteropServices.SEHException> . Quando si cerca la **`catch`** clausola appropriata, sono disponibili due possibilità.

- Se viene rilevato un tipo C++ nativo, l'eccezione viene decrittografata e confrontata con il tipo rilevato. Questo confronto consente di intercettare un tipo C++ nativo in modo normale.

- Tuttavia, se una **`catch`** clausola di tipo **SEHException** o una delle relative classi base viene esaminata per prima, la clausola intercetta l'eccezione. Pertanto, è necessario inserire tutte le clausole catch che intercettano i tipi C++ nativi prima di tutte le clausole catch dei tipi CLR.

Si noti che:

```
catch(Object^)
```

e

```
catch(...)
```

entrambi rileveranno qualsiasi tipo generato, incluse le eccezioni SEH.

Se un tipo non gestito viene rilevato da catch (Object ^), non eliminerà definitivamente l'oggetto generato.

Quando si generano o intercettano eccezioni non gestite, è consigliabile usare l'opzione del compilatore [/EHsc](../build/reference/eh-exception-handling-model.md) invece di **/EHS** o **/EHA**.

## <a name="see-also"></a>Vedi anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)<br/>
[safe_cast](../extensions/safe-cast-cpp-component-extensions.md)<br/>
[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)
