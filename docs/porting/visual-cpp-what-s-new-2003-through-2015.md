---
title: 'Visual C++: novità dalla versione 2003 alla 2015 | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c4afde6f-3d75-40bf-986f-be57e3818e26
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4f80def64c62420fff47b0476822fb3eb612ca4b
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42588248"
---
# <a name="visual-c-what39s-new-2003-through-2015"></a>Visual C++: novità dalla versione 2003 alla 2015

Questa pagina raccoglie tutte le pagine "Novità" per tutte le versioni di Visual C++ da Visual Studio 2015 fino alla versione più datata, la 2003. Queste informazioni vengono messe a disposizione nel caso in cui possano risultare utili quando si esegue l'aggiornamento da versioni precedenti di Visual C++.

> [!NOTE]
> Per informazioni su Visual Studio 2017, vedere [Novità di Visual C++ in Visual Studio 2017](../what-s-new-for-visual-cpp-in-visual-studio.md) e [Miglioramenti della conformità di Visual C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md).

## <a name="whats-new-for-c-in-visual-studio-2015"></a>Novità di C++ in Visual Studio 2015

In Visual Studio 2015 e versioni successive i miglioramenti apportati in modo costante alla conformità del compilatore possono talvolta modificare il modo in cui il compilatore riconosce il codice sorgente esistente. In questo caso, si possono riscontrare errori nuovi o diversi durante la compilazione o addirittura differenze di comportamento nel codice che apparentemente in precedenza veniva compilato ed eseguito correttamente.

Fortunatamente, queste differenze hanno poco o nessun impatto sulla maggior parte del codice sorgente e quando è necessario usare codice sorgente o altre modifiche per risolvere queste differenze, le correzioni sono in genere minime e semplici. Sono stati inclusi numerosi esempi di codice sorgente in precedenza accettabile per cui potevano essere necessarie modifiche *(prima)* e di correzioni da apportare per risolvere i problemi *(dopo)*.

Benché queste differenze possano influire sul codice sorgente o altri elementi di compilazione, non influiscono sulla compatibilità binaria tra gli aggiornamenti alle versioni di Visual C++. Una *modifica sostanziale*, molto più drastica, può influire sulla compatibilità binaria, ma le interruzioni della compatibilità binaria si verificano solo tra le versioni principali di Visual C++. Ad esempio tra Visual C++ 2013 e Visual C++ 2015. Per informazioni sulle modifiche sostanziali apportate tra Visual C++ 2013 e Visual C++ 2015, vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md).

