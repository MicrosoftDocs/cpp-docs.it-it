---
title: "Notazione cast e introduzione di safe_cast&lt;&gt; | Microsoft Docs"
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
helpviewer_keywords: 
  - "cast"
  - "cast di tipo C e /clr, motivazione per nuove notazioni di cast"
  - "safe_cast (parola chiave) [C++]"
ms.assetid: 4eb1d000-3b93-4394-a37b-8b8563f8dc4d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Notazione cast e introduzione di safe_cast&lt;&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La notazione cast è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 La modifica di una struttura esistente costituisce un processo diverso e in parte più difficoltoso rispetto alla creazione della struttura iniziale.  Si dispone di minore libertà e la soluzione tende verso un compromesso tra una ristrutturazione ideale e le modifiche realizzabili con le dipendenze strutturali esistenti.  
  
 L'estensione di un linguaggio costituisce un altro esempio.  All'inizio degli anni Novanta, con l'affermazione della programmazione orientata a oggetti come paradigma importante, l'esigenza di una funzionalità di downcast indipendente dai tipi in C\+\+ è diventata pressante.  Il downcast è la conversione definita in modo esplicito dall'utente di un puntatore o riferimento di una classe base in un puntatore o riferimento di una classe derivata.  Il downcast richiede un cast esplicito  perché il tipo effettivo del puntatore della classe base costituisce un aspetto del runtime e non può pertanto essere controllato dal compilatore.  In altri termini, una funzionalità di downcast, così come una chiamata di funzione virtuale, richiede una forma di risoluzione dinamica.  Ciò genera le seguenti domande:  
  
-   Perché è necessario un downcast nel paradigma orientato a oggetti?  Il meccanismo della funzione virtuale non è sufficiente?  Perché l'esigenza di un downcast o di un cast di qualsiasi tipo non può essere considerata come un errore di progettazione?  
  
