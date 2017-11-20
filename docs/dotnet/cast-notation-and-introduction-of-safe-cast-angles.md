---
title: Notazione cast e introduzione di safe_cast&lt; &gt; | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- casting
- C-style casts and /clr, motivation for new cast notation
- safe_cast keyword [C++]
ms.assetid: 4eb1d000-3b93-4394-a37b-8b8563f8dc4d
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 39ed82a6f63bb113a3fc80929e5b1f5ba57724c2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cast-notation-and-introduction-of-safecastltgt"></a>Notazione cast e introduzione di safe_cast&lt;&gt;
La notazione cast è stata modificata dalle estensioni gestite per C++ a Visual C++.  
  
 Modifica di una struttura esistente è un'esperienza più difficile e diversa rispetto alla creazione della struttura iniziale. Sono disponibili un minor numero di gradi di libertà e la soluzione tende verso un compromesso tra una ristrutturazione ideale e le modifiche realizzabili le dipendenze esistenti strutturale di base.  
  
 Estensione del linguaggio è un altro esempio. Nel 1990s anticipata come della programmazione orientata a oggetti è diventato un paradigma importante, la necessità di una funzionalità di downcast indipendente dai tipi in C++ è diventato premendo. Downcast è la conversione esplicita con l'utente di un puntatore della classe base o un riferimento a un puntatore o riferimento di una classe derivata. Il downcast richiede un cast esplicito. Il motivo è che il tipo effettivo del puntatore della classe base è un aspetto del runtime. il compilatore pertanto non è possibile archiviarlo. In alternativa, per altri termini, una funzionalità di downcast, come una chiamata di funzione virtuale richiede una forma di risoluzione dinamica. Questo genera le seguenti domande:  
  
-   Perché un downcast sarà necessario il paradigma orientata agli oggetti? Il meccanismo di funzione virtuale non è sufficiente? Vale a dire, perché non è uno di attestazione che tutte le esigenze per un downcast (o un cast di qualsiasi tipo) sono un errore di progettazione?  
  
