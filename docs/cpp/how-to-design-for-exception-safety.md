---
title: 'Procedura: progettare la sicurezza di eccezione del | Microsoft Docs'
ms.custom: how-to
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 19ecc5d4-297d-4c4e-b4f3-4fccab890b3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1a9eaee55c806ea2efc82300cad47cc744c0a491
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403693"
---
# <a name="how-to-design-for-exception-safety"></a>Procedura: progettare la sicurezza dell'eccezione
Uno dei vantaggi del meccanismo di eccezione è che l'esecuzione, insieme ai dati sull'eccezione, passa direttamente dall'istruzione che genera l'eccezione alla prima istruzione catch che gestisce. Il gestore può essere un numero qualsiasi di livelli nello stack di chiamate. Le funzioni chiamate tra l'istruzione try e l'istruzione throw non sono necessarie per ottenere informazioni sull'eccezione gestita.  Tuttavia, devono essere progettate in modo tale da poter uscire dall'ambito "in modo imprevisto" in qualsiasi punto in cui un'eccezione può propagarsi dal basso, ed essere eseguite senza lasciarsi dietro oggetti parzialmente creati, memoria persa o strutture di dati in stati non utilizzabili.  
  
## <a name="basic-techniques"></a>Tecniche di base  
 Un criterio efficace per la gestione delle eccezioni richiede un'analisi attenta e dovrebbe essere parte del processo di progettazione. In genere la maggior parte delle eccezioni viene individuata e generata ai livelli inferiori di un modulo del software, ma in genere questi livelli non dispongono di un contesto sufficiente per gestire l'errore o per esporre un messaggio agli utenti finali. Nei livelli intermedi, le funzioni possono individuare e rigenerare un'eccezione quando devono controllare l'oggetto eccezione o dispongono di utili informazioni aggiuntive da fornire al livello superiore che individua l'eccezione. Una funzione dovrebbe intercettare e "inghiottire" un'eccezione solo se è in grado di recuperare completamente da essa. In molti casi, il comportamento corretto nei livelli intermedi consiste nel consentire a un'eccezione di propagarsi nello stack di chiamate. Anche al livello superiore potrebbe essere opportuno consentire a un'eccezione non gestita di terminare un programma se quest'ultima lascia il programma in uno stato in cui la sua correttezza non può essere garantita.  
  
 Indipendentemente da come una funzione gestisce un'eccezione, per garantire una "protezione dalle eccezioni" deve essere progettata secondo le seguenti regole basilari.  
  
### <a name="keep-resource-classes-simple"></a>Mantenere le classi di risorse semplici  
 Quando si incapsula la gestione manuale delle risorse nelle classi, utilizzare una classe il cui scopo sia solo di gestire ciascuna risorsa; in caso contrario, si potrebbero introdurre delle perdite. Uso [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) quando possibile, come illustrato nell'esempio seguente. Questo esempio è volutamente finto e semplicistico per evidenziare le differenze quando viene usato `shared_ptr`.  
  
```cpp  
// old-style new/delete version  
class NDResourceClass {  
private:  
    int*   m_p;  
    float* m_q;  
public:  
    NDResourceClass() : m_p(0), m_q(0) {  
        m_p = new int;  
        m_q = new float;  
    }  
  
    ~NDResourceClass() {  
        delete m_p;  
        delete m_q;  
    }  
    // Potential leak! When a constructor emits an exception,   
    // the destructor will not be invoked.     
};  
  
// shared_ptr version  
#include <memory>  
  
using namespace std;  
  
class SPResourceClass {  
private:  
    shared_ptr<int> m_p;  
    shared_ptr<float> m_q;  
public:  
    SPResourceClass() : m_p(new int), m_q(new float) { }  
    // Implicitly defined dtor is OK for these members,   
    // shared_ptr will clean up and avoid leaks regardless.  
};  
  
// A more powerful case for shared_ptr  
  
class Shape {  
    // ...  
};  
  
class Circle : public Shape {  
    // ...  
};  
  
class Triangle : public Shape {  
    // ...  
};  
  
class SPShapeResourceClass {  
private:  
    shared_ptr<Shape> m_p;  
    shared_ptr<Shape> m_q;  
public:  
    SPShapeResourceClass() : m_p(new Circle), m_q(new Triangle) { }  
};  
```  
  
### <a name="use-the-raii-idiom-to-manage-resources"></a>Utilizzare il linguaggio del modello RAII per gestire le risorse  
 Per essere indipendente dalle eccezioni, una funzione deve garantire che gli oggetti che ha allocato utilizzando `malloc` oppure **nuovi** vengano eliminati definitivamente e tutte le risorse, ad esempio gli handle di file vengano chiuse o rilasciate anche se viene generata un'eccezione. Il *Resource Acquisition Is Initialization* idioma (RAII) lega la gestione di tali risorse alla durata delle variabili automatiche. Quando una funzione va fuori ambito o restituendo un risultato normalmente o a causa di un'eccezione, vengono richiamati i distruttori per tutte le variabili automatiche completamente costruite. Un oggetto wrapper del modello RAII, come un puntatore intelligente, chiama la funzione di chiusura o di eliminazione appropriata nel proprio distruttore. Nel codice indipendente dalle eccezioni è estremamente importante passare la proprietà di ogni risorsa immediatamente a un tipo di oggetto RAII. Si noti che il `vector`, `string`, `make_shared`, `fstream`, e classi simili gestiscono l'acquisizione della risorsa per l'utente.  Tuttavia `unique_ptr` tradizionali `shared_ptr` costruzioni sono speciali perché viene eseguita l'acquisizione delle risorse dall'utente anziché l'oggetto; pertanto, vengono considerate come *risorsa di versione è l'eliminazione permanente* ma sono incerte come il modello RAII.  
  
