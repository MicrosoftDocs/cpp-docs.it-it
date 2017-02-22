---
title: "Semantica dei tipi di valore | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__pin (parola chiave)"
  - "ereditarietà, tipi di valori"
  - "interior_ptr (parola chiave) [C++]"
  - "pin_ptr (parola chiave) [C++]"
  - "puntatori di blocco"
  - "funzioni virtual, tipi di valori"
ms.assetid: 7f065589-ad25-4850-baf1-985142e35e52
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Semantica dei tipi di valore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La semantica dei tipi di valore è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Di seguito è riportato il tipo di valore canonico semplice utilizzato nella specifica delle estensioni gestite per C\+\+:  
  
```  
__value struct V { int i; };  
__gc struct R { V vr; };  
```  
  
 Nelle estensioni gestite è possibile individuare quattro varianti sintattiche di un tipo di valore \(dove i form 2 e 3 sono semanticamente equivalenti\):  
  
```  
V v = { 0 };       // Form (1)  
V *pv = 0;         // Form (2) an implicit form of (3)  
V __gc *pvgc = 0;  // Form (3)  
__box V* pvbx = 0; // Form (4) must be local   
```  
  
## Chiamata dei metodi virtuali ereditati  
 `Form (1)` rappresenta l'oggetto valore canonico e viene, in genere, riconosciuto senza problemi, tranne quando si tenta di richiamare un metodo virtuale ereditato, ad esempio `ToString()`.  Di seguito è riportato un esempio.  
  
```  
v.ToString(); // error!  
```  
  
 Per richiamare questo metodo, che non è sottoposto a override in `V`, è necessario che il compilatore abbia accesso alla corrispondente tabella virtuale della classe base.  Poiché i tipi di valore sono archivi di stato interno senza il corrispondente puntatore alla relativa tabella virtuale \(vptr\), è necessario che `v` sia sottoposto a boxing.  La progettazione del linguaggio delle estensioni gestite non supporta il boxing implicito, che deve invece essere specificato esplicitamente dal programmatore, come in  
  
```  
__box( v )->ToString(); // Managed Extensions: note the arrow  
```  
  
 La motivazione primaria alla base di questa progettazione è didattica: il meccanismo sottostante deve essere visibile al programmatore in modo che questo possa comprendere il "costo" derivante dalla mancata specifica di un'istanza nell'ambito del tipo di valore.  Se `V` contenesse un'istanza di `ToString`, il boxing non sarebbe necessario.  
  
 La complessità lessicale connessa al boxing esplicito dell'oggetto, ma non il costo sottostante del boxing stesso, viene eliminata nella nuova sintassi:  
  
```  
v.ToString(); // new syntax  
```  
  
 con il rischio di trarre in inganno lo sviluppatore di classi in relazione al costo della mancata specifica di un'istanza esplicita del metodo `ToString` in `V`.  Il boxing implicito viene preferito perché sebbene generalmente esista un unico sviluppatore di classi, esiste tuttavia un numero illimitato di utenti, nessuno dei quali ha la possibilità di modificare `V` per eliminare il boxing esplicito potenzialmente oneroso.  
  
 I criteri in base a cui stabilire se specificare, o meno, un'istanza di override di `ToString` nell'ambito di una classe di valori dovrebbero essere la frequenza e la posizione dei relativi utilizzi.  Se la frequenza di chiamata è minima, la definizione di tale istanza non risulta particolarmente vantaggiosa.  Analogamente, se la chiamata viene eseguita nelle aree meno efficienti dell'applicazione, l'aggiunta dell'istanza non migliorerebbe in modo apprezzabile le prestazioni generali dell'applicazione.  In alternativa, è possibile utilizzare un handle di rilevamento relativo al valore boxed. Le chiamate eseguite attraverso tale handle non richiederebbero l'esecuzione del boxing.  
  
