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
ms.openlocfilehash: 2b063abd4186523d27cab7a766f57aadfeaf765d
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57746045"
---
# <a name="basic-concepts-in-using-managed-exceptions"></a>Concetti di base per l'utilizzo delle eccezioni gestite

In questo argomento vengono illustrati nelle applicazioni gestite di gestione delle eccezioni. Vale a dire, un'applicazione che viene compilata con il **/clr** opzione del compilatore.

## <a name="in-this-topic"></a>Contenuto dell'argomento

- [Generazione di eccezioni in /clr](#vcconbasicconceptsinusingmanagedexceptionsanchor1)

- [Blocchi Try/Catch per le estensioni CLR](#vcconbasicconceptsinusingmanagedexceptionsanchor2)

## <a name="remarks"></a>Note

Se esegue la compilazione con il **/clr** opzione, è possibile gestire le eccezioni di Common Language Runtime, nonché standard <xref:System.Exception> classe fornisce numerosi metodi utili per l'elaborazione di eccezioni di Common Language Runtime ed è consigliata come classe base per eccezione definita dall'utente classi.

Rilevamento di tipi di eccezione derivati da un'interfaccia non è supportato in **/clr**. Inoltre, common language runtime non consente di intercettare le eccezioni di overflow dello stack. un'eccezione di overflow dello stack interromperà il processo.

Per altre informazioni sulle differenze nella gestione delle eccezioni nelle applicazioni gestite e non gestite, vedere [differenze di eccezione la gestione comportamento le estensioni gestite per C++](../dotnet/differences-in-exception-handling-behavior-under-clr.md).

##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor1"></a> Generazione di eccezioni in /clr

L'espressione throw C++ viene estesa per generare un handle a un tipo CLR. Nell'esempio seguente crea un tipo di eccezione personalizzata e quindi genera un'istanza di quel tipo:

```
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

Un tipo di valore deve essere sottoposto a boxing prima che venga generata:

```
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

##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor2"></a> Blocchi Try/Catch per le estensioni CLR

Lo stesso **provare**/**catch** struttura del blocco può essere usato per intercettare CLR sia le eccezioni native:

```
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

### <a name="order-of-unwinding-for-c-objects"></a>Ordine di rimozione per gli oggetti di C++

Per la rimozione si verifica per tutti gli oggetti C++ con i distruttori che possono essere nello stack di runtime tra la funzione generando un'eccezione e la funzione di gestione. Poiché i tipi CLR vengono allocati nell'heap, per la rimozione non si applica a essi.

Come indicato di seguito è riportato l'ordine degli eventi per un'eccezione generata:

1. Il runtime analizza lo stack alla ricerca della clausola catch appropriato oppure, nel caso di gestione delle eccezioni Strutturata, un ad eccezione di filtro per la gestione delle eccezioni Strutturata, per rilevare l'eccezione. Clausole catch vengono cercati innanzitutto in ordine lessicale e quindi in modo dinamico verso il basso nello stack di chiamate.

1. Dopo aver trovato il gestore corretto, lo stack viene rimosso fino a quel punto. Per ogni chiamata di funzione nello stack, i relativi oggetti locali vengono eliminati e finally in cui vengono eseguiti blocchi, dalla maggior parte verso l'esterno annidato.

1. Una volta lo stack viene rimosso, viene eseguita la clausola catch.

### <a name="catching-unmanaged-types"></a>Rilevamento di tipi non gestiti

Quando viene generato un tipo di oggetto non gestito, ne viene eseguito il wrapping con un'eccezione di tipo <xref:System.Runtime.InteropServices.SEHException>. Quando si cercano appropriato **catch** clausola, sono disponibili due possibilità.

- Se viene rilevato un tipo C++ nativo, l'eccezione viene scorporato e confrontato con il tipo rilevato. Questo confronto consente a un tipo C++ native essere individuata in modo normale.

- Tuttavia, se un **intercettare** clausola di tipo **SEHException** o una delle relative classi di base viene esaminato prima di tutto, la clausola sarà intercettata l'eccezione. Pertanto, è necessario inserire tutte le clausole catch che intercettano prima di tutto i tipi nativi C++ prima di qualsiasi clausola catch di tipi CLR.

Si noti che

```
catch(Object^)
```

e

```
catch(...)
```

verranno entrambe rilevare qualsiasi tipo generata incluse eccezioni SEH.

Se un tipo non gestito viene rilevato da catch(Object^), non eliminerà l'oggetto viene generata.

Quando generazione o il rilevamento non gestiti delle eccezioni, è consigliabile usare la [/EHsc](../build/reference/eh-exception-handling-model.md) opzione del compilatore invece di **/EHs** oppure **/EHa**.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)<br/>
[safe_cast](../windows/safe-cast-cpp-component-extensions.md)<br/>
[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)
