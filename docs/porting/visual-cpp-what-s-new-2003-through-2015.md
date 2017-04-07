---
title: "Visual C++: novità dalla versione 2003 alla 2015 | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: c4afde6f-3d75-40bf-986f-be57e3818e26
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: c6ac9fb7400bd0c37d1da5a0c6bd66ccbf7abd6c
ms.lasthandoff: 02/24/2017

---
# <a name="visual-c-what39s-new-2003-through-2015"></a>Visual C++: novità dalla versione 2003 alla 2015

**Nota** Per informazioni su Visual Studio 2017, vedere [Novità di Visual C++ in Visual Studio 2017](../what-s-new-for-visual-cpp-in-visual-studio.md) e [Miglioramenti della conformità di Visual C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md).

In Visual C++ 2015 e versioni successive i miglioramenti apportati in modo costante alla conformità del compilatore possono talvolta modificare il modo in cui il compilatore riconosce il codice sorgente esistente. In questo caso, si possono riscontrare errori nuovi o diversi durante la compilazione o addirittura differenze di comportamento nel codice che apparentemente in precedenza veniva compilato ed eseguito correttamente.  
  
 Fortunatamente, queste differenze hanno poco o nessun impatto sulla maggior parte del codice sorgente e quando è necessario usare codice sorgente o altre modifiche per risolvere queste differenze, le correzioni sono in genere minime e semplici. Sono stati inclusi numerosi esempi di codice sorgente in precedenza accettabile per cui potevano essere necessarie modifiche *(prima)* e di correzioni da apportare per risolvere i problemi *(dopo)*.  
  
 Benché queste differenze possano influire sul codice sorgente o altri elementi di compilazione, non influiscono sulla compatibilità binaria tra gli aggiornamenti alle versioni di Visual C++. Una *modifica sostanziale*, molto più drastica, può influire sulla compatibilità binaria, ma le interruzioni della compatibilità binaria si verificano solo tra le versioni principali di Visual C++. Ad esempio tra Visual C++ 2013 e Visual C++ 2015. Per informazioni sulle modifiche sostanziali apportate tra Visual C++ 2013 e Visual C++ 2015, vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md).  
  
