---
description: 'Altre informazioni su: conversioni di tipi e indipendenza dai tipi'
title: Conversioni di tipi e indipendenza dai tipi
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 629b361a-2ce1-4700-8b5d-ab4f57b245d5
ms.openlocfilehash: ce83837a8aec06063b2a4e50c445fe7756b5c076
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312189"
---
# <a name="type-conversions-and-type-safety"></a>Conversioni di tipi e indipendenza dai tipi

In questo documento vengono identificati i problemi comuni di conversione dei tipi e viene descritto come evitarli quando si scrive codice C++.

Quando si scrive un programma in C++, è importante assicurarsi che sia indipendente dai tipi. Ciò significa che qualsiasi variabile, argomento di funzione e valore restituito di una funzione memorizza un tipo di dati accettabile e che le operazioni che includono valori di tipi diversi "hanno significato" e non comportano perdita di dati, errata interpretazione di schemi di bit o danneggiamento della memoria. Un programma che non converte mai in modo esplicito o implicito dei valori da un tipo in un altro è indipendente dai tipi per definizione. Tuttavia, le conversioni di tipo, anche non sicure, sono talvolta necessarie. Ad esempio, potrebbe essere necessario archiviare il risultato di un'operazione a virgola mobile in una variabile di tipo **`int`** oppure potrebbe essere necessario passare il valore in un oggetto **`unsigned int`** a una funzione che accetta un oggetto **`signed int`** . Entrambi gli esempi mostrano conversioni di tipo non sicure perché potrebbero causare la perdita di dati o l'errata interpretazione di un valore.

Quando il compilatore rileva una conversione non sicura, genera un errore o un avviso. Un errore arresta la compilazione; un avviso permette di proseguire la compilazione ma indica un possibile errore nel codice. Tuttavia, anche se il programma viene compilato senza avvisi, potrebbe contenere codice che porta a conversioni di tipi implicite che producono risultati errati. Gli errori di tipo possono essere dovuti anche a conversioni esplicite, o cast, nel codice.

## <a name="implicit-type-conversions"></a>Conversioni implicite di tipi

