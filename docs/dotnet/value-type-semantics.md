---
title: La semantica dei tipi di valore | Documenti Microsoft
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
ms.openlocfilehash: 44662f2ad8e79712b4aab17e2784a72e01ec4116
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="value-type-semantics"></a>Semantica dei tipi di valore
La semantica dei tipi di valore è cambiate rispetto alle estensioni gestite per C++ a Visual C++.  
  
 Di seguito è il tipo di valore canonico semplice utilizzato nelle estensioni gestite per specifiche di C++:  
  
```  
__value struct V { int i; };  
__gc struct R { V vr; };  
```  
  
 Nelle estensioni gestite, è possibile avere quattro varianti sintattiche di un tipo di valore (in form 2 e 3 sono semanticamente equivalenti):  
  
```  
V v = { 0 };       // Form (1)  
V *pv = 0;         // Form (2) an implicit form of (3)  
V __gc *pvgc = 0;  // Form (3)  
__box V* pvbx = 0; // Form (4) must be local   
```  
  
## <a name="invoking-inherited-virtual-methods"></a>Richiamo di metodi virtuali ereditati  
 `Form (1)` è l'oggetto valore canonico e si è ragionevolmente compresi appieno, tranne quando si tenta di richiamare un metodo virtuale ereditato, ad esempio `ToString()`. Ad esempio:  
  
```  
v.ToString(); // error!  
```  
  
 Per richiamare questo metodo, perché non è sottoposto a override `V`, il compilatore deve avere accesso alla tabella virtuale associata della classe di base. Poiché i tipi di valore sono in stato archiviazione senza il puntatore associato alla relativa tabella virtuale (vptr), è necessario che `v` essere boxed. Nella struttura del linguaggio estensioni gestite non è supportata la conversione boxing implicita ma devono essere specificati esplicitamente dal programmatore, come in  
  
```  
__box( v )->ToString(); // Managed Extensions: note the arrow  
```  
  
 Il principale obiettivo di questa struttura è formativo: il meccanismo sottostante deve essere visibile al programmatore in modo che questo possa comprendere il costo non fornisce un'istanza all'interno del tipo di valore. Sono stati `V` per contenere un'istanza di `ToString`, non è necessario la conversione boxing.  
  
 La complessità lessicale di conversione boxing in modo esplicito l'oggetto, ma non il costo sottostante del boxing stesso, verrà rimosse nella nuova sintassi:  
  
```  
v.ToString(); // new syntax  
```  
  
 ma a discapito probabilmente fuorviante per quanto riguarda il costo della mancata specifica di un'istanza esplicita della progettazione classi di `ToString` metodo all'interno di `V`. Boxing implicito il motivo è che mentre è in genere solo una progettazione di classi, esistono un numero illimitato di utenti, nessuno dei quali ha la possibilità di modificare `V` per eliminare il boxing esplicito potenzialmente oneroso.  
  
 I criteri determinare se visualizzare o meno fornire un'istanza di override `ToString` all'interno di un valore di classe deve essere la frequenza e la posizione dei relativi utilizzi. Se viene chiamato molto raramente, è ovviamente particolarmente vantaggioso nella relativa definizione. Analogamente, se viene chiamato in aree non ad alte prestazioni dell'applicazione, aggiunta non migliorerebbe aggiungerà per le prestazioni generali dell'applicazione. In alternativa, è possibile utilizzare un handle di rilevamento per il valore boxed, e chiamate tramite tale handle non richiedono la conversione boxing.  
  