## <a name="the-three-exception-guarantees"></a>Tre garanzie di eccezioni  
 In genere, protezione dalle eccezioni viene discussa in termini di tre garanzie di eccezione che può fornire una funzione: la *garanzia di nessun errore*, il *garanzia solida*e il *garanzia di base* .  
  
### <a name="no-fail-guarantee"></a>Garanzia di nessun errore  
 La garanzia di nessun errore o di nessuna generazione è la garanzia più forte che una funzione possa offrire. Dichiara che la funzione non genererà eccezioni o non consentirà la propagazione di eccezioni. Tuttavia, non è possibile fornire in modo affidabile una garanzia a meno che (a) non sia noto che anche tutte le funzioni chiamate da tale funzione siano senza errori o (b) sia noto che tutte le eccezioni generate vengono intercettate prima che raggiungano questa funzione o (c) sia noto come intercettare e gestire correttamente tutte le eccezioni che potrebbero raggiungere questa funzione.  
  
 Sia la garanzia solida che quella di base si basano sul presupposto che i distruttori non contengano errori. Tutti i contenitori e i tipi nella libreria standard garantiscono che i propri distruttori non vengano generati. Esiste anche un requisito inverso: la libreria standard richiede che i tipi definiti dall'utente forniti (ad esempio, come argomenti di modello) debbano avere distruttori non generanti.  
  
### <a name="strong-guarantee"></a>Garanzia solida  
 Questa garanzia stabilisce che se una funzione esce dall'ambito a causa di un'eccezione, non perderà memoria e lo stato del programma non verrà modificato. Una funzione che fornisce una garanzia solida è essenzialmente una transazione che presenta la semantica di commit o di rollback: o ha pienamente successo o non ha alcun effetto.  
  
### <a name="basic-guarantee"></a>Garanzia di base  
 Questa garanzia è la più debole fra le tre. Tuttavia, potrebbe essere la scelta migliore quando una garanzia solida è troppo dispendiosa in termini di consumo di memoria o di prestazioni. Questa garanzia stabilisce che se si verifica un'eccezione, non si verificano perdite di memoria e l'oggetto è ancora in uno stato utilizzabile anche se i dati potrebbero essere stati modificati.  
  
## <a name="exception-safe-classes"></a>Classi protette dalle eccezioni  
 Una classe può garantire la propria sicurezza dalla eccezioni, anche quando viene utilizzata da funzioni non sicure, impedendo la propria costruzione o la propria eliminazione permanente parziale. Se il costruttore della classe esce prima del completamento, l'oggetto non viene creato e il relativo distruttore non viene chiamato. Sebbene i distruttori delle variabili automatiche inizializzate prima dell'eccezione saranno richiamati, la memoria allocata dinamicamente o le risorse non gestite da un puntatore intelligente o da una variabile automatica simile verranno perse.  
  
 I tipi predefiniti sono tutti privi di errori e i tipi della libreria standard supportano come minimo la garanzia di base. Attenersi alle seguenti linee guida per qualsiasi tipo definito dall'utente che deve essere indipendente dalle eccezioni:  
  
-   Utilizzare i puntatori intelligenti o altri wrapper di tipo RAII per gestire tutte le risorse. Evitare la funzionalità di gestione delle risorse nel distruttore della classe perché non verrà richiamato se il costruttore genera un'eccezione. Tuttavia, se la classe è un gestore di risorse dedicato che controlla solo una risorsa, è possibile utilizzare il distruttore per gestire le risorse.  
  
-   Notare che un'eccezione generata in un costruttore di classe base non può essere inghiottita in un costruttore di classe derivata. Se si desidera convertire e generare nuovamente l'eccezione della classe base in un costruttore derivato, utilizzare un blocco try.   
  
-   Considerare la possibilità di archiviare lo stato delle classi in un membro dati di cui viene eseguito il wrapping in un puntatore intelligente, specialmente se una classe presenta un concetto di inizializzazione alla quale sono consentiti errori. Sebbene il linguaggio C++ lasci spazio per i membri dati non inizializzati, non supporta le istanze di classe non inizializzate o inizializzate parzialmente. Un costruttore deve avere esito positivo o negativo; non viene creato alcun oggetto se il costruttore non viene eseguito completamente.  
  
-   Non consentire alle eccezioni di uscire da un distruttore. Un assioma di base del linguaggio C++ afferma che i distruttori non dovrebbero mai consentire che un'eccezione si propaghi nello stack di chiamate. Se un distruttore deve eseguire un'operazione che potenzialmente genera un'eccezione, deve farlo in un blocco try-catch e inghiottire l'eccezione. La libreria standard garantisce questo comportamento per tutti i distruttori che definisce.  
  
## <a name="see-also"></a>Vedere anche  
 [Gli errori e la gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Procedura: Interfaccia tra codice eccezionale e non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)