-   Motivi per cui il supporto di un downcast deve essere un problema in C++? Dopo tutto, non è un problema in linguaggi orientati ad esempio Smalltalk (o, successivamente, Java e c#)? Che cos'è su C++ che rende il supporto di una funzionalità di downcast difficile?  
  
 Una funzione virtuale rappresenta un algoritmo di tipo dipendente comune a una famiglia di tipi. (Microsoft non stiamo esaminando le interfacce, che non sono supportati in ISO C++, ma sono disponibili nella programmazione CLR e rappresentano un'alternativa interessante di progettazione). Progettazione di tale famiglia in genere è rappresentata da una gerarchia di classi in cui è una classe base astratta dichiarando l'interfaccia comune (funzioni virtuali) e un set di classi derivate concrete che rappresentano i tipi effettivi di famiglia nell'applicazione dominio.  
  
 Oggetto `Light` gerarchia in un dominio di applicazione generati immagini CGI (Computer), ad esempio, disporrà di attributi comuni, ad esempio `color`, `intensity`, `position`, `on`, `off`e così via. È possibile controllare le luci diversi, tramite l'interfaccia comune senza doversi preoccupare se una determinata luce è un riflettore, una luce direzionale, luce non direzionale (si può pensare di sun) o forse una luce lo sportello di apertura. In questo caso, non è necessario eseguire il downcast a un particolare tipo light di esercitare interfaccia virtuale. In un ambiente di produzione, tuttavia, è essenziale velocità. Uno potrebbe downcast e richiamare in modo esplicito ogni metodo, se in tal modo l'esecuzione inline delle chiamate può essere eseguita anziché utilizzare il meccanismo virtuale.  
  
 In tal caso, un motivo per il downcast in C++ è il meccanismo virtuale in cambio un miglioramento significativo delle prestazioni di runtime di esclusione. (Si noti che l'automazione di questa ottimizzazione manuale è un'area di ricerca attiva. Tuttavia, è più difficile da risolvere rispetto all'utilizzo esplicito di `register` o `inline` (parola chiave).)  
  
 Un secondo motivo per il downcast scende di fuori duplice natura del polimorfismo. È possibile considerare il polimorfismo è viene suddiviso in una coppia passiva e dinamica del form.  
  
 Una chiamata virtuale (e una funzionalità di downcast) rappresentano usi dinamici del polimorfismo: uno esegue un'azione in base al tipo effettivo del puntatore della classe base in quell'istanza particolare durante l'esecuzione del programma.  
  
 Assegnazione di un oggetto classe derivata per il puntatore della classe di base, tuttavia, è una forma passiva di polimorfismo; Usa il polimorfismo come meccanismo di trasporto. Questo è l'utilizzo principale di `Object`, ad esempio, nella programmazione CLR pre-generica. Quando utilizzato passivamente, il puntatore della classe base scelto per l'archiviazione e di trasporto in genere offre un'interfaccia che è troppo astratta. `Object`, ad esempio, offre circa cinque metodi tramite la relativa interfaccia. qualsiasi comportamento più specifico richiede esplicita downcast. Ad esempio, se si desidera modificare l'angolo del riflettore oppure la relativa del fallback off, avremmo eseguire il downcast in modo esplicito. Un'interfaccia virtuale all'interno di una famiglia di sottotipi praticamente non può essere un superset di tutti i possibili metodi di numerosi elementi figlio, e pertanto una funzionalità di downcast sarà sempre necessario all'interno di un linguaggio orientato a oggetti.  
  
 Se un downcast indipendente funzionalità è necessaria in un linguaggio orientato a oggetti, quindi perché richiede C++ molto tempo per aggiungere uno? Il problema è in come rendere disponibili le informazioni che indicano il tipo di runtime dell'indicatore di misura. Nel caso di una funzione virtuale, le informazioni in fase di esecuzione sia configurate in due parti dal compilatore:  
  
-   L'oggetto della classe contiene un membro di puntatore tabella virtuale (all'inizio o alla fine dell'oggetto di classe; che dispone di una cronologia interessano in sé) che risolve la tabella virtuale appropriata. Ad esempio, un oggetto spotlight punta a una tabella virtuale spotlight, una luce direzionale, una tabella virtuale di luce direzionale e così via  
  
-   Ogni funzione virtuale è associato un fissa slot nella tabella e l'istanza effettiva da richiamare è rappresentata dall'indirizzo archiviato all'interno della tabella. Ad esempio, virtuale `Light` distruttore potrebbe essere associato allo slot 0, `Color` con slot 1 e così via. Si tratta di una strategia efficiente flessibile perché è configurato in fase di compilazione e determina un overhead minimo.  
  
 Il problema, quindi, viene illustrato come rendere disponibili le informazioni sul tipo per il puntatore senza modificare le dimensioni dei puntatori C++, tramite l'aggiunta di un secondo indirizzo o aggiungendo direttamente una qualche forma di codifica dei tipi. Ciò non sarebbe accettabile per i programmatori di applicazioni (e) che decide di non utilizzare il paradigma - orientata agli oggetti che la community degli utenti predominante. Un'altra possibilità è introdurre un puntatore speciale per i tipi di classe polimorfico, ma ciò potrebbe generare confusione e rendere difficoltosa la combinazione delle due, in particolare con problemi di aritmetica dei puntatori. Inoltre non sarebbe accettabile per mantenere una tabella in fase di esecuzione che associa ogni puntatore a tipo attualmente associato e l'aggiornamento dinamico.  
  
 Il problema è quindi una coppia di utenti aspirazioni di programmazione diverso. La soluzione deve essere un compromesso tra le due, che consente a ognuno non solo dei propri obiettivi e la possibilità di interagire. Ciò significa che le soluzioni offerte da entrambi i lati sono probabilmente computazionale e la soluzione infine implementata una perfetta. La risoluzione effettiva si basa sulla definizione di una classe polimorfica: una classe polimorfica è una classe che contiene una funzione virtuale. Supporta un downcast indipendente dai tipi dinamici. Ciò risolve il problema di gestione-di--come-indirizzo del puntatore perché le classi polimorfiche contengono un membro del puntatore aggiuntivo per la tabella virtuale associata. Le informazioni di tipo associato, pertanto, possono trovarsi in una struttura di tabella virtuale espanso. Il costo del downcast indipendente dai tipi è quasi esclusivamente agli utenti della funzione.  
  
 Il problema successivo con il downcast indipendente dai tipi è stata la relativa sintassi. Poiché si tratta di un cast, la proposta originale al comitato ISO C++ utilizzata la sintassi di cast non decorato, come nel seguente esempio:  
  
```  
spot = ( SpotLight* ) plight;  
```  
  
 ma questa è stata rifiutata dal comitato perché non consente all'utente di controllare il costo del cast. Se il downcast indipendente dai tipi dinamico è la stessa sintassi di unsafe in precedenza ma statica notazioni di cast, diventa una sostituzione e l'utente non è possibile eliminare l'overhead di runtime quando è non necessari e forse troppo costoso.  
  
 In generale, in C++, è sempre un meccanismo per la disattivazione delle funzionalità supportati dal compilatore. Ad esempio, è possibile disattivare il meccanismo virtuale utilizzando l'operatore di ambito di classe (`Box::rotate(angle)`) oppure richiamando il metodo virtuale tramite un oggetto di classe (anziché un puntatore o un riferimento di tale classe). L'eliminazione di quest'ultimo non è richiesto dal linguaggio ma qualità dell'implementazione, analogamente alla disattivazione della costruzione di una variabile temporanea in una dichiarazione del modulo:  
  
```  
// compilers are free to optimize away the temporary  
X x = X::X( 10 );  
```  
  
 In modo che la proposta è stata ritirata per ulteriori considerazioni e sono state valutate diverse notazioni alternative e quella ripristinata il comitato di stato del modulo (`?type`), per indicare l'indeterminato -, ovvero natura dinamica. Questo assegnato all'utente la possibilità di passare tra le due forme - statiche o dinamiche, ma non è stato particolarmente soddisfacente. Pertanto, è stata quindi la tavola da disegno. La notazione di terza e non riuscita è ora standard `dynamic_cast<type>`, che è stato generalizzato a un set di quattro nuove-notazioni di cast.  
  
 In C++ ISO `dynamic_cast` restituisce `0` quando applicato a un tipo di puntatore non appropriato e genera un `std::bad_cast` eccezione quando viene applicato a un tipo di riferimento. Nelle estensioni gestite per C++, l'applicazione `dynamic_cast` a un tipo di riferimento gestiti (a causa della rappresentazione del puntatore) sempre restituito `0`. `__try_cast<type>`è stato introdotto come un per la variante di eccezioni di `dynamic_cast`, ad eccezione del fatto che genera `System::InvalidCastException` se il cast ha esito negativo.  
  
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
  
 Nella nuova sintassi, `__try_cast` è stato eseguito il cast come `safe_cast`. Ecco stesso frammento di codice nella nuova sintassi:  
  
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
  
 Nell'ambiente gestito, è importante consentire il codice verificabile, limitando la capacità degli sviluppatori per eseguire il cast tra tipi in modo da lasciare il codice non verificabile. Questo è un aspetto critico del paradigma di programmazione dinamico, rappresentato dalla nuova sintassi. Per questo motivo, le istanze di cast di vecchio stile vengono sottoposte a internamente come cast in fase di esecuzione, in modo che, ad esempio:  
  
```  
// internally recast into the   
// equivalent safe_cast expression above  
( array<ItemVerb^>^ ) verbList->ToArray( ItemVerb::typeid );   
```  
  
 D'altra parte, poiché il polimorfismo fornisce sia attivo e la modalità passiva, è talvolta necessario eseguire un downcast semplicemente per ottenere l'accesso all'API di un sottotipo non virtuale. Questa situazione può verificarsi, ad esempio, con i membri di una classe che da risolvere qualsiasi tipo all'interno della gerarchia (polimorfismo passivo come meccanismo di trasporto), ma per cui è nota l'istanza effettiva in un contesto specifico del programma. In questo caso, un controllo in fase di esecuzione del cast può essere un overhead inaccettabile. Se la nuova sintassi è come i linguaggio di programmazione i sistemi gestiti, è necessario fornire un modo per consentire in fase di compilazione (vale a dire statici) downcast. Per tale motivo l'applicazione del `static_cast` notazione è consentita rimanere downcast in fase di compilazione:  
  
```  
// ok: cast performed at compile-time.   
// No run-time check for type correctness  
static_cast< array<ItemVerb^>^>(verbList->ToArray(ItemVerb::typeid));  
```  
  
 Il problema è possibile garantire che il programmatore di `static_cast` sia corretto e malintenzionati; ovvero, non è possibile forzare il codice gestito sia verificabile. Rappresenta un problema urgente più sotto il paradigma di programmazione dinamica rispetto a quello nativo, ma non è sufficiente all'interno di un sistema di linguaggio impedisce all'utente di programmazione il possibilità di passare da un statici e di eseguire il cast in fase di esecuzione.  
  
 È presente un trap di prestazioni e problema nella nuova sintassi, tuttavia. Nella programmazione nativa non vi è alcuna differenza nelle prestazioni tra la notazione cast di vecchio tipo e il nuovo stile `static_cast` notazione. Ma nella nuova sintassi, la notazione di cast precedente è molto più costosa rispetto all'utilizzo del nuovo stile `static_cast` notazione. Il motivo è che il compilatore trasforma internamente l'utilizzo della notazione precedente in un controllo in fase di esecuzione che genera un'eccezione. Inoltre, viene cambiata anche il profilo di esecuzione del codice viene generata un'eccezione non rilevata portare l'applicazione, ad esempio, in modo appropriato, poiché lo stesso errore non causerebbe l'eccezione se il `static_cast` individuata. Uno potrebbe sostenere che ciò consentirà agli utenti di produzione in utilizzando la nuova notazione. Ma solo quando non riesce; in caso contrario, genera i programmi che utilizzano il vecchio stile significativamente lento senza una conoscenza visibile di questo motivo, simili per i seguenti problemi di programmazione C:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche generali del linguaggio (C + c++ /CLI)](../dotnet/general-language-changes-cpp-cli.md)   
 [Cast di tipo C con /clr (C + c++ /CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)   
 [safe_cast](../windows/safe-cast-cpp-component-extensions.md)