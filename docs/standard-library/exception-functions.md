---
title: Funzioni &lt;exception&gt;
ms.date: 11/04/2016
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
ms.openlocfilehash: ede3c828437aab1759c6711fc40511c69646a133
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076573"
---
# <a name="ltexceptiongt-functions"></a>Funzioni &lt;exception&gt;

## <a name="current_exception"></a><a name="current_exception"></a>current_exception

Ottiene un puntatore intelligente all'eccezione corrente.

```cpp
exception_ptr current_exception();
```

### <a name="return-value"></a>Valore restituito

Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) che punta all'eccezione corrente.

### <a name="remarks"></a>Osservazioni

Chiama la funzione `current_exception` in un blocco catch. Se è in corso un'eccezione e il blocco catch riesce a rilevarla, la funzione `current_exception` restituisce un oggetto `exception_ptr` che fa riferimento a tale eccezione. In caso contrario, la funzione restituisce un oggetto `exception_ptr` Null.

La funzione `current_exception` acquisisce l'eccezione in corso, indipendentemente dal fatto che l'istruzione **catch** specifichi un'istruzione di [dichiarazione di eccezione](../cpp/try-throw-and-catch-statements-cpp.md) .

Il distruttore dell'eccezione corrente viene chiamato alla fine del blocco **catch** se l'eccezione non viene rigenerata. Tuttavia, anche se si chiama la funzione `current_exception` nel distruttore, la funzione restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione corrente.

Le chiamate successive alla funzione `current_exception` restituiscono oggetti `exception_ptr` che fanno riferimento a copie diverse dell'eccezione corrente. Di conseguenza, gli oggetti vengono considerati diversi perché fanno riferimento a copie diverse, anche se le copie presentano lo stesso valore binario.

## <a name="make_exception_ptr"></a><a name="make_exception_ptr"></a>make_exception_ptr

Crea un oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) contenente la copia di un'eccezione.

```cpp
template <class E>
    exception_ptr make_exception_ptr(E Except);
```

### <a name="parameters"></a>Parametri

*Eccetto*\
Classe con l'eccezione da copiare. In genere, è possibile specificare un oggetto della [classe exception](../standard-library/exception-class.md) come argomento della funzione `make_exception_ptr`, anche l'argomento può essere costituito da qualsiasi oggetto classe.

### <a name="return-value"></a>Valore restituito

Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) che punta a una copia dell'eccezione corrente per l' *eccezione*.

### <a name="remarks"></a>Osservazioni

