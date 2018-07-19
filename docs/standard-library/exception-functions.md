---
title: Funzioni &lt;exception&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- exception/std::current_exception
- exception/std::get_terminate
- exception/std::get_unexpected
- exception/std::make_exception_ptr
- exception/std::rethrow_exception
- exception/std::set_terminate
- exception/std::set_unexpected
- exception/std::terminate
- exception/std::uncaught_exception
- exception/std::unexpected
ms.assetid: c09ac569-5e35-4fe8-872d-ca5810274dd7
helpviewer_keywords:
- std::current_exception [C++]
- std::get_terminate [C++]
- std::get_unexpected [C++]
- std::make_exception_ptr [C++]
- std::rethrow_exception [C++]
- std::set_terminate [C++]
- std::set_unexpected [C++]
- std::terminate [C++]
- std::uncaught_exception [C++]
- std::unexpected [C++]
ms.openlocfilehash: 5734c745f19d22c562f68aa2b518c9b4315ba12e
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38962273"
---
# <a name="ltexceptiongt-functions"></a>Funzioni &lt;exception&gt;

||||
|-|-|-|
|[current_exception](#current_exception)|[get_terminate](#get_terminate)|[get_unexpected](#get_unexpected)|
|[make_exception_ptr](#make_exception_ptr)|[rethrow_exception](#rethrow_exception)|[set_terminate](#set_terminate)|
|[set_unexpected](#set_unexpected)|[terminate](#terminate)|[uncaught_exception](#uncaught_exception)|
|[Imprevisto](#unexpected)|

## <a name="current_exception"></a>  current_exception

Ottiene un puntatore intelligente all'eccezione corrente.

```cpp
exception_ptr current_exception();
```

### <a name="return-value"></a>Valore restituito

Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) che punta all'eccezione corrente.

### <a name="remarks"></a>Note

Chiama la funzione `current_exception` in un blocco catch. Se è in corso un'eccezione e il blocco catch riesce a rilevarla, la funzione `current_exception` restituisce un oggetto `exception_ptr` che fa riferimento a tale eccezione. In caso contrario, la funzione restituisce un oggetto `exception_ptr` Null.

Il `current_exception` funzione acquisisce l'eccezione che è in volo indipendentemente dal fatto che il **catch** istruzione specifica un [dichiarazione di eccezione](../cpp/try-throw-and-catch-statements-cpp.md) istruzione.

Il distruttore dell'eccezione corrente viene chiamato alla fine del **catch** bloccare se non si rigenera l'eccezione. Tuttavia, anche se si chiama la funzione `current_exception` nel distruttore, la funzione restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione corrente.

Le chiamate successive alla funzione `current_exception` restituiscono oggetti `exception_ptr` che fanno riferimento a copie diverse dell'eccezione corrente. Di conseguenza, gli oggetti vengono considerati diversi perché fanno riferimento a copie diverse, anche se le copie presentano lo stesso valore binario.

## <a name="make_exception_ptr"></a>  make_exception_ptr

Crea un oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) contenente la copia di un'eccezione.

```cpp
template <class E>
exception_ptr make_exception_ptr(E Except);
```

### <a name="parameters"></a>Parametri

*Ad eccezione di* la classe con l'eccezione da copiare. In genere, è possibile specificare un oggetto della [classe exception`make_exception_ptr` come argomento della funzione ](../standard-library/exception-class.md), anche l'argomento può essere costituito da qualsiasi oggetto classe.

### <a name="return-value"></a>Valore restituito

Un' [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) che punta a una copia dell'eccezione corrente per *tranne*.

### <a name="remarks"></a>Note

Chiamare la funzione `make_exception_ptr` equivale a generare una eccezione C++, rilevarla in un blocco catch, quindi chiamare la funzione [current_exception](../standard-library/exception-functions.md#current_exception) per restituire un oggetto `exception_ptr` che fa riferimento a tale eccezione. L'implementazione Microsoft della funzione `make_exception_ptr` è più efficiente della generazione e del rilevamento di un'eccezione.

In genere un'applicazione non richiede la funzione `make_exception_ptr` e se ne sconsiglia l'utilizzo.

## <a name="rethrow_exception"></a>  rethrow_exception

Genera un'eccezione passata come parametro.

```cpp
void rethrow_exception(exception_ptr P);
```

### <a name="parameters"></a>Parametri

*P* generare nuovamente l'eccezione rilevata. Se *P* è un valore nullo [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr), la funzione genera [std:: bad_exception](../standard-library/bad-exception-class.md).

### <a name="remarks"></a>Note

Dopo aver archiviato un'eccezione intercettata in un oggetto `exception_ptr`, il thread principale può elaborare l'oggetto. Nel thread principale, chiamare la funzione `rethrow_exception` insieme all'oggetto `exception_ptr` come suo argomento. La funzione `rethrow_exception` estrae l'eccezione dall'oggetto `exception_ptr`, quindi genera l'eccezione nel contesto del thread principale.

## <a name="get_terminate"></a>  get_terminate

Ottiene la funzione `terminate_handler` corrente.

```cpp
terminate_handler get_terminate();
```

## <a name="set_terminate"></a>  set_terminate

Crea un nuovo `terminate_handler` da chiamare al termine del programma.

```cpp
terminate_handler set_terminate(terminate_handler fnew) throw();
```

### <a name="parameters"></a>Parametri

*fnew* la funzione da chiamare alla chiusura.

### <a name="return-value"></a>Valore restituito

Indirizzo della funzione precedente chiamata alla chiusura.

### <a name="remarks"></a>Note

La funzione stabilisce un nuovo [terminate_handler](../standard-library/exception-typedefs.md#terminate_handler) come nome della funzione * *fnew*. Pertanto *fnew* non deve essere un puntatore null. La funzione restituisce l'indirizzo del gestore di terminazione precedente.

### <a name="example"></a>Esempio

```cpp
// exception_set_terminate.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>

using namespace std;

void termfunction()
{
    cout << "My terminate function called." << endl;
    abort();
}

int main()
{
    terminate_handler oldHandler = set_terminate(termfunction);

    // Throwing an unhandled exception would also terminate the program
    // or we could explicitly call terminate();

    //throw bad_alloc();
    terminate();
}

```

## <a name="get_unexpected"></a>  get_unexpected

Ottiene la funzione `unexpected_handler` corrente.

```cpp
unexpected_handler get_unexpected();
```

## <a name="set_unexpected"></a>  set_unexpected

Stabilisce un nuovo `unexpected_handler` quando viene rilevata un'eccezione imprevista.

```cpp
unexpected_handler set_unexpected(unexpected_handler fnew) throw();
```

### <a name="parameters"></a>Parametri

*fnew* la funzione da chiamare quando viene rilevata un'eccezione imprevista.

### <a name="return-value"></a>Valore restituito

Indirizzo dell'oggetto `unexpected_handler` precedente.

### <a name="remarks"></a>Note

*fnew* non deve essere un puntatore null.

Lo standard C++ richiede che venga chiamato `unexpected` quando una funzione genera un'eccezione che non si trova nell'elenco throw. L'implementazione corrente non supporta questa condizione. Nell'esempio seguente viene chiamato direttamente `unexpected`, che a sua volta chiama `unexpected_handler`.

### <a name="example"></a>Esempio

```cpp
// exception_set_unexpected.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>

using namespace std;

void uefunction()
{
    cout << "My unhandled exception function called." << endl;
    terminate(); // this is what unexpected() calls by default
}

int main()
{
    unexpected_handler oldHandler = set_unexpected(uefunction);

    unexpected(); // library function to force calling the
                  // current unexpected handler
}

```

## <a name="terminate"></a>  terminate

Chiama un gestore di terminazione.

```cpp
void terminate();
```

### <a name="remarks"></a>Note

La funzione chiama un gestore di terminazione, una funzione di tipo **void**. Se `terminate` viene chiamato direttamente dal programma, il gestore di terminazione è quello impostato più di recente da una chiamata a [set_terminate](../standard-library/exception-functions.md#set_terminate). Se `terminate` viene chiamato per uno qualsiasi di altre ragioni durante la valutazione di un'espressione throw, il gestore di terminazione è quello attivo subito dopo la valutazione dell'espressione throw.

Un gestore di terminazione potrebbe non restituire risultati al relativo chiamante. All'avvio del programma, il gestore di terminazione è una funzione che chiama `abort`.

### <a name="example"></a>Esempio

Per un esempio dell'utilizzo di `terminate`, vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected).

## <a name="uncaught_exception"></a>  uncaught_exception

Restituisce **true** solo se un'eccezione generata è in corso di elaborazione.

```cpp
bool uncaught_exception();
```

### <a name="return-value"></a>Valore restituito

Restituisce **true** dopo aver completato la valutazione di un'espressione throw e prima di aver completato l'inizializzazione della dichiarazione di eccezione del gestore corrispondente o chiamare il metodo [imprevisto](../standard-library/exception-functions.md#unexpected) come risultato del l'espressione throw. In particolare `uncaught_exception` restituirà **true** quando viene chiamato da un distruttore richiamato durante la rimozione di un'eccezione. Nei dispositivi la funzione `uncaught_exception` è supportata solo in Windows CE 5.00 e versioni successive, comprese le piattaforme Windows Mobile 2005.

### <a name="example"></a>Esempio

```cpp
// exception_uncaught_exception.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>
#include <string>

class Test
{
public:
   Test( std::string msg ) : m_msg( msg )
   {
      std::cout << "In Test::Test(\"" << m_msg << "\")" << std::endl;
   }
   ~Test( )
   {
      std::cout << "In Test::~Test(\"" << m_msg << "\")" << std::endl
         << "        std::uncaught_exception( ) = "
         << std::uncaught_exception( )
         << std::endl;
   }
private:
    std::string m_msg;
};

// uncaught_exception will be true in the destructor
// for the object created inside the try block because
// the destructor is being called as part of the unwind.

int main( void )
   {
      Test t1( "outside try block" );
      try
      {
         Test t2( "inside try block" );
         throw 1;
      }
      catch (...) {
   }
}
```

```Output
In Test::Test("outside try block")
In Test::Test("inside try block")
In Test::~Test("inside try block")
        std::uncaught_exception( ) = 1
In Test::~Test("outside try block")
        std::uncaught_exception( ) = 0
```

## <a name="unexpected"></a>  unexpected

Chiama il gestore imprevisto.

```cpp
void unexpected();
```

### <a name="remarks"></a>Note

Lo standard C++ richiede che venga chiamato `unexpected` quando una funzione genera un'eccezione che non si trova nell'elenco throw. L'implementazione corrente non supporta questa condizione. Nell'esempio la funzione `unexpected` viene chiamata direttamente e a sua volta chiama il gestore imprevisto.

La funzione chiama un gestore imprevisto, una funzione di tipo **void**. Se la funzione `unexpected` viene chiamata direttamente dal programma, il gestore imprevisto è quello impostato più di recente da una chiamata a [set_unexpected](../standard-library/exception-functions.md#set_unexpected).

Un gestore imprevisto potrebbe non restituire risultati al relativo chiamante. Potrebbe terminare l'esecuzione in uno dei modi seguenti:

- Generando un oggetto di un tipo elencato nella specifica di eccezione o un oggetto di qualsiasi tipo, se il gestore imprevisto viene chiamato direttamente dal programma.

- Generando un oggetto di tipo [bad_exception](../standard-library/bad-exception-class.md).

- La chiamata [terminare](../standard-library/exception-functions.md#terminate), `abort` oppure **uscire**(`int`).

All'avvio del programma, il gestore imprevisto è una funzione che chiama [terminate](../standard-library/exception-functions.md#terminate).

### <a name="example"></a>Esempio

Per un esempio dell'utilizzo di `unexpected`, vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected).

## <a name="see-also"></a>Vedere anche

[\<exception>](../standard-library/exception.md)<br/>