## <a name="there-is-no-longer-a-value-class-default-constructor"></a>Non è più un costruttore predefinito della classe di valore  
 Un'altra differenza con un tipo di valore tra le estensioni gestite e la nuova sintassi è la rimozione del supporto per un costruttore predefinito. Infatti, esistono casi durante l'esecuzione in cui CLR può creare un'istanza del tipo di valore senza richiamare il costruttore predefinito associato. Vale a dire, il tentativo di estensioni gestite per supportare un costruttore predefinito all'interno di un tipo di valore potrebbe non essere garantito. Dato che assenza di garanzia, è stato ritenuto opportuno eliminare il supporto anziché essere non deterministico nell'applicazione.  
  
 Non si tratta come non valida come potrebbe sembrare inizialmente. Infatti, ogni oggetto di un tipo di valore viene automaticamente impostato su zero (ovvero, ogni tipo viene inizializzato sul valore predefinito). Di conseguenza, i membri di un'istanza locale non sono mai non definiti. In questo senso, la perdita della capacità di definire un costruttore predefinito semplice è realmente una perdita affatto - e in realtà è più efficiente se eseguite da CLR.  
  
 Il problema è quando un utente delle estensioni gestite definisce un costruttore predefinito non semplice. Questo è disponibile alcun mapping per la nuova sintassi. Il codice all'interno del costruttore sarà necessario eseguire la migrazione in un metodo di inizializzazione denominato che dovrebbe quindi essere richiamata in modo esplicito dall'utente.  
  
 In caso contrario, la dichiarazione di un oggetto di tipo di valore all'interno della nuova sintassi è invariata. Il lato negativo è che i tipi di valore non sono soddisfacenti per il ritorno a capo dei tipi nativi per i motivi seguenti:  
  
-   Non è previsto alcun supporto per un distruttore all'interno di un tipo di valore. Non vi è alcun modo per automatizzare un set di azioni attivate entro la fine della durata di un oggetto.  
  
-   Una classe nativa può essere contenuta solo all'interno di un tipo gestito come un puntatore che viene quindi allocato nell'heap nativo.  
  
 Si desidera eseguire il wrapping di una classe nativa in un tipo di valore anziché un tipo di riferimento per evitare un'allocazione di heap doppie: nell'heap nativo per il tipo nativo e l'heap di Common Language Runtime per il wrapper gestito. Il wrapping di una classe nativa all'interno di un tipo di valore consente di evitare l'heap gestito, ma non consente di automatizzare il recupero della memoria heap nativo. Tipi di riferimento sono l'unico tipo gestito all'interno del quale eseguire il wrapping delle classi native non semplice.  
  
