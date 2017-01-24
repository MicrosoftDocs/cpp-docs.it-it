---
title: "Procedura: progettare la sicurezza dell&#39;eccezione | Microsoft Docs"
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
ms.assetid: 19ecc5d4-297d-4c4e-b4f3-4fccab890b3d
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: progettare la sicurezza dell&#39;eccezione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno dei vantaggi del meccanismo di eccezione è che l'esecuzione, insieme ai dati sull'eccezione, passa direttamente dall'istruzione che genera l'eccezione alla prima istruzione catch che gestisce.  Il gestore può essere un numero qualsiasi di livelli nello stack di chiamate.  Le funzioni chiamate tra l'istruzione try e l'istruzione throw non sono necessarie per conoscere qualcosa sull'eccezione gestita.  Tuttavia, devono essere progettati in modo tale da poter uscire dall'ambito "imprevisto" in qualsiasi punto in cui un'eccezione può propagarsi dal basso, ed essere eseguite senza lasciarsi dietro oggetti parzialmente creati, memoria persa, o strutture dati presenti in stati utilizzati.  
  
## Tecniche base  
 Un criterio efficace per la gestione delle eccezioni richiede un'analisi attenta e dovrebbe essere parte del processo di progettazione.  In genere la maggior parte delle eccezioni vengono rilevate e generate ai livelli inferiori di un modulo del software, ma tipicamente questi livelli non dispongono di un contesto sufficiente per gestire l'errore o per esporre un messaggio agli utenti finali.  Nel livello intermedio, le funzioni possono rilevare e generare un'eccezione quando è necessario controllare l'oggetto eccezione, o sono utili informazioni aggiuntive da fornire al livello superiore che sostanzialmente intercetta l'eccezione.  Una funzione dovrebbe intercettare e "inghiottire" un'eccezione solo se è in grado di recuperare da essa.  In molti casi, il comportamento corretto nel livello intermedio consiste nel consentire all'accezione di propagarsi sopra allo stack di chiamate.  Anche al livello superiore, potrebbe essere opportuno consentire ad un'eccezione non gestita di terminare un programma se quest'ultima lascia il programma in uno stato in cui la sua correttezza non è garantita.  
  
 Indipendentemente da come una funzione gestisce un'eccezione, per garantire un'"indipendenza dalle gestioni", deve essere progettata in base alle seguenti regole basilari.  
  
### Mantenere le classi di risorse semplici  
 Quando si incapsula la gestione manuale delle risorse nelle classi, utilizzare una classe che non faccia altro che gestire ogni risorsa; in caso contrario, si potrebbero introdurre perdite.  Utilizzare [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) quando possibile, come illustrato nell'esempio seguente.  Questo esempio è volutamente finto e semplicistico per evidenziare le differenze quando viene usato `shared_ptr`.  
  
```cpp  
// old-style new/delete version  
class NDResourceClass {  
private:  
    int*   m_p;  
    float* m_q;  
public:  
    NDResourceClass() : m_p(0), m_q(0) {  
        m_p = new int;  
        m_q = new float;  
    }  
  
    ~NDResourceClass() {  
        delete m_p;  
        delete m_q;  
    }  
    // Potential leak! When a constructor emits an exception,   
    // the destructor will not be invoked.     
};  
  
// shared_ptr version  
#include <memory>  
  
using namespace std;  
  
class SPResourceClass {  
private:  
    shared_ptr<int> m_p;  
    shared_ptr<float> m_q;  
public:  
    SPResourceClass() : m_p(new int), m_q(new float) { }  
    // Implicitly defined dtor is OK for these members,   
    // shared_ptr will clean up and avoid leaks regardless.  
};  
  
// A more powerful case for shared_ptr  
  
class Shape {  
    // ...  
};  
  
class Circle : public Shape {  
    // ...  
};  
  
class Triangle : public Shape {  
    // ...  
};  
  
class SPShapeResourceClass {  
private:  
    shared_ptr<Shape> m_p;  
    shared_ptr<Shape> m_q;  
public:  
    SPShapeResourceClass() : m_p(new Circle), m_q(new Triangle) { }  
};  
  
```  
  
### Utilizzare il linguaggio del modello RAII per gestire le risorse  
 Per essere eseguita correttamente indipendentemente dalle eccezioni, una funzione deve garantire che gli oggetti che ha allocato utilizzando `malloc` o `new` si distruggano, e tutte le risorse quali file gestiti vengano chiuse o rilasciate anche se viene generata un'eccezione.  Il linguaggio RAII *Resource Acquisition Is Initialization* lega la gestione di tali risorse alla durata delle variabili automatiche.  Quando una funzione va fuori ambito, o ritornando normalmente o a causa di un'eccezione, i distruttori per tutte le variabili automatiche totalmente costruite vengono richiamati.  Un oggetto wrapper del modello RAII, come un puntatore intelligente, chiama la funzione appropriata di chiusura o di eliminazione nel proprio distruttore.  Nel codice indipendente dalle eccezioni, è estremamente importante passare la proprietà di ogni risorsa immediatamente a un tipo di oggetto RAII.  Si noti che `vector`, `string`, `make_shared`, `fstream` e simili classi gestiscono l'acquisizione della risorsa automaticamente. Tuttavia, `unique_ptr` e le costruzioni tradizionali `shared_ptr` sono speciali perché l'acquisizione delle risorse viene eseguita dall'utente anziché dall'oggetto; pertanto, vengono considerati *Resource Release Is Destruction* ma sono incerti come il modello RAII.  
  
