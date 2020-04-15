---
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
ms.openlocfilehash: 6bc1e9c6d40599ae9a821179dcf56dbb7e21bf10
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372523"
---
# <a name="basic-concepts-in-using-managed-exceptions"></a>Concetti di base per l'utilizzo delle eccezioni gestite

In questo argomento viene illustrata la gestione delle eccezioni nelle applicazioni gestite. Ovvero, un'applicazione compilata con l'opzione del compilatore **/clr.**

## <a name="in-this-topic"></a>Contenuto dell'argomento

- [Generazione di eccezioni in /clr](#vcconbasicconceptsinusingmanagedexceptionsanchor1)

- [Blocchi Try/Catch per le estensioni CLR](#vcconbasicconceptsinusingmanagedexceptionsanchor2)

## <a name="remarks"></a>Osservazioni

Se si esegue la compilazione con l'opzione **/clr,** è possibile gestire le eccezioni CLR e la classe standard <xref:System.Exception> fornisce molti metodi utili per l'elaborazione di eccezioni CLR ed è consigliato come classe base per le classi di eccezioni definite dall'utente.

L'intercettazione di tipi di eccezione derivati da un'interfaccia non è supportata in **/clr**. Inoltre, Common Language Runtime non consente di intercettare le eccezioni di overflow dello stack; un'eccezione di overflow dello stack terminerà il processo.

Per ulteriori informazioni sulle differenze nella gestione delle eccezioni nelle applicazioni gestite e non gestite, vedere Differenze nel comportamento della [gestione delle eccezioni nelle estensioni gestite per C.](../dotnet/differences-in-exception-handling-behavior-under-clr.md)

## <a name="throwing-exceptions-under-clr"></a><a name="vcconbasicconceptsinusingmanagedexceptionsanchor1"></a>Generazione di eccezioni in /clr

L'espressione throw di Cè viene estesa per generare un handle a un tipo CLR. Nell'esempio seguente viene creato un tipo di eccezione personalizzato e quindi viene generata un'istanza di tale tipo:

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

Un tipo di valore deve essere sottoposto a boxed prima della creazione di un'eccezione:A value type must be boxed before being thrown:

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

## <a name="trycatch-blocks-for-clr-extensions"></a><a name="vcconbasicconceptsinusingmanagedexceptionsanchor2"></a>Blocchi Try/Catch per le estensioni CLR

La stessa struttura a blocchi catch try può essere utilizzata per intercettare eccezioni CLR e native:The same **try**/**catch** block structure can be used for catching CLR and native exceptions:

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

### <a name="order-of-unwinding-for-c-objects"></a>Ordine di rimozione per gli oggetti di C

La rimozione si verifica per tutti gli oggetti di C, con distruttori che possono trovarsi nello stack di runtime tra la funzione di generazione e la funzione di gestione. Poiché i tipi CLR vengono allocati nell'heap, la rimozione non si applica a essi.

L'ordine degli eventi per un'eccezione generata è il seguente:

1. Il runtime esamina lo stack alla ricerca della clausola catch appropriata o, nel caso di SEH, un filtro ad eccezione di SEH, per intercettare l'eccezione. Le clausole Catch vengono cercate prima in ordine lessicale e quindi in modo dinamico nello stack di chiamate.

1. Una volta trovato il gestore corretto, lo stack viene rimosso fino a quel punto. Per ogni chiamata di funzione nello stack, i relativi oggetti locali vengono distrutti e vengono eseguiti __finally blocchi, dalla maggior parte annidati verso l'esterno.

1. Una volta rimosso lo stack, viene eseguita la clausola catch.

### <a name="catching-unmanaged-types"></a>Intercettazione di tipi non gestiti

Quando viene generato, viene eseguito il wrapping di <xref:System.Runtime.InteropServices.SEHException>un tipo di oggetto non gestito con un'eccezione di tipo . Quando si cerca la clausola **catch** appropriata, esistono due possibilità.

- Se viene rilevato un tipo nativo di C, l'eccezione viene sottoposta a unwrapped e confrontata con il tipo rilevato. Questo confronto consente di intercettare un tipo nativo di C, in modo normale.

- Tuttavia, se viene esaminata per prima una clausola **catch** di tipo **SEHException** o una delle relative classi base, la clausola intercetterà l'eccezione. Pertanto, è necessario inserire tutte le clausole catch che intercettano i tipi c'è nativo prima di qualsiasi clausola catch di tipi CLR.

Si noti che:

```
catch(Object^)
```

e

```
catch(...)
```

entrambi rilevano qualsiasi tipo generato, incluse le eccezioni SEH.

Se un tipo non gestito viene intercettato da catch(Object, non distruggerà l'oggetto generato.

Quando si generano o intercettano eccezioni non gestite, è consigliabile utilizzare l'opzione del compilatore [/EHsc](../build/reference/eh-exception-handling-model.md) anziché **/EHs** o **/EHa**.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)<br/>
[safe_cast](../extensions/safe-cast-cpp-component-extensions.md)<br/>
[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)
