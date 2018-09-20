---
title: La semantica del tipo di valore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interior_ptr keyword [C++]
- virtual functions, value types
- inheritance, value types
- pinning pointers
- pin_ptr keyword [C++]
- __pin keyword
ms.assetid: 7f065589-ad25-4850-baf1-985142e35e52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 72dc6a613616d13e9ff92e8af0c39c63dfe63162
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413796"
---
# <a name="value-type-semantics"></a>Semantica dei tipi di valore

La semantica dei tipi di valore è stati modificati dalle estensioni gestite per C++ in Visual C++.

Ecco il tipo di valore semplici canonico usato nelle estensioni gestite per la specifica di C++:

```
__value struct V { int i; };
__gc struct R { V vr; };
```

Nelle estensioni gestite, possiamo quattro varianti sintattiche di un tipo valore (in cui forms 2 e 3 sono semanticamente equivalenti):

```
V v = { 0 };       // Form (1)
V *pv = 0;         // Form (2) an implicit form of (3)
V __gc *pvgc = 0;  // Form (3)
__box V* pvbx = 0; // Form (4) must be local
```

## <a name="invoking-inherited-virtual-methods"></a>Richiamo di metodi virtuali ereditati

`Form (1)` rappresenta l'oggetto valore canonico, e sia abbastanza ben chiaro, tranne quando qualcuno tenta di richiamare un metodo virtuale ereditato, ad esempio `ToString()`. Ad esempio:

```
v.ToString(); // error!
```

Per poter richiamare questo metodo, perché non vengono sostituiti `V`, il compilatore deve avere accesso alla tabella virtuale associata della classe di base. Poiché i tipi di valore sono in stato archiviazione senza il puntatore associato alla relativa tabella virtuale (vptr), è necessario che `v` eseguire la conversione boxing. Nella progettazione del linguaggio di estensioni gestite non è supportata la conversione boxing implicita ma devono essere specificati esplicitamente dal programmatore, come in

```
__box( v )->ToString(); // Managed Extensions: note the arrow
```

La principale motivazione alla base questa progettazione è formativo: il meccanismo sottostante deve essere visibile al programmatore in modo che questo possa comprendere il costo di non fornire un'istanza all'interno del tipo di valore. Sono stati `V` per contenere un'istanza di `ToString`, non è necessario la conversione boxing.

La complessità lessicale di conversione boxing in modo esplicito l'oggetto, ma non il costo sottostante della conversione boxing, verrà rimosse nella nuova sintassi:

```
v.ToString(); // new syntax
```

ma al costo possibilmente fuorviante per quanto riguarda il costo della mancata specifica di un'istanza esplicita della progettazione classi di `ToString` metodo all'interno di `V`. Boxing implicito il motivo è che mentre è in genere solo una progettazione di classi, sono presenti un numero illimitato di utenti, nessuno dei quali ha la possibilità di modificare `V` per eliminare il boxing esplicito possibilmente oneroso.

I criteri in base a cui si desidera determinare se visualizzare o meno fornire un'istanza di override `ToString` all'interno di un valore di classe deve essere la frequenza e la posizione dei relativi utilizzi. Se si parla molto raramente, è ovviamente pochi vantaggi nella propria definizione. Analogamente, se viene chiamato in aree non efficiente dell'applicazione, aggiungendolo non migliorerebbe aggiungerà le prestazioni generali dell'applicazione. In alternativa, una possibile mantenere un handle di rilevamento per il valore boxed e non richiede la conversione boxing chiamate tramite tale handle.

## <a name="there-is-no-longer-a-value-class-default-constructor"></a>Non è più disponibile un costruttore predefinito della classe di valore

Un'altra differenza con un tipo valore tra le estensioni gestite e la nuova sintassi è la rimozione del supporto per un costruttore predefinito. Questo avviene perché sono presenti in alcuni casi durante l'esecuzione in cui Common Language Runtime può creare un'istanza del tipo di valore senza richiamare il costruttore predefinito associato. Vale a dire, il tentativo di estensioni gestite per supportare un costruttore predefinito all'interno di un tipo valore potrebbe non in pratica essere garantito. Dato tale assenza di garanzia, si è ritenuto preferibile a eliminare il supporto anziché a potervi deterministica nell'applicazione.

