---
title: Type conversions and type safety
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 629b361a-2ce1-4700-8b5d-ab4f57b245d5
ms.openlocfilehash: dbca9057622ab1a92b74e2958b8dfbe8d810fede
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246117"
---
# <a name="type-conversions-and-type-safety"></a>Type conversions and type safety

In questo documento vengono identificati i problemi comuni di conversione dei tipi e viene descritto come evitarli quando si scrive codice C++.

Quando si scrive un programma in C++, è importante assicurarsi che sia indipendente dai tipi. Ciò significa che qualsiasi variabile, argomento di funzione e valore restituito di una funzione memorizza un tipo di dati accettabile e che le operazioni che includono valori di tipi diversi "hanno significato" e non comportano perdita di dati, errata interpretazione di schemi di bit o danneggiamento della memoria. Un programma che non converte mai in modo esplicito o implicito dei valori da un tipo in un altro è indipendente dai tipi per definizione. Tuttavia, le conversioni di tipo, anche non sicure, sono talvolta necessarie. For example, you might have to store the result of a floating point operation in a variable of type **int**, or you might have to pass the value in an unsigned **int** to a function that takes a signed **int**. Both examples illustrate unsafe conversions because they may cause data loss or re-interpretation of a value.

Quando il compilatore rileva una conversione non sicura, genera un errore o un avviso. Un errore arresta la compilazione; un avviso permette di proseguire la compilazione ma indica un possibile errore nel codice. Tuttavia, anche se il programma viene compilato senza avvisi, potrebbe contenere codice che porta a conversioni di tipi implicite che producono risultati errati. Gli errori di tipo possono essere dovuti anche a conversioni esplicite, o cast, nel codice.

## <a name="implicit-type-conversions"></a>Conversioni implicite di tipi