## Rimozione del costruttore predefinito delle classi di valori  
 Un'ulteriore differenza in termini di tipi di valore tra le estensioni gestite e la nuova sintassi consiste nell'eliminazione del supporto di un costruttore predefinito.  Questo è dovuto al fatto che, durante l'esecuzione, si verificano situazioni in cui CLR può creare un'istanza del tipo di valore senza richiamare il costruttore predefinito associato.  In altre parole, nell'ambito delle estensioni gestite il tentativo di supportare un costruttore predefinito all'interno di un tipo di valore non può garantire risultati effettivi.  A causa di tale assenza di garanzie, è stato considerato più opportuno eliminare il supporto piuttosto che mantenerlo in condizioni non deterministiche di applicazione.  
  
 Gli effetti reali di questa decisione sono meno negativi di quanto potesse sembrare inizialmente.  Questo perché ogni oggetto di un tipo di valore viene automaticamente impostato su zero \(ovvero, ogni tipo viene inizializzato sul relativo valore predefinito\).  Di conseguenza, i membri di un'istanza locale non risultano mai indefiniti.  In tal senso, la perdita della capacità di definire un costruttore predefinito semplice non equivale affatto a una perdita. L'esecuzione in CLR risulta infatti più efficiente.  
  
 Il problema si pone quando un utente delle estensioni gestite definisce un costruttore predefinito complesso,  poiché questo non dispone di un mapping alla nuova sintassi.  Il codice all'interno del costruttore deve essere migrato in un metodo di inizializzazione denominato che deve quindi essere richiamato esplicitamente dall'utente.  
  
 La dichiarazione di un oggetto tipo di valore all'interno della nuova sintassi rimane per il resto invariata.  Il lato negativo risiede nel fatto che i tipi di valore non offrono risultati soddisfacenti nel wrapping dei tipi nativi per i motivi seguenti:  
  
-   Nell'ambito di un tipo di valore non è previsto il supporto per un distruttore.  Di conseguenza, non è possibile automatizzare un insieme di azioni generate dalla conclusione del ciclo di vita di un oggetto.  
  
-   Una classe nativa può essere contenuta solo in un tipo gestito come puntatore, che viene quindi allocato nell'heap nativo.  
  
 Il risultato che si desidera ottenere è il wrapping di una piccola classe nativa in un tipo di valore anziché in un tipo di riferimento, in modo da evitare di duplicare l'allocazione per l'heap: l'heap nativo per il tipo nativo e l'heap CLR per il wrapper gestito.  Il wrapping di una classe nativa in un tipo di valore consente di evitare l'heap gestito, ma non permette di automatizzare la richiesta della memoria dell'heap nativo.  I tipi di riferimento rappresentano l'unico tipo gestito utilizzabile per il wrapping delle classi native complesse.  
  
## Puntatori interni  
 `Form (2)` e `Form (3)` possono fare riferimento a quasi tutti gli oggetti, sia gestiti che nativi.  Ad esempio, nelle estensioni gestite è consentito quanto segue:  
  
```  
__value struct V { int i; };  
__gc struct R { V vr; };  
  
V v = { 0 };  // Form (1)  
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
  
 Di conseguenza, `V*` può fare riferimento a una posizione in un blocco locale \(e quindi può essere sospeso\), in ambito globale, nell'heap nativo \(ad esempio se l'oggetto a cui si riferisce è già stato eliminato\), nell'heap CLR \(dove viene rilevata la necessità di spostamento durante un processo Garbage Collection\) e all'interno di un oggetto di riferimento nell'heap CLR \(anche il puntatore interno viene rilevato in modo trasparente\).  
  
 Nelle estensioni gestite non è possibile separare gli aspetti nativi di un `V*`, che viene infatti gestito globalmente e questo implica la possibilità che faccia riferimento a un oggetto o a un sotto\-oggetto nell'heap gestito.  
  
 Nella nuova sintassi i puntatori dei tipi di valore sono di due tipi: `V*`, limitato alle posizioni dell'heap non CLR, e il puntatore interno `interior_ptr<V>`, che consente, ma non richiede, un riferimento nell'heap gestito.  
  
```  
// may not address within managed heap   
V *pv = 0;   
  