Chiamare la funzione `make_exception_ptr` equivale a generare una eccezione C++, rilevarla in un blocco catch, quindi chiamare la funzione [current_exception](../standard-library/exception-functions.md#current_exception) per restituire un oggetto `exception_ptr` che fa riferimento a tale eccezione. L'implementazione Microsoft della funzione `make_exception_ptr` è più efficiente della generazione e del rilevamento di un'eccezione.

In genere un'applicazione non richiede la funzione `make_exception_ptr` e se ne sconsiglia l'utilizzo.

## <a name="rethrow_exception"></a><a name="rethrow_exception"></a>rethrow_exception

Genera un'eccezione passata come parametro.

```cpp
void rethrow_exception(exception_ptr P);
```

### <a name="parameters"></a>Parametri

\ *P*
Eccezione rilevata da generare nuovamente. Se *P* è un [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr)null, la funzione genera [std:: bad_exception](../standard-library/bad-exception-class.md).

### <a name="remarks"></a>Osservazioni

Dopo aver archiviato un'eccezione intercettata in un oggetto `exception_ptr`, il thread principale può elaborare l'oggetto. Nel thread principale, chiamare la funzione `rethrow_exception` insieme all'oggetto `exception_ptr` come suo argomento. La funzione `rethrow_exception` estrae l'eccezione dall'oggetto `exception_ptr`, quindi genera l'eccezione nel contesto del thread principale.

## <a name="get_terminate"></a><a name="get_terminate"></a>get_terminate

Ottiene la funzione `terminate_handler` corrente.

```cpp
terminate_handler get_terminate();
```

## <a name="set_terminate"></a><a name="set_terminate"></a>set_terminate

Crea un nuovo `terminate_handler` da chiamare al termine del programma.

```cpp
terminate_handler set_terminate(terminate_handler fnew) throw();
```

### <a name="parameters"></a>Parametri

\ *fnew*
Funzione da chiamare alla chiusura.

### <a name="return-value"></a>Valore restituito

Indirizzo della funzione precedente chiamata alla chiusura.

### <a name="remarks"></a>Osservazioni

La funzione stabilisce un nuovo [terminate_handler](../standard-library/exception-typedefs.md#terminate_handler) come funzione * *fnew*. Pertanto, *fnew* non deve essere un puntatore null. La funzione restituisce l'indirizzo del gestore di terminazione precedente.

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

## <a name="get_unexpected"></a><a name="get_unexpected"></a>get_unexpected

Ottiene la funzione `unexpected_handler` corrente.

```cpp
unexpected_handler get_unexpected();
```

## <a name="rethrow_if_nested"></a><a name="rethrow_if_nested"></a>rethrow_if_nested

```cpp
template <class E>
    void rethrow_if_nested(const E& e);
```

### <a name="remarks"></a>Osservazioni

Se non è un tipo di classe polimorfico o se `nested_exception` è inaccessibile o ambiguo, non si verifica alcun effetto. In caso contrario, esegue un cast dinamico.

## <a name="set_unexpected"></a><a name="set_unexpected"></a>set_unexpected

Stabilisce un nuovo `unexpected_handler` quando viene rilevata un'eccezione imprevista.

```cpp
unexpected_handler set_unexpected(unexpected_handler fnew) throw();
```

### <a name="parameters"></a>Parametri

\ *fnew*
Funzione da chiamare quando viene rilevata un'eccezione imprevista.

### <a name="return-value"></a>Valore restituito

Indirizzo dell'oggetto `unexpected_handler` precedente.

### <a name="remarks"></a>Osservazioni

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

## <a name="terminate"></a><a name="terminate"></a>terminare

Chiama un gestore di terminazione.

```cpp
void terminate();
```

### <a name="remarks"></a>Osservazioni

La funzione chiama un gestore di terminazione, una funzione di tipo **void**. Se `terminate` viene chiamato direttamente dal programma, il gestore di terminazione è quello impostato più di recente da una chiamata a [set_terminate](../standard-library/exception-functions.md#set_terminate). Se `terminate` viene chiamato per diversi altri motivi durante la valutazione di un'espressione throw, il gestore di terminazione è quello attivo immediatamente dopo la valutazione dell'espressione throw.

Un gestore di terminazione potrebbe non restituire risultati al relativo chiamante. All'avvio del programma, il gestore di terminazione è una funzione che chiama `abort`.

### <a name="example"></a>Esempio

Per un esempio dell'utilizzo di [, vedere ](../standard-library/exception-functions.md#set_unexpected)set_unexpected`terminate`.

## <a name="throw_with_nested"></a><a name="throw_with_nested"></a>throw_with_nested

```cpp
template <class T> [[noreturn]]
    void throw_with_nested(T&& t);
```

### <a name="remarks"></a>Osservazioni

Genera un'eccezione con eccezioni nidificate.

## <a name="uncaught_exception"></a><a name="uncaught_exception"></a>uncaught_exception

Restituisce **true** solo se un'eccezione generata è in corso di elaborazione.

```cpp
bool uncaught_exception();
```

### <a name="return-value"></a>Valore restituito

Restituisce **true** dopo il completamento della valutazione di un'espressione throw e prima del completamento dell'inizializzazione della dichiarazione di eccezione nel gestore corrispondente o della chiamata di [Unexpected](../standard-library/exception-functions.md#unexpected) come risultato dell'espressione throw. In particolare, `uncaught_exception` restituirà **true** quando viene chiamato da un distruttore che viene richiamato durante la rimozione di un'eccezione. Nei dispositivi la funzione `uncaught_exception` è supportata solo in Windows CE 5.00 e versioni successive, comprese le piattaforme Windows Mobile 2005.

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

## <a name="unexpected"></a><a name="unexpected"></a>inaspettato

Chiama il gestore imprevisto.

```cpp
void unexpected();
```

### <a name="remarks"></a>Osservazioni

Lo standard C++ richiede che venga chiamato `unexpected` quando una funzione genera un'eccezione che non si trova nell'elenco throw. L'implementazione corrente non supporta questa condizione. Nell'esempio la funzione `unexpected` viene chiamata direttamente e a sua volta chiama il gestore imprevisto.

La funzione chiama un gestore imprevisto, una funzione di tipo **void**. Se la funzione `unexpected` viene chiamata direttamente dal programma, il gestore imprevisto è quello impostato più di recente da una chiamata a [set_unexpected](../standard-library/exception-functions.md#set_unexpected).

Un gestore imprevisto potrebbe non restituire risultati al relativo chiamante. Potrebbe terminare l'esecuzione in uno dei modi seguenti:

- Generando un oggetto di un tipo elencato nella specifica di eccezione o un oggetto di qualsiasi tipo, se il gestore imprevisto viene chiamato direttamente dal programma.

- Generando un oggetto di tipo [bad_exception](../standard-library/bad-exception-class.md).

- Chiamata di [Terminate](../standard-library/exception-functions.md#terminate), `abort` o **Exit**(`int`).

All'avvio del programma, il gestore imprevisto è una funzione che chiama [terminate](../standard-library/exception-functions.md#terminate).

### <a name="example"></a>Esempio

Per un esempio dell'utilizzo di [, vedere ](../standard-library/exception-functions.md#set_unexpected)set_unexpected`unexpected`.
