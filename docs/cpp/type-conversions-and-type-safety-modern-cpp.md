---
title: "Conversioni di tipi e indipendenza dai tipi (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 629b361a-2ce1-4700-8b5d-ab4f57b245d5
caps.latest.revision: 23
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversioni di tipi e indipendenza dai tipi (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo documento vengono identificati i problemi comuni di conversione di tipi e viene descritto come evitarli nel codice C\+\+.  
  
 Quando si scrive un programma C\+\+, è importante assicurarsi che sia indipendente dai tipi.  Ciò significa che qualsiasi variabile, argomento della funzione e valore restituito di una funzione non memorizza un tipo accettabile di dati e le operazioni che includono i valori di tipi diversi "abbiano significato" e non comportano perdita di dati, l'errata interpretazione di schemi di bit, o il danneggiamento della memoria.  Un programma che mai in modo esplicito o implicito converte valori da un tipo a un altro è indipendente dai tipi per definizione.  Tuttavia, le conversioni di tipo, anche conversioni di tipo rischiose, sono talvolta necessarie.  Ad esempio, potrebbe essere necessario archiviare il risultato di un'operazione a virgola mobile in una variabile di tipo `int` o, è necessario passare il valore in `int` unsigned a una funzione che accetta `int` signed.  Entrambi gli esempi mostrano le conversioni rischiose di tipo perché potrebbero causare la perdita di dati o re\-interpretare un valore.  
  
 Quando il compilatore rileva una conversione non sicura, viene generato un errore o un avviso.  Un errore impedisce la compilazione; un avviso permette di eseguire la compilazione ma indica un possibile errore nel codice.  Tuttavia, anche se il programma viene compilato senza avvisi, potrebbe contenere codice che conduce conversioni implicite di tipi che producono risultati errati.  Gli errori di tipo possono essere dovuti anche alle conversioni esplicite, o dai cast, nel codice.  
  
## Conversione implicita di tipi  
 Quando un'espressione contiene gli operandi diversi di tipi incorporati, e non sono presenti cast espliciti, il compilatore utilizza *le conversioni standard* incorporate per convertire uno degli operandi in modo che i tipi corrispondano.  Il compilatore tenta le conversioni in una sequenza ben definita finché una non viene eseguita.  Se la conversione selezionata è una promozione, il compilatore non genera un avviso.  Se la conversione è un meccanismo, il compilatore genera un avviso sulla possibile perdita di dati.  Se la perdita di dati effettivi si verifica, essa dipende dai valori effettivi in questione, ma è consigliabile considerare l'avviso come un errore.  Se un tipo definito dall'utente è implicito, il compilatore tenta di utilizzare le conversioni specificate nella definizione della classe.  Se non viene trovata una conversione accettabile, il compilatore genera un errore e il programma non verrà compilato.  Per ulteriori informazioni sulle regole che controllano le conversioni standard, consultare [Conversioni standard](../cpp/standard-conversions.md).  Per ulteriori informazioni sulle conversioni definite dall'utente, consultare [Conversioni definite dall'utente](../dotnet/user-defined-conversions-cpp-cli.md)\).  
  
### Conversione di ampliamento \(promozione\)  
 In una conversione verso un tipo di dati più grande, un valore in una piccola variabile viene assegnato a una maggiore variabile senza perdita di dati.  Poiché le conversioni di ampliamento sono sempre sicure, il compilatore li esegue automaticamente e non genera avvisi.  Le seguenti traduzioni sono conversioni di ampliamento.  
  
|Da|Per|  
|--------|---------|  
|Qualsiasi tipo integrale signed o unsigned escluso `long long` o `__int64`|`double`|  
|`bool` o `char`|Qualsiasi altro tipo incorporato|  
|`short` o `wchar_t`|`int`, `long`, `long long`|  
|`int`, `long`|`long long`|  
|`float`|`double`|  
  
### Conversione di restrizione \(coercizione\)  
 Il compilatore esegue conversioni di restrizione in modo implicito, ma segnala potenziali perdite di dati.  Prendere molto seriamente questi avvisi.  Se si è certi che alcuna perdita di dati si verifica perché i valori nella variabile più grande verranno sempre adattati nella variabile più piccola, allora si aggiunge un cast esplicito in modo che il compilatore non generi più alcun un avviso.  Se non si è certi che la conversione è sicura, aggiungere al codice un tipo di controllo runtime per gestire la perdita di dati in modo che non il programma non produca risultati non corretti.  Per suggerimenti su come gestire questo scenario, consultare [\(NOTINBUILD\)How to: Handle Narrowing Conversions \(C\+\+\)](http://msdn.microsoft.com/it-it/e483237e-501e-4a12-ac24-51526f6ddeaa).  
  
 Una conversione da un tipo a virgola mobile a un tipo integrale è una conversione di restrizione perché la parte decimale del valore in virgola mobile viene rimossa e persa.  
  
 Nell'esempio di codice seguente vengono illustrati alcune conversioni implicite verso un tipo di dati più piccolo, e gli avvisi che il compilatore genera.  
  
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
  
### Conversioni Signed \- Unsigned  
 Un tipo integrale signed e la relativa controparte unsigned hanno sempre la stessa dimensione, ma differiscono per l'interpretazione da trasformazione di valore dello schema di bit.  Nell'esempio di codice illustra cosa accade quando lo stesso schema di bit viene interpretato come un valore signed e unsigned.  Lo schema di bit memorizzato in entrambi i `num2` e `num` non cambia come illustrato nel precedente esempio.  
  
```cpp  
  
using namespace std;  
unsigned short num = numeric_limits<unsigned short>::max(); // #include <limits>  
short num2 = num;  
cout << "unsigned val = " << num << " signed val = " << num2 << endl;  
// Prints: unsigned val = 65535 signed val = -1  
  
// Go the other way.  
num2 = -1;  
num = num2;  
cout << "unsigned val = " << num << " signed val = " << num2 << endl;  
// Prints: unsigned val = 65535 signed val = -1  
  
```  
  
 Si noti che i valori vengono interpretati nuovamente in entrambe le direzioni.  Se il programma produce risultati dispari in cui il segno del valore risulta invertito dal previsto, cercare le conversioni implicite tra i tipi integrali signed e unsigned.  Nell'esempio seguente, il risultato dell'espressione \(0 \- 1\) viene convertito in modo implicito da `int` in `unsigned int` quando viene archiviato in `num`.  In questo modo lo schema di bit deve essere interpretato nuovamente.  
  
```cpp  
  
unsigned int u3 = 0 - 1;  
cout << u3 << endl; // prints 4294967295  
  
```  
  
 Il compilatore non avvisa sulle conversioni implicite tra i tipi integrali signed e unsigned.  Di conseguenza, è consigliabile evitare le conversioni signed e unsigned nel suo complesso.  Se non è possibile evitarli, aggiungere al codice un controllo runtime per rilevare se il valore convertito è maggiore o uguale a zero e minore o uguale al valore massimo del tipo signed.  I valori in questo intervallo verranno modificati da signed a unsigned o viceversa senza necessità che vengano reinterpretati.  
  
### Conversioni puntatore  
 In molte espressioni, gli array in stile C vengono convertiti in modo implicito in un puntatore al primo elemento dell'array e le conversioni costanti possono verificarsi automaticamente.  Sebbene sia utile, è potenzialmente soggetto ad errori.  Ad esempio, il seguente esempio di codice progettato in modo scorretto non ha alcun senso, ma verrà compilato in Visual C\+\+ e produce come risultato "p".  Innanzitutto, la stringa "help" viene convertita in `char*` che indica il primo elemento dell'array; questo puntatore viene incrementato da tre elementi in modo che punti ora all'ultimo elemento "p".  
  
```cpp  
  
char* s = "Help" + 3;  
  
```  
  
## Conversioni esplicite \(cast\)  
 Tramite un'operazione cast, è possibile indicare al compilatore di convertire un valore di un tipo a un altro.  Il compilatore genererà in alcuni casi un errore se i due tipi sono completamente indipendenti, ma in altri casi non genererà un errore anche se l'operazione non è indipendente dai tipi.  Utilizzare il Cast con moderazione poiché qualsiasi conversione da un tipo a un altro è una potenziale fonte di errori in un programma.  Tuttavia, i cast talvolta sono necessari e non tutti i cast sono altrettanto pericolosi.  Un cast è efficace quando il codice esegue una conversione verso un tipo di dati più piccolo e si sa che la conversione non riproduca risultati non corretti.  In effetti, si indica al compilatore che si è a conoscenza di ciò che si sta facendo e di interrompere con fastidiosi avvisi riguardo a tale operazione.  Un altro utilizzo è di eseguire il cast da un pointer\-to\-derived class \(puntatore ad una classe derivata\) ad un pointer\-to\-base class \(puntatore ad una classe di base\).  Un altro utilizzo è di eseguire il cast di `const` di una variabile per passarla a una funzione che richiede un argomento non`const`.  La maggior parte di queste operazioni cast implicano alcuni rischi.  
  
 Nella programmazione C, lo stesso operatore di cast viene utilizzato per tutti i tipi di cast.  
  
```cpp  
  
(int) x; // old-style cast, old-style syntax  
int(x); // old-style cast, functional syntax  
  
```  
  
 L'operatore di cast nel linguaggio C è identico all'operatore di chiamata \(\) e quindi non appariscente nel codice e facile da ignorare.  Entrambi sono errati in quanto sono difficili da riconoscere immediatamente oppure da trovare e sono piuttosto diversi per richiamare qualsiasi combinazione di `static`, `const` e `reinterpret_cast`.  Comprendere cosa un cast obsoleto effettivamente fa può essere difficile e soggetto a errori.  Per tutti questi motivi, quando un cast è richiesto, è consigliabile utilizzare uno dei seguenti operatori di cast di C\+\+, in alcuni casi decisamente più indipendenti dai tipi e che esprimono molto più esplicitamente lo scopo di programmazione:  
  
-   `static_cast`, per i cast controllati solamente in fase di compilazione.  `static_cast` restituisce un errore se rileva che si sta tentando di eseguire il cast tra tipi che sono completamente incompatibili.  È inoltre possibile utilizzarlo per eseguire il cast tra un puntatore base e un puntatore derivato, ma il compilatore non è in grado di riconoscere sempre se tali conversioni sono sicure in fase di esecuzione.  
  
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
  
     Per ulteriori informazioni, consultare [Cast Statici](../cpp/static-cast-operator.md).  
  
-   `dynamic_cast`, per sicurezza, cast di puntatori base e puntatori derivati controllati in fase di esecuzione.  `dynamic_cast` è più sicuro di `static_cast` per il downcast, ma il controllo in fase di esecuzione comporta un sovraccarico.  
  
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
  
     Per ulteriori informazioni, consultare [dynamic\_cast](../cpp/dynamic-cast-operator.md).  
  
-   `const_cast`, per eseguire il cast di `const` di una variabile o, la conversione di una variabile non\-`const` per essere `const`.  L'operazione di cast tramite `const` utilizzando questo operatore è altrettanto soggetto a errori quanto utilizza un cast tipico del linguaggio C, ma con `const-cast` è meno probabile eseguire il cast accidentalmente.  Talvolta è necessario eseguire il cast di `const` di una variabile, ad esempio, per passare una variabile `const` a una funzione che accetta un parametro non`const`.  Nell'esempio seguente viene illustrato come effettuare questa operazione.  
  
    ```cpp  
  
    void Func(double& d) { ... }  
    void ConstCast()  
    {  
       const double pi = 3.14;  
       Func(const_cast<double&>(pi)); //No error.  
    }  
  
    ```  
  
     Per ulteriori informazioni, consultare [const\_cast](../cpp/const-cast-operator.md).  
  
-   `reinterpret_cast`, per i cast tra tipi indipendenti come `pointer` in `int`.  
  
    > [!NOTE]
    >  Questo operatore di cast non viene spesso utilizzato come gli altri, e non è garantito che sia portabile ad altri compilatori.  
  
     Nell'esempio seguente viene illustrato come `reinterpret_cast` differisce da `static_cast`.  
  
    ```cpp  
  
    const char* str = "hello";  
    int i = static_cast<int>(str);//error C2440: 'static_cast' : cannot  
                                  // convert from 'const char *' to 'int'  
    int j = (int)str; // C-style cast. Did the programmer really intend  
                      // to do this?  
    int k = reinterpret_cast<int>(str);// Programming intent is clear.  
                                       // However, it is not 64-bit safe.  
  
    ```  
  
     Per ulteriori informazioni, vedere [Operatore reinterpret\_cast](../cpp/reinterpret-cast-operator.md).  
  
## Vedere anche  
 [Sistema di tipi C\+\+](../cpp/cpp-type-system-modern-cpp.md)   
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)