- [Miglioramenti della conformità in Visual Studio 2015](#VS_RTM)

- [Miglioramenti della conformità in Visual Studio 2015 Update 1](#VS_Update1)

- [Miglioramenti della conformità in Visual Studio 2015 Update 2](#VS_Update2)

- [Miglioramenti della conformità in Visual Studio 2015 Update 3](#VS_Update3)

### <a name="VS_RTM"></a> Miglioramenti della conformità in Visual Studio 2015

- **Opzione /Zc:forScope-** L'opzione del compilatore `/Zc:forScope-` è deprecata e verrà rimossa in una versione futura.

   ```output
    Command line warning  D9035: option 'Zc:forScope-' has been deprecated and will be removed in a future release
   ```

   L'opzione in genere è stata usata per consentire codice non standard che usa variabili di ciclo dopo il punto in cui, in base allo standard, dovrebbero essere uscite dall'ambito. È necessaria solo quando si esegue la compilazione con l'opzione `/Za`, poiché è sempre consentito l'uso di una variabile di ciclo dopo la fine del ciclo senza `/Za`. Se non è rilevante la conformità agli standard, ad esempio, se il codice non è destinato a essere portabile in altri compilatori, è possibile disattivare l'opzione `/Za` o impostare la proprietà **Disabilita estensioni linguaggio** su **No**. Se si vuole scrivere codice portabile, conforme agli standard, è necessario riscrivere il codice affinché sia conforme allo standard spostando la dichiarazione di tali variabili in un punto esterno al ciclo.

   ```cpp
    // zc_forScope.cpp
    // compile with: /Zc:forScope- /Za
    // C2065 expected
    int main() {
       // Uncomment the following line to resolve.
       // int i;
       for (int i =0; i < 1; i++)
          ;
       i = 20;   // i has already gone out of scope under /Za
    }
   ```

- **Opzione del compilatore /Zg.** L'opzione del compilatore `/Zg`, che consente di generare i prototipi delle funzioni, non è più disponibile. Questa opzione del compilatore è stata precedentemente deprecata.

- Non è più possibile eseguire unit test con C++/CLI dalla riga di comando con mstest.exe. Usare invece vstest.console.exe

- **Parola chiave mutable.** L'identificatore di classi di archiviazione **mutable** non è più consentito in posizioni dove in precedenza eseguiva compilazioni senza errori. Ora il compilatore genera l'errore C2071 (classe di archiviazione non valida). In base allo standard, l'identificatore modificabile può essere applicato solo ai nomi dei membri di dati della classe, non può essere applicato ai nomi dichiarati const o statici e non può essere applicato ai membri di riferimento.

   Si consideri il codice di esempio seguente:

   ```cpp
    struct S {
        mutable int &r;
    };
   ```

   Nelle versioni precedenti del compilatore Visual C++ questa situazione è accettabile, ma ora il compilatore genera l'errore seguente:

   ```Output
    error C2071: 'S::r': illegal storage class
   ```

   Per correggere l'errore, basta rimuovere la parola chiave **mutable** ridondante.

- **char_16_t e char32_t** Non è più possibile usare `char16_t` o `char32_t` come alias in un typedef, poiché questi tipi ora vengono considerati predefiniti. Era normale per gli utenti e gli autori di librerie definire `char16_t` e `char32_t` rispettivamente come alias di `uint16_t` e `uint32_t`.

   ```cpp
    #include <cstdint>

    typedef uint16_t char16_t; //C2628
    typedef uint32_t char32_t; //C2628

    int main(int argc, char* argv[])
    {
    uint16_t x = 1; uint32_t y = 2;
    char16_t a = x;
    char32_t b = y;
    return 0;
    }
   ```

   Per aggiornare il codice, rimuovere le dichiarazioni **typedef** e rinominare tutti gli altri identificatori che sono in conflitto con questi nomi.

- **Parametri di modello non di tipo** Il codice in cui sono usati parametri di modello non di tipo viene ora controllato correttamente per verificare la compatibilità del tipo quando si specificano argomenti di modello espliciti. Ad esempio, il seguente codice veniva compilato senza errori nelle versioni precedenti di Visual C++.

   ```cpp
    struct S1
    {
        void f(int);
        void f(int, int);
    };

    struct S2
    {
        template <class C, void (C::*Function)(int) const> void f() {}        
    };

    void f()
    {
        S2 s2;
        s2.f<S1, &S1::f>();
    }
   ```

   Il compilatore corrente restituisce correttamente un errore, perché il tipo di parametro di modello non corrisponde all'argomento di modello (il parametro è un puntatore a un membro const, ma la funzione f è non const):

   ```Output
    error C2893: Failed to specialize function template 'void S2::f(void)'note: With the following template arguments:note: 'C=S1'note: 'Function=S1::f'
   ```

   Per risolvere questo errore nel codice, verificare che il tipo di argomento del modello usato corrisponda al tipo dichiarato del parametro di modello.

- **__declspec(align)** Il compilatore non accetta più `__declspec(align)` per le funzioni. È sempre stato ignorato, ma ora genera un errore del compilatore.

   ```cpp
    error C3323: 'alignas' and '__declspec(align)' are not allowed on function declarations
   ```

   Per risolvere questo problema, rimuovere `__declspec(align)` dalla dichiarazione di funzione. Dal momento che non ha avuto effetto, la rimozione non comporta alcuna modifica.

- **Gestione delle eccezioni** Sono state apportate alcune modifiche alla gestione delle eccezioni. In primo luogo, gli oggetti eccezione devono poter essere copiati o spostati. Il codice seguente viene compilato in Visual Studio 2013 ma non in Visual Studio 2015:

   ```cpp
    struct S {
    public:
        S();
    private:
        S(const S &);
    };

    int main()
    {
        throw S(); // error
    }
   ```

   Il problema è che il costruttore di copia è privato e quindi l'oggetto non può essere copiato, come accade durante il normale funzionamento di gestione di un'eccezione. Lo stesso vale quando il costruttore di copia viene dichiarato **explicit**.

   ```cpp
    struct S {
        S();
        explicit S(const S &);
    };

    int main()
    {
        throw S(); // error
    }
   ```

   Per aggiornare il codice, verificare che il costruttore di copia per l'oggetto eccezione sia pubblico e non sia contrassegnato come **explicit**.

   L'individuazione di un'eccezione in base al valore richiede anche che sia possibile copiare l'oggetto eccezione. Il codice seguente viene compilato in Visual Studio 2013 ma non in Visual Studio 2015:

   ```cpp
    struct B {
    public:
        B();
    private:
        B(const B &);
    };

    struct D : public B {
    };

    int main()
    {
        try
        {
        }
        catch (D d) // error
        {
        }
    }
   ```

   Per risolvere questo problema, è possibile modificare il tipo di parametro per **catch** in un riferimento.

   ```cpp
    catch(D& d)
    {
    }
   ```

- **Valori letterali stringa seguiti da macro** Il compilatore supporta ora i valori letterali definiti dall'utente. Di conseguenza, i valori letterali stringa seguiti da macro senza eventuali spazi intermedi vengono interpretati come valori letterali definiti dall'utente, che potrebbero produrre errori o risultati imprevisti. Nei compilatori precedenti, ad esempio, il codice seguente veniva compilato correttamente:

   ```cpp
    #define _x "there"
    char* func() {
        return "hello"_x;
    }
    int main()
    {
        char * p = func();
        return 0;
    }
   ```

   Il compilatore lo interpretava come un valore letterale stringa "hello" seguito da una macro, espansa in "there", e quindi i due valori letterali stringa venivano concatenati in uno. In Visual Studio 2015 il compilatore lo interpreta come un valore letterale definito dall'utente, ma poiché non esiste alcun valore letterale _x corrispondente definito dall'utente, viene restituito un errore.

   ```cpp
    error C3688: invalid literal suffix '_x'; literal operator or literal operator template 'operator ""_x' not found
    note: Did you forget a space between the string literal and the prefix of the following string literal?

   ```

   Per risolvere questo problema, aggiungere uno spazio tra il valore letterale stringa e la macro.

- **Valori letterali stringa adiacenti** Analogamente al precedente esempio, a causa di modifiche correlate nell'analisi delle stringhe, i valori letterali stringa adiacenti (uno dei valori letterali stringa di carattere wide o narrow) senza spazi vuoti venivano interpretati come una singola stringa concatenata nelle versioni precedenti di Visual C++. In Visual Studio 2015 è necessario aggiungere spazi vuoti tra le due stringhe. Ad esempio, il codice seguente deve essere modificato:

   ```cpp
    char * str = "abc""def";
   ```

   Aggiungere semplicemente uno spazio tra le due stringhe.

   ```cpp
    char * str = "abc" "def";
   ```

- **Operatori new e delete di posizionamento** È stata apportata una modifica all'operatore **delete** per fare in modo che sia conforme con lo standard C++14. Per informazioni dettagliate sulla modifica agli standard, vedere [Deallocazione con dimensione C++](http://isocpp.org/files/papers/n3778.html). Le modifiche aggiungono un modulo dell'operatore **delete** globale che accetta un parametro di dimensione. La modifica che causa un'interruzione è che se in precedenza si usava un operatore **delete** con la stessa firma, per la corrispondenza con un operatore **new di posizionamento**, ora si riceve un errore del compilatore ovvero C2956, che si verifica nel punto in cui viene usato l'operatore **new di posizionamento**, poiché è la posizione nel codice in cui il compilatore tenta di identificare un operatore **delete** corrispondente appropriato.

   La funzione `void operator delete(void *, size_t)` era un operatore **delete di posizionamento** corrispondente alla funzione **new di posizionamento** `void * operator new(size_t, size_t)` in C++11. Con la deallocazione con dimensione C++14, questa funzione **delete** è ora una *funzione di deallocazione consueta* ovvero un operatore **delete** globale. In base allo standard se l'uso di un operatore **new di posizionamento** cerca una funzione **delete** corrispondente e trova una funzione di deallocazione consueta, il programma non ha un formato corretto.

   Si supponga, ad esempio, che il codice definisca un operatore **new** e **delete di posizionamento**:

   ```cpp
    void * operator new(std::size_t, std::size_t);
    void operator delete(void*, std::size_t) noexcept;
   ```

   Il problema si verifica a causa della corrispondenza delle firme della funzione tra un operatore **delete di posizionamento** che è stato definito e il nuovo operatore **delete** con dimensione globale. Stabilire se è possibile usare un tipo diverso da `size_t` per qualsiasi operatore **new** e **delete di posizionamento**.  Si noti che il tipo di **typedef** `size_t` è dipendente dal compilatore; è un **typedef** per  **senza segno int** in Visual C++. Una buona soluzione consiste nell'usare un tipo enumerato simile al seguente:

   ```cpp
    enum class my_type : size_t {};
   ```

   Modificare quindi la definizione dell'operatore **new** e **delete** di posizionamento per usare questo tipo come secondo argomento anziché `size_t`. È necessario anche aggiornare le chiamate all'operatore **new di posizionamento** per passare al nuovo tipo, ad esempio, usando `static_cast<my_type>` per convertire il valore integer, e aggiornare la definizione di **new** e **delete** per eseguire il cast di tipo integer. Non è necessario usare un **enum**; funzionerebbe anche un tipo classe con un membro `size_t`.

   Una soluzione alternativa è che si potrebbe eliminare completamente l'operatore **new di posizione**. Se il codice usa l'operatore **new di posizionamento** per implementare un pool di memoria dove l'argomento di posizionamento è la dimensione dell'oggetto allocato o eliminato, la funzionalità di deallocazione con dimensione potrebbe essere adatta a sostituire il codice del pool di memoria personalizzato ed è possibile eliminare le funzioni di posizionamento e usare semplicemente il proprio operatore **delete** a due argomenti anziché le funzioni di posizionamento.

   Se non si intende aggiornare immediatamente il codice, è possibile ripristinare il comportamento precedente usando l'opzione del compilatore `/Zc:sizedDealloc-`. Se si usa questa opzione, le funzioni **delete** a due argomenti non esistono e non provocheranno un conflitto con l'operatore **delete di posizionamento**.

- **Membri dati di unioni**

   I membri dati di unioni non possono avere tipi di riferimento. Il codice seguente viene compilato correttamente in Visual Studio 2013 ma genera un errore in Visual Studio 2015.

   ```cpp
    union U1 {
        const int i;
    };
    union U2 {
       int &i;
    };
    union U3 {
        struct {int &i;};
    };
   ```

   Il codice precedente produce gli errori seguenti:

   ```Output
    test.cpp(67): error C2625: 'U2::i': illegal union member; type 'int &' is reference type
    test.cpp(70): error C2625: 'U3::i': illegal union member; type 'int &' is reference type
   ```

   Per risolvere questo problema, modificare i tipi di riferimento in un puntatore o un valore. La modifica del tipo in un puntatore richiede modifiche al codice che usa il campo di unione. La modifica del codice in un valore modificherebbe i dati archiviati nell'unione, che influiscono su altri campi, poiché i campi in tipi di unione condividono la stessa memoria. A seconda delle dimensioni del valore, è possibile anche modificare le dimensioni dell'unione.

- Le **unioni anonime** sono ora più conformi allo standard. Le versioni precedenti del compilatore hanno generato un costruttore e distruttore esplicito per unioni anonime. Questi vengono eliminati in Visual Studio 2015.

   ```cpp
    struct S {
      S();
     };

     union {
      struct {
       S s;
      };
     } u; // C2280
   ```

   Il codice precedente genera l'errore seguente in Visual Studio 2015:

   ```cpp
    error C2280: '<unnamed-type-u>::<unnamed-type-u>(void)': attempting to reference a deleted function
    note: compiler has generated '<unnamed-type-u>::<unnamed-type-u>' here
   ```

   Per risolvere questo problema, specificare definizioni personalizzate del costruttore e/o del distruttore.

   ```cpp
    struct S {
    // Provide a default constructor by adding an empty function body.
    S() {}
    };

    union {
    struct {
    S s;
    };
    } u;
   ```

- **Unioni con struct anonimi** Per la conformità allo standard, il comportamento di runtime è stato modificato per i membri delle strutture anonime nelle unioni. Il costruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando viene creato questo tipo di unione. Il distruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando l'unione è esterna all'ambito. Si consideri il codice seguente, in cui un'unione U contiene una struttura anonima con un membro che è una struttura S denominata con un distruttore.

   ```cpp
    #include <stdio.h>
    struct S {
        S() { printf("Creating S\n"); }
        ~S(){ printf("Destroying S\n"); }
    };
    union U {
        struct {
        S s;
    };
        U() {}
        ~U(){}
    };

    void f()
    {
        U u;
        // Destructor implicitly called here.
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
   ```

   In Visual Studio 2013 il costruttore per S viene chiamato quando viene creata l'unione e il distruttore per S viene chiamato durante la pulitura dello stack per la funzione f. Tuttavia in Visual Studio 2015 il costruttore e il distruttore non vengono chiamati. Il compilatore visualizza un avviso relativo a questa modifica del comportamento.

   ```Output
    warning C4587: 'U::s': behavior change: constructor is no longer implicitly calledwarning C4588: 'U::s': behavior change: destructor is no longer implicitly called
   ```

   Per ripristinare il comportamento originale, assegnare alla struttura anonima un nome. Il comportamento di runtime di strutture non anonime è lo stesso, indipendentemente dalla versione del compilatore.

   ```cpp
    #include <stdio.h>

    struct S {
        S() { printf("Creating S.\n"); }
        ~S() { printf("Destroying S\n"); }
    };
    union U {
        struct {
            S s;
        } namedStruct;
        U() {}
        ~U() {}
    };

    void f()
    {
        U u;
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
   ```

   In alternativa, provare a spostare il codice del costruttore e del distruttore in nuove funzioni e aggiungere chiamate a queste funzioni provenienti dal costruttore e distruttore per l'unione.

   ```cpp
    #include <stdio.h>

    struct S {
        void Create() { printf("Creating S.\n"); }
        void Destroy() { printf("Destroying S\n"); }
    };
    union U {
        struct {
            S s;
        };
        U() { s.Create();  }
        ~U() { s.Destroy(); }
    };

    void f()
    {
        U u;
    }

    int main()
    {
        f();

    char s[1024];
    printf("Press any key.\n");
    gets_s(s);
    return 0;
    }
   ```

- **Risoluzione dei modelli** Sono state apportate modifiche alla risoluzione dei nomi per i modelli. In C++, quando si considerano i candidati per la risoluzione di un nome, può accadere che uno o più nomi presi in considerazione come corrispondenze potenziali producano un'istanza del modello non valida. Queste istanze non valide in genere non provocano errori del compilatore, un principio che è noto come SFINAE (Substitution Failure Is Not An Error).

   A questo punto, se SFINAE richiede al compilatore di creare un'istanza di specializzazione del modello di classe, eventuali errori verificatisi durante questo processo sono errori del compilatore. Nelle versioni precedenti il compilatore potrebbe ignorare tali errori. Si consideri il codice di esempio seguente:

   ```cpp
    #include <type_traits>

    template<typename T>
    struct S
    {
    S() = default;
    S(const S&);
    S(S&&);

    template<typename U, typename = typename std::enable_if<std::is_base_of<T, U>::value>::type>
    S(S<U>&&);
    };

    struct D;

    void f1()
    {
    S<D> s1;
        S<D> s2(s1);
    }

    struct B
    {
    };

    struct D : public B
    {
    };

    void f2()
    {
    S<D> s1;
        S<D> s2(s1);
    }
   ```

   Se si compila con il compilatore corrente, viene visualizzato l'errore seguente:

   ```Output
    type_traits(1110): error C2139: 'D': an undefined class is not allowed as an argument to compiler intrinsic type trait '__is_base_of'
    ..\t331.cpp(14): note: see declaration of 'D'
    ..\t331.cpp(10): note: see reference to class template instantiation 'std::is_base_of<T,U>' being compiled
            with
            [
                T=D,
                U=D
            ]
   ```

   Ciò accade perché al momento della prima chiamata di is_base_of la classe 'D' non è stata definita.

   In questo caso, la correzione non deve usare tale tratti di tipo fino a quando non è stata definita la classe. Se si spostano le definizioni di B e D all'inizio del file di codice, l'errore viene risolto. Se le definizioni sono nei file di intestazione, controllare l'ordine delle istruzioni include per i file di intestazione per verificare che tutte le definizioni di classe vengano compilate prima di usare modelli problematici.

- **Costruttori di copie** Sia in Visual Studio 2013 che in Visual Studio 2015 il compilatore genera un costruttore di copia per una classe se tale classe ha un costruttore di spostamento definito dall'utente, ma nessun costruttore di copia definito dall'utente. In Dev14, questo costruttore di copia generato in modo implicito è contrassegnato come "= delete".

### <a name="VS_Update1"></a> Miglioramenti della conformità in Visual Studio 2015 Update 1

- **Classi di base virtuali private ed ereditarietà indiretta** Le versioni precedenti del compilatore consentivano a una classe derivata di chiamare le funzioni membro delle proprie classi di base *indirettamente derivate*`private virtual`. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Il compilatore non accetta più il codice scritto in questo modo e genera l'errore del compilatore C2280 di conseguenza.

   ```Output
    error C2280: 'void *S3::__delDtor(unsigned int)': attempting to reference a deleted function
   ```

   Esempio (prima)

   ```cpp
    class base
    {
    protected:
        base();
        ~base();
    };

    class middle: private virtual base {};class top: public virtual middle {};

    void destroy(top *p)
    {
        delete p;  //
    }
   ```

   Esempio (dopo)

   ```cpp
    class base;  // as above

    class middle: protected virtual base {};
    class top: public virtual middle {};

    void destroy(top *p)
    {
        delete p;
    }
   ```

  oppure

   ```cpp
    class base;  // as above

    class middle: private virtual base {};
    class top: public virtual middle, private virtual bottom {};

    void destroy(top *p)
    {
        delete p;
    }
   ```

- **Operatori new e operatore delete di overload** Le versioni precedenti del compilatore consentivano di dichiarare statici l'**operatore new** e l'**operatore delete** non membri negli spazi dei nomi diversi dallo spazio dei nomi globale.  Questo comportamento precedente creava il rischio che il programma non chiamasse l'implementazione dell'operatore **new** o **delete** prevista dal programmatore, determinando un comportamento errato silenzioso in fase di esecuzione. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2323.

   ```Output
    error C2323: 'operator new': non-member operator new or delete functions may not be declared static or in a namespace other than the global namespace.
   ```

   Esempio (prima)

   ```cpp
    static inline void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // error C2323
   ```

   Esempio (dopo)

   ```cpp
    void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // removed 'static inline'
   ```

      Additionally, although the compiler doesn't give a specific diagnostic, inline operator new is considered ill-formed.

- **Chiamata di "operator *type*()" (conversione definita dall'utente) per i tipi non di classe**  Le versioni precedenti del compilatore consentivano la chiamata di "operator *type*()" per i tipi non di classe ignorandolo senza avvisare. Questo comportamento precedente creava un rischio di generazione di codice errato senza avvisare, determinando un comportamento imprevedibile in fase di esecuzione. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2228.

   ```Output
    error C2228: left of '.operator type' must have class/struct/union
   ```

   Esempio (prima)

   ```cpp
    typedef int index_t;

    void bounds_check(index_t index);

    void login(int column)
    {
        bounds_check(column.operator index_t());  // error C2228
    }
   ```

   Esempio (dopo)

   ```cpp
    typedef int index_t;

    void bounds_check(index_t index);

    void login(int column)
    {
         bounds_check(column);  // removed cast to 'index_t', 'index_t' is an alias of 'int'
    }
   ```

- **Typename ridondante negli identificatori di tipi elaborati** Le versioni precedenti del compilatore consentivano **typename** negli identificatori di tipi elaborati; il codice scritto in questo modo non è semanticamente corretto. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C3406.

   ```Output
    error C3406: 'typename' cannot be used in an elaborated type specifier
   ```

   Esempio (prima)

   ```cpp
    template <typename class T>
    class container;
   ```

   Esempio (dopo)

   ```cpp
    template <class T>  // alternatively, could be 'template <typename T>'; 'typename' is not elaborating a type specifier in this case
    class container;
   ```

- **Deduzione del tipo delle matrici da un elenco di inizializzatori** Le versioni precedenti del compilatore non supportavano la deduzione del tipo delle matrici da un elenco di inizializzatori. Il compilatore supporta ora questa forma di deduzione del tipo e, di conseguenza, le chiamate a modelli di funzione con gli elenchi di inizializzatori potrebbero essere ambigue o potrebbe essere scelto un altro overload rispetto alle versioni precedenti del compilatore. Per risolvere questi problemi, il programma deve ora specificare in modo esplicito l'overload previsto dal programmatore.

   Quando questo nuovo comportamento fa sì che la risoluzione dell'overload consideri un candidato aggiuntivo che sia altrettanto efficace del candidato storico, la chiamata diventa ambigua e il compilatore genera l'errore del compilatore C2668 di conseguenza.

   ```Output
    error C2668: 'function' : ambiguous call to overloaded function.
   ```

   Esempio 1: chiamata ambigua a funzione in overload (prima)

   ```cpp
    // In previous versions of the compiler, code written in this way would unambiguously call f(int, Args...)
    template <typename... Args>
    void f(int, Args...);  //

    template <int N, typename... Args>
    void f(const int (&)[N], Args...);

    int main()
    {
        // The compiler now considers this call ambiguous, and issues a compiler error
        f({3});  error C2668: 'f' ambiguous call to overloaded function
    }
   ```

   Esempio 1: chiamata ambigua a funzione in overload (dopo)

   ```cpp
    template <typename... Args>
    void f(int, Args...);  //

    template <int N, typename... Args>
    void f(const int (&)[N], Args...);

    int main()
    {
        // To call f(int, Args...) when there is just one expression in the initializer list, remove the braces from it.
        f(3);
    }
   ```

   Quando questo nuovo comportamento fa sì che la risoluzione dell'overload consideri un candidato aggiuntivo che sia una corrispondenza migliore rispetto al candidato storico, la chiamata viene risolta senza ambiguità nel nuovo candidato, causando una modifica nel comportamento del programma che è probabilmente diverso da quello previsto dal programmatore.

   Esempio 2: modifica nella risoluzione dell'overload (prima)

   ```cpp
    // In previous versions of the compiler, code written in this way would unambiguously call f(S, Args...)
    struct S
    {
        int i;
        int j;
    };

    template <typename... Args>
    void f(S, Args...);

    template <int N, typename... Args>
    void f(const int *&)[N], Args...);

    int main()
    {
        // The compiler now resolves this call to f(const int (&)[N], Args...) instead
        f({1, 2});
    }
   ```

   Esempio 2: modifica nella risoluzione dell'overload (dopo)

   ```cpp
    struct S;  // as before

    template <typename... Args>
    void f(S, Args...);

    template <int N, typename... Args>
    void f(const int *&)[N], Args...);

    int main()
    {
        // To call f(S, Args...), perform an explicit cast to S on the initializer list.
        f(S{1, 2});
    }
   ```

- **Ripristino di avvisi di istruzione switch** Una versione precedente del compilatore rimuoveva gli avvisi preesistenti correlati alle istruzioni **switch**; questi avvisi sono ora stati ripristinati. Il compilatore genera ora gli avvisi ripristinati e gli avvisi correlati a casi specifici (incluso il caso predefinito) sono ora rilasciati sulla riga contenente il caso che causa l'errore, anziché l'ultima riga dell'istruzione switch. Dal momento che gli avvisi vengono ora emessi su diverse righe rispetto al passato, di conseguenza gli avvisi precedentemente eliminato con `#pragma warning(disable:####)` non potranno più essere eliminati come previsto. Per eliminare questi avvisi come previsto, potrebbe essere necessario spostare la direttiva `#pragma warning(disable:####)` a una riga sopra il primo caso potenzialmente danneggiato. Di seguito sono elencati gli avvisi ripristinati.

   ```Output
    warning C4060: switch statement contains no 'case' or 'default' labels
   ```

   ```Output
    warning C4061: enumerator 'bit1' in switch of enum 'flags' is not explicitly handled by a case label
   ```

   ```Output
    warning C4062: enumerator 'bit1' in switch of enum 'flags' is not handled
   ```

   ```Output
    warning C4063: case 'bit32' is not a valid value for switch of enum 'flags'
   ```

   ```Output
    warning C4064: switch of incomplete enum 'flags'
   ```

   ```Output
    warning C4065: switch statement contains 'default' but no 'case' labels
   ```

   ```Output
    warning C4808: case 'value' is not a valid value for switch condition of type 'bool'
   ```

   ```Output
    Warning C4809: switch statement has redundant 'default' label; all possible 'case' labels are given
   ```

   Esempio di C4063 (prima)

   ```cpp
    class settings
    {
    public:
        enum flags
        {
            bit0 = 0x1,
            bit1 = 0x2,
            ...
        };
        ...
    };

    int main()
    {
        auto val = settings::bit1;

        switch (val)
        {
        case settings::bit0:
            break;

        case settings::bit1:
            break;

        case settings::bit0 | settings::bit1:  // warning C4063
            break;
        }
    };
   ```

   Esempio di C4063 (dopo)

   ```cpp
    class settings {...};  // as above

    int main()
    {
        // since C++11, use std::underlying_type to determine the underlying type of an enum
        typedef std::underlying_type<settings::flags>::type flags_t;

        auto val = settings::bit1;

        switch (static_cast<flags_t>(val))
        {
        case settings::bit0:
            break;

        case settings::bit1:
            break;

        case settings::bit0 | settings::bit1:  // ok
            break;
        }
    };
   ```

   Gli esempi di altri avvisi ripristinati vengono forniti nella relativa documentazione.

- **#include: uso dell'identificatore di directory padre '..' nel percorso** (influisce solo su `/Wall` `/WX`)

     Le versioni precedenti del compilatore non è stato rilevato l’utilizzo dell’identificatore di directory padre ‘... ‘ nel percorso del  `#include` direttive. Il codice scritto in questo modo è in genere usato in modo da includere le intestazioni che esistono di fuori del progetto usando in modo non corretto percorsi relativi al progetto. Questo comportamento precedente creava il rischio che il programma potesse essere compilato con l'inclusione di un file di origine diversa rispetto a quello previsto dal programmatore, o che i percorsi relativi non sarebbero stati portabili in altri ambienti di compilazione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C4464 facoltativo, se abilitato.

   ```Output
    warning C4464: relative include path contains '..'
   ```

   Esempio (prima)

   ```cpp
    #include "..\headers\C4426.h"  // emits warning C4464
   ```

   Esempio (dopo)

   ```cpp
    #include "C4426.h"  // add absolute path to 'headers\' to your project's include directories
   ```

   Inoltre, nonostante il compilatore non offra una diagnostica specifica, è anche consigliabile che l'identificatore di directory padre ".." non venga usato per specificare le directory include del progetto.

- **#pragma optimize() estende oltre la fine del file di intestazione** (influisce solo su `/Wall` `/WX`)

   Le versioni precedenti del compilatore non rilevavano le modifiche alle impostazioni del flag di ottimizzazione non incluse in un file di intestazione all'interno di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C4426 facoltativo nella posizione della direttiva `#include`danneggiata, se abilitata. Questo avviso viene generato solo se le modifiche sono in conflitto con i flag di ottimizzazione impostati dagli argomenti della riga di comando nel compilatore.

   ```Output
    warning C4426: optimization flags changed after including header, may be due to #pragma optimize()
   ```

   Esempio (prima)

   ```cpp
    // C4426.h
    #pragma optimize("g", off)
    ...
    // C4426.h ends

    // C4426.cpp
    #include "C4426.h"  // warning C4426
   ```

   Esempio (dopo)

   ```cpp
    // C4426.h
    #pragma optimize("g", off)
    ...
    #pragma optimize("", on)  // restores optimization flags set via command-line arguments
    // C4426.h ends

    // C4426.cpp
    #include "C4426.h"
   ```

- **#pragma warning(push)** e **#pragma warning(pop)** non corrispondenti (influisce solo su `/Wall` `/WX`)

   Le versioni precedenti del compilatore non rilevavano l'abbinamento delle modifiche di stato `#pragma warning(push)` con le modifiche di stato `#pragma warning(pop)` in un file di origine differente e questo raramente rappresenta lo scopo previsto. Questo comportamento precedente creava il rischio che il programma fosse compilato con un set di avvisi abilitato diverso da quello previsto dal programmatore, determinando un probabile comportamento errato in fase di esecuzione senza avvisare. Il compilatore ora rileva e invia una notifica al programmatore riguardo al codice scritto in questo modo e genera un avviso del compilatore C5031 facoltativo nella posizione della direttiva `#pragma warning(pop)` corrispondente, se abilitata. Questo avviso include una nota che fa riferimento alla posizione di `#pragma warning(push)` corrispondente.

   ```Output
    warning C5031: #pragma warning(pop): likely mismatch, popping warning state pushed in different file
   ```

   Esempio (prima)

   ```cpp
    // C5031_part1.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    // C5031_part1.h ends without #pragma warning(pop)

    // C5031_part2.h
    ...
    #pragma warning(pop)  // pops a warning state not pushed in this source file
    ...
    // C5031_part1.h ends

    // C5031.cpp
    #include "C5031_part1.h" // leaves #pragma warning(push) 'dangling'
    ...
    #include "C5031_part2.h" // matches 'dangling' #pragma warning(push), resulting in warning C5031
    ...
   ```

   Esempio (dopo)

   ```cpp
    // C5031_part1.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    #pragma warning(pop)  // pops the warning state pushed in this source file
    // C5031_part1.h ends without #pragma warning(pop)

    // C5031_part2.h
    #pragma warning(push)  // pushes the warning state pushed in this source file
    #pragma warning(disable:####)
    ...
    #pragma warning(pop)
    // C5031_part1.h ends

    // C5031.cpp
    #include "C5031_part1.h" // #pragma warning state changes are self-contained and independent of other source files or their #include order.
    ...
    #include "C5031_part2.h"
    ...
   ```

   Benché sia un fatto insolito, a volte il codice scritto in questo modo è intenzionale. Il codice scritto in questo modo è sensibile alle modifiche nell'ordine `#include`. Se possibile, è consigliabile che i file del codice sorgente gestiscano lo stato di avviso in modo autonomo.

- **#pragma warning(push) senza corrispondenza** (influisce solo su `/Wall` `/WX`) Le versioni precedenti del compilatore non rilevavano le modifiche dello stato `#pragma warning(push)` senza corrispondenza alla fine di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo al codice scritto in questo modo e genera un avviso del compilatore C5032 facoltativo nella posizione di `#pragma warning(push)` non corrispondente, se abilitata. Questo avviso viene generato solo se non sono presenti errori di compilazione nell'unità di conversione.

   ```Output
    warning C5032: detected #pragma warning(push) with no corresponding #pragma warning(pop)
   ```

   Esempio (prima)

   ```cpp
    // C5032.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    // C5032.h ends without #pragma warning(pop)

    // C5032.cpp
    #include "C5032.h"
    ...
    // C5032.cpp ends -- the translation unit is completed without #pragma warning(pop), resulting in warning C5032 on line 1 of C5032.h
   ```

   Esempio (dopo)

   ```cpp
    // C5032.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    #pragma warning(pop) // matches #pragma warning (push) on line 1
    // C5032.h ends

    // C5032.cpp
    #include "C5032.h"
    ...
    // C5032.cpp ends -- the translation unit is completed without unmatched #pragma warning(push)
   ```

- **Possono essere generati avvisi aggiuntivi in seguito al miglioramento del rilevamento dello stato di #pragma warning** Le versioni precedenti del compilatore rilevavano le modifiche dello stato di `#pragma warning` non abbastanza correttamente da generare gli avvisi previsti. Questo comportamento comportava il rischio che alcuni avvisi sarebbero stati eliminati in modo efficace in circostanze diverse rispetto a quelle previste dal programmatore. Il compilatore ora tiene traccia dello stato di `#pragma warning` in modo più affidabile, specialmente per quanto riguarda le modifiche dello stato di `#pragma warning` all'interno dei modelli, e facoltativamente rilascia nuovi avvisi C5031 e C5032 che aiutano il programmatore a trovare gli usi imprevisti di `#pragma warning(push)` e `#pragma warning(pop)`.

   In seguito al migliorato rilevamento delle modifiche di stato di `#pragma warning`, è ora possibile generare gli avvisi in precedenza eliminati in modo errato oppure gli avvisi relativi ai problemi in precedenza diagnosticati in modo errato.

- **Migliorata l'identificazione del codice non eseguibile** Le modifiche della Libreria standard C++ e la migliorata capacità di incorporare le chiamate di funzione inline rispetto alle versioni precedenti del compilatore potrebbero consentire al compilatore di dimostrare che un codice specifico ora non è eseguibile. Questo nuovo comportamento può comportare nuove e più frequenti visualizzazioni dell'avviso C4720.

   ```Output
    warning C4720: unreachable code
   ```

   In molti casi, l'avviso potrebbe essere generato solo durante la compilazione con ottimizzazioni abilitate, dal momento che le ottimizzazioni potrebbero incorporare più chiamate di funzione, eliminare il codice ridondante o altrimenti consentire di determinare che determinato codice non è eseguibile. Si è osservato che le nuove istanze dell'avviso C4720 si sono verificate di frequente nei blocchi **try/catch**, in special modo in relazione all'uso di [std::find](assetId:///std::find?qualifyHint=False&autoUpgrade=True).

   Esempio (prima)

   ```cpp
    try
    {
        auto iter = std::find(v.begin(), v.end(), 5);
    }
    catch(...)
    {
        do_something();  // ok
    }
   ```

   Esempio (dopo)

   ```cpp
    try
    {
        auto iter = std::find(v.begin(), v.end(), 5);
    }
    catch(...)
    {
        do_something();  // warning C4702: unreachable code
    }
   ```

### <a name="VS_Update2"></a> Miglioramenti della conformità in Visual Studio 2015 Update 2

- **Errori e avvisi aggiuntivi potrebbero essere generati in seguito al supporto parziale per l'espressione SFINAE** Le versioni precedenti del compilatore non analizzavano determinati tipi di espressioni all'interno degli identificatori **decltype** a causa della mancanza di supporto per l'espressione SFINAE. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Grazie ai costanti miglioramenti alla conformità, ora il compilatore analizza le espressioni e ha un supporto parziale per l'espressione SFINAE. Di conseguenza, ora vengono visualizzati avvisi ed errori rilevati nelle espressioni non analizzati dalle versioni precedenti del compilatore.

   Quando questo nuovo comportamento analizza un'espressione **decltype** che include un tipo non ancora dichiarato, il compilatore genera l'errore C2039.

   ```Output
    error C2039: 'type': is not a member of '`global namespace''
   ```

   Esempio 1: uso di un tipo non dichiarato (prima)

   ```cpp
    struct s1
    {
      template <typename T>
      auto f() -> decltype(s2<T>::type::f());  // error C2039

      template<typename>
      struct s2 {};
    }
   ```

   Esempio 1 (dopo)

   ```cpp
    struct s1
    {
      template <typename>  // forward declare s2struct s2;

      template <typename T>
      auto f() -> decltype(s2<T>::type::f());

      template<typename>
      struct s2 {};
    }
   ```

   Quando questo nuovo comportamento analizza un'espressione **decltype** in cui non è presente un uso necessario della parola chiave **typename** per specificare che il nome dipendente è un tipo, il compilatore genera l'avviso C4346 e l'errore C2923.

   ```Output
    warning C4346: 'S2<T>::Type': dependent name is not a type
   ```

   ```Output
    error C2923: 's1': 'S2<T>::Type' is not a valid template type argument for parameter 'T'
   ```

   Esempio 2: il nome dipendente non è un tipo (prima)

   ```cpp
    template <typename T>
    struct s1
    {
      typedef T type;
    };

    template <typename T>
    struct s2
    {
      typedef T type;
    };

    template <typename T>
    T declval();

    struct s
    {
      template <typename T>
      auto f(T t) -> decltype(t(declval<S1<S2<T>::type>::type>()));  // warning C4346, error C2923
    };
   ```

   Esempio 2 (dopo)

   ```cpp
    template <typename T> struct s1 {...};  // as above
    template <typename T> struct s2 {...};  // as above

    template <typename T>
    T declval();

    struct s
    {
      template <typename T>
      auto f(T t) -> decltype(t(declval<S1<typename S2<T>::type>::type>()));
    };
   ```

- **Le variabili membro `volatile` impediscono l'implementazione di costruttori e operatori di assegnazione definiti in modo implicito** Le versioni precedenti del compilatore consentivano a una classe con variabili membro **volatile** di generare automaticamente costruttori di copia/spostamento predefiniti e operatori di assegnazione di copia/spostamento predefiniti. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Ora il compilatore presuppone che una classe con variabili membro volatili includa operatori di costruzione e di assegnazione non semplici e, di conseguenza, impedisce la generazione automatica delle implementazioni predefinite di questi operatori. Quando questa classe è un membro di un'unione (o un'unione anonima all'interno di una classe), i costruttori di copia/spostamento e gli operatori di assegnazione di copia/spostamento dell'unione (o della classe che contiene l'unione anonima) vengono definiti in modo implicito come eliminati. Il tentativo di costruire o copiare l'unione, o la classe che contiene l'unione anonima, senza definirli in modo esplicito è un errore e, di conseguenza, il compilatore genera l'errore C2280.

   ```Output
    error C2280: 'B::B(const B &)': attempting to reference a deleted function
   ```

   Esempio (prima)

   ```cpp
    struct A
    {
      volatile int i;
      volatile int j;
    };

    extern A* pa;

    struct B
    {
      union
      {
        A a;
        int i;
      };
    };

    B b1 {*pa};
    B b2 (b1);  // error C2280
   ```

   Esempio (dopo)

   ```cpp
    struct A
    {
      int i;int j;
    };

    extern volatile A* pa;

    A getA()  // returns an A instance copied from contents of pa
    {
      A a;
      a.i = pa->i;
      a.j = pa->j;
      return a;
    }

    struct B;  // as above

    B b1 {GetA()};
    B b2 (b1);  // error C2280
   ```

- **Le funzioni membro statiche non supportano i qualificatori CV.** Le versioni precedenti di Visual C++ 2015 consentivano alle funzioni membro statiche di avere qualificatori CV. Questo comportamento è dovuto a una regressione in Visual C++ 2015 e Visual C++ 2015 Update 1. Visual C++ 2013 e le versioni precedenti di Visual C++ non accettano il codice scritto in questo modo. Il comportamento di Visual C++ 2015 e Visual C++ 2015 Update 1 non è corretto e non è conforme allo standard C++.  Visual Studio 2015 Update 2 non accetta il codice scritto in questo modo e genera l'errore del compilatore C2511.

   ```Output
    error C2511: 'void A::func(void) const': overloaded member function not found in 'A'
   ```

   Esempio (prima)

   ```cpp
    struct A
    {
      static void func();
    };

    void A::func() const {}  // C2511
   ```

   Esempio (dopo)

   ```cpp
    struct A
    {
      static void func();
    };

    void A::func() {}  // removed const
   ```

- **La dichiarazione con prototipo di enum non è consentita nel codice WinRT** (influisce solo su `/ZW`) Il codice compilato per Windows Runtime (WinRT) non consente la dichiarazione con prototipo dei tipi **enum**, analogamente a quanto accade quando il codice C++ gestito viene compilato per .NET Framework usando l'opzione `/clr` del compilatore. Questo comportamento garantisce che le dimensioni di un'enumerazione siano sempre note e possano essere proiettate correttamente nel sistema di tipi WinRT. Il compilatore non accetta il codice scritto in questo modo e genera gli errori C2599 e C3197.

   ```Output
    error C2599: 'CustomEnum': the forward declaration of a WinRT enum is not allowed
   ```

   ```Output
    error C3197: 'public': can only be used in definitions
   ```

   Esempio (prima)

   ```cpp
    namespace A {
      public enum class CustomEnum: int32;  // forward declaration; error C2599, error C3197
    }

    namespace A {
      public enum class CustomEnum: int32
      {
        Value1
      };
    }

    public ref class Component sealed
    {
    public:
      CustomEnum f()
      {
        return CustomEnum::Value1;
      }
    };
   ```

   Esempio (dopo)

   ```cpp
              // forward declaration of CustomEnum removed
    namespace A {
      public enum class CustomEnum: int32
      {
        Value1
      };
    }

    public ref class Component sealed
    {
    public:
      CustomEnum f()
      {
        return CustomEnum::Value1;
      }
    };
   ```

- **L'operatore new e l'operatore delete non membro di overload potrebbero non essere dichiarati inline**, livello 1 (`/W1`) attivo per impostazione predefinita. Le versioni precedenti del compilatore non generano un avviso quando le funzioni dell'**operatore new** e dell'**operatore delete** non membro vengono dichiarate inline. Il codice scritto in questo modo non è valido, la diagnostica non è necessaria, e può causare problemi di memoria difficili da diagnosticare derivanti dalla mancata corrispondenza degli operatori new e delete, in particolare quando sono usati insieme con la deallocazione dimensionata. Ora il compilatore genera l'avviso C4595 per identificare il codice scritto in questo modo.

   ```Output
    warning C4595: 'operator new': non-member operator new or delete functions may not be declared inline
   ```

   Esempio (prima)

   ```cpp
    inline void* operator new(size_t sz)  // warning C4595
    {
      ...
    }
   ```

   Esempio (dopo)

   ```cpp
    void* operator new(size_t sz)  // removed inline
    {
      ...
    }
   ```

   La correzione del codice scritto in questo modo potrebbe richiedere lo spostamento delle definizioni dell'operatore da un file di intestazione a un file di origine corrispondente.

### <a name="VS_Update3"></a> Miglioramenti della conformità in Visual Studio 2015 Update 3

- **std::is_convertable ora rileva l'assegnazione automatica** (libreria standard) Le versioni precedenti del tratto di tipo `std::is_convertable` non rilevano correttamente l'assegnazione automatica di un tipo di classe quando il relativo costruttore di copia è eliminato o privato. Ora `std::is_convertable<>::value` è impostato correttamente su **false** quando è applicato a un tipo di classe con costruttore di copia privato o eliminato.

   A questa modifica non è associata alcuna diagnostica del compilatore.

   Esempio

   ```cpp
    #include <type_traits>

    class X1
    {
    public:
        X1(const X1&) = delete;
    };

    class X2
    {
    private:
        X2(const X2&);
    };

    static_assert(std::is_convertible<X1&, X1>::value, "BOOM");static_assert(std::is_convertible<X2&, X2>::value, "BOOM");
   ```

   Nelle versioni precedenti di Visual C++, le asserzioni statiche nella parte inferiore di questo esempio passano perché `std::is_convertable<>::value` è stato impostato erroneamente su **true**. Ora `std::is_convertable<>::value` è impostato correttamente su **false** causando l'esito negativo delle asserzioni statiche.

- **I costruttori di copia e spostamento semplici impostati come predefiniti o eliminati rispettano gli identificatori di accesso** Le versioni precedenti del compilatore non verificavano l'identificatore di accesso dei costruttori di copia o spostamento semplici impostati come predefiniti o eliminati prima di consentirne la chiamata. Questo comportamento precedente non era corretto e non è conforme allo standard C++. In alcuni casi questo comportamento precedente creava un rischio di generazione silenziosa di codice errato, determinando un comportamento imprevedibile in fase di runtime. Il compilatore ora controlla l'identificatore di accesso dei costruttori di copia e spostamento semplici impostati come predefiniti o eliminati per determinare se può essere effettuata la chiamata e, se non è possibile, genera di conseguenza un avviso del compilatore C2248.

   ```Output
    error C2248: 'S::S' cannot access private member declared in class 'S'
   ```

   Esempio (prima)

   ```cpp
    class S {
    public:
       S() = default;
    private:
        S(const S&) = default;
    };

    void f(S);  // pass S by value

    int main()
    {
        S s;
        f(s);  // error C2248, can't invoke private copy constructor
    }
   ```

   Esempio (dopo)

   ```cpp
    class S {
    public:
       S() = default;
    private:
        S(const S&) = default;
    };

    void f(const S&);  // pass S by reference

    int main()
    {
        S s;
        f(s);
    }
   ```

- **Deprecato il supporto per il codice ATL con attributi**, livello 1 (`/W1`) attivo per impostazione predefinita. Le versioni precedenti del compilatore supportano il codice ATL con attributi. Come fase successiva della rimozione del supporto per il codice ATL con attributi [avviata in Visual C++ 2008](https://msdn.microsoft.com/library/bb384632\(v=vs.90\).aspx), il codice ATL con attributi è stato deprecato. Ora il compilatore genera l'avviso C4467 per consentire l'identificazione di questo tipo di codice deprecato.

   ```Output
    warning C4467: Usage of ATL attributes is deprecated
   ```

   Per continuare a usare codice ATL con attributi finché il supporto viene rimosso dal compilatore, è possibile disabilitare questo avviso passando gli argomenti `/Wv:18` o `/wd4467` della riga di comando al compilatore o aggiungendo `#pragma warning(disable:4467)` nel codice sorgente.

   Esempio 1 (prima)

   ```cpp
              [uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]
    class A {};
   ```

   Esempio 1 (dopo)

   ```cpp
    __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) A {};
   ```

   In alcuni casi potrebbe essere necessario o preferibile creare un file IDL file per evitare l'uso degli attributi ATL deprecati, come nell'esempio di codice riportato di seguito

   Esempio 2 (prima)

   ```cpp
    [emitidl];
    [module(name="Foo")];

    [object, local, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
    __interface ICustom {
        HRESULT Custom([in] long l, [out, retval] long *pLong);
        [local] HRESULT CustomLocal([in] long l, [out, retval] long *pLong);
    };

    [coclass, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
    class CFoo : public ICustom
    {
        // ...
    };
   ```

   Per prima cosa creare il file *.idl. Il file vc140.idl generato può essere usato per ottenere un file \*.idl contenente le interfacce e le annotazioni.

   Quindi, aggiungere una fase MIDL alla compilazione per assicurarsi che le definizioni dell'interfaccia di C++ vengano generate.

   Esempio 2 IDL (dopo)

   ```cpp
    import "docobj.idl";

    [
        object,local,uuid(9e66a290-4365-11d2-a997-00c04fa37ddb)
    ]

    interface ICustom : IUnknown {
        HRESULT  Custom([in] long l, [out,retval] long *pLong);
        [local] HRESULT  CustomLocal([in] long l, [out,retval] long *pLong);
    };

    [ version(1.0), uuid(29079a2c-5f3f-3325-99a1-3ec9c40988bb) ]
    library Foo
    {
        importlib("stdole2.tlb");
        importlib("olepro32.dll");
            [
                version(1.0),
                appobject,uuid(9e66a294-4365-11d2-a997-00c04fa37ddb)
            ]

        coclass CFoo {
            interface ICustom;
        };
    }
   ```

   Usare quindi ATL direttamente nel file di implementazione, come illustrato nell'esempio di codice che segue.

   Esempio 2 Implementazione (dopo)

   ```cpp
    #include <idl.header.h>
    #include <atlbase.h>

    class ATL_NO_VTABLE CFooImpl :
        public ICustom,
        public ATL::CComObjectRootEx<CComMultiThreadModel>
    {
    public:
        BEGIN_COM_MAP(CFooImpl)
        COM_INTERFACE_ENTRY(ICustom)
        END_COM_MAP()
    };
   ```

- **File di intestazione precompilata, ovvero PCH, e direttive #include non corrispondenti**, influisce solo su `/Wall` `/WX`. Le versioni precedenti del compilatore accettano le direttive `#include` non corrispondenti nei file di origine tra le compilazioni `-Yc` e `-Yu` quando si usano file di intestazione precompilata, ovvero PCH. Il codice scritto in questo modo non è più accettato dal compilatore. Il compilatore ora genera un avviso CC4598 per consentire l'identificazione delle direttive `#include` non corrispondenti quando si usano i file PCH.

   ```Output
    warning C4598: 'b.h': included header file specified for Ycc.h at position 2 does not match Yuc.h at that position
   ```

   Esempio (prima):

     X.cpp (-Ycc.h)

   ```cpp
    #include "a.h"
    #include "b.h"
    #include "c.h"
   ```

     Z.cpp (-Yuc.h)

   ```cpp
    #include "b.h"
    #include "a.h"  // mismatched order relative to X.cpp
    #include "c.h"
   ```

   Esempio (dopo)

     X.cpp (-Ycc.h)

   ```cpp
    #include "a.h"
    #include "b.h"
    #include "c.h"
   ```

     Z.cpp (-Yuc.h)

   ```cpp
    #include "a.h"
    #include "b.h" // matched order relative to X.cpp
    #include "c.h"
   ```

- **File di intestazione precompilata, ovvero PCH, e directory di inclusione non corrispondenti**, influisce solo su `/Wall` `/WX`. Le versioni precedenti del compilatore accettano gli argomenti della riga di comando delle directory di inclusione non corrispondenti (`-I`) per il compilatore tra le compilazioni `-Yc` e `-Yu` quando si usano file di intestazione precompilata, ovvero PCH. Il codice scritto in questo modo non è più accettato dal compilatore.   Il compilatore ora genera un avviso CC4599 per consentire l'identificazione degli argomenti della riga di comando delle directory di inclusione non corrispondenti (`-I`) quando si usano i file PCH.

   ```Output
    warning C4599: '-I..' : specified for Ycc.h at position 1 does not match Yuc.h at that position
   ```

   Esempio (prima)

   ```ms-dos
    cl /c /Wall /Ycc.h -I.. X.cpp
    cl /c /Wall /Yuc.h Z.cpp
   ```

   Esempio (dopo)

   ```ms-dos
    cl /c /Wall /Ycc.h -I.. X.cpp
    cl /c /Wall /Yuc.h -I.. Z.cpp
   ```

## <a name="whats-new-for-c-in-visual-studio-2013"></a>Novità di C++ in Visual Studio 2013

### <a name="improved-iso-cc-standards-support"></a>Supporto migliorato degli standard ISO C/C++

#### <a name="compiler"></a>Compilatore

Il compilatore Microsoft Visual C++ supporta le seguenti funzionalità del linguaggio ISO C++11:

- Argomenti di modello predefiniti per i modelli di funzione.
- Delega dei costruttori
- Operatori di conversione espliciti.
- Elenchi di inizializzatori e inizializzazione uniforme.
- Valori letterali stringa di tipo "raw".
- Modelli variadic.
- Modelli di alias.
- Funzioni eliminate.
- Inizializzatori del membro dati non statici (NSDMI).
- Funzioni impostate come predefinite. \*
- Supporta le seguenti funzionalità del linguaggio ISO C99:
- _Bool
- Valori letterali composti.
- Inizializzatori designati.
- Combinazione di dichiarazioni con codice.
- La conversione di valori letterali stringa in valori modificabili può essere impedita tramite la nuova opzione del compilatore `/Zc:strictStrings`. In C++98, la conversione dai valori letterali stringa in `char*` (e dai valori letterali stringa a caratteri "wide" in `wchar_t*`) è stata deprecata. In C++11 la conversione è stata rimossa completamente. Sebbene il compilatore potrebbe essere strettamente conforme allo standard, fornisce invece l'opzione `/Zc:strictStrings` in modo da poter controllare la conversione. Per impostazione predefinita, l'opzione non è attiva. Si noti che quando si utilizza questa opzione in modalità debug, STL non verrà compilato.
- Cast di riferimento rvalue/lvalue. Con i riferimenti rvalue, C++11 è in grado di distinguere chiaramente tra lvalue e rvalue. In precedenza, il compilatore non ha fornito questa opzione negli scenari di cast specifici. È stata aggiunta una nuova opzione del compilatore `/Zc:rvalueCast` per rendere il compilatore conforme a quanto indicato nel Documento di lavoro del linguaggio C++, nella sezione 5.4, [expr.cast]/1. Il comportamento predefinito quando questa opzione non è specificata è uguale a quello in Visual Studio 2012.

> [!NOTE]
> Per le funzioni impostate come predefinite, l'uso di =default per richiedere i costruttori di spostamento membro per membro e gli operatori di assegnazione di spostamento non è supportato.

### <a name="c99-libraries"></a>Librerie C99

Le dichiarazioni e le implementazioni vengono aggiunte per le funzioni mancanti in queste intestazioni: math.h, ctype.h, wctype.h, stdio.h, stdlib.h e wchar.h. Vengono inoltre aggiunte le nuove intestazioni complex.h, stdbool.h, fenv.h e inttypes.h, nonché implementazioni per tutte le funzioni dichiarate in esse. Sono disponibili nuove intestazioni del wrapper C++ (ccomplex, cfenv, cinttypes, ctgmath) e diverse altre sono state aggiornate (ccomplex, cctype, clocale, cmath, cstdint, cstdio, cstring, cwchar e cwctype).

### <a name="standard-template-library"></a>Libreria di modelli standard

Supporto per gli operatori di conversione esplicita C++11, gli elenchi di inizializzatori, le enumerazioni con ambito e i modelli variadic.
Tutti i contenitori supportano ora requisiti di elementi C++11 precisi.
Supporto per queste funzionalità C++14:

- "Funtori di operatori trasparenti" less<>, greater<>, plus<>, multiplies<> e così via.
- make_unique<T>(args...) e make_unique<T[]>(n)
- Funzioni non membro cbegin()/cend(), rbegin()/rend() e crbegin()/crend().
- Numerosi miglioramenti delle prestazioni in \<atomic>.
- Importanti correzioni del codice e della stabilizzazione in \<type_traits>.

### <a name="breaking-changes"></a>Modifiche di interruzione

Questo supporto migliorato per gli standard ISO C/C++ può richiedere modifiche del codice esistente in modo che sia conforme a C++11 e venga compilato correttamente in Visual C++ in Visual Studio 2013.

### <a name="visual-c-library-enhancements"></a>Miglioramenti della libreria di Visual C++

- Aggiunto C++ REST SDK. Include un'implementazione C++ moderna dei servizi REST.
- Ottimizzato il supporto trama di C++ AMP. Ora include il supporto per le mipmap e le nuove modalità di campionamento.
- Le attività PPL supportano più tecnologie di pianificazione e il debug asincrono. Le nuovi API consentono la creazione di attività PPL per risultati normali e condizioni di eccezione.

### <a name="c-application-performance"></a>Prestazioni delle applicazioni C++

- La vettorizzazione automatica ora riconosce e ottimizza più modelli C++ per rendere più rapida l'esecuzione del codice.
- Miglioramenti della qualità del codice della piattaforma ARM e della microarchitettura Atom.
- Aggiunta la convenzione di chiamata __vectorcall. Passare gli argomenti di tipo vettore usando la convenzione di chiamata __vectorcall per usare i registri vettoriali.
- Nuove opzioni del linker. Le opzioni `/Gw` (compilatore) e `/Gy` (assembler) consentono le ottimizzazioni del linker per produrre binari più efficienti.
- Supporto della memoria condivisa di C++ AMP per ridurre o eliminare le operazioni di copia dei dati tra la CPU e la GPU.

### <a name="profile-guided-optimization-pgo-enhancements"></a>Miglioramenti dell'ottimizzazione PGO

- Miglioramenti delle prestazioni da una riduzione nel working set di applicazioni ottimizzate tramite PGO.
- Nuova ottimizzazione PGO per lo sviluppo di app di Windows Runtime.

### <a name="windows-runtime-app-development-support"></a>Supporto per lo sviluppo di app di Windows Runtime

- **Supporto per tipi boxed in struct di valore.** Ora è possibile definire i tipi di valore usando i campi che possono essere null, ad esempio, `IBox<int>^` anziché **int**. Ciò significa che i campi possono avere un valore oppure essere uguali a **nullptr**.
- **Informazioni dettagliate sulle eccezioni.** C++/CX supporta il nuovo modello di errore Windows che consente di acquisire e propagare informazioni dettagliate sulle eccezioni tramite l'interfaccia applicativa binaria (ABI); sono inclusi gli stack di chiamate e le stringhe di messaggio personalizzate.
- **Object::ToString() ora è virtuale.** È ora possibile eseguire l'override di ToString in tipi di riferimento di Windows Runtime definiti dall'utente.
- **Supporto per le API deprecate.** Le API pubbliche di Windows Runtime possono ora essere contrassegnate come deprecate ed essere dotate di un messaggio personalizzato che viene visualizzato come avviso di compilazione. Possono inoltre fornire linee guida sulla migrazione.
- **Miglioramenti del debugger.** Supporto per il debug di interoperabilità JavaScript/nativo, la diagnostica delle eccezioni di Windows Runtime e il debug del codice asincrono (sia in Windows Runtime che nella libreria PPL).

> [!NOTE]
> Oltre alle funzionalità e ai miglioramenti specifici di C++ descritti in questa sezione, altri miglioramenti in Visual Studio consentono di scrivere meglio le app di Windows Runtime.

### <a name="diagnostics-enhancements"></a>Miglioramenti della diagnostica

- Miglioramenti del debugger. Supporto per il debug asincrono e il debug Just My Code.
- Categorie di analisi del codice. È ora possibile visualizzare l'output per categoria dall'analizzatore di codice per rilevare e correggere i difetti del codice.
- Diagnostica XAML. È ora possibile diagnosticare problemi di utilizzo della batteria e di velocità di risposta interfaccia utente nel codice XAML.
- Miglioramenti della grafica e del debug della GPU.
- Acquisizione remota e riproduzione su dispositivi reali.
- Debug simultaneo della CPU e di C++ AMP.
- Diagnostica migliorata del runtime di C++ AMP.
- Debug di traccia del compute shader HLSL.

### <a name="3-d-graphics-enhancements"></a>Miglioramenti della grafica tridimensionale

- Supporto della pipeline di contenuti immagine per il formato DDS alfa premoltiplicato.
- L'editor di immagini utilizza il valore alfa premoltiplicato internamente per il rendering e quindi evita il rendering di elementi come gli aloni scuri.
- Editor di modelli e immagini. La creazione di filtri definiti dall'utente è ora supportata nella finestra di progettazione shader nell'editor di immagini e nell'editor di modelli.

### <a name="ide-and-productivity"></a>IDE e produttività

**Ottimizzata la formattazione del codice**. È possibile applicare più impostazioni di formattazione al codice C++. Utilizzando queste impostazioni, è possibile controllare il posizionamento di una nuova riga mediante parentesi graffe e parole chiave, rientro, spaziatura e ritorno a capo delle righe. Il codice verrà formattato automaticamente dopo aver completato le istruzioni e i blocchi e dopo aver incollato il codice in un file.

**Completamento parentesi graffa.** Il codice C++ completa ora in modo automatico la chiusura dei caratteri che corrispondono ai seguenti caratteri di apertura:

- { (parentesi graffa)
- [ (parentesi quadra)
- ( (parentesi)
- ' (virgoletta singola)
- " (virgolette doppie)

**Funzionalità aggiuntive di completamento automatico di C++.**

- Aggiunge il punto e virgola per i tipi di classe.
- Completa le parentesi per i valori letterali stringa di tipo "raw".
- Completa i commenti a più righe (/\* \*/)

**Trova tutti i riferimenti** ora risolve e filtra automaticamente i riferimenti in background dopo aver visualizzato l'elenco delle corrispondenze testuali.

**Filtro elenco di membri basato sul contesto.** I membri inaccessibili vengono filtrati dagli elenchi di membri IntelliSense. Ad esempio, i membri privati non vengono visualizzati nell'elenco dei membri a meno che non si stia modificando il codice che implementa il tipo. Quando l'elenco dei membri è aperto, è possibile premere **CTRL**+**J** per rimuovere un livello di filtro. Questo si applica solo alla finestra dell'elenco dei membri corrente. È possibile premere nuovamente **CTRL**+**J** per rimuovere il filtro testuale e visualizzare ogni membro.

**Scorrimento della Guida ai parametri.** La firma della funzione visualizzata nella descrizione comando della Guida ai parametri cambia in base al numero di parametri effettivamente immessi, anziché visualizzare solo una firma arbitraria e non aggiornarla in base al contesto corrente. La Guida ai parametri è utile anche quando viene visualizzata sulle funzioni annidate.

**Passaggio dall'intestazione al file di codice.** È ora possibile passare da un'intestazione al corrispondente file di codice utilizzando un comando del menu di scelta rapida o un tasto di scelta rapida.

**Finestra ridimensionabile delle proprietà del progetto C++**

**Generazione automatica del codice del gestore eventi in C++/CX e C++/CLI.**  Quando si digita il codice per aggiungere un gestore eventi in un file di codice C++/CX o C++/CLI, l'editor può generare automaticamente la definizione del gestore eventi e l'istanza del delegato. Quando il codice del gestore eventi può essere generato automaticamente, viene visualizzata una finestra di descrizione comando.

**Miglioramento della compatibilità con DPI.** L'impostazione di compatibilità con DPI per i file manifesto dell'applicazione supporta ora l'impostazione "Per monitor compatibilità DPI avanzata".

**Cambio di configurazione più rapido.** Per le applicazioni di grandi dimensioni, il cambio di configurazioni (specialmente le operazioni di cambio successive) viene eseguito molto più rapidamente.

**Efficienza in fase di compilazione.** Numerose ottimizzazioni e l'utilizzo multicore rendono le compilazioni più veloci, soprattutto per i progetti di grandi dimensioni. Anche le compilazioni incrementali per le applicazioni C++ con riferimenti a C++ WinMD sono molto più veloci.

## <a name="whats-new-for-c-in-visual-studio-2012"></a>Novità di C++ in Visual Studio 2012

### <a name="improved-c11-standards-support"></a>Migliorato il supporto per gli standard C++11

#### <a name="standard-template-library"></a>Libreria di modelli standard

- Supporto per le nuove intestazioni STL: \<atomic>, \<chrono>, \<condition_variable>, \<filesystem>, \<future>, \<mutex>, \<ratio> e \<thread>.
- Per ottimizzare l'uso delle risorse di memoria, i contenitori sono ora più piccoli. Ad esempio, nella modalità di rilascio x86 con impostazioni predefinite `std::vector` si è ridotta da 16 byte in Visual Studio 2010 a 12 byte in Visual Studio 2012 e `std::map` si è ridotta da 16 byte in Visual Studio 2010 a 8 byte in Visual Studio 2012.
- Come consentito ma non richiesto dallo standard C++11, gli iteratori SCARY sono stati implementati.

#### <a name="other-c11-enhancements"></a>Altri miglioramenti di C++11

- Cicli for basati su intervallo. È possibile scrivere cicli più affidabili che funzionano con matrici, contenitori STL e raccolte di Windows Runtime nel formato for ( for-range-declaration : expression ). Tale impostazione fa parte del supporto del linguaggio di base.
- Le espressioni lambda senza stato, ovvero blocchi di codice che iniziano con un elemento introduttivo lambda vuoto [] e non acquisiscono variabili locali, sono ora implicitamente convertibili in puntatori a funzione come richiesto dallo standard C++11.
- Supporto delle enumerazioni con ambito. La chiave di enumerazione enum class di C++ è ora supportata. Il codice seguente illustra come il comportamento di questa chiave sia diverso da quello precedente di enum.

   ```cpp
enum class Element { Hydrogen, Helium, Lithium, Beryllium };
void func1(Element e);
func1(Hydrogen); // error C2065: 'Hydrogen' : undeclared identifier
func1(Element::Helium); // OK
   ```

### <a name="windows-runtime-app-development-support"></a>Supporto per lo sviluppo di app di Windows Runtime

- **Modello di interfaccia utente nativo basato su XAML**. Per le app di Windows Runtime, è possibile usare il nuovo modello di interfaccia utente nativo basato su XAML.
- **Estensioni di componenti Visual C++**. Queste estensioni semplificano l'uso degli oggetti Windows Runtime, che sono una parte essenziale delle app di Windows Runtime. Per altre informazioni, vedere [Roadmap for Windows Runtime apps using C++](../windows/universal-windows-apps-cpp.md) (Roadmap per le app di Windows Runtime che usano C++) e [Riferimenti al linguaggio Visual C++ (C++/CX)](../cppcx/visual-c-language-reference-c-cx.md)
- **Giochi DirectX**. È possibile sviluppare giochi coinvolgenti usando il nuovo supporto di DirectX per le app di Windows Runtime.
- **Interoperabilità XAML/DirectX**. Le app di Windows Runtime che usano sia XAML sia DirectX ora interagiscono in modo efficiente.
- **Sviluppo DLL del componente Windows Runtime**. Lo sviluppo della DLL del componente consente di estendere l'ambiente di Windows Runtime.

### <a name="compiler-and-linker"></a>Compilatore e linker

- **Vettorizzazione automatica**. Il compilatore analizza i cicli nel codice e, dove possibile, genera istruzioni che usano i registri e le istruzioni vettoriali che sono presenti in tutti i moderni processori. In questo modo i cicli vengono eseguiti più rapidamente. Le istruzioni del processore sono note come SSE (Streaming SIMD Extensions). Non è necessario abilitare o richiedere questa ottimizzazione perché viene applicata automaticamente.
- **Parallelizzazione automatica**. Il compilatore può analizzare i cicli nel codice e generare istruzioni che distribuiscono i calcoli tra più core o processori. In questo modo i cicli vengono eseguiti più velocemente. È necessario richiedere questa ottimizzazione perché non è abilitata per impostazione predefinita. In molti casi è utile per includere `#pragma loop(hint_parallel(N))` nel codice immediatamente prima dei cicli che si desidera parallelizzare.
- La vettorizzazione automatica e la parallelizzazione automatica possono essere usate insieme in modo che i calcoli vengono distribuiti tra più core e il codice in ogni core usi i propri registri vettoriali.

### <a name="new-in-visual-studio-2012-update-1"></a>Novità di Visual Studio 2012 Update 1

Quando si compila il codice C++ specificare Windows XP come destinazione.
È possibile usare il compilatore e le librerie Visual C++ per impostare Windows XP e Windows Server 2003 come destinazione.

#### <a name="parallel-programming-support"></a>Supporto per la programmazione parallela

##### <a name="c-accelerated-massive-parallelism-amp"></a>C++ Accelerated Massive Parallelism (AMP)

C++ AMP accelera l'esecuzione del codice C++ sfruttando l'hardware con dati in parallelo in genere presente come GPU in una scheda grafica discreta. Il modello di programmazione C++ AMP include le matrici multidimensionali, l'indicizzazione, il trasferimento di memoria, l'affiancamento e una libreria di funzioni matematiche. Usando le estensioni del linguaggio C++ AMP e le restrizioni del compilatore, è possibile controllare il modo in cui i dati si spostano dalla CPU alla GPU e viceversa.

**Debug.** L'esperienza di debug per le app che usano C++ AMP per impostare la GPU come destinazione è analoga al debug per le altre app C++. Ciò include gli aggiornamenti del debug parallelo menzionate in precedenza.

**Profilatura.** È ora disponibile il supporto della profilatura per l'attività della GPU che si basa su C++ AMP e altri modelli di programmazione basati su Direct3D.

#### <a name="general-parallel-programming-enhancements"></a>Miglioramenti generali della programmazione parallela

Con il passaggio dell'hardware alle architetture multicore o many-core, gli sviluppatori non possono più affidarsi alle velocità di clock in continuo aumento dei core singoli. Il supporto della programmazione parallela nel runtime di concorrenza consente agli sviluppatori di sfruttare queste nuove architetture.
In Visual Studio 2010 sono state introdotte potenti librerie di parallelizzazione C++, ad esempio la Parallel Patterns Library, insieme a funzionalità che consentono di sfruttare i vantaggi della concorrenza esprimendo sofisticate pipeline del flusso di dati. In Visual Studio 2012 queste librerie sono state estese per offire prestazioni migliori, maggiore controllo e un supporto più completo per i modelli paralleli più utili per gli sviluppatori. L'ampiezza dell'offerta ora include:

- Un modello di programmazione avanzato basato su attività che supporta l'asincronia e le continuazioni.
- Algoritmi paralleli che supportano il parallelismo fork-join, ovvero parallel_for, parallel_for con affinità, parallel_for_each, parallel_sort, parallel_reduce, parallel_transform.
- Contenitori indipendenti dalla concorrenza, che offrono versioni thread-safe delle strutture di dati standard, ad esempio priority_queue, queue, vector e map.
- La libreria di agenti asincroni, che gli sviluppatori possono usare per esprimere le pipeline del flusso di dati che si scompongono naturalmente in unità simultanee.
- Un'utilità di pianificazione e gestione delle risorse personalizzabile per agevolare la composizione dei modelli in questo elenco.

##### <a name="general-parallel-debugging-enhancements"></a>Miglioramenti generali del debug parallelo

Oltre alla finestra **Attività in parallelo** e alla finestra **Stack in parallelo**, Visual Studio 2012 offre la nuova finestra **Espressione di controllo in parallelo** per consentire l'analisi dei valori di un'espressione in tutti i thread e i processi e le operazioni di ordinamento e filtro del risultato. È anche possibile usare i propri visualizzatori per estendere la finestra e sfruttare il nuovo supporto a più processi in tutte le finestre degli strumenti.

### <a name="ide"></a>IDE

**Supporto per i modelli di Visual Studio.** È ora possibile usare la tecnologia dei modelli di Visual Studio per creare modelli di progetto e di elemento C++.

**Caricamento della soluzione asincrona.** I progetti vengono ora caricati in modo asincrono, gli elementi essenziali della soluzione per primi, e si può iniziare a lavorare più velocemente.

**Distribuzione automatica per il debug remoto.** La distribuzione dei file per il debug remoto in Visual C++ è stata semplificata. L'opzione **Distribuisci** del menu di scelta rapida del progetto copia automaticamente nel computer remoto i file specificati nelle proprietà di configurazione del debug. Non è più necessario copiare manualmente i file nel computer remoto.

**IntelliSense per C++/CLI.** C++/CLI include ora il supporto completo di IntelliSense. Le funzionalità di IntelliSense, ad esempio Informazioni rapide, Guida per i parametri, Elenca membri e Completamento automatico ora funzionano per C++/CLI. Inoltre, anche gli altri miglioramenti di IntelliSense e IDE indicati in questo documento funzionano per C++/CLI.

**Descrizioni comandi di IntelliSense più complete.** Le descrizioni comandi Informazioni rapide di IntelliSense per C++ visualizzano ora informazioni più complete come commenti in formato documentazione XML. Se si usa un'API da una libreria, ad esempio C++ AMP, che include commenti in formato documentazione XML, la descrizione comando di IntelliSense visualizza più informazioni rispetto alla semplice dichiarazione. Inoltre, se il codice include commenti in formato documentazione XML, le descrizioni comandi di IntelliSense visualizzano le informazioni più complete.

**Costrutti di codice C++.** La bozza di codice è disponibile per commutazione, if-else, ciclo for e altri costrutti di codice di base, nell'elenco a discesa Elenca membri. Selezionare un frammento di codice dall'elenco per inserirlo nel codice, quindi compilare la logica richiesta. È anche possibile creare i propri frammenti di codice personalizzati da usare nell'editor.

**Miglioramenti di Elenca membri.** L'elenco a discesa **Elenca membri** appare automaticamente quando si digita il codice nell'editor di codice. I risultati vengono filtrati in modo che solo i membri pertinenti vengono visualizzati durante la digitazione. È possibile controllare il tipo di logica di filtro usata per l'elenco dei membri nella finestra di dialogo **Opzioni** in **Editor di testo** >  **C/C++** > **Avanzate**.

**Colorazione semantica.** Tipi, enumerazioni, macro e altri token C++ hanno ora una colorazione per impostazione predefinita.

**Evidenziazione dei riferimenti.** Selezionando un simbolo ora vengono evidenziate tutte le istanze del simbolo nel file corrente. Premere **CTRL**+**MAIUSC**+**Freccia SU** o **CTRL**+**MAIUSC**+**Freccia GIÙ** per spostarsi tra i riferimenti evidenziati. È possibile disattivare questa funzionalità nella finestra di dialogo **Opzioni** in **Editor di testo** > **C/C++** > **Avanzate**.

### <a name="application-lifecycle-management-tools"></a>Strumenti di Application Lifecycle Management

#### <a name="static-code-analysis"></a>Analisi codice statico

L'analisi statica per C++ è stata aggiornata per offrire informazioni più complete sul contesto dell'errore, altre regole di analisi e migliori risultati dell'analisi. Nella nuova finestra Analisi codice è possibile filtrare i messaggi in base a parola chiave, progetto e gravità. Quando si seleziona un messaggio nella finestra, la riga del codice in cui è stato attivato il messaggio viene evidenziata nell'editor di codice. Per alcuni avvisi di C++, il messaggio indica le righe di origine che visualizzano il percorso di esecuzione che genera l'avviso. I punti di decisione e i motivi per la scelta di tale percorso specifico vengono evidenziati.
L'analisi del codice è inclusa nella maggior parte delle edizioni di Visual Studio 2012. Nelle edizioni Professional, Premium e Ultimate sono incluse tutte le regole. Nelle edizioni Express per Windows 8 e Windows Phone sono inclusi solo gli avvisi più critici. L'analisi del codice non è inclusa nell'edizione Express per il Web.
Di seguito sono riportati alcuni altri miglioramenti dell'analisi del codice:

- Nuovi avvisi sulla concorrenza consentono di evitare i bug di concorrenza verificando che siano un uso le corrette discipline di blocco nei programmi multithread di C/C++. L'analizzatore rileva potenziali race condition, inversioni dell'ordine di blocco, violazioni dei contratti di blocco chiamante/chiamato, operazioni di sincronizzazione non corrispondenti e altri bug di concorrenza.
- È possibile specificare le regole di C++ da applicare alle esecuzioni di analisi del codice usando i set di regole.
- Nella finestra **Analisi codice** è possibile inserire nel codice sorgente un pragma che elimina un avviso selezionato.
- È possibile migliorare la precisione e la completezza dell'analisi del codice statico usando la nuova versione del linguaggio di annotazione del codice sorgente Microsoft (SAL) per descrivere in che modo una funzione usa i propri parametri, i relativi presupposti e le garanzie presentate al termine.
- Supporto per i progetti C++ a 64 bit.

#### <a name="updated-unit-test-framework"></a>Aggiornato il framework unit test

Usare il nuovo framework unit test di C++ in Visual Studio per scrivere unit test di C++. Aggiungere un nuovo progetto unit test alla soluzione C++ esistente individuando il modello Progetto unit test di C++ nella categoria Visual C++ nella finestra di dialogo Nuovo progetto. Iniziare a scrivere gli unit test nello stub di codice TEST_METHOD generato nel file Unittest1.cpp. Quando viene scritto il codice di test, compilare la soluzione. Per eseguire i test, aprire una finestra **Esplora unit test** scegliendo **Visualizza** > **Altre finestre** > **Esplora unit test**, quindi scegliere **Esecuzione del test selezionato** nel menu di scelta rapida del test case desiderato. Al termine dell'esecuzione del test, è possibile visualizzare i risultati del test e informazioni aggiuntive sull'analisi dello stack nella stessa finestra.

#### <a name="architecture-dependency-graphs"></a>Grafici delle dipendenze dell'architettura

Per comprendere meglio il codice, è ora possibile generare grafici delle dipendenze per i file binari, di classe, di spazio dei nomi e di inclusione in una soluzione. Nella barra dei menu scegliere **Architettura** > **Genera grafico dipendenze** e quindi **For Solution** (Per soluzione) o **For Include File** (Per file di inclusione) per generare un grafico dipendenze. Completata la generazione del grafico, è possibile esaminarlo espandendo ogni nodo, verificare le relazioni di dipendenza passando da un nodo all'altro ed esplorare il codice sorgente scegliendo **Visualizza contenuto** nel menu di scelta rapida per un nodo. Per generare un grafico dipendenze per i file di inclusione, nel menu di scelta rapida per un file di codice sorgente *.cpp o un file di intestazione *.h scegliere **Generate Graph of Include Files** (Genera grafico dei file di inclusione).

#### <a name="architecture-explorer"></a>Esplora architettura

Usando **Esplora architettura** è possibile esplorare gli asset nella soluzione, nei progetti o nei file C++. Nella barra dei menu scegliere **Architettura** > **Finestre** > **Esplora architettura**. È possibile selezionare un nodo che interessa, ad esempio, in **Visualizzazione classi**. In questo caso, il lato destro della finestra degli strumenti viene espanso con un elenco di spazi dei nomi. Se si seleziona uno spazio dei nomi, in una nuova colonna viene visualizzato un elenco delle classi, degli struct e delle enumerazioni contenuti nello spazio dei nomi. È possibile continuare a esplorare questi asset oppure tornare alla colonna all'estrema sinistra per avviare un'altra query. Vedere **Trovare codice con Esplora architettura**.

#### <a name="code-coverage"></a>Code coverage

Il code coverage è stato aggiornato in modo da instrumentare dinamicamente i file binari in fase di esecuzione. Questo consente di ridurre il sovraccarico della configurazione e di ottenere prestazioni migliori. È anche possibile raccogliere dati di code coverage dagli unit test per le app C++. Dopo aver creato unit test di C++, è possibile usare **Esplora unit test** per rilevare i test nella soluzione. Per eseguire gli unit test e raccogliere i dati di code coverage per gli stessi, scegliere **Analizza code coverage** in **Esplora unit test**. È possibile esaminare i risultati del code coverage nella finestra **Risultati code coverage** a cui si accede dalla barra dei menu scegliendo **Test** > **Finestre** > **Risultati code coverage**.

## <a name="whats-new-for-c-in-visual-studio-2010"></a>Novità di C++ in Visual Studio 2010

### <a name="c-compiler-and-linker"></a>Compilatore e linker C++

**Parola chiave auto.** La parola chiave **auto** ha una nuova funzionalità. Usare il significato predefinito della parola chiave **auto** per dichiarare una variabile il cui tipo viene dedotto dall'espressione di inizializzazione nella dichiarazione della variabile. L'opzione del compilatore `/Zc:auto` richiama il significato nuovo o precedente della parola chiave **auto**.

**Identificatore di tipo decltype.** L'identificatore di tipo **decltype** restituisce il tipo di un'espressione specificata. Usare l'identificatore di tipo **decltype** in combinazione con la parola chiave **auto** per dichiarare un tipo complesso o noto solo al compilatore. Usare la combinazione, ad esempio, per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. In alternativa, dichiarare una funzione di modello che chiama un'altra funzione e quindi restituisce il tipo restituito della funzione chiamata.

**Espressioni lambda.** Le funzioni lambda hanno un corpo ma non un nome. Integrano le caratteristiche migliori dei puntatori a funzioni e degli oggetti funzione. Usare una funzione lambda singolarmente, come parametro di funzione di modello anziché un oggetto funzione, o insieme alla parola chiave **auto** per dichiarare una variabile il cui tipo è lambda.

**Riferimento Rvalue.** Il dichiaratore del riferimento Rvalue (&&) consente di dichiarare un riferimento a un elemento Rvalue. Un riferimento Rvalue consente di usare la semantica di spostamento e l'inoltro perfetto per scrivere costruttori, funzioni e modelli più efficienti.

**Dichiarazione static_assert.** Una dichiarazione **static-assert** consente di testare un'asserzione software in fase di compilazione, a differenza di altri meccanismi di asserzione che eseguono i test in fase di esecuzione. Se l'asserzione ha esito negativo, la compilazione non riesce e viene generato un messaggio di errore specifico.

**Parole chiave nullptr e __nullptr.** Il compilatore Visual C++ consente di usare la parola chiave **nullptr** con codice nativo o codice gestito. La parola chiave **nullptr** indica che un handle dell'oggetto, un puntatore interno o un tipo di puntatore nativo non punta a un oggetto. Il compilatore interpreta **nullptr** come codice gestito quando si usa l'opzione del compilatore `/clr` e come codice nativo quando non si usa l'opzione `/clr`.
La parola chiave **__nullptr** specifica di Microsoft ha lo stesso significato di **nullptr**, ma si applica solo al codice nativo. Se si compila il codice C/C++ nativo con l'opzione del compilatore `/clr`, il compilatore non è in grado di determinare se la parola chiave **nullptr** è un termine nativo o gestito. Per rendere l'intenzione chiara per il compilatore, usare la parola chiave nullptr per specificare il termine gestito e **__nullptr** per specificare il termine nativo.

**Opzione /Zc:trigraphs del compilatore.** Per impostazione predefinita, il supporto per i trigrammi è disabilitato. Usare l'opzione del compilatore `/Zc:trigraphs` per abilitare il supporto dei trigrammi.
Un trigramma è costituito da due punti interrogativi consecutivi (??) seguiti da un terzo carattere univoco. Il compilatore sostituisce un trigramma con il carattere di punteggiatura corrispondente. Ad esempio, il compilatore sostituisce il trigramma ??= con il carattere # (cancelletto). Usare i trigrammi nei file di origine C che usano un set di caratteri che non contiene determinati caratteri di punteggiatura.

**Nuova opzione PGO (Profile Guided Optimization).** PogoSafeMode è una nuova opzione di ottimizzazione PGO che consente di specificare se usare la modalità sicura o la modalità rapida durante l'ottimizzazione dell'applicazione. La modalità sicura è thread-safe, ma è più lenta della modalità rapida. La modalità rapida è il comportamento predefinito.

**Nuova opzione del supporto Common Language Runtime (CLR) /clr:nostdlib.** È stata aggiunta una nuova opzione per `/clr`, ovvero Compilazione Common Language Runtime. Se sono incluse versioni diverse delle stesse librerie, viene generato un errore di compilazione. La nuova opzione consente di escludere le librerie CLR predefinite in modo che il programma sia in grado di usare una determinata versione.

**Nuova direttiva pragma detect_mismatch.** La direttiva pragma detect_mismatch consente di inserire un tag nei file per il confronto con altri tag che hanno lo stesso nome. Se sono presenti più valori per lo stesso nome, il linker genera un errore.

**Oggetti intrinseci XOP, FMA4 e LWP.** Sono state aggiunte nuove funzioni intrinseche per supportare gli oggetti intrinseci XOP aggiunti per Visual Studio 2010 SP1, gli oggetti intrinseci FMA4 aggiunti per Visual Studio 2010 SP1 e gli oggetti intrinseci LWP aggiunti per le tecnologie di processore di Visual Studio 2010 SP1. Usare __cpuid, __cpuidex per determinare quali tecnologie di processore sono supportate in un determinato computer.

### <a name="visual-c-projects-and-the-build-system"></a>Progetti Visual C++ e il sistema di compilazione

**MSBuild.** Le soluzioni e i progetti di Visual C++ vengono ora compilati con MSBuild.exe, che sostituisce VCBuild.exe. MSBuild è lo stesso strumento di compilazione flessibile ed estensibile basato su XML che viene usato in altri linguaggi e tipi di progetto di Visual Studio. Grazie a questa modifica, i file di progetto di Visual C++ ora usano un formato di file XML e l'estensione VCXPROJ. I file di progetto di Visual C++ da versioni precedenti di Visual Studio vengono automaticamente convertiti nel nuovo formato di file.

**Directory di VC++.** L'impostazione delle directory di VC++ ora si trova in due posizioni. Usare le pagine delle proprietà del progetto per impostare i valori in base al progetto per le directory di VC++. Usare **Gestione proprietà** e una finestra delle proprietà per impostare valori globali in base alla configurazione per le directory di VC++.

**Dipendenze da progetto a progetto.** Nelle versioni precedenti, le dipendenze definite tra i progetti vengono archiviate nel file della soluzione. Quando le soluzioni vengono convertite nel nuovo formato di file di progetto, le dipendenze vengono convertite in riferimenti da progetto a progetto. Questa modifica può influire sulle applicazioni, poiché i concetti di dipendenze delle soluzioni e riferimenti da progetto a progetto sono diversi.

**Macro e variabili di ambiente.** La nuova macro ITERATOR_DEBUG_LEVEL richiama il supporto del debug per gli iteratori. Usare questa macro anziché le macro SECURE_SCL e HAS_ITERATOR_DEBUGGING precedenti.

### <a name="visual-c-libraries"></a>Librerie di Visual C++

**Librerie di runtime di concorrenza.** Il framework Runtime di concorrenza supporta applicazioni e componenti che vengono eseguiti simultaneamente ed è il framework di programmazione delle applicazioni simultanee in Visual C++. Per supportare la programmazione delle applicazioni simultanee, la libreria PPL (Parallel Patterns Library) offre contenitori e algoritmi di uso generale per l'esecuzione di un parallelismo accurato. La libreria di agenti asincroni offre un modello di programmazione basato su attori e le interfacce per il passaggio dei messaggi per le attività di pipelining o un flusso di dati meno dettagliato.

**Libreria standard di C++.** Nell'elenco seguente vengono descritte molte delle modifiche apportate alla libreria standard di C++.

- La nuova funzionalità del linguaggio C++ di riferimento Rvalue è stata usata per implementare la semantica di spostamento e l'inoltro perfetto per molte funzioni della libreria di modelli standard. La semantica di spostamento e l'inoltro perfetto migliorano notevolmente le prestazioni delle operazioni che allocano o assegnano variabili o parametri.
- I riferimenti Rvalue sono usati anche per implementare la nuova classe `unique_ptr`, ovvero un tipo di puntatore intelligente più sicuro rispetto alla classe `auto_ptr`. La classe `unique_ptr` è mobile ma non copiabile, implementa una rigida semantica di proprietà senza influire sulla sicurezza e funziona bene con i contenitori che riconoscono i riferimenti Rvalue. La classe `auto_ptr` è deprecata.
- Quindici nuove funzioni, ad esempio `find_if_not`, `copy_if` e `is_sorted`, sono state aggiunte all'intestazione \<algorithm>.
- Nell'intestazione \<memory> la nuova funzione make_shared è un modo pratico, affidabile ed efficiente per creare un puntatore condiviso a un oggetto nello stesso momento in cui l'oggetto viene costruito.
- Gli elenchi collegati singolarmente sono supportati dall'intestazione \<forward_list>.
- Le nuove funzioni membro `cbegin`, `cend`, `crbegin` e `crend` specificano `const_iterator` che si sposta avanti o indietro in un contenitore.
- L'intestazione \<system_error> intestazione e i modelli correlati supportano l'elaborazione degli errori di sistema di basso livello. I membri della classe `exception_ptr` possono essere usati per il trasporto delle eccezioni tra thread.
- L'intestazione \<codecvt> supporta la conversione di varie codifiche di caratteri Unicode in altre codifiche.
- L'intestazione \<allocators> definisce diversi modelli che consentono di allocare e liberare blocchi di memoria per contenitori basati su nodi.
- Sono disponibili numerosi aggiornamenti dell'intestazione \<random>.

### <a name="microsoft-foundation-class-mfc-library"></a>Libreria MFC (Microsoft Foundation Class)

**Funzionalità di Windows 7.** MFC supporta molte funzionalità di Windows 7, ad esempio l'interfaccia utente della barra multifunzione, la barra delle applicazioni, le jump List, le anteprime e miniature a schede, l'indicatore di stato, l'immagine sovrapposta all'icona e l'indicizzazione della ricerca. Poiché MFC supporta automaticamente molte funzionalità di Windows 7, può non essere necessario modificare l'applicazione esistente. Per supportare altre funzionalità nelle nuove applicazioni, usare la Creazione guidata applicazione MFC per specificare la funzionalità da usare.

**Riconoscimento multitocco.** MFC supporta le applicazioni con interfaccia utente multitocco, ad esempio le applicazioni scritte per il sistema operativo Microsoft Surface. Un'applicazione multitocco è in grado di gestire i messaggi con tocco di Windows e i messaggi con movimento, che sono combinazioni di messaggi con tocco. È sufficiente registrare l'applicazione per gli eventi di tocco e movimento e il sistema operativo indirizzerà gli eventi multitocco ai gestori degli eventi.

**Elevata sensibilità ai valori DPI.** Per impostazione predefinita, le applicazioni MFC rilevano la modalità HDPI. Se un'applicazione è sensibile ai valori DPI (risoluzione elevata in punti per pollice), il sistema operativo è in grado di ridimensionare finestre, testo e altri elementi dell'interfaccia utente in base alla risoluzione corrente dello schermo. Questo significa che più facilmente le immagini ridimensionate vengono visualizzate correttamente e non ritagliate o con effetto pixel.

**Gestione riavvio.** La funzione Gestione riavvio consente di salvare automaticamente i documenti e riavviare l'applicazione se si chiude o si riavvia in modo imprevisto. Ad esempio, è possibile usare Gestione riavvio per avviare l'applicazione dopo la chiusura a causa di un aggiornamento automatico. Per altre informazioni su come configurare l'applicazione per l'uso di Gestione riavvio, vedere **Procedura: aggiungere il supporto di Gestione riavvio**.

**CTaskDialog.** La classe `CTaskDialog` può essere usata invece dell'oggetto della finestra di messaggio `AfxMessageBox` standard. La classe `CTaskDialog` consente di raccogliere e visualizzare una maggiore quantità di informazioni rispetto alla finestra di messaggio standard.

#### <a name="safeint-library"></a>Libreria SafeInt

La nuova libreria SafeInt esegue operazioni aritmetiche sicure per gli overflow di numeri interi. Confronta inoltre tipi diversi di numeri interi.

#### <a name="new-active-template-library-atl-macros"></a>Nuove macro della libreria ATL (Active Template Library)

Sono state aggiunte nuove macro alla libreria ATL per espandere la funzionalità di PROP_ENTRY_TYPE e PROP_ENTRY_TYPE_EX. PROP_ENTRY_INTERFACE e PROP_ENTRY_INTERFACE_EX consentono di aggiungere un elenco di CLSID validi. PROP_ENTRY_INTERFACE_CALLBACK e PROP_ENTRY_INTERFACE_CALLBACK_EX consentono di specificare una funzione di callback per determinare se un CLSID è valido.

#### <a name="analyze-warnings"></a>Avvisi /analyze

È stata rimossa la maggior parte degli avvisi `/analyze`, relativi all'analisi codice Enterprise, dalle librerie di runtime C, ovvero CRT, MFC e ATL.

#### <a name="animation-and-d2d-support"></a>Animazione e supporto D2D

MFC supporta ora l'animazione e la grafica Direct2D. La libreria MFC offre diverse nuove classi e funzioni MFC per supportare questa funzionalità. Sono anche disponibili due nuove procedure dettagliate che illustrano come aggiungere un oggetto D2D e un oggetto di animazione a un progetto. Le procedure dettagliate sono **Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC** e **Procedura dettagliata: aggiunta di animazione a un progetto MFC**.

### <a name="ide"></a>IDE

**Funzionalità IntelliSense migliorata.** La funzionalità IntelliSense per Visual C++ è stata completamente riprogettata per essere più veloce, più precisa e in grado di gestire progetti di maggiori dimensioni. Per ottenere questo miglioramento, nell'IDE viene fatta distinzione tra il modo in cui uno sviluppatore visualizza e modifica il codice sorgente e il modo in cui l'IDE usa il codice sorgente e le impostazioni di progetto per creare una soluzione.
A causa di questa separazione dei compiti, le funzionalità di esplorazione, ad esempio **Visualizzazione classi** e la nuova finestra di dialogo **Passa a** vengono gestite da un sistema basato su un nuovo file di database desktop con estensione SDF di SQL Server che sostituisce il file con estensione NCB (No Compile Browse) precedente. Le funzionalità di IntelliSense, ad esempio le informazioni rapide, il completamento automatico e la Guida ai parametri, analizzano le unità di conversione solo quando necessario. Le funzionalità ibride, ad esempio la nuova finestra **Gerarchia di chiamata**, usano una combinazione di funzionalità di esplorazione e IntelliSense.
Poiché IntelliSense elabora solo le informazioni necessarie al momento, l'IDE risponde in modo più rapido. Inoltre, poiché le informazioni sono più aggiornate, le finestre e le visualizzazioni IDE sono più accurate. Infine, poiché l'infrastruttura IDE è meglio organizzata, più efficace e più scalabile, è in grado di gestire progetti di grandi dimensioni.

**Errori di IntelliSense migliorati.** L'IDE rileva meglio gli errori che possono causare una perdita di IntelliSense e li evidenzia con una sottolineatura ondulata rossa. Inoltre, l'IDE segnala gli errori di IntelliSense alla **finestra Elenco errori**. Per visualizzare il codice che causa il problema, fare doppio clic sull'errore nella **finestra Elenco errori**.

**Funzionalità di completamento automatico per #include** L'IDE supporta il completamento automatico per la parola chiave `#include`. Quando si digita `#include`, l'IDE crea un elenco a discesa con i file di intestazione validi. Se si continua, digitare un nome di file, l'IDE Filtra l'elenco in base al testo immesso. In qualsiasi momento è possibile selezionare dall'elenco il file da includere. Ciò consente di includere rapidamente i file senza conoscere il nome esatto del file.

**Passa a.** La finestra di dialogo **Passa a** consente di cercare tutti i simboli e i file nel progetto che corrispondono a una stringa specificata. I risultati della ricerca vengono immediatamente aggiornati quando si digitano altri caratteri nella stringa di ricerca. Il campo di feedback **Risultati** indica il numero di elementi trovati e consente di decidere se forzare la ricerca. I campi di feedback **Tipo/Ambito**, **Percorso** e **Anteprima** consentono di evitare ambiguità tra gli elementi con nomi simili. Inoltre, è possibile estendere questa funzionalità per supportare altri linguaggi di programmazione.

**Debug e profilatura paralleli.** Il debugger di Visual Studio è compatibile con il runtime di concorrenza e consente di risolvere i problemi relativi alle applicazioni con elaborazione parallela. Per visualizzare il comportamento complessivo dell'applicazione, è possibile usare il nuovo profiler di concorrenza. Inoltre, è possibile usare nuove finestre degli strumenti per visualizzare lo stato delle attività e i rispettivi stack di chiamate.

**Finestra di progettazione della barra multifunzione.** La **Finestra di progettazione della barra multifunzione** è un editor grafico che consente di creare e modificare l'interfaccia utente di una barra multifunzione MFC. L'interfaccia utente finale della barra multifunzione è rappresentata da un file di risorse basato su XML (estensione mfcribbon-ms). Per le applicazioni esistenti, è possibile acquisire l'attuale interfaccia utente della barra multifunzione aggiungendo temporaneamente alcune righe di codice e richiamando la **Finestra di progettazione della barra multifunzione**. Dopo aver creato il file di risorse della barra multifunzione, è possibile sostituire il codice scritto a mano dell'interfaccia utente della barra multifunzione con alcune istruzioni che caricano la risorsa barra multifunzione.

**Gerarchia di chiamata.** La finestra **Gerarchia di chiamata** consente di passare a tutte le funzioni che vengono chiamate da una determinata funzione o a tutte le funzioni che chiamano una determinata funzione.

### <a name="tools"></a>Strumenti

**Creazione guidata classe MFC.** Visual C++ 2010 ripropone l'uso dello strumento Creazione guidata classe MFC a suo tempo molto apprezzato. La procedura Creazione guidata classe MFC è un modo pratico per aggiungere classi, messaggi e variabili a un progetto senza dover modificare manualmente i set di file di origine.

**Creazione guidata controllo ATL.** La procedura Creazione guidata controllo ATL non popola più automaticamente il campo `ProgID`. Se un controllo ATL non ha un `ProgID`, altri strumenti potrebbero non funzionare con esso. Un esempio di strumento che richiede controlli con `ProgID` è la finestra di dialogo **Insert Active Control** (Inserisci controllo ActiveX). Per altre informazioni sulla finestra di dialogo, vedere **Finestra di dialogo Inserisci controllo ActiveX**.

### <a name="microsoft-macro-assembler-reference"></a>Riferimento a Microsoft Macro Assembler

L'aggiunta del tipo di dati YMMWORD supporta gli operandi multimediali a 256 bit inclusi nelle istruzioni Intel Advanced Vector Extension (AVX).

## <a name="whats-new-for-c-in-visual-studio-2008"></a>Novità di C++ in Visual Studio 2008

### <a name="visual-c-integrated-development-environment-ide"></a>Ambiente di sviluppo integrato (IDE) di Visual C++

- Le finestre di dialogo create nelle applicazioni Win32, ATL e MFC ora sono conformi alle linee guida di stile di Windows Vista. Quando si crea un nuovo progetto con Visual Studio 2008, tutte le finestre di dialogo che si inseriscono nell'applicazione saranno conformi alle linee guida di stile di Windows Vista. Se si ricompila un progetto creato con una versione precedente di Visual Studio, le finestre di dialogo esistenti manterranno lo stesso aspetto che avevano in precedenza. Per altre informazioni sull'inserimento delle finestre di dialogo nell'applicazione, vedere **Dialog Editor**.

- La Creazione guidata **progetto ATL** ha ora un'opzione per la registrazione dei componenti per tutti gli utenti. A partire da Visual Studio 2008, i componenti COM e le librerie dei tipi creati con la Creazione guidata **progetto ATL** vengono registrati nel nodo HKEY_CURRENT_USER del registro di sistema a meno che non si selezioni **Register component for all users** (Registra componente per tutti gli utenti).
- La Creazione guidata **progetto ATL** non offre più un'opzione per la creazione dei progetti ATL con attributi. A partire da Visual Studio 2008 la Creazione guidata **progetto ATL** non ha un'opzione che consente di modificare lo stato con attributi di un nuovo progetto. Tutti i nuovi progetti ATL creati dalla procedura guidata sono ora privi di attributi.
- La scrittura nel Registro di sistema può essere reindirizzata. Con l'introduzione di Windows Vista, la scrittura in determinate aree del Registro di sistema richiede un programma da eseguire con privilegi elevati. Non è consigliabile eseguire sempre Visual Studio con privilegi elevati. Il reindirizzamento per utente reindirizza automaticamente le scritture del Registro di sistema da HKEY_CLASSES_ROOT a HKEY_CURRENT_USER, senza apportare modifiche alla programmazione.
- **Progettazione classi** ora offre un supporto limitato per il codice C++ nativo. Nelle versioni precedenti di Visual Studio **Progettazione classi** funzionava solo con Visual C# e Visual Basic. Gli utenti di C++ ora possono usare **Progettazione classi**, ma solo in modalità di sola lettura. Per altre informazioni su come usare **Progettazione classi** con C++, vedere **Utilizzo del codice Visual C++ in Progettazione classi**.
- La creazione guidata del progetto non ha più un'opzione che consente di creare un progetto C++ di SQL Server. A partire da Visual Studio 2008 la procedura guidata per la creazione di un nuovo progetto non ha un'opzione che consente di creare un progetto SQL Server di C++. I progetti SQL Server creati usando una versione precedente di Visual Studio verranno comunque compilati e funzioneranno correttamente.

### <a name="visual-c-libraries"></a>Librerie di Visual C++

#### <a name="general"></a>Generale

- Le applicazioni possono essere associate a versioni specifiche delle librerie di Visual C++. In alcuni casi un'applicazione dipende dagli aggiornamenti apportati alle librerie di Visual C++ dopo un rilascio. In questo caso l'esecuzione dell'applicazione in un computer con versioni precedenti delle librerie può causare comportamenti imprevisti. È ora possibile associare un'applicazione a una versione specifica delle librerie in modo che non venga eseguita in un computer con una versione precedente delle librerie.

#### <a name="stlclr-library"></a>Libreria STL/CLR

- Visual C++ include ora la libreria STL/CLR. La libreria STL/CLR è un pacchetto della libreria di modelli standard, un subset della libreria C++ standard, per l'uso con C++ e il Common Language Runtime di .NET Framework. Con STL/CLR è ora possibile usare tutti i contenitori, iteratori e algoritmi della libreria STL in un ambiente gestito.

#### <a name="mfc-library"></a>Libreria MFC

- Windows Vista supporta i controlli comuni. Più di 150 metodi in 18 classi nuove o esistenti sono stati aggiunti per supportare le funzioni in Windows Vista o per migliorare la funzionalità nelle classi MFC correnti.
- La nuova classe `CNetAddressCtrl` consente di inserire e convalidare gli indirizzi IPv4 e IPv6 o i nomi DNS.
- La nuova classe `CPagerCtrl` semplifica l'uso del controllo pager di Windows.
- La nuova classe `CSplitButton` semplifica l'uso del controllo splitbutton di Windows per selezionare un'azione predefinita o facoltativa.

#### <a name="c-support-library"></a>libreria di supporto per C++

- C++ introduce la libreria del marshalling. La libreria del marshalling offre un modo semplice e ottimizzato di eseguire il marshalling dei dati tra gli ambienti nativi e quelli gestiti. La libreria è un'alternativa ad approcci più complessi e meno efficienti, ad esempio l'uso di PInvoke. Per altre informazioni, vedere **Panoramica del marshaling in C++**.

#### <a name="atl-server"></a>ATL Server

- ATL Server viene rilasciato come progetto di origine condiviso.
- La codebase di ATL Server è stata rilasciata per la maggior parte come progetto di origine condiviso in CodePlex e non viene installata come parte di Visual Studio 2008. Alcuni dei file associati ad ATL Server non fanno più parte di Visual Studio. Per l'elenco dei file rimossi, vedere l'articolo relativo ai **file di ATL Server rimossi**.
- Le classi di codifica e decodifica dei dati di atlenc.h e le funzioni e classi di utilità di atlutil.h e atlpath.h ora fanno parte della libreria ATL.
- Microsoft continuerà a supportare le versioni di ATL Server incluse nelle versioni precedenti di Visual Studio, purché tali versioni di Visual Studio siano supportate. CodePlex continuerà lo sviluppo del codice ATL Server come progetto della community. Microsoft non supporta una versione CodePlex di ATL Server.

### <a name="visual-c-compiler-and-linker"></a>Compilatore e linker Visual C++

#### <a name="compiler-changes"></a>Modifiche del compilatore

- Il compilatore supporta le compilazioni incrementali gestite. Quando si specifica questa opzione, il compilatore non ricompila il codice quando viene modificato un assembly di riferimento. Esegue invece una compilazione incrementale. I file vengono ricompilati solo se le modifiche influiscono sul codice dipendente.
- Gli attributi correlati ad ATL Server non sono più supportati. Il compilatore non supporta più diversi attributi direttamente correlati ad ATL Server. Per un elenco completo degli attributi rimossi, vedere Ultime modifiche.
- Il compilatore supporta la microarchitettura Intel Core. Il compilatore contiene la regolazione per la microarchitettura Intel Core durante la generazione di codice. Per impostazione predefinita, la regolazione è attivata e non può essere disabilitata poiché supporta anche Pentium 4 e altri processori.
- Gli oggetti intrinseci supportano i processori AMD e Intel più recenti. Molte nuove istruzioni intrinseche supportano maggiori funzionalità nei processori AMD e Intel più recenti. Per altre informazioni sui nuovi oggetti intrinseci, vedere gli articoli su **istruzioni di Streaming SIMD Extensions 3 aggiuntivi** e **Streaming SIMD Extensions 4**, **SSE4A e oggetti intrinseci di modifica dei bit avanzata**, **oggetti intrinseci AES**, **_mm_clmulepi64_si128** e **__rdtscp**.
- Viene aggiornata la funzione `__cpuid`. Le funzioni `__cpuid`, `__cpuidex` ora supportano diverse nuove funzionalità dalle ultime revisioni dei processori AMD e Intel. L'oggetto intrinseco `__cpuidex` è nuovo e raccoglie più informazioni dai processori recenti.
- L'opzione del compilatore `/MP` riduce il tempo totale di compilazione. L'opzione `/MP` può ridurre notevolmente il tempo totale necessario per compilare diversi file di origine creando diversi processi che compilano simultaneamente i file. Questa opzione è particolarmente utile nei computer che supportano l'hyperthreading, più processori o più core.
- L'opzione del compilatore `/Wp64` e la parola chiave **__w64** sono deprecate. L'opzione del compilatore `/Wp64` e la parola chiave **__w64**, che rileva i problemi di portabilità a 64 bit, sono deprecate e verranno rimosse in una versione futura del compilatore. Anziché questa opzione del compilatore e questa parola chiave, usare un compilatore di Visual C++ che abbia come destinazione una piattaforma a 64 bit.
- `/Qfast_transcendentals` genera codice inline per le funzioni trascendenti.
- `/Qimprecise_fwaits` rimuove i comandi fwait interni ai blocchi try quando si usa l'opzione del compilatore `/fp:except`.

### <a name="linker-changes"></a>Modifiche del linker

- Le informazioni sul controllo dell'account utente vengono ora incorporate in file manifesto per gli eseguibili dal linker di Visual C++ (link.exe). Per impostazione predefinita questa funzionalità è attivata. Per altre informazioni su come disabilitare questa funzionalità o su come modificare il comportamento predefinito, vedere `/MANIFESTUAC`, l'incorporazione delle informazioni sul Controllo dell'account utente nel manifesto.
- Il linker ora usa l'opzione `/DYNAMICBASE` per abilitare la funzionalità ASLR (Address Space Layout Randomization) di Windows Vista. Questa opzione modifica l'intestazione di un file eseguibile per indicare se l'applicazione deve essere riassegnata in modo casuale al momento del caricamento.

## <a name="whats-new-for-c-in-visual-studio-2005"></a>Novità di C++ in Visual Studio 2005

Di seguito sono riportate le nuove funzionalità di Visual C++ 2005 Service Pack 1:

### <a name="intrinsics-for-x86-and-x64"></a>Oggetti intrinseci per x86 e x64

- __halt
- __lidt
- __nop
- __readcr8
- __sidt
- __svm_clgi
- __svm_invlpga
- __svm_skinit
- __svm_stgi
- __svm_vmload
- __svm_vmrun
- __svm_vmsave
- __ud2
- __vmx_off
- __vmx_vmptrst
- __writecr8

### <a name="intrinsics-for-x64-only"></a>Oggetti intrinseci solo per x64

- __vmx_on
- __vmx_vmclear
- __vmx_vmlaunch
- __vmx_vmptrld
- __vmx_vmread
- __vmx_vmresume
- __vmx_vmwrite

### <a name="new-language-keywords"></a>Nuove parole chiave del linguaggio

__sptr, __uptr

### <a name="new-compiler-features"></a>Nuove funzionalità del compilatore

Il compilatore include modifiche di rilievo in questa versione.

- Compilatori nativi e incrociati a 64 bit.
- Aggiunta l'opzione del compilatore `/analyze` per l'analisi codice Enterprise.
- Aggiunta l'opzione del compilatore `/bigobj`.
- Aggiunti `/clr:pure`, `/clr:safe` e `/clr:oldSyntax`. (Funzionalità in seguito deprecata in Visual Studio 2015 e rimossa in Visual Studio 2017.)
- Opzioni del compilatore deprecate: molte opzioni del compilatore sono state deprecate in questa versione. Per altre informazioni, vedere **Opzioni obsolete del compilatore**.
- Ridotto il doppio thunk nel codice `/clr`. Per altre informazioni, vedere **Doppio thunk (C++)**.
- Non è più possibile usare `/EH` (modello di gestione delle eccezioni) o `/EHs` per rilevare un'eccezione generata con un elemento diverso da un'istruzione throw. Usare `/EHa`.
- Aggiunta l'opzione del compilatore `/errorReport` per segnalare gli errori interni del compilatore.
- Aggiunta l'opzione del compilatore `/favor`, ottimizzazione per 64.
- Aggiunta l'opzione del compilatore `/FA`, `/Fa` (file listato).
- Aggiunta l'opzione del compilatore `/FC`, percorso completo del file di codice sorgente nella diagnostica.
- Aggiunta l'opzione del compilatore `/fp` per specificare il comportamento della virgola mobile.
- Aggiunta l'opzione del compilatore `/G`, ottimizzazione per processore.
- Aggiunta l'opzione del compilatore `/G`, ottimizzazione per processore.
- Le opzioni del compilatore `/G3`, `/G4`, `/G5`, `/G6`, `/G7` e `/GB` sono state rimosse. Il compilatore ora usa un "modello misto" che tenta di creare il file di output migliore per tutte le architetture.
- `/Gf` è stato rimosso. In alternativa, usare `/GF` per l'eliminazione delle stringhe duplicate.
- `/GL`, ottimizzazione intero programma, è ora compatibile con `/CLRHEADER`.
- `/GR` ora è attivata per impostazione predefinita.
- `/GS`, controllo sicurezza buffer, ora offre una protezione per i parametri dei puntatori vulnerabili. `/GS` ora è attivata per impostazione predefinita. `/GS` ora funziona anche per funzioni compilate in MSIL con `/clr`, compilazione Common Language Runtime.
- Aggiunta l'opzione del compilatore `/homeparams`, copia i parametri del registro nello stack.
- Aggiunta l'opzione del compilatore `/hotpatch`, crea immagine con patch a caldo.
- Aggiornata l'euristica delle funzioni inline. Per altre informazioni, vedere **inline**, **__inline**, **__forceinline** e **inline_depth**
- Sono state aggiunte molte nuove funzioni intrinseche e molti oggetti intrinseci in precedenza non documentati sono ora documentati.
- Per impostazione predefinita, tutte le chiamate a New con esito negativo generano un'eccezione.
- Le opzioni del compilatore `/ML` e `/MLd` sono state rimosse. Visual C++ non supporta più la libreria CRT a thread singolo collegata in modo statico.
- Il compilatore ha implementato l'ottimizzazione del valore restituito denominato, che viene abilitata quando si esegue la compilazione con `/O1`, `/O2` che riduce la dimensione e ottimizza la velocità, `/Og` per ottimizzazioni globali e `/Ox` per ottimizzazione completa.
- L'opzione del compilatore `/Oa` è stata rimossa ma verrà automaticamente ignorata. Usare i modificatori `noalias` o `restrict__declspec` per specificare in che modo il compilatore usa gli alias.
- Rimossa l'opzione del compilatore `/Op`. In alternativa, usare `/fp` per specifica il comportamento della virgola mobile.
- Visual C++ ora supporta OpenMP.
- Aggiunta l'opzione del compilatore `/openmp` per abilita il supporto per OpenMP 2.0.
- L'opzione del compilatore `/Ow` è stata rimossa ma verrà automaticamente ignorata. Usare i modificatori `noalias` o `restrict__declspec` per specificare in che modo il compilatore usa gli alias.

### <a name="profile-guided-optimizations"></a>Ottimizzazioni guidate da profilo (PGO)

- `/QI0f` è stato rimosso.
- `/QIfdiv` è stato rimosso.
- Aggiunta l'opzione del compilatore `/QIPF_B`, errori per l'istruzione CPU B.
- Aggiunta l'opzione del compilatore `/QIPF_C`, errori per l'istruzione CPU C.
- Aggiunta l'opzione del compilatore `/QIPF_fr32`, per non usare i 96 registri a virgola mobile superiori.
- Aggiunta l'opzione del compilatore `/QIPF_noPIC` per generare codice dipendente dalla posizione.
- Aggiunta l'opzione del compilatore `/QIPF_restrict_plabels` che presuppone che non vengano create funzioni in fase di esecuzione.

### <a name="unicode-support-in-the-compiler-and-linker"></a>Supporto Unicode nel compilatore e nel linker

- `/vd`, per disabilitare spostamenti di costruzione, consente ora di usare l'operatore dynamic_cast per un oggetto in fase di costruzione (/vd2)
- Rimossa l'opzione del compilatore `/YX`. In alternativa, usare `/Yc` che consente di creare il file di intestazione precompilata, o `/Yu` per usare il file di intestazione precompilata. Se l'opzione `/YX` viene rimossa dalle configurazioni della build e non viene sostituita da altri elementi, le compilazioni potranno essere più rapide.
- `/Zc:forScope` ora è attivata per impostazione predefinita.
- `/Zc:wchar_t` ora è attivata per impostazione predefinita.
- Rimossa l'opzione del compilatore `/Zd`. Le informazioni di debug solo per il numero di riga non sono più supportate. In alternativa, usare `/Zi`. Per altre informazioni, vedere **/Z7, /Zi, /ZI (Formato informazioni di debug)**.
- `/Zg` ora è valida solo per i file di codice sorgente C e non per i file di codice sorgente C++.
- Aggiunta l'opzione del compilatore `/Zx` per il debug del codice Itanium ottimizzato.

### <a name="new-language-features"></a>Nuove funzionalità del linguaggio

- Deprecato l'attributo attribute.
- Aggiunto il modificatore `appdomain__declspec`.
- Aggiunta la convenzione di chiamata `__clrcall`.
- Il modificatore deprecato (C++) **declspec** consente ora di specificare una stringa che verrà visualizzata in fase di compilazione, quando un utente tenta di accedere a una classe o funzione deprecata.
- L'operatore **dynamic_cast** include modifiche che causano un'interruzione.
- Le enumerazioni native ora consentono di specificare il tipo sottostante.
- Aggiunto il modificatore `jitintrinsicdeclspec`.
- Aggiunto il modificatore `noaliasdeclspec`.
- Aggiunto il modificatore `process__declspec`.
- **abstract**, **override** e **sealed** sono valide per le compilazioni native.
- Aggiunta la parola chiave **__restrict**.
- Aggiunto il modificatore `restrictdeclspec`.
- **__thiscall** è ora una parola chiave.
- La parola chiave **__unaligned** è ora documentata.
- **volatile** (C++) presenta un nuovo comportamento rispetto alle ottimizzazioni.

### <a name="new-preprocessor-features"></a>Nuove funzionalità del preprocessore

- Aggiunta la macro predefinita __CLR_VER.
- Il pragma comment (C/C++) ora accetta `/MANIFESTDEPENDENCY` come commento del linker. L'opzione exestr per comment è ora deprecata.
- L'attributo `embedded_idl`, direttiva `#import`, accetta ora un parametro facoltativo.
- Pragma `fenv_access`
- Pragma `float_control`
- Pragma `fp_contract`
- Le variabili globali non verranno inizializzate nell'ordine in cui sono dichiarate se sono presenti variabili globali nel pragma managed, unmanaged e nelle sezioni non gestite. La modifica può avere un grande impatto se, ad esempio, una variabile globale non gestita viene inizializzata con variabili globali gestite ed è richiesto un oggetto gestito completamente costruito.
- Le sezioni specificate con init_seg sono ora di sola lettura e non di lettura/scrittura come nelle versioni precedenti.
- Il valore predefinito di inline_depth ora è 16. Il valore predefinito 16 era usato anche in Visual C++ .NET 2003.
- Aggiunta la macro predefinita _INTEGRAL_MAX_BITS, vedere Macro predefinite.
- Aggiunte le macro predefinite M_CEE M_CEE_PURE e M_CEE_SAFE, vedere Macro predefinite.
- Aggiunta la macro predefinita _M_IX86_FP.
- Aggiunta la macro predefinita _M_X64.
- Pragma `make_public`
- Aggiornata la sintassi del pragma `managed`, `unmanaged`, ora presenta `push` e `pop`
- La direttiva `#using` fa ora riferimento a mscorlib.dll in modo implicito in tutte le compilazioni `/clr`.
- Aggiunta la macro predefinita _OPENMP.
- Il pragma optimize è stato aggiornato, a e w non sono più parametri validi.
- Aggiunto l'attributo no_registry#import.
- Aggiunti i pragma `region`, `endregion`
- Aggiunta la macro predefinita VC_NODEFAULTLIB.
- Le macro variadic vengono ora implementate.
- `vtordisp` è deprecato e verrà rimosso in una versione futura di Visual C++.
- Il pragma `warning` include ora l'identificatore suppress.

### <a name="new-linker-features"></a>Nuove funzionalità del linker

- I moduli (file di output MSIL non di assembly) sono ora consentiti come input per il linker.
- Aggiunta l'opzione del linker `/ALLOWISOLATION` per la ricerca di manifesti.
- `/ASSEMBLYRESOURCE`, per incorporare una risorsa gestita, è stata aggiornata per fare in modo che sia possibile specificare il nome della risorsa nell'assembly e per specificare che la risorsa è privata nell'assembly.
- Aggiunta l'opzione del linker `/CLRIMAGETYPE` per specificare il tipo di immagine CLR.
- Aggiunta l'opzione del linker `/CLRSUPPORTLASTERROR` per mantenere l'ultimo codice di errore per le chiamate PInvoke.
- Aggiunta l'opzione del linker `/CLRTHREADATTRIBUTE` per impostare l'attributo thread CLR.
- Aggiunta l'opzione del linker `/CLRUNMANAGEDCODECHECK` per aggiunge SupressUnmanagedCodeSecurityAttribute.
- Aggiunta l'opzione del linker `/ERRORREPORT` per segnalare errori interni del linker.
- Rimossa l'opzione del linker `/EXETYPE`. Il linker non supporta più la creazione di driver di dispositivo per Windows 95 e Windows 98. Usare un DDK appropriato per creare i driver di dispositivo. La parola chiave EXETYPE non è più valida per i file di definizione del modulo.
- Aggiunta l'opzione del linker `/FUNCTIONPADMIN` per creare un'immagine con patch a caldo.
- L'opzione del linker `/LTCG` è ora supportata nei moduli compilati con `/clr`. `/LTCG` è stata aggiornata anche per supportare le ottimizzazioni PGO.
- Aggiunta l'opzione del linker `/MANIFEST` per creare il manifesto dell'assembly affiancato.
- Aggiunta l'opzione del linker `/MANIFESTDEPENDENCY` per specificare le dipendenze tra manifesti.
- Aggiunta l'opzione del linker `/MANIFESTFILE` per denominare il file manifesto.
- Rimossa l'opzione del linker `/MAPINFO:LINES`.
- Aggiunta l'opzione del linker `/NXCOMPAT` compatibile con la protezione esecuzione programmi.
- Aggiunta l'opzione del linker `/PGD` per specificare il database per le ottimizzazioni PGO.
- Aggiunta l'opzione del linker `/PROFILE` per profiler di strumenti per le prestazioni.
- L'opzione del linker `/SECTION` per specificare gli attributi di sezione, ora supporta la negazione dell'attributo e non supporta più gli attributi L o D correlati a VxD.
- Supporto Unicode nel compilatore e nel linker
- L'opzione del linker `/VERBOSE`, per stampare messaggi di stato, ora accetta anche ICF e REF.
- Rimossa l'opzione del linker `/VXD`. Il linker non supporta più la creazione di driver di dispositivo per Windows 95 e Windows 98. Usare un DDK appropriato per creare i driver di dispositivo. La parola chiave VXD non è più valida per i file di definizione del modulo.
- Rimossa l'opzione del linker `/WS`. `/WS` veniva usata per modificare le immagini con destinazione Windows NT 4.0. Anziché `/WS` è possibile usare il nome file -R IMAGECFG.exe. IMAGECFG.exe è reperibile nel CD di Windows NT 4.0 in SUPPORT\DEBUG\I386\IMAGECFG. FILE EXE.
- L'opzione del linker `/WX`, che considera gli avvisi del linker come errori, è ora documentata.

### <a name="new-linker-utility-features"></a>Nuove funzionalità delle utilità del linker

- Aggiunta l'opzione editbin `/ALLOWISOLATION`
- Rimossa l'istruzione del file di definizione moduli DESCRIPTION. Il linker non supporta la compilazione di driver di dispositivo virtuale.
- Aggiunta l'opzione `/ERRORREPORT` a bscmake.exe, dumpbin.exe, editbin.exe e lib.exe.
- Aggiunta l'opzione lib `/LTCG`.
- Aggiunta l'opzione editbin `/NXCOMPAT`.
- Aggiunta l'opzione dumpbin `/RANGE`.
- Aggiunta l'opzione dumpbin `/TLS`.
- Rimossa l'opzione editbin `/WS`. `/WS` veniva usata per modificare le immagini con destinazione Windows NT 4.0. Anziché `/WS` è possibile usare il nome file -R IMAGECFG.exe. IMAGECFG.exe è reperibile nel CD di Windows NT 4.0 in SUPPORT\DEBUG\I386\IMAGECFG. FILE EXE.
- Aggiunta l'opzione lib /WX[:NO].

### <a name="new-nmake-features"></a>Nuove funzionalità NMAKE

- Aggiunta `/ERRORREPORT`.
- Aggiunta `/G`.
- Le regole predefinite sono state aggiornate.
- La macro $(MAKE), documentata nelle macro di ricorsione, ora specifica il percorso completo per nmake.exe.

### <a name="new-masm-features"></a>Nuove funzionalità MASM

- Le espressioni MASM sono ora valori a 64 bit. Nelle versioni precedenti le espressioni MASM sono valori a 32 bit.
- L'istruzione __asm int 3 ora determina la compilazione di una funzione per il codice nativo.
- ALIAS (MASM) è ora documentata.
- Aggiunta l'opzione `/ERRORREPORT` di ml.exe e ml64.exe.
- .FPO è ora documentato.
- H2INC.exe non è incluso in Visual C++ 2005. Per continuare a usare H2INC, usare H2INC.exe da una versione precedente di Visual C++.
- Aggiunto l'operatore IMAGEREL.
- Aggiunto l'operatore HIGH32.
- Aggiunto l'operatore LOW32.
- ml64.exe è una versione di MASM per l'architettura x64. Consente di assemblare i file ASM x64 in file oggetto x64. Il linguaggio dell'assembly inline non è supportato nel compilatore x64. Le seguenti direttive MASM sono state aggiunte per ml64.exe (x64):
- .ALLOCSTACK
- .ENDPROLOG
- .PUSHFRAME
- .PUSHREG
- .SAVEREG
- .SAVEXMM128
- .SETFRAME Inoltre, la direttiva PROC è stata aggiornata con la sola sintassi x64.
- Aggiunta la direttiva MMWORD
- `/omf`, l'opzione della riga di comando ML.exe, ora implica `/c`. ML.exe non supporta il collegamento di oggetti in formato OMF.
- La direttiva SEGMENT supporta ora gli attributi aggiuntivi.
- Aggiunto l'operatore SECTIONREL.
- Aggiunta la direttiva XMMWORD

### <a name="new-crt-features"></a>Nuove funzionalità CRT

- Sono state aggiunte le versioni protette di diverse funzioni. Queste funzioni gestiscono gli errori in modo più efficace e applicano controlli più severi dei buffer per evitare difetti comuni della sicurezza. Le nuove versioni protette sono identificate dal suffisso **_s**.
- Le versioni meno sicure di molte funzioni sono state deprecate. Per disabilitare gli avvisi di deprecazione, definire CRT_SECURE_NO_WARNINGS.
- Molte funzioni esistenti ora convalidano i relativi parametri e richiamano il gestore di parametri non validi quando viene passato un parametro non valido.
- Molte funzioni esistenti ora impostano `errno` dove in precedenza non lo facevano.
- Aggiunto il typedef `errno_t` con tipo integer. `errno_t` viene usato ogni volta che un parametro o un tipo restituito di una funzione riguarda i codici di errore di `errno`. `errno_t` sostituisce `errcode`.
- Le funzioni dipendenti dalle impostazioni locali ora hanno versioni che accettano le impostazioni locali come parametro anziché usare le impostazioni locali correnti. Queste nuove funzioni hanno il suffisso **_l**. Sono state aggiunte diverse nuove funzioni per gestire gli oggetti delle impostazioni locali. Le nuove funzioni includono `_get_current_locale`, `_create_locale` e `_free_locale`.
- Sono state aggiunte nuove funzioni per supportare gli handle di file di blocco e sblocco.
- La famiglia di funzioni `_spawn` non reimposta errno su zero in caso di esito positivo, come accadeva nelle versioni precedenti.
- Sono disponibili le versioni della famiglia di funzioni `printf` che consentono di specificare l'ordine in cui vengono usati gli argomenti.
- Unicode è ora un formato di testo supportato. La funzione `_open` supporta gli attributi O_TEXTW, O_UTF8 e O_UTF16. La funzione `fopen` supporta il metodo "ccs=ENCODING" per specificare un formato Unicode.
- Una nuova versione delle librerie CRT create nel codice gestito, ovvero MSIL, è ora disponibile e viene usata durante la compilazione con l'opzione `/clr`, compilazione Common Language Runtim).
- Rimosso l'oggetto _fileinfo.
- La dimensione predefinita per `time_t` è ora 64 bit, che espande l'intervallo di `time_t` e di molte funzioni di ora fino all'anno 3000.
- CRT supporta ora la definizione delle impostazioni locali in base a ogni singolo thread. Per supportare questa funzionalità, è stata aggiunta la funzione `_configthreadlocale`.
- Aggiunte le funzioni `_statusfp2` e `__control87_2` per consentire l'accesso e il controllo della parola di controllo a virgola mobile per i processori a virgola mobile sia x87 che SSE2.
- Aggiunte le funzioni `_mkgmtime` e `_mkgmtime64` per consentire il supporto della conversione degli orari (struct tm) nell'ora di Greenwich (GMT).
- Sono state apportate modifiche a `swprintf` e `vswprintf` per migliorare la conformità allo standard.
- Un nuovo file di intestazione, INTRIN.H, specifica i prototipi per alcune funzioni intrinseche.
- La funzione `fopen` include ora un attributo N.
- La funzione `_open` include ora un attributo _O_NOINHERIT.
- La funzione `atoi` ora restituisce INT_MAX e imposta `errno` su ERANGE per l'overflow. Nelle versioni precedenti, il comportamento dell'overflow non era definito.
- La famiglia di funzioni `printf` supporta l'output esadecimale a virgola mobile implementato in base allo standard ANSI C99 usando gli identificatori del tipo di formato %a e %A.
- La famiglia `printf` supporta ora il prefisso di dimensione "ll", ovvero long long.
- La funzione `_controlfp` è stata ottimizzata per migliorare le prestazioni.
- Sono state aggiunte le versioni di debug di alcune funzioni.
- Aggiunti `_chgsignl` e `_cpysignl` (versioni long double).
- Aggiunto il tipo `_locale_t` alla tabella dei tipi.
- Aggiunta una nuova macro, Macro `_countof`, per il calcolo del numero di elementi in una matrice.
- In ogni argomento della funzione, è stata aggiunta una sezione di equivalenti di .NET Framework.
- Diverse funzioni di stringa sono ora in grado di troncare le stringhe in modo da non avere esito negativo quando i buffer di output sono troppo piccoli. Vedere **_TRUNCATE**.
- `_set_se_translator` richiede ora l'uso dell'opzione del compilatore `/EHa`.
- `fpos_t` ora è **__int64** in `/Za` per il codice C e quando __STDC__ è impostato manualmente per il codice C++. In precedenza era uno **struct**.
- CRT_DISABLE_PERFCRIT_LOCKS è in grado di migliorare le prestazioni di I/O dei programmi a thread singolo.
- I nomi POSIX sono stati deprecati a favore di nomi conformi a ISO C++, ad esempio, usare `_getch` anziché `getch`.
- Sono disponibili nuovi file OBJ delle opzioni di collegamento per la modalità pure
- `_recalloc` combina le caratteristiche di `realloc` e `calloc`.

## <a name="whats-new-for-c-in-visual-studio-2003"></a>Novità di C++ in Visual Studio 2003

### <a name="compiler"></a>Compilatore

- Informazioni su come eseguire un'applicazione delle estensioni gestite per C++ compilata con il compilatore della versione corrente in una versione precedente del runtime.
- Domande frequenti sulle estensioni gestite per C++.
- È stata aggiunta una procedura dettagliata che illustra come eseguire il porting di un'applicazione nativa esistente delle estensioni gestite per C++ per consentire l'interazione con i componenti di .NET Framework.
- È ora possibile creare un delegato per un metodo di un tipo di valore.
- La conformità del compilatore con lo standard C++ è stata notevolmente migliorata per Visual C++ .NET 2003.
- Aggiunta l'opzione del compilatore `/arch`.
- Deprecata l'opzione `/Gf`, che verrà rimossa nella prossima versione di Visual C++.
- Aggiunta l'opzione del compilatore `/G7`.
- Ottimizzata l'opzione del compilatore `/GS` per proteggere le variabili locali da sovraccarichi del buffer diretti.
- Rimossa l'opzione del compilatore `/noBool`. Il compilatore ora consente di visualizzare **bool** solo come parola chiave, non come identificatore, in un file di codice sorgente C++.
- Il tipo **long long** è ora disponibile come **typedef** di **__int64**. Si noti che non è ancora disponibile il supporto per **long long** in CRT.
- L'opzione del compilatore `/Zm` ora specifica il limite di allocazione di memoria delle intestazioni precompilate.
- Documentata la funzione intrinseca _InterlockedCompareExchange.
- Documentata la funzione intrinseca _InterlockedDecrement.
- Documentata la funzione intrinseca _InterlockedExchange.
- Documentata la funzione intrinseca _InterlockedExchangeAdd.
- Documentata la funzione intrinseca _InterlockedIncrement.
- Aggiunta la funzione intrinseca _ReadWriteBarrier.

### <a name="attributes"></a>Attributi

- L'attributo `implements` è ora documentato.

### <a name="linker-features"></a>Funzionalità del linker

Sono state aggiunte le seguenti opzioni del linker:

- /ASSEMBLYDEBUG
- /ASSEMBLYLINKRESOURCE
- DELAYSIGN
- /KEYFILE
- /KEYCONTAINER
- /SAFESEH

### <a name="masm"></a>MASM

Aggiunte la direttiva .SAFESEH e l'opzione `/safeseh` ml.exe.

## <a name="see-also"></a>Vedere anche

[Guida al porting e aggiornamento in Visual C++](visual-cpp-porting-and-upgrading-guide.md)