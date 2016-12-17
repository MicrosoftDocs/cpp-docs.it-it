---
title: "Modifiche importanti in Visual C++ 2015 | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modifiche importanti [C++]"
ms.assetid: b38385a9-a483-4de9-99a6-797488bc5110
caps.latest.revision: 124
caps.handback.revision: 117
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifiche importanti in Visual C++ 2015
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si esegue l'aggiornamento a una nuova versione del compilatore Visual C\+\+, potrebbero verificarsi errori di compilazione e\/o runtime nel codice precedentemente compilato ed eseguito correttamente. Le modifiche apportate alla nuova versione che provocano questi problemi sono note come *modifiche importanti* e in genere sono richieste dalle modifiche nel linguaggio C\+\+ standard, nelle firme di funzione o nel layout degli oggetti in memoria.  
  
 Per evitare errori di runtime difficili da rilevare e diagnosticare, è consigliabile non collegarsi mai in modo statico a file binari compilati usando versioni diverse del compilatore. Inoltre, quando si esegue l'aggiornamento a un progetto EXE o DLL, assicurarsi di aggiornare anche le librerie collegate. Se si usano tipi CRT \(C Runtime\) o STL \(Standard Template Library, libreria di modelli standard\), non passarli tra file binari \(inclusi DLL\) compilati usando versioni diverse del compilatore. Per altre informazioni, vedere [Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).  
  
 È inoltre consigliabile non scrivere mai codice che dipende da un layout specifico per un oggetto diverso da un'interfaccia COM o un oggetto POD. Se si scrive codice di questo tipo, è necessario assicurarsi che funzioni dopo l'aggiornamento. Per altre informazioni, vedere [Portabilità in base ai limiti ABI](../cpp/portability-at-abi-boundaries-modern-cpp.md).  
  
 Nella parte restante di questo articolo sono descritte le modifiche importanti in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] e in questo articolo i termini "nuovo comportamento" o "ora" fanno riferimento a quella versione. I termini "vecchio comportamento" e "prima" fanno riferimento a Visual Studio 2013 e alle versioni precedenti. Per informazioni sulle altre modifiche in Visual Studio 2015 Update 1, vedere [Modifiche importanti apportate in Update 1](../misc/breaking-changes-in-visual-cpp-2015-update-1.md).  
  