-   [Miglioramenti della conformità in Visual C++ 2015](#VS_RTM)  
  
-   [Miglioramenti della conformità in Update 1](#VS_Update1)  
  
-   [Miglioramenti della conformità in Update 2](#VS_Update2)  
  
-   [Miglioramenti della conformità in Update 3](#VS_Update3)  
  
##  <a name="VS_RTM"></a>Miglioramenti della conformità in Visual C++ 2015  
  
-   /Zc:forScope- option  
  
     L'opzione del compilatore **/Zc:forScope-** è deprecata e verrà rimossa in una versione futura.  
  
    ```  
    Command line warning  D9035: option 'Zc:forScope-' has been deprecated and will be removed in a future release  
    ```  
  
     L'opzione in genere è stata usata per consentire codice non standard che usa variabili di ciclo dopo il punto in cui, in base allo standard, dovrebbero essere uscite dall'ambito. È necessaria solo quando si esegue la compilazione con l'opzione /Za, poiché è sempre consentito l'utilizzo di una variabile di ciclo dopo la fine del ciclo senza /Za. Se non è rilevante la conformità agli standard (ad esempio, se il codice non è destinato a essere portabile in altri compilatori), è possibile disattivare l'opzione /Za (o impostare la proprietà Disabilita estensioni linguaggio su No). Se si vuole scrivere codice portabile, conforme agli standard, è necessario riscrivere il codice affinché sia conforme allo standard spostando la dichiarazione di tali variabili in un punto esterno al ciclo.  
  
    ```  
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
  
-   **/Zg (opzione del compilatore)**  
  
     L'opzione del compilatore /Zg (Genera i prototipi delle funzioni) non è più disponibile. Questa opzione del compilatore è stata precedentemente deprecata.  
  
-   Non è più possibile eseguire unit test con C++/CLI dalla riga di comando con mstest.exe. Usare invece vstest.console.exe. Vedere [Opzioni della riga di comando di VSTest.Console.exe](/devops-test-docs/test/vstest-console-exe-command-line-options).  
  
-   **mutable (parola chiave)**  
  
     L'identificatore di classi di archiviazione `mutable` non è più consentito in posizioni dove in precedenza eseguiva compilazioni senza errori. Ora il compilatore genera l'errore C2071 (classe di archiviazione non valida). In base allo standard, l'identificatore modificabile può essere applicato solo ai nomi dei membri di dati della classe, non può essere applicato ai nomi dichiarati const o statici e non può essere applicato ai membri di riferimento.  
  
     Si consideri il codice di esempio seguente:  
  
    ```  
    struct S {  
        mutable int &r;  
    };  
    ```  
  
     Nelle versioni precedenti del compilatore Visual C++ questa situazione è accettabile, ma ora il compilatore genera l'errore seguente:  
  
    ```Output  
    error C2071: 'S::r': illegal storage class  
    ```  
  
     Per correggere l'errore, rimuovere semplicemente la parola chiave mutable ridondante.  
  
-   **char_16_t e char32_t**  
  
     Non è possibile usare `char16_t` o `char32_t` come alias di un typedef, poiché questi tipi ora vengono considerati come incorporati. Per gli utenti e gli autori di libreria era comune definire char16_t e char32_t come alias rispettivamente di uint16_t e uint32_t.  
  
    ```  
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
  
     Per aggiornare il codice, rimuovere le dichiarazioni typedef e rinominare tutti gli identificatori che sono in conflitto con questi nomi.  
  
-   **Parametri di modello non di tipo**  
  
     Determinato codice che prevede parametri di modello non di tipo viene ora verificato correttamente per la compatibilità del tipo quando vengono forniti gli argomenti di modello espliciti. Ad esempio, il seguente codice veniva compilato senza errori nelle versioni precedenti di Visual C++.  
  
    ```  
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
  
-   **__declspec(align)**  
  
     Il compilatore non accetta più `__declspec(align)` sulle funzioni. È sempre stato ignorato, ma ora genera un errore del compilatore.  
  
    ```  
    error C3323: 'alignas' and '__declspec(align)' are not allowed on function declarations  
    ```  
  
     Per risolvere questo problema, rimuovere `__declspec(align)` dalla dichiarazione di funzione. Dal momento che non ha avuto effetto, la rimozione non comporta alcuna modifica.  
  
-   **Gestione delle eccezioni**  
  
     Sono state apportate alcune modifiche alla gestione delle eccezioni. In primo luogo, gli oggetti eccezione devono poter essere copiati o spostati. Il codice seguente veniva compilato in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma non viene compilato in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```  
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
  
     Il problema è che il costruttore di copia è privato e quindi l'oggetto non può essere copiato, come accade durante il normale funzionamento di gestione di un'eccezione. Lo stesso vale quando il costruttore di copia viene dichiarato `explicit`.  
  
    ```  
    struct S {  
        S();  
        explicit S(const S &);  
    };  
  
    int main()  
    {  
        throw S(); // error  
    }  
  
    ```  
  
     Per aggiornare il codice, verificare che il costruttore di copia per l'oggetto eccezione sia pubblico e non sia contrassegnato come `explicit`.  
  
     L'individuazione di un'eccezione in base al valore richiede anche che sia possibile copiare l'oggetto eccezione. Il codice seguente veniva compilato in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma non viene compilato in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```  
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
  
     Per risolvere questo problema, è possibile modificare il tipo di parametro per `catch` in un riferimento.  
  
    ```  
    catch(D& d)  
    {  
    }  
    ```  
  
-   **Valori letterali stringa seguiti da macro**  
  
     Il compilatore supporta ora i valori letterali definiti dall'utente. Di conseguenza, i valori letterali stringa seguiti da macro senza eventuali spazi intermedi vengono interpretati come valori letterali definiti dall'utente, che potrebbero produrre errori o risultati imprevisti. Nei compilatori precedenti, ad esempio, il codice seguente veniva compilato correttamente:  
  
    ```  
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
  
     Il compilatore lo interpretava come un valore letterale stringa "hello" seguito da una macro, espansa in "there", e quindi i due valori letterali stringa venivano concatenati in uno. In [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] il compilatore lo interpreta come un valore letterale definito dall'utente, ma poiché non esiste alcun valore letterale _x corrispondente definito dall'utente, viene restituito un errore.  
  
    ```  
    error C3688: invalid literal suffix '_x'; literal operator or literal operator template 'operator ""_x' not found  
    note: Did you forget a space between the string literal and the prefix of the following string literal?  
  
    ```  
  
     Per risolvere questo problema, aggiungere uno spazio tra il valore letterale stringa e la macro.  
  
-   **Valori letterali stringa adiacenti**  
  
     Analogamente al precedente esempio, a causa di modifiche correlate nell'analisi delle stringhe, i valori letterali stringa adiacenti (uno dei valori letterali stringa di carattere wide o narrow) senza gli spazi vuoti sono stati interpretati come una singola stringa concatenata nelle versioni precedenti di Visual C++. In [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] è necessario aggiungere spazi vuoti tra le due stringhe. Ad esempio, il codice seguente deve essere modificato:  
  
    ```  
    char * str = "abc""def";  
    ```  
  
     Aggiungere semplicemente uno spazio tra le due stringhe.  
  
    ```  
    char * str = "abc" "def";  
    ```  
  
-   **Operatore new e delete di posizionamento**  
  
     È stata apportata una modifica all'operatore delete per fare in modo che sia conforme con lo standard C++14. Per informazioni dettagliate sulla modifica agli standard, vedere [Deallocazione con dimensione C++](http://isocpp.org/files/papers/n3778.html). Le modifiche aggiungono un modulo dell'operatore delete globale che accetta un parametro di dimensione. La differenza sostanziale è che se in precedenza si usava un operatore delete con la stessa firma (per la corrispondenza con un operatore new di posizionamento), ora si riceve un errore del compilatore (C2956, che si verifica nel punto in cui viene usato l'operatore new di posizionamento, poiché è la posizione nel codice in cui il compilatore tenta di identificare un operatore delete corrispondente appropriato).  
  
     La funzione `void operator delete(void *, size_t)` è un operatore delete di posizionamento corrispondente alla nuova funzione di posizionamento "void \* operator new (size_t, size_t)" in C++11. Con la deallocazione con dimensione C++14, questa funzione delete è ora una *funzione di deallocazione consueta* (operatore delete globale). Lo standard richiede che, se l'uso di un operatore new cerca una funzione delete corrispondente e trova una funzione di deallocazione consueta, il programma non ha un formato corretto.  
  
     Si supponga, ad esempio, che il codice definisca un operatore new e delete di posizionamento:  
  
    ```  
    void * operator new(std::size_t, std::size_t);  
    void operator delete(void*, std::size_t) noexcept;  
  
    ```  
  
     Il problema si verifica a causa della corrispondenza delle firme funzione tra un operatore delete di posizionamento che è stato definito e il nuovo operatore delete con dimensione globale. Stabilire se è possibile usare un tipo diverso da size_t per qualsiasi operatore new e delete di posizionamento.  Si noti che il tipo di size_t typedef è dipendente dal compilatore; è un typedef per int senza segno in Visual C++. Una buona soluzione consiste nell'usare un tipo enumerato simile al seguente:  
  
    ```  
    enum class my_type : size_t {};  
  
    ```  
  
     Modificare quindi la definizione dell'operatore new e delete di posizionamento per usare questo tipo come secondo argomento anziché size_t. È necessario anche aggiornare le chiamate all'operatore new di posizionamento per passare al nuovo tipo (ad esempio, usando `static_cast<my_type>` per convertire il valore integer) e aggiornare la definizione di new e delete per eseguire il cast di tipo integer. Non è necessario usare un enum per questo oggetto; funzionerebbe anche un tipo classe con un membro size_t.  
  
     Una soluzione alternativa è che si potrebbe eliminare completamente la nuova posizione. Se il codice usa l'operatore new di posizionamento per implementare un pool di memoria dove l'argomento di posizione è la dimensione dell'oggetto allocato o eliminato, la funzionalità di deallocazione con dimensione potrebbe essere adatta a sostituire il codice del pool di memoria personalizzato ed è possibile eliminare le funzioni di posizionamento e usare semplicemente il proprio operatore delete a due argomenti anziché le funzioni di posizionamento.  
  
     Se non si intende aggiornare immediatamente il codice, è possibile ripristinare il comportamento precedente usando l'opzione del compilatore /Zc:sizedDealloc-. Se si usa questa opzione, le funzioni di eliminazione a due argomenti non esistono e non provocheranno un conflitto con l'operatore delete di posizionamento.  
  
-   **Membri dati di unioni**  
  
     I membri dati di unioni non possono avere tipi di riferimento. Il codice seguente veniva compilato correttamente in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma produce un errore in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  
  
    ```  
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
  
-   Unioni anonime sono ora più conformi allo standard. Le versioni precedenti del compilatore hanno generato un costruttore e distruttore esplicito per unioni anonime. Questi vengono eliminati in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  
  
    ```  
    struct S {  
      S();  
     };  
  
     union {  
      struct {  
       S s;  
      };  
     } u; // C2280  
    ```  
  
     Il codice precedente produce gli errori seguenti in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```  
    error C2280: '<unnamed-type-u>::<unnamed-type-u>(void)': attempting to reference a deleted function  
    note: compiler has generated '<unnamed-type-u>::<unnamed-type-u>' here  
    ```  
  
     Per risolvere questo problema, specificare definizioni personalizzate del costruttore e/o del distruttore.  
  
    ```  
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
  
-   **Unioni con strutture anonime**  
  
     Per la conformità allo standard, il comportamento di runtime è stato modificato per i membri di strutture anonime nelle unioni. Il costruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando viene creato questo tipo di unione. Il distruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando l'unione è esterna all'ambito. Si consideri il codice seguente, in cui un'unione U contiene una struttura anonima con un membro che è una struttura S denominata con un distruttore.  
  
    ```  
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
  
     In [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] il costruttore per S viene chiamato quando viene creata l'unione e il distruttore per S viene chiamato durante la pulitura dello stack per la funzione f. Tuttavia in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] il costruttore e distruttore non vengono chiamati. Il compilatore visualizza un avviso relativo a questa modifica del comportamento.  
  
    ```Output  
    warning C4587: 'U::s': behavior change: constructor is no longer implicitly calledwarning C4588: 'U::s': behavior change: destructor is no longer implicitly called  
    ```  
  
     Per ripristinare il comportamento originale, assegnare alla struttura anonima un nome. Il comportamento di runtime di strutture non anonime è lo stesso, indipendentemente dalla versione del compilatore.  
  
    ```  
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
  
    ```  
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
  
-   **Risoluzione per il modello**  
  
     Sono state apportate modifiche alla risoluzione dei nomi per i modelli. In C++, quando si considerano i candidati per la risoluzione di un nome, può accadere che uno o più nomi presi in considerazione come corrispondenze potenziali producano un'istanza del modello non valida. Queste istanze non valide in genere non provocano errori del compilatore, un principio che è noto come SFINAE (Substitution Failure Is Not An Error).  
  
     A questo punto, se SFINAE richiede al compilatore di creare un'istanza di specializzazione del modello di classe, eventuali errori verificatisi durante questo processo sono errori del compilatore. Nelle versioni precedenti il compilatore potrebbe ignorare tali errori. Si consideri il codice di esempio seguente:  
  
    ```  
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
  
-   **Costruttori di copia**  
  
     Sia in [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] che in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] il compilatore genera un costruttore di copia per una classe se tale classe ha un costruttore di spostamento definito dall'utente, ma nessun costruttore di copia definito dall'utente. In Dev14, questo costruttore di copia generato in modo implicito è contrassegnato come "= delete".  
  
##  <a name="VS_Update1"></a> Miglioramenti della conformità in Update 1  
  
-   **Classi base virtuali private ed ereditarietà indiretta**  
  
     Le versioni precedenti del compilatore consentivano a una classe derivata di chiamare le funzioni di membro relative alle classi base *indirettamente derivate*`private virtual`. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Il compilatore non accetta più il codice scritto in questo modo e genera l'errore del compilatore C2280 di conseguenza.  
  
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
  
     -oppure-  
  
    ```  
    class base;  // as above  
  
    class middle: private virtual base {};  
    class top: public virtual middle, private virtual bottom {};  
  
    void destroy(top *p)  
    {  
        delete p;  
    }  
    ```  
  
-   **Funzioni operator new e operator delete in overload**  
  
     Le versioni precedenti del compilatore consentivano di dichiarare static le funzioni non membro `operator new` e non membro `operator delete` negli spazi dei nomi diversi dallo spazio dei nomi globale.  Questo comportamento precedente creava il rischio che il programma non chiamasse l'implementazione dell'operator `new` o `delete` prevista dal programmatore, determinando un comportamento errato in fase di esecuzione senza avvisare. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2323.  
  
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
  
     Inoltre, nonostante il compilatore non fornisca una diagnostica specifica, il formato dell'operatore new inline viene considerato non valido.  
  
-   **Chiamata di 'operator*type*()' (conversione definita dall'utente) in tipi non classe**  
  
     Le versioni precedenti del compilatore consentivano di chiamare 'operator *type*()' su tipi non classe ignorandolo senza avvisare. Questo comportamento precedente creava un rischio di generazione di codice errato senza avvisare, determinando un comportamento imprevedibile in fase di esecuzione. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2228.  
  
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
  
-   **Typename ridondante negli identificatori di tipi elaborati**  
  
     Le versioni precedenti del compilatore consentivano `typename` negli identificatori di tipi elaborati; il codice scritto in questo modo non è semanticamente corretto. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C3406.  
  
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
  
-   **Deduzione del tipo di matrici da un elenco di inizializzatori**  
  
     Le versioni precedenti del compilatore non supportavano la deduzione del tipo di matrici da un elenco di inizializzatori. Il compilatore supporta ora questa forma di deduzione del tipo e, di conseguenza, le chiamate a modelli di funzione con gli elenchi di inizializzatori potrebbero essere ambigue o potrebbe essere scelto un altro overload rispetto alle versioni precedenti del compilatore. Per risolvere questi problemi, il programma deve ora specificare in modo esplicito l'overload previsto dal programmatore.  
  
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
  
-   **Ripristino di avvisi di istruzione switch**  
  
     Una versione precedente del compilatore rimuoveva gli avvisi preesistenti correlati alle istruzioni `switch` ; questi avvisi sono ora stati ripristinati. Il compilatore genera ora gli avvisi ripristinati e gli avvisi correlati a casi specifici (incluso il caso predefinito) sono ora rilasciati sulla riga contenente il caso che causa l'errore, anziché l'ultima riga dell'istruzione switch. Dal momento che gli avvisi vengono ora emessi su diverse righe rispetto al passato, di conseguenza gli avvisi precedentemente eliminato con `#pragma warning(disable:####)` non potranno più essere eliminati come previsto. Per eliminare questi avvisi come previsto, potrebbe essere necessario spostare la direttiva `#pragma warning(disable:####)` a una riga sopra il primo caso potenzialmente danneggiato. Di seguito sono elencati gli avvisi ripristinati.  
  
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
  
-   **#include: usare l'identificatore di directory padre '..' nel percorso** (influisce solo su /Wall /WX)  
  
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
  
-   **#pragma optimize() estende oltre la fine del file di intestazione** (influisce solo su /Wall /WX)  
  
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
  
-   **Stati #pragma warning(push)** e **#pragma warning(pop)** (influisce solo su /Wall /WX)  
  
     Le versioni precedenti del compilatore non rilevavano l'abbinamento delle modifiche di stato `#pragma warning(push)` con le modifiche di stato `#pragma warning(pop)` in un file di origine differente e questo raramente rappresenta lo scopo previsto. Questo comportamento precedente creava il rischio che il programma fosse compilato con un set di avvisi abilitato diverso da quello previsto dal programmatore, determinando un probabile comportamento errato in fase di esecuzione senza avvisare. Il compilatore ora rileva e invia una notifica al programmatore riguardo al codice scritto in questo modo e genera un avviso del compilatore C5031 facoltativo nella posizione della direttiva `#pragma warning(pop)` corrispondente, se abilitata. Questo avviso include una nota che fa riferimento alla posizione della direttiva #pragma warning(push) corrispondente.  
  
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
  
-   **Stato #pragma warning(push) senza corrispondenza** (influisce solo su /Wall /WX)  
  
     Le versioni precedenti del compilatore non rilevavano modifiche di stato `#pragma warning(push)` senza corrispondenza alla fine di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C5032 nella posizione della direttiva #pragma warning(push) senza corrispondenza, se abilitata. Questo avviso viene generato solo se non sono presenti errori di compilazione nell'unità di conversione.  
  
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
  
-   **Potrebbero essere generati avvisi aggiuntivi in seguito al migliorato rilevamento dello stato della direttiva #pragma warning**  
  
     Le versioni precedenti del compilatore rilevavano le modifiche di stato della direttiva #pragma warning in maniera non sufficiente a generare tutti gli avvisi previsti. Questo comportamento comportava il rischio che alcuni avvisi sarebbero stati eliminati in modo efficace in circostanze diverse rispetto a quelle previste dal programmatore. Il compilatore ora tiene traccia dello stato della direttiva #pragma warning in modo più affidabile, specialmente per quanto riguarda le modifiche dello stato della direttiva #pragma warning all'interno dei modelli, e facoltativamente rilascia nuovi avvisi C5031 e C5032 che aiutano il programmatore a trovare gli usi imprevisti di `#pragma warning(push)` e `#pragma warning(pop)`.  
  
     In seguito al migliorato rilevamento delle modifiche di stato della direttiva #pragma warning, è ora possibile generare gli avvisi in precedenza eliminati in modo errato oppure gli avvisi relativi ai problemi in precedenza diagnosticati in modo errato.  
  
-   **Identificazione del codice non eseguibile migliorata**  
  
     Le modifiche della Libreria standard C++ e la migliorata capacità di incorporare le chiamate di funzione inline rispetto alle versioni precedenti del compilatore potrebbero consentire al compilatore di dimostrare che determinato codice è ora non eseguibile. Questo nuovo comportamento può comportare nuove e più frequenti visualizzazioni dell'avviso C4720.  
  
    ```Output  
    warning C4720: unreachable code  
    ```  
  
     In molti casi, l'avviso potrebbe essere generato solo durante la compilazione con ottimizzazioni abilitate, dal momento che le ottimizzazioni potrebbero incorporare più chiamate di funzione, eliminare il codice ridondante o altrimenti consentire di determinare che determinato codice non è eseguibile. Si è osservato che le nuove istanze dell'avviso C4720 si sono verificate di frequente nei blocchi try/catch, in special modo in relazione all'uso di [std::find](assetId:///std::find?qualifyHint=False&autoUpgrade=True).  
  
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
  
##  <a name="VS_Update2"></a> Miglioramenti della conformità in Update 2  
  
-   **Errori e avvisi aggiuntivi potrebbero essere generati in seguito a un supporto parziale per l'espressione SFINAE**  
  
     Le versioni precedenti del compilatore non analizzavano alcuni tipi di espressioni negli identificatori `decltype` a causa della mancanza di supporto per l'espressione SFINAE. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Grazie ai costanti miglioramenti alla conformità, ora il compilatore analizza le espressioni e ha un supporto parziale per l'espressione SFINAE. Di conseguenza, ora vengono visualizzati avvisi ed errori rilevati nelle espressioni non analizzati dalle versioni precedenti del compilatore.  
  
     Quando questo nuovo comportamento analizza un'espressione `decltype` che include un tipo non ancora dichiarato, il compilatore genera l'errore C2039.  
  
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
  
     Quando questo nuovo comportamento analizza un'espressione `decltype` in cui non è presente un utilizzo necessario della parola chiave `typename` per specificare che il nome dipendente è un tipo, il compilatore genera l'avviso C4346 e l'errore C2923.  
  
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
  
-   `volatile` Le variabili membro **impediscono i costruttori e gli operatori di assegnazione definiti in modo implicito**  
  
     Le versioni precedenti del compilatore consentivano a una classe con variabili membro `volatile` di generare automaticamente costruttori di copia/spostamento predefiniti e operatori di assegnazione di copia/spostamento predefiniti. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Ora il compilatore presuppone che una classe con variabili membro volatili includa operatori di costruzione e di assegnazione non semplici e, di conseguenza, impedisce la generazione automatica delle implementazioni predefinite di questi operatori.  Quando questa classe è un membro di un'unione (o un'unione anonima all'interno di una classe), i costruttori di copia/spostamento e gli operatori di assegnazione di copia/spostamento dell'unione (o della classe che contiene l'unione anonima) vengono definiti in modo implicito come eliminati. Il tentativo di costruire o copiare l'unione (o la classe che contiene l'unione anonima) senza definirli in modo esplicito è un errore e, di conseguenza, il compilatore genera l'errore C2280.  
  
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
  
-   **Le funzioni membro statiche non supportano i qualificatori CV.**  
  
     Le versioni precedenti di Visual C++ 2015 consentivano alle funzioni membro statiche di avere qualificatori CV. Questo comportamento è dovuto a una regressione in Visual C++ 2015 e Visual C++ 2015 Update 1. Visual C++ 2013 e le versioni precedenti di Visual C++ non accettano il codice scritto in questo modo. Il comportamento di Visual C++ 2015 e Visual C++ 2015 Update 1 non è corretto e non è conforme allo standard C++.  Visual Studio 2015 Update 2 non accetta il codice scritto in questo modo e genera l'errore del compilatore C2511.  
  
    ```Output  
    error C2511: 'void A::func(void) const': overloaded member function not found in 'A'  
    ```  
  
     Esempio (prima)  
  
    ```  
    struct A  
    {  
      static void func();  
    };  
  
    void A::func() const {}  // C2511  
  
    ```  
  
     Esempio (dopo)  
  
    ```  
    struct A  
    {  
      static void func();  
    };  
  
    void A::func() {}  // removed const  
  
    ```  
  
-   **La dichiarazione con prototipo di tipo enum non è consentita nel codice WinRT** (interessa solo /ZW)  
  
     Il codice compilato per Windows Runtime (WinRT) non consente la dichiarazione con prototipo dei tipi `enum`, analogamente a quanto accade quando il codice C++ gestito viene compilato per .NET Framework usando l'opzione /clr del compilatore. Questo comportamento garantisce che le dimensioni di un'enumerazione siano sempre note e possano essere proiettate correttamente nel sistema di tipi WinRT. Il compilatore non accetta il codice scritto in questo modo e genera gli errori C2599 e C3197.  
  
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
  
-   **È possibile che le funzioni new o delete dell'operatore non membro in overload non siano dichiarate come inline** (livello 1 (/W1) attivato per impostazione predefinita)  
  
     Le versioni precedenti del compilatore non generano un avviso quando le funzioni new e delete di un operatore non membro vengono dichiarate inline. Il codice scritto in questo modo non è valido (diagnostica non necessaria) e può causare problemi di memoria difficili da diagnosticare derivanti dalla mancata corrispondenza degli operatori new e delete (in particolare quando sono usati insieme con la deallocazione dimensionata).   Ora il compilatore genera l'avviso C4595 per identificare il codice scritto in questo modo.  
  
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
  
##  <a name="VS_Update3"></a> Miglioramenti della conformità in Update 3  
  
-   **std::is_convertable ora rileva l'assegnazione automatica** (libreria standard)  
  
     Le versioni precedenti del tratto di tipo `std::is_convertable` non rilevano correttamente l'assegnazione automatica di un tipo di classe quando il relativo costruttore di copia è eliminato o privato. Ora `std::is_convertable<>::value` è impostato correttamente su `false` quando è applicato a un tipo di classe con costruttore di copia privato o eliminato.  
  
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
  
     Nelle versioni precedenti di Visual C++, le asserzioni statiche nella parte inferiore di questo esempio passano perché `std::is_convertable<>::value` è stato impostato erroneamente su `true`. Ora `std::is_convertable<>::value` è impostato correttamente su `false` causando l'esito negativo delle asserzioni statiche.  
  
-   **I costruttori di copia e di spostamento semplici impostati come predefiniti o eliminati rispettano gli identificatori di accesso**  
  
     Le versioni precedenti del compilatore non verificavano l'identificatore di accesso dei costruttori di copia o spostamento semplici impostati come predefiniti o eliminati prima di consentirne la chiamata. Questo comportamento precedente non era corretto e non è conforme allo standard C++. In alcuni casi questo comportamento creava un rischio di generazione di codice errato senza avvisare, determinando un comportamento imprevedibile in fase di esecuzione. Il compilatore ora controlla l'identificatore di accesso dei costruttori di copia e spostamento semplici impostati come predefiniti o eliminati per determinare se può essere effettuata la chiamata e, se non è possibile, genera un avviso del compilatore C2248 di conseguenza.  
  
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
  
-   **Deprecazione del supporto per il codice ATL con attributi** (livello 1 (/W1) attivo per impostazione predefinita)  
  
     Le versioni precedenti del compilatore supportavano il codice ATL con attributi. Come fase successiva della rimozione del supporto per il codice ATL con attributi [avviata in Visual C++ 2008](https://msdn.microsoft.com/library/bb384632\(v=vs.90\).aspx), il codice ATL con attributi è stato deprecato. Ora il compilatore genera l'avviso C4467 per consentire l'identificazione di questo tipo di codice deprecato.  
  
    ```Output  
    warning C4467: Usage of ATL attributes is deprecated  
    ```  
  
     Per continuare a usare codice ATL con attributi finché il supporto viene rimosso dal compilatore, è possibile disabilitare questo avviso passando gli argomenti `/Wv:18` o `/wd:4467` della riga di comando al compilatore o aggiungendo `#pragma warning(disable:4467)` nel codice sorgente.  
  
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
  
-   **File di intestazione precompilata (PCH) e direttive #include non corrispondenti** (interessa solo /Wall /WX)  
  
     Le versioni precedenti del compilatore accettavano le direttive `#include` non corrispondenti nei file di origine tra le compilazioni `-Yc` e `-Yu` quando venivano usati file di intestazione precompilata (PCH). Il codice scritto in questo modo non è più accettato dal compilatore.   Il compilatore ora genera un avviso CC4598 per consentire l'identificazione delle direttive `#include` non corrispondenti quando si usano i file PCH.  
  
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
  
-   **File di intestazione precompilata (PCH) e directory di inclusione non corrispondenti** (interessa solo /Wall /WX)  
  
     Le versioni precedenti del compilatore accettavano gli argomenti della riga di comando delle directory di inclusione non corrispondenti (`-I`) per il compilatore tra le compilazioni `-Yc` e `-Yu` quando venivano usati file di intestazione precompilata (PCH). Il codice scritto in questo modo non è più accettato dal compilatore.   Il compilatore ora genera un avviso CC4599 per consentire l'identificazione degli argomenti della riga di comando delle directory di inclusione non corrispondenti (`-I`) quando si usano i file PCH.  
  
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
