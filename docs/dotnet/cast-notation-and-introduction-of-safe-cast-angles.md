---
title: Notazione cast e introduzione di safe_cast&lt; &gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- casting
- C-style casts and /clr, motivation for new cast notation
- safe_cast keyword [C++]
ms.assetid: 4eb1d000-3b93-4394-a37b-8b8563f8dc4d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 88e8165bde08b65b4f078c4b48863c2088132fca
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427864"
---
# <a name="cast-notation-and-introduction-of-safecastltgt"></a>Notazione cast e introduzione di safe_cast&lt;&gt;

La notazione cast ha modificato dalle estensioni gestite per C++ in Visual C++.

Modifica di una struttura esistente è un'esperienza diversa e più difficile rispetto alla creazione della struttura iniziale. Esistono un minor numero di gradi di libertà e la soluzione tende verso un compromesso tra una ristrutturazione ideale e che cos'è praticabile dato le dipendenze esistenti strutturale.

Estensione del linguaggio è un altro esempio. Nel 1990s anticipata della programmazione orientata a oggetti è diventato un paradigma di importante, la necessità di uno stabilimento downcast indipendente dai tipi in C++ diventato pressione. Downcast è la conversione esplicita con utente di una classe di base puntatore o riferimento a un puntatore o riferimento di una classe derivata. Downcast richiede un cast esplicito. Il motivo è che il tipo effettivo dell'indicatore di misura della classe base è un aspetto del runtime; il compilatore di conseguenza non è possibile estrarlo. In alternativa, per altri termini, una funzionalità downcast, proprio come una chiamata di funzione virtuale richiede qualche forma di risoluzione dinamica. In tal modo viene generato due domande:

- Il motivo per cui un downcast non è necessario il paradigma orientato? Il meccanismo di funzione virtuale non è sufficiente? Vale a dire, il motivo per cui non è uno di attestazione che serva un downcast (o un cast di qualsiasi tipo) è un errore di progettazione?