1.  [Modifiche importanti apportate al compilatore](#BK_compiler)  
  
2.  [Modifiche importanti apportate alla libreria di runtime C \(CRT\)](#BK_CRT)  
  
3.  [Modifiche importanti apportate alla libreria di C\+\+ standard e libreria di modelli standard \(STL\)](#BK_STL)  
  
4.  [Modifiche importanti apportate a MFC e ATL](#BK_MFC)  
  
5.  [Modifiche importanti apportate al runtime di concorrenza](#BK_ConcRT)  
  
##  <a name="BK_compiler"></a> Compilatore Visual C\+\+  
  
-   \/Zc:forScope\- option  
  
     L'opzione del compilatore **\/Zc:forScope\-** è deprecata e verrà rimossa in una versione futura.  
  
    ```  
    Command line warning  D9035: option 'Zc:forScope-' has been deprecated and will be removed in a future release  
    ```  
  
     L'opzione in genere è stata usata per consentire codice non standard che usa variabili di ciclo dopo il punto in cui, in base allo standard, dovrebbero essere uscite dall'ambito. È necessaria solo quando si esegue la compilazione con l'opzione \/Za, poiché è sempre consentito l'utilizzo di una variabile di ciclo dopo la fine del ciclo senza \/Za. Se non è rilevante la conformità agli standard \(ad esempio, se il codice non è destinato a essere portabile in altri compilatori\), è possibile disattivare l'opzione \/Za \(o impostare la proprietà Disabilita estensioni linguaggio su No\). Se si vuole scrivere codice portabile, conforme agli standard, è necessario riscrivere il codice affinché sia conforme allo standard spostando la dichiarazione di tali variabili in un punto esterno al ciclo.  
  
    ```  
    // zc_forScope.cpp // compile with: /Zc:forScope- /Za // C2065 expected int main() { // Uncomment the following line to resolve. // int i; for (int i =0; i < 1; i++) ; i = 20;   // i has already gone out of scope under /Za }  
    ```  
  
-   **Zg \(opzione del compilatore\)**  
  
     L'opzione del compilatore \/Zg \(Genera i prototipi delle funzioni\) non è più disponibile. Questa opzione del compilatore è stata precedentemente deprecata.  
  
-   Non è più possibile eseguire unit test con C\+\+\/CLI dalla riga di comando con mstest.exe. Usare invece vstest.console.exe. Vedere [Opzioni della riga di comando di VSTest.Console.exe](../Topic/VSTest.Console.exe%20command-line%20options.md).  
  
-   **mutable \(parola chiave\)**  
  
     L'identificatore di classi di archiviazione `mutable` non è più consentito in posizioni dove in precedenza eseguiva compilazioni senza errori. Ora il compilatore genera l'errore C2071 \(classe di archiviazione non valida\). In base allo standard, l'identificatore modificabile può essere applicato solo ai nomi dei membri di dati della classe, non può essere applicato ai nomi dichiarati const o statici e non può essere applicato ai membri di riferimento.  
  
     Si consideri il codice di esempio seguente:  
  
    ```  
    struct S { mutable int &r; };  
    ```  
  
     Nelle versioni precedenti del compilatore Visual C\+\+ questa situazione è accettabile, ma ora il compilatore genera l'errore seguente:  
  
    ```Output  
    Errore C2071: 'S::r': classe di archiviazione non valida  
    ```  
  
     Per correggere l'errore, rimuovere semplicemente la parola chiave mutable ridondante.  
  
-   **char\_16\_t e char32\_t**  
  
     Non è possibile usare `char16_t` o `char32_t` come alias di un typedef, poiché questi tipi ora vengono considerati come incorporati. Per gli utenti e gli autori di libreria era comune definire char16\_t e char32\_t come alias rispettivamente di uint16\_t e uint32\_t.  
  
    ```  
    #include <cstdint> typedef uint16_t char16_t; //C2628 typedef uint32_t char32_t; //C2628 int main(int argc, char* argv[]) { uint16_t x = 1; uint32_t y = 2; char16_t a = x; char32_t b = y; return 0; }  
    ```  
  
     Per aggiornare il codice, rimuovere le dichiarazioni typedef e rinominare tutti gli identificatori che sono in conflitto con questi nomi.  
  
-   **Parametri di modello non di tipo**  
  
     Determinato codice che prevede parametri di modello non di tipo viene ora verificato correttamente per la compatibilità del tipo quando vengono forniti gli argomenti di modello espliciti. Ad esempio, il seguente codice veniva compilato senza errori nelle versioni precedenti di Visual C\+\+.  
  
    ```  
    struct S1 { void f(int); void f(int, int); }; struct S2 { template <class C, void (C::*Function)(int) const> void f() {} }; void f() { S2 s2; s2.f<S1, &S1::f>(); }  
  
    ```  
  
     Il compilatore corrente restituisce correttamente un errore, perché il tipo di parametro di modello non corrisponde all'argomento di modello \(il parametro è un puntatore a un membro const, ma la funzione f è non const\):  
  
    ```Output  
    Errore C2893: Impossibile specializzare il modello di funzione 'void S2::f(void)'nota: con i seguenti argomenti di modello:nota: 'C=S1'nota: 'Function=S1::f'  
    ```  
  
     Per risolvere questo errore nel codice, verificare che il tipo di argomento del modello usato corrisponda al tipo dichiarato del parametro di modello.  
  
-   **\_\_declspec\(align\)**  
  
     Il compilatore non accetta più `__declspec(align)` sulle funzioni. È sempre stato ignorato, ma ora genera un errore del compilatore.  
  
    ```  
    error C3323: 'alignas' and '__declspec(align)' are not allowed on function declarations  
    ```  
  
     Per risolvere questo problema, rimuovere `__declspec(align)` dalla dichiarazione di funzione. Dal momento che non ha avuto effetto, la rimozione non comporta alcuna modifica.  
  
-   **Gestione delle eccezioni**  
  
     Sono state apportate alcune modifiche alla gestione delle eccezioni. In primo luogo, gli oggetti eccezione devono poter essere copiati o spostati. Il codice seguente veniva compilato in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma non viene compilato in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```  
    struct S { public: S(); private: S(const S &); }; int main() { throw S(); // error }  
  
    ```  
  
     Il problema è che il costruttore di copia è privato e quindi l'oggetto non può essere copiato, come accade durante il normale funzionamento di gestione di un'eccezione. Lo stesso vale quando il costruttore di copia viene dichiarato `explicit`.  
  
    ```  
    struct S { S(); explicit S(const S &); }; int main() { throw S(); // error }  
  
    ```  
  
     Per aggiornare il codice, verificare che il costruttore di copia per l'oggetto eccezione sia pubblico e non sia contrassegnato come `explicit`.  
  
     L'individuazione di un'eccezione in base al valore richiede anche che sia possibile copiare l'oggetto eccezione. Il codice seguente veniva compilato in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma non viene compilato in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```  
    struct B { public: B(); private: B(const B &); }; struct D : public B { }; int main() { try { } catch (D d) // error { } }  
  
    ```  
  
     Per risolvere questo problema, è possibile modificare il tipo di parametro per `catch` in un riferimento.  
  
    ```  
    catch(D& d) { }  
    ```  
  
-   **Valori letterali stringa seguiti da macro**  
  
     Il compilatore supporta ora i valori letterali definiti dall'utente. Di conseguenza, i valori letterali stringa seguiti da macro senza eventuali spazi intermedi vengono interpretati come valori letterali definiti dall'utente, che potrebbero produrre errori o risultati imprevisti. Nei compilatori precedenti, ad esempio, il codice seguente veniva compilato correttamente:  
  
    ```  
    #define _x "there" char* func() { return "hello"_x; } int main() { char * p = func(); return 0; }  
    ```  
  
     Il compilatore lo interpretava come un valore letterale stringa "hello" seguito da una macro, espansa in "there", e quindi i due valori letterali stringa venivano concatenati in uno. In [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] il compilatore lo interpreta come un valore letterale definito dall'utente, ma poiché non esiste alcun valore letterale \_x corrispondente definito dall'utente, viene restituito un errore.  
  
    ```  
    error C3688: invalid literal suffix '_x'; literal operator or literal operator template 'operator ""_x' not found note: Did you forget a space between the string literal and the prefix of the following string literal?  
  
    ```  
  
     Per risolvere questo problema, aggiungere uno spazio tra il valore letterale stringa e la macro.  
  
-   **Valori letterali stringa adiacenti**  
  
     Analogamente al precedente esempio, a causa di modifiche correlate nell'analisi delle stringhe, i valori letterali stringa adiacenti \(uno dei valori letterali stringa di carattere wide o narrow\) senza gli spazi vuoti sono stati interpretati come una singola stringa concatenata nelle versioni precedenti di Visual C\+\+. In [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] è necessario aggiungere spazi vuoti tra le due stringhe. Ad esempio, il codice seguente deve essere modificato:  
  
    ```  
    char * str = "abc""def";  
    ```  
  
     Aggiungere semplicemente uno spazio tra le due stringhe.  
  
    ```  
    char * str = "abc" "def";  
    ```  
  
-   **Operatore new e delete di posizionamento**  
  
     È stata apportata una modifica all'operatore delete per fare in modo che sia conforme con lo standard C\+\+14. Per informazioni dettagliate sulla modifica agli standard, vedere [Deallocazione con dimensione C\+\+](http://isocpp.org/files/papers/n3778.html). Le modifiche aggiungono un modulo dell'operatore delete globale che accetta un parametro di dimensione. La differenza sostanziale è che se in precedenza si usava un operatore delete con la stessa firma \(per la corrispondenza con un operatore new di posizionamento\), ora si riceve un errore del compilatore \(C2956, che si verifica nel punto in cui viene usato l'operatore new di posizionamento, poiché è la posizione nel codice in cui il compilatore tenta di identificare un operatore delete corrispondente appropriato\).  
  
     La funzione `void operator delete(void *, size_t)` è un operatore delete di posizionamento corrispondente alla nuova funzione di posizionamento "void \* operator new \(size\_t, size\_t\)" in C\+\+11. Con la deallocazione con dimensione C\+\+14, questa funzione delete è ora una *funzione di deallocazione consueta* \(operatore delete globale\). Lo standard richiede che, se l'uso di un operatore new cerca una funzione delete corrispondente e trova una funzione di deallocazione consueta, il programma non ha un formato corretto.  
  
     Si supponga, ad esempio, che il codice definisca un operatore new e delete di posizionamento:  
  
    ```  
    void * operator new(std::size_t, std::size_t); void operator delete(void*, std::size_t) noexcept;  
  
    ```  
  
     Il problema si verifica a causa della corrispondenza delle firme funzione tra un operatore delete di posizionamento che è stato definito e il nuovo operatore delete con dimensione globale. Stabilire se è possibile usare un tipo diverso da size\_t per qualsiasi operatore new e delete di posizionamento.  Si noti che il tipo di size\_t typedef è dipendente dal compilatore; è un typedef per int senza segno in Visual C\+\+. Una buona soluzione consiste nell'usare un tipo enumerato simile al seguente:  
  
    ```  
    enum class my_type : size_t {};  
  
    ```  
  
     Modificare quindi la definizione dell'operatore new e delete di posizionamento per usare questo tipo come secondo argomento anziché size\_t. È necessario anche aggiornare le chiamate all'operatore new di posizionamento per passare al nuovo tipo \(ad esempio, usando `static_cast<my_type>` per convertire il valore integer\) e aggiornare la definizione di new e delete per eseguire il cast di tipo integer. Non è necessario usare un enum per questo oggetto; funzionerebbe anche un tipo classe con un membro size\_t.  
  
     Una soluzione alternativa è che si potrebbe eliminare completamente la nuova posizione. Se il codice usa l'operatore new di posizionamento per implementare un pool di memoria dove l'argomento di posizione è la dimensione dell'oggetto allocato o eliminato, la funzionalità di deallocazione con dimensione potrebbe essere adatta a sostituire il codice del pool di memoria personalizzato ed è possibile eliminare le funzioni di posizionamento e usare semplicemente il proprio operatore delete a due argomenti anziché le funzioni di posizionamento.  
  
     Se non si intende aggiornare immediatamente il codice, è possibile ripristinare il comportamento precedente usando l'opzione del compilatore \/Zc:sizedDealloc\-. Se si usa questa opzione, le funzioni di eliminazione a due argomenti non esistono e non provocheranno un conflitto con l'operatore delete di posizionamento.  
  
-   **Membri dati di unioni**  
  
     I membri dati di unioni non possono avere tipi di riferimento. Il codice seguente veniva compilato correttamente in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma produce un errore in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  
  
    ```  
    union U1 { const int i; }; union U2 { int &i; }; union U3 { struct {int &i;}; };  
    ```  
  
     Il codice precedente produce gli errori seguenti:  
  
    ```Output  
    test.cpp(67): error C2625: 'U2::i': illegal union member; type 'int &' is reference type test.cpp(70): error C2625: 'U3::i': illegal union member; type 'int &' is reference type  
    ```  
  
     Per risolvere questo problema, modificare i tipi di riferimento in un puntatore o un valore. La modifica del tipo in un puntatore richiede modifiche al codice che usa il campo di unione. La modifica del codice in un valore modificherebbe i dati archiviati nell'unione, che influiscono su altri campi, poiché i campi in tipi di unione condividono la stessa memoria. A seconda delle dimensioni del valore, è possibile anche modificare le dimensioni dell'unione.  
  
-   Unioni anonime sono ora più conformi allo standard. Le versioni precedenti del compilatore hanno generato un costruttore e distruttore esplicito per unioni anonime. Questi vengono eliminati in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  
  
    ```  
    struct S { S(); }; union { struct { S s; }; } u; // C2280  
    ```  
  
     Il codice precedente produce gli errori seguenti in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```  
    error C2280: '<unnamed-type-u>::<unnamed-type-u>(void)': attempting to reference a deleted function note: compiler has generated '<unnamed-type-u>::<unnamed-type-u>' here  
    ```  
  
     Per risolvere questo problema, specificare definizioni personalizzate del costruttore e\/o del distruttore.  
  
    ```  
    struct S { // Provide a default constructor by adding an empty function body. S() {} }; union { struct { S s; }; } u;  
    ```  
  
-   **Unioni con strutture anonime**  
  
     Per la conformità allo standard, il comportamento di runtime è stato modificato per i membri di strutture anonime nelle unioni. Il costruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando viene creato questo tipo di unione. Il distruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando l'unione è esterna all'ambito. Si consideri il codice seguente, in cui un'unione U contiene una struttura anonima con un membro che è una struttura S denominata con un distruttore.  
  
    ```  
    #include <stdio.h> struct S { S() { printf("Creating S\n"); } ~S(){ printf("Destroying S\n"); } }; union U { struct { S s; }; U() {} ~U(){} }; void f() { U u; // Destructor implicitly called here. } int main() { f(); char s[1024]; printf("Press any key.\n"); gets_s(s); return 0; }  
    ```  
  
     In [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] il costruttore per S viene chiamato quando viene creata l'unione e il distruttore per S viene chiamato durante la pulitura dello stack per la funzione f. Tuttavia in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] il costruttore e distruttore non vengono chiamati. Il compilatore visualizza un avviso relativo a questa modifica del comportamento.  
  
    ```Output  
    Avviso C4587: 'U::s': il comportamento è cambiato. Il costruttore non viene più chiamato in modo implicitoAvviso C4588: 'U::s': il comportamento è cambiato. Il distruttore non viene più chiamato in modo implicito  
    ```  
  
     Per ripristinare il comportamento originale, assegnare alla struttura anonima un nome. Il comportamento di runtime di strutture non anonime è lo stesso, indipendentemente dalla versione del compilatore.  
  
    ```  
    #include <stdio.h> struct S { S() { printf("Creating S.\n"); } ~S() { printf("Destroying S\n"); } }; union U { struct { S s; } namedStruct; U() {} ~U() {} }; void f() { U u; } int main() { f(); char s[1024]; printf("Press any key.\n"); gets_s(s); return 0; }  
    ```  
  
     In alternativa, provare a spostare il codice del costruttore e del distruttore in nuove funzioni e aggiungere chiamate a queste funzioni provenienti dal costruttore e distruttore per l'unione.  
  
    ```  
    #include <stdio.h> struct S { void Create() { printf("Creating S.\n"); } void Destroy() { printf("Destroying S\n"); } }; union U { struct { S s; }; U() { s.Create();  } ~U() { s.Destroy(); } }; void f() { U u; } int main() { f(); char s[1024]; printf("Press any key.\n"); gets_s(s); return 0; }  
    ```  
  
-   **Risoluzione per il modello**  
  
     Sono state apportate modifiche alla risoluzione dei nomi per i modelli. In C\+\+, quando si considerano i candidati per la risoluzione di un nome, può accadere che uno o più nomi presi in considerazione come corrispondenze potenziali producano un'istanza del modello non valida. Queste istanze non valide in genere non provocano errori del compilatore, un principio che è noto come SFINAE \(Substitution Failure Is Not An Error\).  
  
     A questo punto, se SFINAE richiede al compilatore di creare un'istanza di specializzazione del modello di classe, eventuali errori verificatisi durante questo processo sono errori del compilatore. Nelle versioni precedenti il compilatore potrebbe ignorare tali errori. Si consideri il codice di esempio seguente:  
  
    ```  
    #include <type_traits> template<typename T> struct S { S() = default; S(const S&); S(S&&); template<typename U, typename = typename std::enable_if<std::is_base_of<T, U>::value>::type> S(S<U>&&); }; struct D; void f1() { S<D> s1; S<D> s2(s1); } struct B { }; struct D : public B { }; void f2() { S<D> s1; S<D> s2(s1); }  
  
    ```  
  
     Se si compila con il compilatore corrente, viene visualizzato l'errore seguente:  
  
    ```Output  
    type_traits(1110): Errore C2139: 'D': una classe non definita non è consentita come argomento per il tratto di tipo intrinseco del compilatore '__is_base_of'..\t331.cpp(14): nota: vedere dichiarazione di 'D'..\t331.cpp(10): Nota: vedere riferimento alla creazione dell'istanza del modello di classe 'std::is_base_of<T,U>' in fase di compilazione con [ T=D, U=D ]  
    ```  
  
     Ciò accade perché al momento della prima chiamata di is\_base\_of la classe 'D' non è stata definita.  
  
     In questo caso, la correzione non deve usare tale tratti di tipo fino a quando non è stata definita la classe. Se si spostano le definizioni di B e D all'inizio del file di codice, l'errore viene risolto. Se le definizioni sono nei file di intestazione, controllare l'ordine delle istruzioni include per i file di intestazione per verificare che tutte le definizioni di classe vengano compilate prima di usare modelli problematici.  
  
-   **Costruttori di copia**  
  
     In entrambi [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] e [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)], il compilatore genera un costruttore di copia per una classe, se tale classe ha un costruttore di spostamento definito dall'utente, ma nessun costruttore di copia definito dall'utente. In Dev14, questo costruttore di copia generato in modo implicito è contrassegnato come "\= delete".  
  
##  <a name="BK_CRT"></a> Libreria di runtime C \(CRT\)  
  
### Modifiche generali  
  
-   **File binari di refactoring**  
  
     La libreria CRT è stata sottoposta a refactoring in un due diversi file binari, CRT universale \(ucrtbase\), che contiene la maggior parte delle funzionalità standard, e una libreria di Runtime VC \(vcruntime140\), che contiene le funzionalità relative al compilatore, ad esempio la gestione delle eccezioni e le funzioni intrinseche. Se si usano le impostazioni di progetto predefinite, questa modifica non influisce in alcun modo poiché il linker userà le nuove librerie predefinite. Se è stata impostata la proprietà **Linker** del progetto **Ignora tutte le librerie predefinite** su **Sì** o si usa l'opzione del linker \/NODEFAULTLIB nella riga di comando, è necessario aggiornare l'elenco delle librerie \(nella proprietà **Dipendenze aggiuntive**\) per includere le nuove librerie di refactoring. Sostituire la libreria CRT precedente \(libcmt.lib, libcmtd.lib, msvcrt.lib, msvcrtd.lib\) con le librerie di refactoring equivalenti. Per ognuna delle due librerie di refactoring, esistono versioni statiche \(con estensione lib\) e dinamiche \(con estensione dll\) e versioni di rilascio \(senza alcun suffisso\) e di debug \(con il suffisso "d"\). Le versioni dinamiche hanno una libreria di importazione con cui collegarsi. Due librerie di refactoring sono CRT universali, in particolare ucrtbase.dll o .lib, ucrtbased.dll o .lib e la libreria di runtime VC,libvcruntime.lib, libvcruntime.dll, libvcruntimed.lib e libvcruntimed.dll. Vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).  
  
### \<locale.h\>  
  
-   **localeconv**  
  
     La funzione [localeconv](../c-runtime-library/reference/localeconv.md) dichiarata in locale.h ora funziona correttamente quando le [impostazioni locali per thread](../parallel/multithreading-and-locales.md) sono abilitate. Nelle versioni precedenti della libreria, questa funzione restituisce i dati lconv per le impostazioni locali globali, non per le impostazioni locali del thread.  
  
     Se si usano le impostazioni locali per thread, è necessario controllare l'uso di localeconv per vedere se il codice suppone che i dati lconv restituiti siano per le impostazioni locali globali e modificarli in modo appropriato.  
  
### \<math.h\>  
  
-   **Overload di C\+\+ di funzioni della libreria matematica**  
  
     Nelle versioni precedenti \<math.h\> ha definito alcuni ma non tutti gli overload di C\+\+ per le funzioni della libreria matematica. \<cmath\> ha definito gli overload rimanenti, in modo da ottenere tutti gli overload, di cui uno è necessario per includere l'intestazione \<cmath\>. Ciò ha portato a problemi con la risoluzione di overload della funzione nel codice che ha incluso solo \<math.h\>. A questo punto tutti gli overload di C\+\+ sono stati rimossi da \<math.h\> e ora sono presenti solo in \<cmath\>.  
  
     Per risolvere gli errori, è necessario includere \<cmath\> per ottenere le dichiarazioni delle funzioni che sono state rimosse da \<math.h\>. La tabella seguente elenca le funzioni che sono state spostate.  
  
     Funzioni che sono state spostate:  
  
    1.  double abs\(double\) e float abs\(float\)  
  
    2.  double pow \(double, int\), float pow \(float, float\) float pow \(float, int\) long double pow \(long double, long double\), long double pow \(long double, int\)  
  
    3.  versioni float e long double di funzioni a virgola mobile acos, acosh, asin, asinh, atan, atanh, atan2, cbrt, ceil, copysign, cos, cosh, erf, erfc, exp, exp2, expm1, fabs, fdim, floor, fma, fmax, fmin, fmod, frexp, hypot, ilogb, ldexp, lgamma, llrint, llround, log, log10, log1p, log2, lrint, lround, modf, nearbyint, nextafter, nexttoward, remainder, remquo, rint, round, scalbln, scalbn, sin, sinh, sqrt, tan, tanh, tgamma, trunc  
  
     Se si dispone di codice che usa abs con un tipo a virgola mobile che include solo l'intestazione math.h, le versioni a virgola mobile non saranno più disponibili, pertanto la chiamata, anche con un argomento a virgola mobile, a questo punto si risolve in abs\(int\). In questo modo si produce l'errore:  
  
    ```Output  
    avviso C4244: 'argomento': conversione da 'float' a 'int', con possibile perdita di dati  
    ```  
  
     La correzione per questo avviso consiste nel sostituire la chiamata a abs con una versione a virgola mobile di abs, ad esempio fabs per un argomento double o fabsf per un argomento float o includere l'intestazione cmath e continuare a usare abs.  
  
-   **Conformità del punto a virgola mobile**  
  
     Sono state apportate numerose modifiche alla libreria matematica per migliorare la conformità alle specifiche IEEE 754 e C11 allegato F rispetto all'input per casi speciali, ad esempio NaN e infiniti. Ad esempio, gli input NaN non interattivi, che spesso venivano considerati errori nelle versioni precedenti della libreria, non vengono più considerati errori. Vedere [Standard IEEE 754](http://grouper.ieee.org/groups/754) e l'allegato F dello [Standard C11](http://www.iso-9899.info/wiki/The_Standard).  
  
     Queste modifiche non provocheranno errori in fase di compilazione, ma potrebbero causare un comportamento diverso da parte dei programmi, sebbene più corretto in base allo standard.  
  
-   **FLT\_ROUNDS**  
  
     In Visual Studio 2013 la macro FLT\_ROUNDS veniva espansa in un'espressione costante, che non era corretta perché la modalità di arrotondamento è configurabile al runtime, ad esempio chiamando fesetround. La macro FLT\_ROUNDS è ora dinamica e riflette in modo corretto la modalità di arrotondamento corrente.  
  
### \<new\> e \<new.h\>  
  
-   **new e delete**  
  
     Nelle versioni precedenti della libreria le funzioni dell'operatore new e delete definito dall'implementazione venivano esportate dalla libreria di runtime DLL \(ad esempio, msvcr120.dll\). Queste funzioni operatore ora sono sempre collegate staticamente nei file binari, anche quando si usano le DLL della libreria di runtime.  
  
     Non si tratta di una modifica per codice misto o nativo \(\/clr\), tuttavia per codice compilato come [\/clr:pure](../build/reference/clr-common-language-runtime-compilation.md) ciò potrebbe causare un errore di compilazione da parte del codice. Se si compila codice come \/clr:pure, potrebbe essere necessario aggiungere \<new\> o \#include \<new.h\> per risolvere errori di compilazione a causa di questa modifica. Si noti che \/clr:pure è deprecato in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] e potrebbe essere rimosso nelle versioni future.  
  
### \<process.h\>  
  
-   **\_beginthread e \_beginthreadex**  
  
     Le funzioni [\_beginthread](../c-runtime-library/reference/beginthread-beginthreadex.md) e [\_beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md) ora contengono un riferimento al modulo in cui è definita la procedura del thread per la durata del thread. Ciò contribuisce ad assicurare che i moduli non vengono scaricati fino a quando un thread non viene eseguito fino al completamento.  
  
### \<stdarg.h\>  
  
-   **va\_start e tipi riferimento**  
  
     Quando compila il codice C\+\+, [va\_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) verifica ora in fase di compilazione che l'argomento passato non sia di tipo riferimento. Gli argomenti di tipo riferimento non sono consentiti dallo Standard C\+\+.  
  
### \<stdio.h\> e \<conio.h\>  
  
-   **La famiglia di funzioni di printf e scanf vengono ora definite inline.**  
  
     Le definizioni di tutte le funzioni printf e scanf sono state spostate in linea nelle intestazioni \<stdio.h\>, \<conio.h\> e altre intestazioni CRT. Si tratta di una modifica che comporta un errore del linker \(LNK2019, simbolo esterno non risolto\) per tutti i programmi che hanno dichiarato localmente queste funzioni senza includere le intestazioni CRT appropriate. Se possibile, è necessario aggiornare il codice per includere le intestazioni CRT \(ovvero, aggiungere \#include \<stdio.h\>\) e le funzioni inline, ma se non si intende modificare il codice per includere questi file di intestazione, una soluzione alternativa consiste nell'aggiungere una libreria aggiuntiva all'input del linker legacy\_stdio\_definitions.lib.  
  
     Per aggiungere questa libreria all'input del linker nell'IDE, aprire il menu di scelta rapida per il nodo del progetto, scegliere **Proprietà**, quindi nella finestra di dialogo **Proprietà del progetto** scegliere **Linker** e modificare **Input del Linker** per aggiungere legacy\_stdio\_definitions.lib all'elenco di valori delimitati da punto e virgola.  
  
     Se il progetto è collegato con librerie statiche compilate con una versione di Visual C\+\+ precedente al 2015, il linker potrebbe segnalare un simbolo esterno non risolto. Questi errori potrebbero fare riferimento a definizioni stdio interne per\_iob, \_iob\_func o importazioni correlate per determinate funzioni stdio nel formato \_imp\_\*. Microsoft consiglia di ricompilare tutte le librerie statiche con la versione più recente del compilatore e delle librerie di Visual C\+\+ quando si aggiorna un progetto. Se la raccolta è una libreria di terze parti per cui l'origine non è disponibile, è consigliabile richiedere un aggiornamento binario da terze parti o incapsulare l'utilizzo di quella libreria in una DLL separata che deve essere compilata con la versione precedente del compilatore e delle librerie di Visual C\+\+.  
  
    > [!WARNING]
    >  Se ci si collega con Windows SDK 8.1 o versione precedente, potrebbero verificarsi errori di simbolo esterno non risolto. In tal caso, è necessario risolvere l'errore aggiungendo legacy\_stdio\_definitions.lib all'input del linker come descritto in precedenza.  
  
     Per risolvere gli errori di simbolo non risolto, provare a usare [dumpbin.exe](../build/reference/dumpbin-reference.md) per esaminare i simboli definiti in un file binario. Provare la riga di comando seguente per visualizzare i simboli definiti in una libreria.  
  
    ```  
    dumpbin.exe /LINKERMEMBER somelibrary.lib  
    ```  
  
-   **gets e \_getws**  
  
     Le funzioni [gets](../c-runtime-library/gets-getws.md) e [\_getws](../c-runtime-library/gets-getws.md) sono state rimosse. La funzione gets è stata rimossa dalla libreria C Standard in C11 perché non può essere usata in modo sicuro. La funzione \_getws era un'estensione di Microsoft che era equivalente a gets ma per stringhe wide. In alternativa a queste funzioni, provare a usare [fgets](../c-runtime-library/reference/fgets-fgetws.md), [fgetws](../c-runtime-library/reference/fgets-fgetws.md), [gets\_s](../c-runtime-library/reference/gets-s-getws-s.md) e [\_getws\_s](../c-runtime-library/reference/gets-s-getws-s.md).  
  
-   **\_cgets e \_cgetws**  
  
     Le funzioni [\_cgets](../c-runtime-library/cgets-cgetws.md) e [\_cgetws](../c-runtime-library/cgets-cgetws.md) sono state rimosse. In alternativa a queste funzioni, provare a usare [\_cgets\_s](../c-runtime-library/reference/cgets-s-cgetws-s.md) e [\_cgetws\_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).  
  
-   **Formattazione di valori infiniti e NaN**  
  
     Nelle versioni precedenti, valori infiniti e NaN potrebbero essere formattati usando un set di stringhe sentinella di Visual C\+\+ specifiche.  
  
    -   Valori infiniti: 1.\#INF  
  
    -   NaN non interattivo: 1.\#QNAN  
  
    -   Segnalazione NaN: 1.\#SNAN  
  
    -   NaN indefinito: 1.\#IND  
  
     Ognuno di questi elementi potrebbe essere preceduto da un segno e potrebbe essere stato formattato in modo leggermente diverso a seconda della larghezza e della precisione del campo \(talvolta con effetti insoliti, ad esempio, printf \("%.2f\\n", INFINITY\) visualizzerà 1. \#J perché \#INF potrebbe essere "arrotondato" a una precisione di 2 cifre\). C99 ha introdotto nuovi requisiti relativi a come devono essere formattati valori infiniti e NaN. A questo punto l'implementazione di Visual C\+\+ è conforme a tali requisiti. Sono disponibili le nuove stringhe seguenti:  
  
    -   Valori infiniti: inf  
  
    -   NaN non interattivo: nan  
  
    -   Segnalazione NaN: nan\(snan\)  
  
    -   NaN indefinito:nan\(ind\)  
  
     Uno di questi può essere preceduto da un segno. Se si usa un identificatore di formato lettere maiuscole \(%F anziché %f\), le stringhe vengono visualizzate in lettere maiuscole \(INF anziché inf\), così come richiesto.  
  
     Le funzioni [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) sono state modificate per l'analisi di queste nuove stringhe in modo che verrà eseguito il roundtrip mediante printf e scanf.  
  
-   **Formattazione e analisi a virgola mobile**  
  
     Sono stati introdotti nuovi algoritmi di analisi e formattazione a virgola mobile per migliorare la correttezza. Questa modifica interessa le famiglie di funzioni [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md), nonché funzioni come [strtod](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
     Gli algoritmi di formattazione precedenti genererebbero solo un numero limitato di cifre, riempiendo le posizioni decimali rimanenti con zero. Ciò è sufficiente per generare stringhe che eseguiranno il round trip al valore a virgola mobile originale, ma non è ideale se si vuole il valore esatto \(o la rappresentazione decimale più vicina\). I nuovi algoritmi di formattazione generano tante cifre quante sono necessarie per rappresentare il valore \(o per riempire la precisione specificata\). Un esempio del miglioramento è rappresentato dai risultati che si ottengono quando si calcola una potenza molto elevata di due:  
  
    ```  
    printf("%.0f\n", pow(2.0, 80))  
  
    ```  
  
    ```Output  
        Precedente:  1208925819614629200000000    Nuovo:  1208925819614629174706176  
    ```  
  
     Gli algoritmi di analisi precedenti considererebbero solo fino a 17 cifre significative dalla stringa di input ed eliminerebbero le restanti cifre. Ciò è sufficiente per generare un'approssimazione molto vicina del valore rappresentato dalla stringa e il risultato è in genere molto vicino al risultato arrotondato correttamente. La nuova implementazione considera tutte le cifre presenti e produce il risultato arrotondato correttamente per tutti gli input \(fino a 768 cifre\). Queste funzioni inoltre rispettano a questo punto la modalità di arrotondamento \(controllabile tramite fesetround\).  Si tratta di una modifica potenziale del comportamento poiché queste funzioni potrebbero restituire risultati diversi. I nuovi risultati sono sempre più corretti di quelli precedenti.  
  
-   **Analisi a virgola mobile esadecimale e valori infiniti o NaN**  
  
     Gli algoritmi di analisi a virgola mobile a questo punto analizzeranno le stringhe a virgola mobile \(ad esempio quelle generate dagli identificatori di formato printf %A e %a\) e tutti i valori infiniti e NaN generati dalle funzioni printf, come descritto in precedenza.  
  
-   **Aggiunta di zero prima del numero %A e %a**  
  
     Gli identificatori di formato %A e %a formattano un numero a virgola mobile come una mantissa esadecimale e un esponente binario. Nelle versioni precedenti le funzioni printf aggiungerebbero uno zero prima del numero in modo non corretto nelle stringhe. Ad esempio, printf\("%07.0a\\n", 1.0\) visualizzerebbe 00x1p\+0, mentre dovrebbe visualizzare 0x01p\+0. Questo problema è stato risolto.  
  
-   **Precisione %A e %a**  
  
     La precisione predefinita degli identificatori di formato %A e %a era 6 nelle versioni precedenti della libreria. La precisione predefinita è ora 13 per conformità agli standard C.  
  
     Si tratta di una modifica del comportamento di runtime nell'output di qualsiasi funzione che usa una stringa di formato con %A o %a. Nel comportamento precedente l'output che usava l'identificatore %A potrebbe essere "1.1A2B3Cp\+111". A questo punto l'output per lo stesso valore è "1.1A2B3C4D5E6F7p \+ 111". Per ottenere il comportamento precedente, è possibile specificare la precisione, ad esempio, %.6A. Vedere [Specifica precisione](../c-runtime-library/precision-specification.md).  
  
-   **Identificatore %F**  
  
     L'identificatore di conversione o di formato %F è ora supportato. È funzionalmente equivalente all'identificatore di formato %f, ad eccezione del fatto che valori infiniti e NaN vengono formattati con lettere maiuscole.  
  
     Nelle versioni precedenti l'implementazione era usata per analizzare F e N come modificatori di lunghezza. Questo comportamento risaliva all'età degli spazi degli indirizzi segmentati: questi modificatori di lunghezza erano usati per indicare puntatori far e near, rispettivamente, come in Ns % o % Fp. Questo comportamento è stato rimosso. Se viene rilevato %F, a questo punto viene considerato come l'identificatore di formato %F. Se viene rilevato %N, a questo punto viene considerato come un parametro non valido.  
  
-   **Formattazione esponente**  
  
     Gli identificatori di formato %e e %E formattano un numero a virgola mobile come una mantissa esadecimale e un esponente binario. Anche gli identificatori di formato %g e %G formattano i numeri in questo modo in alcuni casi. Nelle versioni precedenti CRT genererebbe sempre stringhe con esponenti a tre cifre. Ad esempio, printf\("%e\\n", 1.0\) visualizzerebbe 1.000000e\+000. Ciò non è corretto: C richiede che se l'esponente può essere rappresentato usando solo una o due cifre, devono essere visualizzate solo due cifre.  
  
     In Visual Studio 2005 è stata aggiunta un'opzione di conformità globale: [\_set\_output\_format](../c-runtime-library/set-output-format.md). Un programma può chiamare questa funzione con l'argomento \_TWO\_DIGIT\_EXPONENT, per consentire la visualizzazione di esponenti conformi. È stato modificato il comportamento predefinito per la modalità di visualizzazione degli esponenti conformi agli standard.  
  
-   **Convalida del formato di stringa**  
  
     Nelle versioni precedenti le funzioni printf e scanf accetterebbero automaticamente molte stringhe di formato non valido, talvolta con effetti insoliti. Ad esempio, %hlhlhld verrebbe considerato come %d. Tutte le stringhe di formato non valido a questo punto vengono considerate parametri non validi.  
  
-   **Convalida delle stringhe in modalità fopen**  
  
     Nelle versioni precedenti la famiglia fopen di funzioni accettava automaticamente alcune stringhe di modalità non valida \(ad esempio r\+b\+\). Le stringhe di modalità non valida vengono ora rilevate e considerate come parametri non validi.  
  
-   **Modalità \_O\_U8TEXT**  
  
     La funzione [\_setmode](../c-runtime-library/reference/setmode.md) ora segnala correttamente la modalità per i flussi aperti nella modalità \_O\_U8TEXT. Nelle versioni precedenti della libreria segnalerebbe tali flussi come aperti in \_O\_WTEXT.  
  
     Si tratta di una modifica importante se il codice interpreta la modalità \_O\_WTEXT per i flussi in cui la codifica è UTF\-8. Se l'applicazione non supporta UTF\_8, prendere in considerazione l'aggiunta del supporto per questa codifica sempre più comune.  
  
-   **snprintf e vsnprintf**  
  
     Le funzioni [snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) e [vsnprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) vengono ora implementate. Il codice precedente spesso forniva le definizioni delle versioni macro di queste funzioni perché non erano implementate dalla libreria CRT, ma queste non sono più necessarie nelle versioni più recenti. Se [snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) o [vsnprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) è definito come macro prima di includere \<stdio.h\>, ora la compilazione ha esito negativo con un errore che indica dove la macro è stata definita.  
  
     In genere, la correzione per questo problema consiste nell'eliminare tutte le dichiarazioni di snprintf o vsnprintf nel codice utente.  
  
-   **tmpnam genera nomi dei file utilizzabili**  
  
     Nelle versioni precedenti le funzioni tmpnam e tmpnam\_s generavano nomi di file nella directory radice dell'unità \(ad esempio \\sd3c.\). Queste funzioni ora generano percorsi di nome file utilizzabili in una directory temporanea.  
  
-   **Incapsulamento FILE**  
  
     Nelle versioni precedenti il tipo di FILE era completamente definito in \<stdio.h\>, pertanto era possibile per il codice utente accedere a un FILE e modificarne gli elementi interni. La libreria stdio è stata modificata per nascondere i dettagli di implementazione. Come parte di questa operazione, FILE come definito in \<stdio.h\> ora è un tipo opaco e i relativi membri non sono accessibili di fuori di CRT stesso.  
  
-   **\_outp e \_inp**  
  
     Le funzioni [\_outp](../c-runtime-library/outp-outpw-outpd.md), [\_outpw](../c-runtime-library/outp-outpw-outpd.md), [\_outpd](../c-runtime-library/outp-outpw-outpd.md), [\_inp](../c-runtime-library/inp-inpw-inpd.md), [\_inpw](../c-runtime-library/inp-inpw-inpd.md) e [\_inpd](../c-runtime-library/inp-inpw-inpd.md) sono state rimosse.  
  
### \<stdlib.h\>, \<malloc.h\> e \<sys\/stat.h\>  
  
-   **strtof e wcstof**  
  
     Le funzioni strtof e wcstof non riuscivano a impostare errno su ERANGE quando il valore non poteva essere rappresentato come valore float. Questo problema è stato risolto. Si noti che questo errore era specifico per queste due funzioni; le funzioni strtod, wcstod, strtold e wcstold non erano interessate. Si tratta di una importante modifica di runtime.  
  
-   **Funzioni di allocazione allineata**  
  
     Nelle versioni precedenti le funzioni di allocazione allineata \(\_aligned\_malloc, \_aligned\_offset\_malloc e così via\) accetterebbero automaticamente le richieste di un blocco con un allineamento pari a 0. L'allineamento richiesto deve essere una potenza di due, per cui non è pari a zero. Questo problema è stato risolto e un allineamento richiesto pari a 0 a questo punto viene considerato come un parametro non valido. Si tratta di una importante modifica di runtime.  
  
-   **Funzioni heap**  
  
     Le funzioni \_heapadd, \_heapset e \_heapused sono state rimosse. Queste funzioni hanno smesso di funzionare da quando CRT è stato aggiornato in modo da usare l'heap di Windows.  
  
-   **smallheap**  
  
     L'opzione di collegamento smalheap è stata rimossa. Vedere [Opzioni collegamento](../c-runtime-library/link-options.md).  
  
### \<string.h\>  
  
-   **wcstok**  
  
     La firma della funzione wcstok è stata modificata in modo da corrispondere alle richieste dello standard C. Nelle versioni precedenti della libreria la firma di questa funzione era:  
  
    ```  
    wchar_t* wcstok(wchar_t*, wchar_t const*)  
    ```  
  
     Viene usato un contesto interno per ogni thread per tenere traccia dello stato tra chiamate, come avviene per strtok. A questo punto la funzione ha la firma wchar\_t \* wcstok\(wchar\_t\*, wchar\_t const\*, wchar\_t\*\*\) e il chiamante deve passare il contesto come terzo argomento della funzione.  
  
     È stata aggiunta una nuova funzione \_wcstok con la firma precedente per facilitare la portabilità. Quando si compila codice C\+\+, esiste anche un overload inline di wcstok con la firma precedente. Questo overload è dichiarato come deprecato. Nel codice C è possibile definire \_CRT\_NON\_CONFORMING\_WCSTOK affinché venga usato \_wcstok al posto di wcstok.  
  
### \<time.h\>  
  
-   **clock**  
  
     Nelle versioni precedenti, la funzione [clock](../c-runtime-library/reference/clock.md) è stata implementata con l'API Windows [GetSystemTimeAsFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724397.aspx). Con questa implementazione la funzione clock era sensibile all'ora di sistema e pertanto non era necessariamente monotonica. La funzione clock è stata reimplementata in termini di [QueryPerformanceCounter](https://msdn.microsoft.com/library/windows/desktop/ms644904.aspx) ed è ora monotonica.  
  
-   **fstat e \_utime**  
  
     Nelle versioni precedenti le funzioni [\_stat](../c-runtime-library/reference/stat-functions.md), [fstat](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md) e [\_utime](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) gestiscono in modo non corretto l'ora legale. Prima di Visual Studio 2013 tutte queste funzioni regolavano gli orari dell'ora solare in modo non corretto come se fossero nell'ora legale.  
  
     In Visual Studio 2013 il problema è stato corretto nella famiglia di funzioni \_stat, ma non sono stati risolti problemi simili nelle famiglie delle funzioni fstat e \_utime. Ciò ha comportato problemi a causa di un'incoerenza tra le funzioni. Le famiglie delle funzioni fstat e \_utime ora sono state corrette in modo che tutte le funzioni ora gestiscono l'ora legale in modo corretto e coerente.  
  
-   **asctime**  
  
     Nelle versioni precedenti la funzione [asctime](../c-runtime-library/reference/asctime-wasctime.md) avrebbe riempito i giorni a una cifra con uno zero iniziale, ad esempio: venerdì 06 giugno 08.00.00 2014. La specifica richiede che tali giorni vengano riempiti con uno spazio iniziale, ad esempio Ven  6 giugno venerdì 08.00.00 2014. Questo problema è stato risolto.  
  
-   **strftime e wcsftime**  
  
     Le funzioni strftime e wcsftime supportano ora gli identificatori di formato %C, %D, %e, %F, %g, %G, %h, %n, %r, %R, %t, %T, %u e %V. I modificatori E e O inoltre vengono analizzati, ma ignorati.  
  
     L'identificatore di formato %c viene specificato poiché produce una "rappresentazione appropriata di data e ora" per le impostazioni locali correnti. Nelle impostazioni locali C questa rappresentazione deve corrispondere a %a %b %e %T %Y. Si tratta dello stesso formato che viene prodotto da asctime. Nelle versioni precedenti l'identificatore di formato %c formattava non correttamente le ore usando una rappresentazione MM\/GG\/AA HH:MM:SS. Questo problema è stato risolto.  
  
-   **timespec e TIME\_UTC**  
  
     L'intestazione \<time.h\> ora definisce il tipo timespec e la funzione timespec\_get in base allo standard C11. La macro TIME\_UTC inoltre è ora definita per essere usata con la funzione timespec\_get. Si tratta di una modifica per il codice che ha una definizione in conflitto per ognuno di questi elementi.  
  
-   **CLOCKS\_PER\_SEC**  
  
     La macro CLOCKS\_PER\_SEC ora si espande in un numero intero di tipo clock\_t, come richiesto dal linguaggio C.  
  
###  <a name="BK_STL"></a> Libreria di modelli standard  
 Per attivare nuove ottimizzazioni e controlli di debug, l'implementazione di Visual Studio della libreria standard C\+\+ interrompe intenzionalmente la compatibilità binaria da una versione a quella successiva. Pertanto, se si usa la libreria standard C\+\+, i file oggetto e le librerie statiche compilati usando versioni diverse non possono essere combinati in un file binario \(EXE o DLL\) e gli oggetti della libreria standard C\+\+ non possono essere passati tra i file binari compilati usando versioni diverse. Tale combinazione genera errori del linker relativi a mancate corrispondenze di \_MSC\_VER. \_MSC\_VER è la macro che contiene il numero di versione principale del compilatore, ad esempio 1800 per Visual Studio 2013. Questo controllo non consente di rilevare la combinazione DLL e altre combinazioni inerenti a Visual C\+\+ 2008 o versioni precedenti.  
  
-   **File di inclusione STL**  
  
     Sono state apportate alcune modifiche alla struttura di inclusione nelle intestazioni STL. Le intestazioni STL possono ora includersi reciprocamente in modi non specificati. In generale, è consigliabile scrivere il codice in modo che includa attentamente tutte le intestazioni necessarie in base allo standard C\+\+ e non si basi su quali intestazioni STL includono le altre intestazioni STL. In questo modo il codice diventa portabile tra versioni e piattaforme. Almeno due modifiche di intestazione in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] influiscono sul codice utente. In primo luogo, \<string\> non include più \<iterator\>. In secondo luogo, \<tuple\> ora dichiara std::array senza includere tutti i valori \<array\>, cosa che può interrompere il codice tramite la combinazione di costrutti di codice seguente: il codice include una variabile denominata "array", si dispone di una direttiva using "using namespace std;" e si include un'intestazione STL \(ad esempio \<functional\>\) che include \<tuple\>, che ora dichiara std::array.  
  
-   **steady\_clock**  
  
     L'implementazione di \<chrono\> di [steady\_clock](../standard-library/steady-clock-struct.md) è stata modificata per soddisfare i requisiti standard C\+\+ per tenuta e monotonicità. steady\_clock ora è basato su [QueryPerformanceCounter](https://msdn.microsoft.com/library/windows/desktop/ms644904.aspx) e high\_resolution\_clock è ora un typedef per steady\_clock. Di conseguenza in Visual C\+\+ steady\_clock::time\_point è ora un typedef per chrono::time\_point \<steady\_clock\>; tuttavia, ciò non vale necessariamente per altre implementazioni.  
  
-   **allocatori e const**  
  
     Sono ora necessari confronti di uguaglianza\/disuguaglianza di allocatori per accettare argomenti const su entrambi i lati.  Se gli allocatori definiscono questi operatori come segue:  
  
    ```  
    bool operator==(const MyAlloc& other)  
    ```  
  
     È necessario aggiornare questi strumenti per dichiararli membri const.  
  
    ```  
    bool operator==(const MyAlloc& other) const  
    ```  
  
-   **Elementi const**  
  
     Lo standard C\+\+ ha sempre rifiutato i contenitori di elementi const \(ad esempio vector \<const T\> o set\<const T\>\). In Visual C\+\+ 2013 e versioni precedenti tali contenitori erano accettati. Nella versione corrente tali contenitori causano errori di compilazione.  
  
-   **std::allocator::deallocate**  
  
     In Visual C\+\+ 2013 e versioni precedenti, std::allocator::deallocate\(p, n\) ignorava l'argomento passato per n.  Lo standard C\+\+ ha sempre richiesto che n sia uguale al valore passato come primo argomento alla chiamata di allocare che ha restituito p. Tuttavia, nella versione corrente il valore di n viene controllato. Il codice che passa gli argomenti per n che differiscono da ciò che richiede lo standard potrebbe arrestarsi in modo anomalo in fase di esecuzione.  
  
-   **hash\_map e hash\_set**  
  
     I file di intestazione non standard hash\_map e hash\_set sono deprecati in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] e verranno rimossi in una versione futura. Usare invece unordered\_map e unordered\_set.  
  
-   **comparatori e operator\(\)**  
  
     I contenitori associativi \(la famiglia \<map\>\) ora richiedono che i loro comparatori dispongano di operatori di chiamata di funzioni che possono chiamare const. Il codice seguente in una dichiarazione di classe comparatore ora causa errori di compilazione:  
  
    ```  
    bool operator()(const X& a, const X& b)  
    ```  
  
     Per risolvere questo errore, modificare la dichiarazione di funzione in:  
  
    ```  
    bool operator()(const X& a, const X& b) const  
    ```  
  
-   **tratti di tipo**  
  
     I nomi precedenti per tratti di tipo di una versione precedente dello standard C\+\+ in versione bozza sono stati rimossi. Sono stati modificati in C\+\+11 e sono stati aggiornati ai valori C\+\+11 in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)]. La tabella seguente illustra i nomi precedenti e nuovi:  
  
    |Nome precedente|Nuovo nome|  
    |---------------------|----------------|  
    |add\_reference|add\_lvalue\_reference|  
    |has\_default\_constructor|is\_default\_constructible|  
    |has\_copy\_constructor|is\_copy\_constructible|  
    |has\_move\_constructor|is\_move\_constructible|  
    |has\_nothrow\_constructor|is\_nothrow\_default\_constructible|  
    |has\_nothrow\_default\_constructor|is\_nothrow\_default\_constructible|  
    |has\_nothrow\_copy|is\_nothrow\_copy\_constructible|  
    |has\_nothrow\_copy\_constructor|is\_nothrow\_copy\_constructible|  
    |has\_nothrow\_move\_constructor|is\_nothrow\_move\_constructible|  
    |has\_nothrow\_assign|is\_nothrow\_copy\_assignable|  
    |has\_nothrow\_copy\_assign|is\_nothrow\_copy\_assignable|  
    |has\_nothrow\_move\_assign|is\_nothrow\_move\_assignable|  
    |has\_trivial\_constructor|is\_trivially\_default\_constructible|  
    |has\_trivial\_default\_constructor|is\_trivially\_default\_constructible|  
    |has\_trivial\_copy|is\_trivially\_copy\_constructible|  
    |has\_trivial\_move\_constructor|is\_trivially\_move\_constructible|  
    |has\_trivial\_assign|is\_trivially\_copy\_assignable|  
    |has\_trivial\_move\_assign|is\_trivially\_move\_assignable|  
    |has\_trivial\_destructor|is\_trivially\_destructible|  
  
-   **launch::any e launch::sync policies**  
  
     Sono stati rimossi i criteri launch::any e launch::sync non standard. Per launch::any, usare invece launch:async &#124; launch:deferred. Per launch::sync, usare launch::deferred. Vedere [Enumerazione launch](../Topic/launch%20Enumeration.md).  
  
###  <a name="BK_MFC"></a> MFC e ATL  
  
-   **Microsoft Foundation Classes \(MFC\)** non è più incluso in un'installazione "Tipica" di Visual Studio per le grandi dimensioni. Per installare MFC, scegliere l'opzione di installazione personalizzata nel programma di installazione di Visual Studio 2015. Se Visual Studio 2015 è già installato, è possibile installare MFC, eseguendo nuovamente l'installazione di Visual Studio, scegliendo l'opzione di installazione personalizzata e scegliendo Microsoft Foundation Classes. È possibile eseguire nuovamente il programma di installazione di Visual Studio dal Pannello di controllo, Programmi e funzionalità o dai supporti di installazione.  
  
     Il pacchetto ridistribuibile di Visual C\+\+ include ancora questa libreria.  
  
###  <a name="BK_ConcRT"></a> Runtime di concorrenza  
  
-   **Macro Yield di Windows.h in conflitto con concurrency::Context::Yield**  
  
     Il runtime di concorrenza in precedenza usava \#undef per rimuovere la definizione della macro Yield in modo da evitare conflitti tra la macro Yield definita in Windows.h e la funzione concurrency::Context::Yield. Il runtime \#undef è stato rimosso ed è stata aggiunta una nuova chiamata API equivalente non in conflitto [concurrency::Context::YieldExecution](../Topic/Context::YieldExecution%20Method.md). Per risolvere i conflitti con Yield, è possibile aggiornare il codice per chiamare la funzione YieldExecution o per racchiudere il nome della funzione Yield tra parentesi nei siti di chiamata, come nell'esempio seguente:  
  
    ```  
    (concurrency::Context::Yield)();  
    ```  
  
## Vedere anche  
 [Introduzione](../misc/getting-started-with-visual-cpp-in-visual-studio-2015.md)   
 [Modifiche importanti apportate a Visual C\+\+ 2013](https://msdn.microsoft.com/library/hh409293.aspx)