## <a name="interior-pointers"></a>Puntatori interni  
 `Form (2)` e `Form (3)` possono fare riferimento a quasi tutti gli oggetti (vale a dire, qualsiasi elemento gestito o nativo). In tal caso, ad esempio, tutte le seguenti opzioni sono consentite nelle estensioni gestite:  
  
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
  
 In tal caso, un `V*` possono indirizzare una posizione all'interno di un blocco locale (e pertanto può essere inesatto), in ambito globale, all'interno di nativo dell'heap (ad esempio, se l'oggetto che indirizza è già stato eliminato), all'interno dell'heap di Common Language Runtime (e pertanto verrà registrata in caso rilocazione durante l'operazione di garbage collection) e all'interno di un oggetto di riferimento nell'heap di Common Language Runtime (un puntatore interno, questo metodo viene chiamato, viene anche in modo trasparente registrato).  
  
 Nelle estensioni gestite, non è possibile separare gli aspetti nativi di un `V*`; vale a dire, viene trattata in relativi inclusi, che gestisce la possibilità di esso che punta a un oggetto o un oggetto secondario nell'heap gestito.  
  
 Nella nuova sintassi, un puntatore al tipo di valore è inserito in due tipi: `V*`, limitato alle posizioni dell'heap non CLR e il puntatore interno `interior_ptr<V>`, che consente, ma non richiede un indirizzo nell'heap gestito.  
  
```  
// may not address within managed heap   
V *pv = 0;   
  
// may or may not address within managed heap  
interior_ptr<V> pvgc = nullptr;   
```  
  
 `Form (2)` e `Form (3)` delle estensioni gestite eseguire il mapping in `interior_ptr<V>`. `Form (4)` è un handle di rilevamento. Indirizza l'intero oggetto sottoposto a boxing all'interno dell'heap gestito. Viene convertito nella nuova sintassi in un `V^`,  
  
```  
V^ pvbx = nullptr; // __box V* pvbx = 0;    
```  
  
 Le dichiarazioni seguenti nelle estensioni gestite tutte associate a puntatori interni nella nuova sintassi. (Si tratta di tipi di valore all'interno di `System` dello spazio dei nomi.)  
  
```  
Int32 *pi;   // => interior_ptr<Int32> pi;  
Boolean *pb; // => interior_ptr<Boolean> pb;  
E *pe;       // => interior_ptr<E> pe; // Enumeration  
```  
  
 I tipi incorporati non sono considerati tipi gestiti, sebbene possano essere utilizzati come alias per i tipi all'interno di `System` dello spazio dei nomi. In questo modo, i seguenti mapping tra le estensioni gestite e la nuova sintassi:  
  
```  
int * pi;     // => int* pi;  
int __gc * pi2; // => interior_ptr<int> pi2;  
```  
  
 Quando si converte un `V*` nel programma esistente, la strategia più conservativa consiste nell'eseguirne sempre la trasformazione in un `interior_ptr<V>`. Questa è la tecnica applicata nelle estensioni gestite. Nella nuova sintassi, il programmatore ha la possibilità di limitare un tipo di valore a indirizzi di heap non gestito specificando `V*` anziché un puntatore interno. Se, durante la conversione del programma, è possibile eseguire una chiusura transitiva di tutti gli utilizzi e assicurarsi che nessun indirizzo assegnato sia all'interno dell'heap gestito, è consigliabile lasciare come `V*` funziona correttamente.  
  
## <a name="pinning-pointers"></a>Puntatori di blocco  
 Il garbage collector può talvolta spostare gli oggetti che risiedono nell'heap CLR in diverse posizioni all'interno dell'heap, in genere durante la fase di compattazione. Questo movimento non è un problema di rilevamento handle, riferimenti di rilevamento e puntatori interni che aggiornano queste entità in modo trasparente. Questo spostamento è un problema, tuttavia, se l'utente ha passato l'indirizzo di un oggetto nell'heap CLR all'esterno dell'ambiente di runtime. In questo caso, lo spostamento dell'oggetto volatile è potrebbe provocare un errore di runtime. Per evitare che gli oggetti come questi vengano spostati, è necessario aggiungere in locale nel percorso per l'estensione per il loro utilizzo di fuori.  
  
 Nelle estensioni gestite, una *puntatore di blocco* è dichiarato specificando una dichiarazione di puntatore con il `__pin` (parola chiave). Di seguito è riportato un esempio leggermente modificato dalla specifica delle estensioni gestite:  
  
```  
__gc struct H { int j; };  
  
int main()   
{  
   H * h = new H;  
   int __pin * k = & h -> j;  
  
   // ...  
};  
```  
  
 Nella nuova progettazione lingua, un puntatore di blocco è dichiarato con una sintassi analoga a quella di un puntatore interno.  
  
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
  
 Un puntatore di blocco nella nuova sintassi è un caso speciale di un puntatore interno. I vincoli in un puntatore di blocco originali rimangono. Ad esempio non può essere utilizzato come parametro o tipo restituito di un metodo. può essere dichiarata solo in un oggetto locale. Un numero di vincoli aggiuntivi, tuttavia, è state aggiunte nella nuova sintassi.  
  
 Il valore predefinito di un puntatore di blocco è `nullptr`, non `0`. Oggetto `pin_ptr<>` non può essere inizializzata o assegnato `0`. Tutte le assegnazioni di `0` nel codice esistente dovrà essere modificato per `nullptr`.  
  
 È stato consentito un puntatore di blocco nelle estensioni gestite per risolvere un intero oggetto, come nell'esempio seguente, tratto dalla specifica delle estensioni gestite:  
  
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
 [Tipi di valore e i relativi comportamenti (C + c++ /CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)   
 [interior_ptr (C + c++ /CLI)](../windows/interior-ptr-cpp-cli.md)   
 [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)