- Il motivo per cui il supporto di un downcast deve essere un problema in C++? Dopo tutto, non è un problema in linguaggi orientati agli oggetti, ad esempio Smalltalk (o, successivamente, Java e c#)? Che cos'è su C++ che consente di supportare una funzionalità di downcast difficile?

Una funzione virtuale rappresenta un algoritmo di tipo dipendente comune a una famiglia di tipi. (Si sta non considerando di interfacce, che non sono supportati in ISO-c, ma sono disponibili nella programmazione CLR e che rappresentano un'interessante alternativa di progettazione). La progettazione di tale famiglia è in genere rappresentata da una gerarchia di classi in cui è presente una classe base astratta dichiarando l'interfaccia comune (funzioni virtuali) e un set di classi derivate concrete che rappresentano i tipi della famiglia effettivi nell'applicazione dominio.

Oggetto `Light` gerarchia in un dominio di applicazione generati Imagery CGI (Computer), ad esempio, sarà necessario, ad esempio gli attributi comuni `color`, `intensity`, `position`, `on`, `off`e così via. È possibile controllare diverse luci, usando l'interfaccia comune senza doversi preoccupare se un determinato punto luce è un argomento in primo piano, una luce direzionale, luce non direzionale (è possibile il sole) o forse una luce lo sportello di apertura. In questo caso, non è necessario eseguire il downcast a un determinato tipo light tenta di eseguire l'interfaccia virtuale. In un ambiente di produzione, tuttavia, è essenziale velocità. Uno potrebbe essere downcast e richiamare in modo esplicito ogni metodo se in tal modo l'esecuzione inline delle chiamate può essere eseguita invece di usare il meccanismo virtuale.

Pertanto, uno dei motivi per eseguire il downcast in C++ è l'esclusione del meccanismo virtuale in cambio un miglioramento significativo delle prestazioni di runtime. (Si noti che l'automazione di questa ottimizzazione manuale è un'area attiva della ricerca. Tuttavia, è più difficile da risolvere rispetto all'utilizzo esplicito del `register` o `inline` parola chiave.)

Un secondo motivo per eseguire il downcast non rientra più duplice natura del polimorfismo. Un modo per pensare a polimorfismo è viene suddivisa in una coppia di form passiva e dinamica.

Una chiamata virtuale (e una di downcast) rappresenta dinamici utilizzi di polimorfismo: uno esegue un'azione in base al tipo effettivo dell'indicatore di misura della classe base in quell'istanza particolare dell'esecuzione del programma.

Assegnazione di un oggetto classe derivata per il puntatore della classe di base, tuttavia, è una forma passiva di polimorfismo; Usa il polimorfismo come meccanismo di trasporto. Questo è l'uso principale di `Object`, ad esempio, della pre-generica programmazione CLR. Quando usato passivamente, il puntatore della classe base scelto per l'archiviazione e di trasporto in genere offre un'interfaccia che è troppo astratta. `Object`, ad esempio, offre circa cinque metodi tramite la relativa interfaccia. qualsiasi comportamento più specifico richiede un'esplicita downcast. Ad esempio, se si desidera regolare l'angolo della nostra vetrina oppure la relativa del fallback off, verrebbe dobbiamo eseguire il downcast in modo esplicito. Un'interfaccia virtuale all'interno di una famiglia di sottotipi di praticamente non può essere un superset di tutti i possibili metodi di numerosi elementi figlio e quindi, una funzionalità di downcast saranno sempre necessari all'interno di un linguaggio orientato a oggetti.

Se una cassaforte downcast funzionalità è necessaria in un linguaggio orientato a oggetti, quindi il motivo per cui è stato necessario C++ così tanto tempo per aggiungere uno? Il problema è come rendere disponibili le informazioni che indicano il tipo di runtime dell'indicatore di misura. Nel caso di una funzione virtuale, le informazioni di run-time sono impostare in due parti dal compilatore:

- L'oggetto classe contiene un puntatore membro aggiuntive nella tabella virtuale (sia all'inizio o alla fine dell'oggetto di classe; che ha una storia interessante in sé) che punta alla tabella virtuale appropriata. Ad esempio, un oggetto spotlight indirizzi una tabella virtuale contenuti in evidenza, luci direzionali, una tabella virtuale in luce direzionale e così via

- Ogni funzione virtuale è associato un fissa slot nella tabella e l'istanza effettiva per richiamare è rappresentato dall'indirizzo archiviato all'interno della tabella. Ad esempio, virtual `Light` distruttore può essere associato a uno slot 0, `Color` con nello slot 1 e così via. Questa è una strategia efficiente se inflessibili perché è configurato in fase di compilazione e determina un overhead minimo.

Il problema, quindi, viene illustrato come rendere disponibili le informazioni sul tipo per il puntatore senza modificarne le dimensioni di puntatori a C++, aggiungendo un secondo indirizzo o aggiungendo direttamente una sorta di codifica dei tipi. Questa non è accettabile per i programmatori (e i programmi) che decide di non usare il paradigma orientato - era ancora la community di utenti più diffusa. Un'altra possibilità è introdurre un puntatore speciale per i tipi di classe polimorfico, ma ciò potrebbe generare confusione e rendono difficile la combinazione di due, in particolare con i problemi di aritmetica dei puntatori. Inoltre non sarebbe accettabile per mantenere una tabella in fase di esecuzione che associa ciascun puntatore a tipo attualmente associato e aggiornarlo in modo dinamico.

Il problema è quindi una coppia di community di utenti che hanno aspirazioni di programmazione diversi. La soluzione deve essere un compromesso tra le due, consentendo a entrambe non solo dei propri obiettivi e la possibilità di interagire. Ciò significa che le soluzioni offerte da entrambi i lati possono risultare computazionale e implementare la soluzione infine essere minore di perfetto. La risoluzione effettiva si basa sulla definizione di una classe polimorfica: una classe polimorfica è uno che contiene una funzione virtuale. Una classe polimorfica supporta un downcast indipendente dai tipi dinamici. Questo risolve il problema di manutenzione-the--come-indirizzo del puntatore perché tutte le classi polimorfiche contengono tale membro puntatore supplementare per la tabella virtuale associata. Le informazioni sul tipo associati, pertanto, possono essere archiviati in una struttura di tabella virtuale espanso. Il costo del downcast indipendente dai tipi è (quasi) localizzato per gli utenti della funzionalità.

Il problema successivo con il downcast indipendente dai tipi è stata la relativa sintassi. Poiché si tratta di un cast, la proposta originale il comitato di ISO-c + + utilizzata la sintassi di cast non decorato, come nel seguente esempio:

```
spot = ( SpotLight* ) plight;
```

ma questo è stato rifiutato dal comitato perché non consentiva all'utente di controllare il costo del cast. Se il downcast indipendente dai tipi dinamico ha la stessa sintassi come in precedenza è il tipo unsafe ma statico notazioni di cast, diventa una sostituzione e l'utente non è in grado di eliminare il sovraccarico di runtime quando si è probabilmente troppo costose e non necessarie.

In generale, in C++, è sempre un meccanismo per la disattivazione delle funzionalità supportati dal compilatore. Ad esempio, è possibile disattivare il meccanismo virtuale usando l'operatore di ambito di classe (`Box::rotate(angle)`) o richiamando il metodo virtuale tramite un oggetto della classe (piuttosto che un puntatore o riferimento di tale classe). Questa eliminazione quest'ultimo non è richiesto dal linguaggio ma riguarda la qualità dell'implementazione, analogamente alla disattivazione della costruzione di una variabile temporanea in una dichiarazione del form:

```
// compilers are free to optimize away the temporary
X x = X::X( 10 );
```

La proposta è stata visualizzata nuovamente ulteriormente da tenere in considerazione, venivano considerate diverse notazioni alternative e quello visualizzato nuovamente il comitato di stato del modulo (`?type`), per indicare l'indeterminato - ovvero natura dinamica. Questo ha conferito all'utente la possibilità di passare tra le due forme - statiche o dinamiche, ma nessuno era particolarmente soddisfacente. Pertanto, è stata quindi la tavola da disegno. La notazione terza e il successo è ora standard `dynamic_cast<type>`, che è stato generalizzato in un set di quattro notazioni di cast di tipo nuovo.

In ISO-c `dynamic_cast` restituisce `0` quando applicato a un tipo di puntatore non appropriato e genera un `std::bad_cast` eccezione quando viene applicato a un tipo di riferimento. Nelle estensioni gestite per C++, applicando `dynamic_cast` a un tipo di riferimento gestita (a causa della rappresentazione del puntatore) sempre restituito `0`. `__try_cast<type>` è stato introdotto come un per l'eccezione variante di generazione di `dynamic_cast`, ad eccezione del fatto che genera `System::InvalidCastException` se il cast ha esito negativo.

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

Nella nuova sintassi `__try_cast` è stato eseguito il cast come `safe_cast`. Ecco lo stesso frammento di codice nella nuova sintassi:

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

In un ambiente gestito, è importante consentire codice verificabile, limitando la capacità degli sviluppatori per eseguire il cast tra tipi in modo da lasciare il codice non verificabile. Questo è un aspetto critico del paradigma di programmazione dinamico rappresentato dalla sintassi delle nuove. Per questo motivo, le istanze di cast di vecchio stile vengono sottoposte a internamente come cast in fase di esecuzione, in modo che, ad esempio:

```
// internally recast into the
// equivalent safe_cast expression above
( array<ItemVerb^>^ ) verbList->ToArray( ItemVerb::typeid );
```

D'altra parte, poiché il polimorfismo fornisce un oggetto attivo sia modalità passiva, è talvolta necessario effettuare un downcast solo per ottenere l'accesso all'API di un sottotipo non virtuale. Questa situazione può verificarsi, ad esempio, con i membri di una classe che da risolvere qualsiasi tipo all'interno della gerarchia (passivo polimorfismo come meccanismo di trasporto) ma di cui è noto l'istanza effettiva all'interno di un determinato contesto di programma. In questo caso, un controllo in fase di esecuzione del cast può essere un sovraccarico inaccettabile. Se la nuova sintassi deve essere usato come linguaggio di programmazione di sistemi gestiti, è necessario fornire un modo per consentire una fase di compilazione (vale a dire, statico) downcast. Ecco perché l'applicazione dei `static_cast` notation è consentito rimanere downcast in fase di compilazione:

```
// ok: cast performed at compile-time.
// No run-time check for type correctness
static_cast< array<ItemVerb^>^>(verbList->ToArray(ItemVerb::typeid));
```

Il problema è che non è possibile garantire che il programmatore di `static_cast` sia corretto e malintenzionati; vale a dire, non è possibile forzare il codice gestito sia verificabile. Ciò costituisce un problema più urgente sotto il paradigma di programmazione dinamica rispetto a quello nativo, ma non è sufficiente all'interno di un sistema di linguaggi di programmazione per non consentire all'utente la possibilità di attivare o disattivare tra statica e il cast in fase di esecuzione.

C'è tuttavia un problema nella nuova sintassi e una trap di prestazioni. Nella programmazione nativa non vi è alcuna differenza nelle prestazioni tra la notazione cast di vecchio tipo e il nuovo stile `static_cast` notation. Ma nella nuova sintassi, la notazione cast di vecchio tipo è molto più costosa rispetto all'utilizzo del nuovo stile- `static_cast` notation. Il motivo è che il compilatore trasforma internamente l'uso della notazione obsoleta in un controllo in fase di esecuzione che genera un'eccezione. Inoltre, viene cambiata anche il profilo di esecuzione del codice perché viene generata un'eccezione non rilevata portare l'applicazione, forse arma, ma lo stesso errore non causerebbe un eccezione se il `static_cast` individuata. Uno potrebbe sostenere che sarà così possibile prod gli utenti in uso la nuova notazione. Ma solo quando ha esito negativo; in caso contrario, si verificherà i programmi che usano la notazione di vecchio stile significativamente lento senza una conoscenza visibile del motivo della generazione, simile alle seguenti insidie programmatori C:

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

[Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)<br/>
[Cast di tipo C con /clr (C + + CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)<br/>
[safe_cast](../windows/safe-cast-cpp-component-extensions.md)