When an expression contains operands of different built-in types, and no explicit casts are present, the compiler uses built-in *standard conversions* to convert one of the operands so that the types match. Il compilatore tenta le conversioni in una sequenza ben definita finché una conversione non ha esito positivo. Se la conversione selezionata è una promozione, il compilatore non genera un avviso. Se la conversione è di tipo narrowing, il compilatore genera un avviso sulla possibile perdita di dati. L'effettiva perdita di dati dipende dai valori effettivi implicati, ma si consiglia di considerare questo avviso come se fosse un errore. Se è coinvolto un tipo definito dall'utente, il compilatore tenta di utilizzare le conversioni specificate nella definizione della classe. Se non viene trovata una conversione accettabile, il compilatore genera un errore e il programma non verrà compilato. For more information about the rules that govern the standard conversions, see [Standard Conversions](../cpp/standard-conversions.md). For more information about user-defined conversions, see [User-Defined Conversions (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md).

### <a name="widening-conversions-promotion"></a>Conversione di ampliamento (promozione)

In una conversione di ampliamento un valore in una variabile più piccola viene assegnato a una variabile più grande senza perdita di dati. Poiché le conversioni di ampliamento sono sempre sicure, vengono eseguite automaticamente senza generare avvisi. Le seguenti conversioni sono di ampliamento.

|Da|Per|
|----------|--------|
|Any signed or unsigned integral type except **long long** or **__int64**|**double**|
|**bool** or **char**|Qualsiasi altro tipo predefinito|
|**short** or **wchar_t**|**int**, **long**, **long long**|
|**int**, **long**|**long long**|
|**float**|**double**|

### <a name="narrowing-conversions-coercion"></a>Conversione di narrowing (coercizione)

Il compilatore esegue conversioni di narrowing in modo implicito, ma segnala potenziali perdite di dati. Si tratta di avvisi molto seri. Se si è certi che non si verificherà alcuna perdita di dati perché i valori nella variabile più grande si adatteranno alla variabile più piccola, aggiungere un cast esplicito in modo che il compilatore non generi più alcun un avviso. Se non si è certi della sicurezza della conversione, aggiungere al codice un tipo di controllo in fase di esecuzione per gestire la perdita di dati in modo che il programma non produca risultati errati.

Una conversione da un tipo a virgola mobile a un tipo integrale è una conversione di narrowing perché la parte decimale del valore in virgola mobile viene rimossa e persa.

Nell'esempio di codice seguente vengono illustrate alcune conversioni di narrowing implicite e i relativi avvisi che vengono generati dal compilatore.

```cpp
int i = INT_MAX + 1; //warning C4307:'+':integral constant overflow
wchar_t wch = 'A'; //OK
char c = wch; // warning C4244:'initializing':conversion from 'wchar_t'
              // to 'char', possible loss of data
unsigned char c2 = 0xfffe; //warning C4305:'initializing':truncation from
                           // 'int' to 'unsigned char'
int j = 1.9f; // warning C4244:'initializing':conversion from 'float' to
              // 'int', possible loss of data
int k = 7.7; // warning C4244:'initializing':conversion from 'double' to
             // 'int', possible loss of data
```

### <a name="signed---unsigned-conversions"></a>Conversioni Signed - Unsigned

Un tipo integrale signed e la relativa controparte unsigned hanno sempre la stessa dimensione, ma differiscono nel modo in cui viene interpretato lo schema di bit per la trasformazione dei valori. Nell'esempio di codice riportato di seguito viene mostrato cosa accade quando lo stesso schema di bit viene interpretato come un valore signed e come un valore unsigned. Lo schema di bit memorizzato in `num` e in `num2` non cambia mai rispetto a quanto mostrato nella precedente illustrazione.

```cpp
using namespace std;
unsigned short num = numeric_limits<unsigned short>::max(); // #include <limits>
short num2 = num;
cout << "unsigned val = " << num << " signed val = " << num2 << endl;
// Prints: unsigned val = 65535 signed val = -1

// Go the other way.
num2 = -1;
num = num2;
cout << "unsigned val = " << num << " signed val = " << num2 << endl;
// Prints: unsigned val = 65535 signed val = -1
```

Notare che i valori vengono interpretati nuovamente in entrambe le direzioni. Se il programma produce risultati bizzarri in cui il segno del valore risulta invertito rispetto al previsto, cercare le conversioni implicite tra i tipi integrali signed e unsigned. In the following example, the result of the expression ( 0 - 1) is implicitly converted from **int** to **unsigned int** when it's stored in `num`. Lo schema di bit viene così reinterpretato.

```cpp
unsigned int u3 = 0 - 1;
cout << u3 << endl; // prints 4294967295
```

Il compilatore non emette avvisi sulle conversioni implicite tra i tipi integrali signed e unsigned. Di conseguenza, è consigliabile evitare le conversioni da signed ad unsigned in generale. Se non è possibile evitarle, aggiungere al codice un controllo in fase di esecuzione per rilevare se il valore da convertire è maggiore o uguale a zero e minore o uguale al valore massimo del tipo signed. I valori in questo intervallo verranno modificati da signed a unsigned o viceversa senza che vengano reinterpretati.

### <a name="pointer-conversions"></a>Conversioni puntatore

In molte espressioni, le matrici in stile C vengono convertite in modo implicito in un puntatore al primo elemento della matrice e le conversioni costanti possono verificarsi automaticamente. Sebbene utile, questo metodo è potenzialmente soggetto ad errori. For example, the following badly designed code example seems nonsensical, and yet it will compile and produces a result of 'p'. Innanzitutto, la stringa "help" viene convertita in `char*` che punta al primo elemento della matrice; questo puntatore viene quindi incrementato di tre elementi in modo che punti ora all'ultimo elemento "p".

```cpp
char* s = "Help" + 3;
```

## <a name="explicit-conversions-casts"></a>Conversioni esplicite (cast)

Tramite un'operazione cast, è possibile indicare al compilatore di convertire un valore di un tipo in un altro tipo. Il compilatore genererà in alcuni casi un errore se i due tipi sono completamente indipendenti, ma in altri casi non genererà errori anche se l'operazione non è indipendente dai tipi. Utilizzare il cast con moderazione poiché qualsiasi conversione da un tipo a un altro è una potenziale fonte di errori in un programma. Tuttavia, i cast talvolta sono necessari e non tutti i cast sono ugualmente pericolosi. Un cast è efficace quando il codice esegue una conversione di narrowing e si sa che la conversione non è causa di risultati errati nel programma. In pratica, si indica al compilatore di sapere ciò che si sta facendo e di smettere di generare avvisi sull'operazione. Un altro utilizzo consiste nell'eseguire il cast da un pointer-to-derived class (puntatore a una classe derivata) a un pointer-to-base class (puntatore a una classe di base). Another use is to cast away the **const**-ness of a variable to pass it to a function that requires a non-**const** argument. La maggior parte di queste operazioni cast implica alcuni rischi.

Nella programmazione C, lo stesso operatore di cast di tipo C viene utilizzato per tutti i tipi di cast.

```cpp
(int) x; // old-style cast, old-style syntax
int(x); // old-style cast, functional syntax
```

L'operatore di cast di tipo C è identico all'operatore di chiamata () e quindi è poco visibile nel codice e facile da ignorare. Both are bad because they're difficult to recognize at a glance or search for, and they're disparate enough to invoke any combination of **static**, **const**, and **reinterpret_cast**. Comprendere che cosa fa un cast di vecchio tipo può essere difficile e può creare errori. Per tutti questi motivi, quando è richiesto un cast, si consiglia di utilizzare uno dei seguenti operatori di cast di C++, che in alcuni casi sono più indipendenti dai tipi e che esprimono lo scopo di programmazione in modo più esplicito:

- **static_cast**, for casts that are checked at compile time only. **static_cast** returns an error if the compiler detects that you are trying to cast between types that are completely incompatible. È inoltre possibile utilizzarlo per eseguire il cast tra un puntatore a base e un puntatore a derivato, ma il compilatore non è sempre in grado di capire se tali conversioni saranno sicure in fase di esecuzione.

    ```cpp
    double d = 1.58947;
    int i = d;  // warning C4244 possible loss of data
    int j = static_cast<int>(d);       // No warning.
    string s = static_cast<string>(d); // Error C2440:cannot convert from
                                       // double to std:string

    // No error but not necessarily safe.
    Base* b = new Base();
    Derived* d2 = static_cast<Derived*>(b);
    ```

   For more information, see [static_cast](../cpp/static-cast-operator.md).

- **dynamic_cast**, for safe, runtime-checked casts of pointer-to-base to pointer-to-derived. A **dynamic_cast** is safer than a **static_cast** for downcasts, but the runtime check incurs some overhead.

    ```cpp
    Base* b = new Base();

    // Run-time check to determine whether b is actually a Derived*
    Derived* d3 = dynamic_cast<Derived*>(b);

    // If b was originally a Derived*, then d3 is a valid pointer.
    if(d3)
    {
       // Safe to call Derived method.
       cout << d3->DoSomethingMore() << endl;
    }
    else
    {
       // Run-time check failed.
       cout << "d3 is null" << endl;
    }

    //Output: d3 is null;
    ```

   For more information, see [dynamic_cast](../cpp/dynamic-cast-operator.md).

- **const_cast**, for casting away the **const**-ness of a variable, or converting a non-**const** variable to be **const**. Casting away **const**-ness by using this operator is just as error-prone as is using a C-style cast, except that with **const-cast** you are less likely to perform the cast accidentally. Sometimes you have to cast away the **const**-ness of a variable, for example, to pass a **const** variable to a function that takes a non-**const** parameter. Nell'esempio seguente viene illustrato come effettuare questa operazione.

    ```cpp
    void Func(double& d) { ... }
    void ConstCast()
    {
       const double pi = 3.14;
       Func(const_cast<double&>(pi)); //No error.
    }
    ```

   For more information, see [const_cast](../cpp/const-cast-operator.md).

- **reinterpret_cast**, for casts between unrelated types such as **pointer** to **int**.

    > [!NOTE]
    >  Questo operatore di cast non viene utilizzato spesso come gli altri e non è garantito che sia portabile in altri compilatori.

   The following example illustrates how **reinterpret_cast** differs from **static_cast**.

    ```cpp
    const char* str = "hello";
    int i = static_cast<int>(str);//error C2440: 'static_cast' : cannot
                                  // convert from 'const char *' to 'int'
    int j = (int)str; // C-style cast. Did the programmer really intend
                      // to do this?
    int k = reinterpret_cast<int>(str);// Programming intent is clear.
                                       // However, it is not 64-bit safe.
    ```

   For more information, see [reinterpret_cast Operator](../cpp/reinterpret-cast-operator.md).

## <a name="see-also"></a>Vedere anche

[C++ type system](../cpp/cpp-type-system-modern-cpp.md)<br/>
[Welcome back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