Quando un'espressione contiene operandi di tipi diversi incorporati e non sono presenti cast espliciti, il compilatore utilizza le *conversioni standard* predefinite per convertire uno degli operandi in modo che i tipi corrispondano. Il compilatore tenta le conversioni in una sequenza ben definita finché una conversione non ha esito positivo. Se la conversione selezionata è una promozione, il compilatore non genera un avviso. Se la conversione è di tipo narrowing, il compilatore genera un avviso sulla possibile perdita di dati. L'effettiva perdita di dati dipende dai valori effettivi implicati, ma si consiglia di considerare questo avviso come se fosse un errore. Se è coinvolto un tipo definito dall'utente, il compilatore tenta di utilizzare le conversioni specificate nella definizione della classe. Se non viene trovata una conversione accettabile, il compilatore genera un errore e il programma non verrà compilato. Per ulteriori informazioni sulle regole che regolano le conversioni standard, vedere [conversioni standard](../cpp/standard-conversions.md). Per ulteriori informazioni sulle conversioni definite dall'utente, vedere [conversioni definite dall'utente (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md).

### <a name="widening-conversions-promotion"></a>Conversione di ampliamento (promozione)

In una conversione di ampliamento un valore in una variabile più piccola viene assegnato a una variabile più grande senza perdita di dati. Poiché le conversioni di ampliamento sono sempre sicure, vengono eseguite automaticamente senza generare avvisi. Le seguenti conversioni sono di ampliamento.

|Da|A|
|----------|--------|
|Qualsiasi **`signed`** **`unsigned`** tipo integrale o ad eccezione di **`long long`** o **`__int64`**|**`double`**|
|**`bool`** o **`char`**|Qualsiasi altro tipo predefinito|
|**`short`** o **`wchar_t`**|**`int`**, **`long`**, **`long long`**|
|**`int`**, **`long`**|**`long long`**|
|**`float`**|**`double`**|

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

Notare che i valori vengono interpretati nuovamente in entrambe le direzioni. Se il programma produce risultati bizzarri in cui il segno del valore risulta invertito rispetto al previsto, cercare le conversioni implicite tra i tipi integrali signed e unsigned. Nell'esempio seguente, il risultato dell'espressione (0-1) viene convertito in modo implicito da **`int`** a **`unsigned int`** quando viene archiviato in `num` . Lo schema di bit viene così reinterpretato.

```cpp
unsigned int u3 = 0 - 1;
cout << u3 << endl; // prints 4294967295
```

Il compilatore non emette avvisi sulle conversioni implicite tra i tipi integrali signed e unsigned. Di conseguenza, è consigliabile evitare le conversioni da signed ad unsigned in generale. Se non è possibile evitarle, aggiungere al codice un controllo in fase di esecuzione per rilevare se il valore da convertire è maggiore o uguale a zero e minore o uguale al valore massimo del tipo signed. I valori in questo intervallo verranno modificati da signed a unsigned o viceversa senza che vengano reinterpretati.

### <a name="pointer-conversions"></a>Conversioni puntatore

In molte espressioni, le matrici in stile C vengono convertite in modo implicito in un puntatore al primo elemento della matrice e le conversioni costanti possono verificarsi automaticamente. Sebbene utile, questo metodo è potenzialmente soggetto ad errori. Ad esempio, il seguente esempio di codice progettato in modo errato sembra insensato, ma verrà compilato e produrrà un risultato di "p". In primo luogo, il valore letterale costante di stringa "Help" viene convertito in un oggetto **`char*`** che punta al primo elemento della matrice. tale puntatore viene quindi incrementato di tre elementi in modo che ora punti all'ultimo elemento "p".

```cpp
char* s = "Help" + 3;
```

## <a name="explicit-conversions-casts"></a>Conversioni esplicite (cast)

Tramite un'operazione cast, è possibile indicare al compilatore di convertire un valore di un tipo in un altro tipo. Il compilatore genererà in alcuni casi un errore se i due tipi sono completamente indipendenti, ma in altri casi non genererà errori anche se l'operazione non è indipendente dai tipi. Utilizzare il cast con moderazione poiché qualsiasi conversione da un tipo a un altro è una potenziale fonte di errori in un programma. Tuttavia, i cast talvolta sono necessari e non tutti i cast sono ugualmente pericolosi. Un cast è efficace quando il codice esegue una conversione di narrowing e si sa che la conversione non è causa di risultati errati nel programma. In pratica, si indica al compilatore di sapere ciò che si sta facendo e di smettere di generare avvisi sull'operazione. Un altro utilizzo consiste nell'eseguire il cast da un pointer-to-derived class (puntatore a una classe derivata) a un pointer-to-base class (puntatore a una classe di base). Un altro utilizzo consiste nell'eseguire il cast **`const`** di una variabile per passarla a una funzione che richiede un **`const`** argomento non. La maggior parte di queste operazioni cast implica alcuni rischi.

Nella programmazione C, lo stesso operatore di cast di tipo C viene utilizzato per tutti i tipi di cast.

```cpp
(int) x; // old-style cast, old-style syntax
int(x); // old-style cast, functional syntax
```

L'operatore di cast di tipo C è identico all'operatore di chiamata () e quindi è poco visibile nel codice e facile da ignorare. Entrambi non sono validi perché sono difficili da riconoscere a colpo d'occhio o cercare e sono sufficientemente diversi per richiamare qualsiasi combinazione di **`static`** , **`const`** e **`reinterpret_cast`** . Comprendere che cosa fa un cast di vecchio tipo può essere difficile e può creare errori. Per tutti questi motivi, quando è richiesto un cast, si consiglia di utilizzare uno dei seguenti operatori di cast di C++, che in alcuni casi sono più indipendenti dai tipi e che esprimono lo scopo di programmazione in modo più esplicito:

- **`static_cast`**, per i cast controllati solo in fase di compilazione. **`static_cast`** Restituisce un errore se il compilatore rileva che si sta tentando di eseguire il cast tra tipi completamente incompatibili. È inoltre possibile utilizzarlo per eseguire il cast tra un puntatore a base e un puntatore a derivato, ma il compilatore non è sempre in grado di capire se tali conversioni saranno sicure in fase di esecuzione.

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

   Per altre informazioni, vedere [`static_cast`](../cpp/static-cast-operator.md).

- **`dynamic_cast`**, per i cast safe, controllati dal runtime di puntatore a base a puntatore a derivato. Un oggetto **`dynamic_cast`** è più sicuro di un oggetto **`static_cast`** per downcast, ma il controllo di runtime comporta un sovraccarico.

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

   Per altre informazioni, vedere [`dynamic_cast`](../cpp/dynamic-cast-operator.md).

- **`const_cast`**, per il cast **`const`** di una variabile o per la conversione di una variabile diversa **`const`** da **`const`** . **`const`** L'uso di questo operatore è analogo a quello di un cast di tipo C, ad eccezione del fatto che con è **`const_cast`** meno probabile eseguire il cast accidentalmente. A volte è necessario eseguire il cast **`const`** di una variabile, ad esempio per passare una **`const`** variabile a una funzione che accetta un **`const`** parametro non. L'esempio seguente illustra come farlo.

    ```cpp
    void Func(double& d) { ... }
    void ConstCast()
    {
       const double pi = 3.14;
       Func(const_cast<double&>(pi)); //No error.
    }
    ```

   Per ulteriori informazioni, vedere [const_cast](../cpp/const-cast-operator.md).

- **`reinterpret_cast`**, per i cast tra tipi non correlati, ad esempio un tipo di puntatore e un oggetto **`int`** .

    > [!NOTE]
    >  Questo operatore di cast non viene utilizzato spesso come gli altri e non è garantito che sia portabile in altri compilatori.

   Nell'esempio seguente viene illustrato il modo **`reinterpret_cast`** in cui differisce da **`static_cast`** .

    ```cpp
    const char* str = "hello";
    int i = static_cast<int>(str);//error C2440: 'static_cast' : cannot
                                  // convert from 'const char *' to 'int'
    int j = (int)str; // C-style cast. Did the programmer really intend
                      // to do this?
    int k = reinterpret_cast<int>(str);// Programming intent is clear.
                                       // However, it is not 64-bit safe.
    ```

   Per ulteriori informazioni, vedere [ `reinterpret_cast` operator](../cpp/reinterpret-cast-operator.md).

## <a name="see-also"></a>Vedi anche

[Sistema di tipi C++](../cpp/cpp-type-system-modern-cpp.md)<br/>
[C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