-   Perché il supporto di un downcast dovrebbe costituire un problema in C\+\+?  Se non è un problema in linguaggi orientati a oggetti come Smalltalk o, successivamente, Java e C\#,  perché il supporto di una funzionalità di downcast risulta difficoltoso in C\+\+?  
  
 Una funzione virtuale rappresenta un algoritmo dipendente dal tipo che è comune a una famiglia di tipi \(non vengono qui considerate le interfacce, che non sono supportate nello standard ISO\-C\+\+ ma sono disponibili nella programmazione CLR e rappresentano un'interessante alternativa di progettazione\).  La progettazione di tale famiglia è in genere rappresentata da una gerarchia di classi comprendente una classe base astratta che dichiara l'interfaccia comune \(funzioni virtuali\) e un insieme di classi derivate concrete che rappresentano i tipi effettivi della famiglia nel dominio applicazione.  
  
 Una gerarchia `Light` in un dominio applicazione CGI \(Computer Generated Imagery\), ad esempio, disporrà di attributi comuni quali `color`, `intensity`, `position`, `on`, `off` e così via.  È possibile controllare diversi punti luce tramite l'interfaccia comune indipendentemente dal fatto che un determinato punto luce sia costituito da un riflettore, una luce direzionale, una luce non direzionale \(come la luce solare\) o un faretto.  In questo caso, eseguire il downcast in un determinato tipo di punto luce per sperimentarne l'interfaccia virtuale è non necessario.  In un ambiente di produzione, tuttavia, la velocità è essenziale.  È possibile eseguire il downcast e la chiamata esplicita di ciascun metodo, se in tal modo è possibile sfruttare l'esecuzione inline delle chiamate anziché utilizzare il meccanismo virtuale.  
  
 Un motivo per eseguire il downcast in C\+\+ è quindi rappresentato dalla disattivazione del meccanismo virtuale in cambio di un incremento significativo delle prestazioni di runtime. L'automazione di questa ottimizzazione manuale costituisce un'area attiva di ricerca.  La risoluzione risulta tuttavia più difficoltosa rispetto all'utilizzo esplicito della parola chiave `register` o `inline`.  
  
 Un secondo motivo per eseguire il downcast deriva dalla natura duale del polimorfismo.  Il polimorfismo può essere considerato nei termini di una divisione in una coppia passiva e dinamica di forme.  
  
 Una chiamata virtuale e una funzionalità di downcast rappresentano usi dinamici del polimorfismo, che prevedono l'esecuzione di un'azione basata sul tipo effettivo del puntatore della classe base in una determinata istanza nell'esecuzione del programma.  
  
 L'assegnazione di un oggetto classe derivata al relativo puntatore della classe base costituisce invece una forma passiva di polimorfismo, in cui il polimorfismo viene utilizzato come meccanismo di trasporto.  Si tratta, ad esempio, del principale utilizzo di `Object` nella programmazione CLR pre\-generica.  Se utilizzato in modo passivo, il puntatore della classe base selezionato per il trasporto e l'archiviazione offre in genere un'interfaccia eccessivamente astratta.  `Object`, ad esempio, offre approssimativamente cinque metodi tramite la relativa interfaccia. Per qualsiasi comportamento più specifico è necessario un downcast esplicito.  Se ad esempio si desidera regolare l'angolo del riflettore oppure la relativa caduta di luce, sarà necessario eseguire un downcast esplicito.  Poiché un'interfaccia virtuale all'interno di una famiglia di sottotipi non può corrispondere a un superset di tutti i possibili metodi dei numerosi elementi figlio, in un linguaggio orientato a oggetti sarà sempre necessaria una funzionalità di downcast.  
  
 Nonostante una funzionalità di downcast affidabile sia necessaria in un linguaggio orientato a oggetti, in C\+\+ è stata aggiunta dopo una notevole quantità di tempo.  Il problema è infatti rappresentato dalle modalità con cui vengono rese disponibili le informazioni relative al tipo in fase di esecuzione del puntatore.  Nel caso di una funzione virtuale, le informazioni di runtime vengono impostate dal compilatore in due parti:  
  
-   l'oggetto classe contiene un membro puntatore a tabella virtuale \(all'inizio o alla fine dell'oggetto classe\) indirizzato alla tabella virtuale appropriata,  ad esempio un oggetto riflettore è indirizzato a una tabella virtuale di riflettore, una luce direzionale è indirizzata a una tabella virtuale di luce direzionale e così via  
  
-   a ciascuna funzione virtuale è associato uno slot fisso nella tabella e l'istanza effettiva da richiamare è rappresentata dall'indirizzo archiviato all'interno della tabella.  È ad esempio possibile che il distruttore `Light` virtuale sia associato allo slot 0, `Color` allo slot 1 e così via.  Sebbene poco flessibile, questa strategia si rivela efficiente poiché viene impostata in fase di compilazione e determina un overhead minimo.  
  
 Il problema consiste quindi nel rendere disponibili le informazioni sui tipi per il puntatore senza modificare le dimensioni dei puntatori C\+\+, ad esempio aggiungendo un secondo indirizzo o aggiungendo direttamente una codifica relativa ai tipi.  Questa soluzione non sarebbe infatti accettabile per i programmatori e i programmi che non utilizzano il paradigma orientato a oggetti, che continuavano a costituire una percentuale di utenti significativa.  Un'altra possibilità consisteva nell'introdurre uno speciale puntatore per tipi classe polimorfici, ma avrebbe generato confusione rendendone estremamente difficoltosa la combinazione e causando problemi soprattutto con l'aritmetica dei puntatori.  Non sarebbe inoltre stato accettabile mantenere una tabella di runtime abbinando ciascun puntatore al tipo attualmente associato ed eseguendone l'aggiornamento dinamico.  
  
 Il problema è quindi rappresentato dalla presenza di community di utenti con aspirazioni di programmazione diverse.  La soluzione deve essere un compromesso tra le due community, in grado di garantire a ciascuna il raggiungimento dei propri obiettivi e l'interoperabilità.  È pertanto probabile che le soluzioni offerte da entrambe le parti non siano realizzabili e che la soluzione infine implementata non sia perfetta.  La risoluzione effettiva è basata sulla definizione di una classe polimorfica, ovvero una classe che contiene una funzione virtuale  e supporta un downcast indipendente dai tipi dinamico.  Viene così risolto il problema del mantenimento del puntatore come indirizzo, poiché le classi polimorfiche contengono un membro puntatore aggiuntivo per la tabella virtuale associata.  Le informazioni sui tipi associate possono pertanto essere archiviate in una struttura di tabella virtuale estesa.  Il costo del downcast indipendente dai tipi è limitato quasi esclusivamente agli utenti della funzionalità.  
  
 Il successivo problema relativo al downcast indipendente dai tipi è stato la sintassi.  Poiché si tratta di un cast, nella proposta originale al comitato ISO\-C\+\+ veniva utilizzata la sintassi di cast semplice, come illustrato nel seguente esempio:  
  
```  
spot = ( SpotLight* ) plight;  
```  
  
 Tale soluzione è stata tuttavia rifiutata dal comitato, poiché non consentiva all'utente di controllare il costo del cast.  Se il downcast indipendente dai tipi dinamico utilizza la stessa sintassi della precedente notazione di cast non affidabile ma statica, diventa una sostituzione e l'utente non è in grado di eliminare l'overhead di runtime quando è superfluo e forse troppo impegnativo.  
  
 In generale, in C\+\+ è sempre disponibile un meccanismo per la disattivazione delle funzionalità supportate dal compilatore.  È ad esempio possibile disattivare il meccanismo virtuale utilizzando l'operatore dell'ambito della classe `Box::rotate(angle)` oppure richiamando il metodo virtuale tramite un oggetto di classe \(un puntatore o un riferimento di tale classe\).  Questo secondo tipo di disattivazione non è richiesto dal linguaggio ma riguarda la qualità dell'implementazione, analogamente alla disattivazione della costruzione di un elemento temporaneo in una dichiarazione nel seguente formato:  
  
```  
// compilers are free to optimize away the temporary  
X x = X::X( 10 );  
```  
  
 La proposta è stata quindi riconsiderata e sono state valutate diverse notazioni alternative. La soluzione sottoposta al comitato presentava il formato \(`?type`\), che ne indicava la natura indeterminata e dinamica.  Veniva così offerta all'utente la possibilità di passare da una forma all'altra, statica o dinamica, ma la soluzione non era particolarmente soddisfacente.  È stata quindi rielaborata.  La terza notazione è stata approvata e costituisce ora lo standard `dynamic_cast<type>`, che è stato generalizzato in un insieme di quattro nuove notazioni di cast.  
  
 Nello standard ISO C\+\+, `dynamic_cast` restituisce `0` se applicato a un tipo di puntatore non appropriato e genera un'eccezione `std::bad_cast` se applicato a un tipo di riferimento.  Nelle estensioni gestite per la sintassi C\+\+, l'applicazione di `dynamic_cast` a un tipo di riferimento gestito \(a causa della relativa rappresentazione del puntatore\) ha sempre restituito `0`.  `__try_cast<type>` è stato introdotto come equivalente alla variante, che genera eccezioni di `dynamic_cast`, tranne per il fatto che genera l'eccezione `System::InvalidCastException` se il cast ha esito negativo.  
  
```  
public __gc class ItemVerb;  
public __gc class ItemVerbCollection {  
public:  
   ItemVerb *EnsureVerbArray() [] {  
      return __try_cast<ItemVerb *[]>  
         (verbList->ToArray(__typeof(ItemVerb *)));  
   }  
};  
```  
  
 Nella nuova sintassi, è stato eseguito il cast di `__try_cast` come `safe_cast`.  Di seguito viene riportato lo stesso frammento di codice nella nuova sintassi:  
  
```  
public ref class ItemVerb;  
public ref class ItemVerbCollection {  
public:  
   array<ItemVerb^>^ EnsureVerbArray() {  
      return safe_cast<array<ItemVerb^>^>  
         ( verbList->ToArray( ItemVerb::typeid ));  
   }  
};  
```  
  
 In un ambiente gestito, è importante garantire codice verificabile limitando la capacità degli sviluppatori di eseguire cast tra tipi in modo da lasciare codice non verificabile.  Si tratta di un aspetto critico del paradigma di programmazione dinamico rappresentato dalla nuova sintassi.  Per tale motivo, le istanze dei cast precedenti vengono sottoposte a cast interno come cast di runtime, in modo da ottenere ad esempio:  
  
```  
// internally recast into the   
// equivalent safe_cast expression above  
( array<ItemVerb^>^ ) verbList->ToArray( ItemVerb::typeid );   
```  
  
 Poiché il polimorfismo fornisce d'altronde sia una modalità attiva che una modalità passiva, è talvolta necessario eseguire un downcast semplicemente per ottenere l'accesso all'API non virtuale di un sottotipo.  Ciò può ad esempio verificarsi con membri di una classe per i quali è previsto l'indirizzamento a qualsiasi tipo all'interno della gerarchia \(polimorfismo passivo come meccanismo di trasporto\) ma per i quali è conosciuta l'istanza effettiva in un determinato contesto di programma.  In tal caso, un controllo di runtime del cast rappresenta un overhead inaccettabile.  Per fungere da linguaggio di programmazione di sistemi gestiti, la nuova sintassi deve fornire una forma di downcast statico in fase di compilazione.  Per tale motivo viene consentito il mantenimento dell'applicazione della notazione `static_cast` come downcast in fase di compilazione:  
  
```  
// ok: cast performed at compile-time.   
// No run-time check for type correctness  
static_cast< array<ItemVerb^>^>(verbList->ToArray(ItemVerb::typeid));  
```  
  
 Il problema è rappresentato dall'impossibilità di garantire che `static_cast` venga utilizzato correttamente da un programmatore autorizzato. Non è infatti possibile imporre la verificabilità del codice gestito.  Questa problematica si rivela più urgente con il paradigma di programmazione dinamico rispetto a quello nativo, ma non è sufficiente per disabilitare nel linguaggio di programmazione di sistemi la possibilità dell'utente di passare da un cast statico a un cast di runtime e viceversa.  
  
 Nella nuova sintassi è tuttavia presente un problema a livello di prestazioni.  Nella programmazione nativa non esistono differenze di prestazioni tra la notazione di cast precedente e la nuova notazione `static_cast`.  Nella nuova sintassi, tuttavia, la notazione di cast precedente risulta notevolmente più impegnativa rispetto all'utilizzo della nuova notazione `static_cast`,  poiché il compilatore trasforma internamente l'utilizzo della notazione precedente in un controllo di runtime che genera un'eccezione.  Modifica inoltre il profilo di esecuzione del codice, poiché genera un'eccezione non individuata che arresta l'applicazione. Sebbene ciò possa risultare appropriato, lo stesso errore non causerebbe tale eccezione se venisse utilizzata la notazione `static_cast`.  Si potrebbe concludere che questo aspetto favorirà l'utilizzo della nuova notazione da parte degli utenti in ambienti di produzione.  Se non si verifica un errore, tuttavia, l'esecuzione dei programmi che utilizzano la notazione precedente risulterà significativamente rallentata senza alcun motivo visibile, analogamente ai seguenti problemi per i programmatori in C:  
  
```  
// pitfall # 1:   
// initialization can remove a temporary class object,   
// assignment cannot  
Matrix m;  
m = another_matrix;  
  
// pitfall # 2: declaration of class objects far from their use  
Matrix m( 2000, 2000 ), n( 2000, 2000 );  
if ( ! mumble ) return;  
```  
  
## Vedere anche  
 [Modifica generale del linguaggio](../dotnet/general-language-changes-cpp-cli.md)   
 [C\-Style Casts with \/clr \(C\+\+\/CLI\)](../windows/c-style-casts-with-clr-cpp-cli.md)   
 [safe\_cast](../windows/safe-cast-cpp-component-extensions.md)