## Le tre Eccezioni garantite  
 In genere, la sicurezza dell'eccezione viene discussa in termini di tre eccezioni garantire che una funzione può fornire: *Nessun Errore Garantito*, *Garanzia Solida* e *Garanzia di Base*.  
  
### Nessun Errore Garantito  
 Essa garantisce la migliore e la più robusta garanzia che una funzione possa offrire.  Dichiara che la funzione non genererà un'eccezione o non consentirà di propagarsi.  Tuttavia, non è possibile fornire in modo affidabile una garanzia a meno che \(a\) non si indichi che tutte le funzioni che tale funzione chiama siano anche senza alcun errore, o \(b\) sia noto che tutte le eccezioni generate vengono intercettate prima che vengano inviate a questa funzione, o \(c\) sia noto come intercettare e gestire correttamente le eccezioni che potrebbero raggiungere la funzione.  
  
 Sia la Garanzia Solida che la Garanzia di Base si basano sul presupposto che i distruttoti non contengano errori.  Tutti i contenitori e i tipi della Libreria Standard garantiscono che i loro distruttori non siano lanciati.  Esiste anche un requisito inverso: la Libreria Standard richiede che i tipi definiti dall'utente \(ad esempio, il modello argomenti\) debbano avere distruttori non lanciati.  
  
### Garanzia Solida.  
 Stabilisce che se una funzione esce dall'ambito a causa di un'eccezione, non perderà dati e lo stato del programma non verrà modificato.  Una funzione che fornisce una garanzia robusta è essenzialmente una transazione che presenta la semantica di commit o di rollback: o avrà pienamente successo o non ha alcun effetto.  
  
### Garanzia di Base  
 È la più debole fra le tre.  Tuttavia, potrebbe essere la scelta migliore quando una Garanzia Robusta è troppo complessa nel consumo di memoria o nelle prestazioni.  Stabilisce che se si verifica un'eccezione, non si verifichino perdite di memoria e l'oggetto sia ancora in uno stato utilizzabile anche se i dati potrebbero essere stati modificati.  
  
## Classi di Eccezioni Sicure  
 Una classe può garantire la propria sicurezza dell'eccezione, anche quando viene utilizzata da funzioni pericolose, impedendosi parzialmente di essere costruita o parzialmente eliminato.  Se il costruttore della classe esce prima del completamento, l'oggetto non viene mai creato e il relativo distruttore non verrà mai chiamato.  Sebbene le variabili automatiche inizializzate prima dell'eccezione avranno i loro distruttori invocati, la memoria allocata dinamicamente o le risorse non gestite da un puntatore intelligente o da una simile variabile automatica simile verranno perse.  
  
 I tipi incorporati sono tutti privi di errore, e i tipi della Libreria Standard supportano al minimo la garanzia di base.  Seguire le seguenti le linee guida per qualsiasi tipo definito dall'utente che deve essere indipendente dalle eccezioni:  
  
-   Utilizzare i puntatori intelligenti o altri tipi wrapper del RAII per gestire tutte le risorse.  Evitare la funzionalità di gestione delle risorse nel classe del distruttore, perché il quest'ultimo non verrà richiamato se il costruttore genera un'eccezione.  Tuttavia, se la classe è un gestore di risorse dedicato che controlla solo una risorsa, è possibile utilizzare il distruttore per gestire le risorse.  
  
-   Si comprenda che un'eccezione generata in un costruttore di classe base non può essere inghiottita in un costruttore di classe derivata.  Se si desidera convertire e generare nuovamente l'eccezione della classe base in un costruttore derivato, utilizzare una funzione try.  Per ulteriori informazioni, vedere [\(NOTINBUILD\)How to: Handle Exceptions in Base Class Constructors \(C\+\+\)](http://msdn.microsoft.com/it-it/53bb822e-785b-4581-9517-210dd05060a3).  
  
-   Considerare la possibilità di archiviare uno stato della classe in un membro dati di cui viene eseguito il wrapping in un puntatore intelligente, specialmente se la classe presenta un concetto di inizializzazione consentita per errore." Sebbene il linguaggio C\+\+ permetta di lasciare spazio ai membri dati non inizializzati, non supporta le istanze della classe non inizializzate o parzialmente inizializzate.  Un costruttore deve avere esito positivo o negativo; non viene creato alcun oggetto se il costruttore non viene eseguito fino al completamento.  
  
-   Non consentire alle eccezioni di scappare da un distruttore.  Un assioma di base del linguaggio C\+\+ afferma che i distruttori non dovrebbero mai consentire che un'eccezione si propaghi nello stack di chiamate.  Se un distruttore deve eseguire potenzialmente un'operazione di generazione di eccezione, deve farlo in un blocco try\-catch e inghiottire l'eccezione.  La libreria standard fornisce la garanzia su tutti i distruttori che definisce.  
  
## Vedere anche  
 [Gestione di errori ed eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Procedura: interfaccia tra codice eccezionale e non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)