Non si tratta come in passato inizialmente potrebbe sembrare. Infatti, ogni oggetto di un tipo valore viene automaticamente impostato su zero (vale a dire, ogni tipo viene inizializzato sul valore predefinito). Di conseguenza, i membri di un'istanza locale non sono mai non definiti. In questo senso, la perdita della possibilità di definire un costruttore predefinito semplice non effettivamente una perdita affatto - e in realtà è più efficace se eseguito da CLR.

Il problema è quando un utente di estensioni gestite definisce un costruttore predefinito non è semplice. Ciò non ha alcun mapping per la nuova sintassi. Il codice all'interno del costruttore dovrà eseguire la migrazione in un metodo di inizializzazione denominato che potrebbe essere necessari per essere richiamata in modo esplicito dall'utente.

In caso contrario, la dichiarazione di un oggetto tipo di valore all'interno della nuova sintassi rimane invariata. Il lato negativo è che i tipi di valore non sono valide per il wrapping dei tipi nativi per i motivi seguenti:

- Non vi è alcun supporto per un distruttore all'interno di un tipo di valore. Vale a dire, non è possibile automatizzare un set di azioni attivate entro la fine della durata di un oggetto.

- Una classe nativa può essere contenuta solo all'interno di un tipo gestito come un puntatore che viene quindi allocato nell'heap nativo.

Siamo lieti di eseguire il wrapping di una piccola classe nativa in un tipo di valore anziché un tipo di riferimento per evitare un'allocazione heap doppie: heap nativo per contenere il tipo nativo e l'heap di Common Language Runtime per contenere il wrapper gestito. Il wrapping di una classe nativa all'interno di un tipo di valore consente di evitare l'heap gestito, ma non consente di automatizzare il recupero della memoria dell'heap nativo. Tipi di riferimento sono l'unico tipo gestito all'interno del quale wrap classi native complesse.

## <a name="interior-pointers"></a>Puntatori interni

`Form (2)` e `Form (3)` possono fare riferimento a quasi tutti gli oggetti (ovvero, qualsiasi elemento gestito o nativo). Quindi, ad esempio, le condizioni seguenti sono consentite nelle estensioni gestite:

```
__value struct V { int i; };
__gc struct R { V vr; };

V v = { 0 };  // Form (1)
V *pv = 0;  // Form (2)
V __gc *pvgc = 0;  // Form (3)
__box V* pvbx = 0;  // Form (4)

R* r;

pv = &v;            // address a value type on the stack
pv = __nogc new V;  // address a value type on native heap
pv = pvgc;          // we are not sure what this addresses
pv = pvbx;          // address a boxed value type on managed heap
pv = &r->vr;        // an interior pointer to value type within a
                    //    reference type on the managed heap
```

Pertanto, un `V*` consentono di risolvere una posizione all'interno di un blocco locale e pertanto può essere inesatto, in ambito globale, all'interno di nativo dell'heap (ad esempio, se l'oggetto a cui punta è già stato eliminato), all'interno dell'heap di Common Language Runtime (e pertanto devono essere registrati in caso essere trasferito durante il processo di garbage collection) e all'interno di un oggetto di riferimento sull'heap di Common Language Runtime (un puntatore interno, questo viene chiamato, viene anche in modo trasparente registrato).

Nelle estensioni gestite, non è possibile per separare gli aspetti nativi di un `V*`; vale a dire, viene trattata in relativo inclusi, che gestisce la possibilità di esso che punta a un oggetto o una sotto-oggetto nell'heap gestito.

Nella nuova sintassi, un puntatore al tipo di valore è inserito in due tipi: `V*`, che è limitato a posizioni dell'heap non CLR e il puntatore interno `interior_ptr<V>`, che consente, ma non richiede un indirizzo all'interno dell'heap gestito.

```
// may not address within managed heap
V *pv = 0;

// may or may not address within managed heap
interior_ptr<V> pvgc = nullptr;
```

`Form (2)` e `Form (3)` delle estensioni gestite eseguire il mapping in `interior_ptr<V>`. `Form (4)` è un handle di rilevamento. Risolve l'intero oggetto sottoposto a boxing all'interno dell'heap gestito. Viene convertito nella nuova sintassi in un `V^`,

```
V^ pvbx = nullptr; // __box V* pvbx = 0;
```