// may or may not address within managed heap  
interior_ptr<V> pvgc = nullptr;   
```  
  
 `Form (2)` e `Form (3)` delle estensioni gestite sono mappati a `interior_ptr<V>`.  Il parametro `Form (4)` è un handle di rilevamento.  riferito all'intero oggetto sottoposto a boxing all'interno dell'heap gestito.  Nella nuova sintassi questo viene convertito in un `V^`,  
  
```  
V^ pvbx = nullptr; // __box V* pvbx = 0;    
```  
  
 Tutte le seguenti dichiarazioni presenti nelle estensioni gestite sono associate a puntatori interni nella nuova sintassi \(si tratta di tipi di valore nello spazio dei nomi `System`\).  
  
```  
Int32 *pi;   // => interior_ptr<Int32> pi;  
Boolean *pb; // => interior_ptr<Boolean> pb;  
E *pe;       // => interior_ptr<E> pe; // Enumeration  
```  
  
 I tipi incorporati non sono considerati tipi gestiti, sebbene possano essere utilizzati come alias per i tipi nello spazio dei nomi `System`.  Di conseguenza, i seguenti mapping tra le estensioni gestite e la nuova sintassi sono validi:  
  
```  
int * pi;     // => int* pi;  
int __gc * pi2; // => interior_ptr<int> pi2;  
```  
  
 Quando si converte un `V*` nel programma esistente, la strategia più conservativa consiste nell'eseguirne sempre la trasformazione in un `interior_ptr<V>`.  Questa è la tecnica applicata nelle estensioni gestite.  Nella nuova sintassi il programmatore può limitare un tipo di valore a indirizzi di heap non gestiti, specificando `V*` anziché un puntatore interno.  Se durante la conversione del programma risulta possibile eseguire una chiusura transitiva di tutti gli utilizzi del programma stesso ed essere certi che l'heap gestito non contenga alcun indirizzo assegnato, è consigliabile lasciare `V*` inalterato.  
  
## Puntatori di blocco  
 Il processo Garbage Collector può talvolta spostare gli oggetti inclusi nell'heap CLR in altre posizioni all'interno dell'heap. Questo si verifica, generalmente, durante una fase di compressione.  Questo movimento non rappresenta un problema per quanto riguarda handle di rilevamento, riferimenti di rilevamento e puntatori interni che aggiornano tali entità in modo trasparente.  Può tuttavia presentare difficoltà se l'utente ha passato l'indirizzo di un oggetto dell'heap CLR all'esterno dell'ambiente di runtime.  In questo caso, è probabile che il movimento volatile dell'oggetto provochi un errore di runtime.  Per evitare che gli oggetti di questo tipo vengano spostati, è necessario bloccarli localmente nella posizione in cui si trovano per l'intera durata dell'utilizzo esterno.  
  
 Per dichiarare un *puntatore di blocco* nelle estensioni gestite, è sufficiente qualificare una dichiarazione di puntatore utilizzando la parola chiave `__pin`.  Di seguito è riportato un esempio leggermente modificato rispetto alla specifica delle estensioni gestite:  
  
```  
__gc struct H { int j; };  
  
int main()   
{  
   H * h = new H;  
   int __pin * k = & h -> j;  
  
   // …  
};  
```  
  
 Nella nuova progettazione del linguaggio un puntatore di blocco viene dichiarato con una sintassi analoga a quella di un puntatore interno.  
  
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
  
   // …  
}  
```  
  
 Nella nuova sintassi un puntatore di blocco rappresenta un caso speciale di puntatore interno.  I vincoli originali relativi al puntatore di blocco rimangono inalterati.  Il puntatore di blocco non può ad esempio essere utilizzato come parametro o tipo restituito di un metodo, ma può solo essere dichiarato in un oggetto locale.  La nuova sintassi prevede, tuttavia, diversi vincoli aggiuntivi.  
  
 Il valore predefinito di un puntatore di blocco è `nullptr` e non `0`.  Non è possibile inizializzare un `pin_ptr<>` o assegnare a esso il valore `0`.  Tutte le assegnazioni di `0` nel codice esistente devono essere modificate in `nullptr`.  
  
 A un puntatore di blocco nelle estensioni gestite è consentito di fare riferimento a un intero oggetto, come illustrato nell'esempio seguente tratto dalla specifica delle estensioni gestite:  
  
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
  
 Nella nuova sintassi, il blocco dell'intero oggetto restituito dall'espressione `new` non è supportato.  Risulta invece necessario bloccare l'indirizzo del membro interno.  Di seguito è riportato un esempio:  
  
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
  
## Vedere anche  
 [Tipi di valore e relativi comportamenti \(C\+\+\/CLI\)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md)   
 [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md)