Le dichiarazioni seguenti nelle estensioni gestite tutti i mapping per i puntatori interni nella nuova sintassi. (Si tratta di tipi di valore all'interno di `System` dello spazio dei nomi.)

```
Int32 *pi;   // => interior_ptr<Int32> pi;
Boolean *pb; // => interior_ptr<Boolean> pb;
E *pe;       // => interior_ptr<E> pe; // Enumeration
```

I tipi incorporati non sono considerati tipi gestiti, sebbene possano essere utilizzati come alias per i tipi all'interno di `System` dello spazio dei nomi. In questo modo i mapping seguenti valere anche tra le estensioni gestite e la nuova sintassi:

```
int * pi;     // => int* pi;
int __gc * pi2; // => interior_ptr<int> pi2;
```

Quando si converte un `V*` nel programma esistente, la strategia più conservativa consiste sempre impostarla su un `interior_ptr<V>`. Si tratta di come tale è stato considerato nelle estensioni gestite. Nella nuova sintassi, il programmatore non ha la possibilità di limitare un tipo di valore agli indirizzi dell'heap non gestito specificando `V*` piuttosto che un puntatore interno. Se, durante la conversione del programma, è possibile eseguire una chiusura transitiva di tutti gli utilizzi e assicurarsi che nessun indirizzo assegnato sia all'interno dell'heap gestito, è consigliabile lasciare come `V*` funziona correttamente.

## <a name="pinning-pointers"></a>Puntatori di blocco

Il garbage collector può facoltativamente spostare gli oggetti che risiedono nell'heap CLR in posizioni diverse all'interno dell'heap, in genere durante la fase di compattazione. Questo movimento non è un problema di rilevamento handle, riferimenti di rilevamento e puntatori interni che aggiornano queste entità in modo trasparente. Questo spostamento è un problema, tuttavia, se l'utente ha passato l'indirizzo di un oggetto nell'heap CLR all'esterno dell'ambiente di runtime. In questo caso, lo spostamento dell'oggetto volatile è può causare un errore di runtime. Per evitare che gli oggetti di questo spostamento, è necessario aggiungerli in locale nel percorso dell'extent del relativo utilizzo all'esterno.

Nelle estensioni gestite, una *puntatore di blocco* viene dichiarato per qualificare una dichiarazione di puntatore con il `__pin` (parola chiave). Di seguito è riportato un esempio leggermente modificato dalla specifica delle estensioni gestite:

```
__gc struct H { int j; };

int main()
{
   H * h = new H;
   int __pin * k = & h -> j;

   // ...
};
```

In Progettazione del linguaggio nuovo, un puntatore di blocco è dichiarato con una sintassi analoga a quella di un puntatore interno.

```
ref struct H
{
public:
   int j;
};

int main()
{
   H^ h = gcnew H;
   pin_ptr<int> k = &h->j;

   // ...
}
```

Un puntatore di blocco nella nuova sintassi è un caso speciale di un puntatore interno. I vincoli in un puntatore di blocco originali rimangono. Ad esempio, non può essere utilizzato come un parametro o tipo restituito di un metodo. può essere dichiarata solo in un oggetto locale. Un numero di vincoli aggiuntivi, tuttavia, è state aggiunte nella nuova sintassi.

Il valore predefinito di un puntatore di blocco viene `nullptr`, non `0`. Oggetto `pin_ptr<>` non possono essere inizializzati o assegnati `0`. Tutte le assegnazioni dei `0` nel codice esistente dovrà essere modificato per `nullptr`.

È stata permessa un puntatore di blocco nelle estensioni gestite per soddisfare un intero oggetto, come nell'esempio seguente, tratto dalla specifica delle estensioni gestite:

```
__gc class G {
public:
   void incr(int* pi) { pi += 1; }
};
__gc struct H { int j; };
void f( G * g ) {
   H __pin * pH = new H;
   g->incr(& pH -> j);
};
```

Nella nuova sintassi, il blocco dell'intero oggetto restituito dal `new` espressione non è supportata. Piuttosto, l'indirizzo del membro interno deve essere bloccata. Ad esempio,

```
ref class G {
public:
   void incr(int* pi) { *pi += 1; }
};
ref struct H { int j; };
void f( G^ g ) {
   H ^ph = gcnew H;
   Console::WriteLine(ph->j);
   pin_ptr<int> pj = &ph->j;
   g->incr(  pj );
   Console::WriteLine(ph->j);
}
```

## <a name="see-also"></a>Vedere anche

[Tipi di valore e relativi comportamenti (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)<br/>
[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)<br/>
[pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)