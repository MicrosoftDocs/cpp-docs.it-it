---
title: Oggetto durata e la gestione delle risorse (C++ moderno) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8aa0e1a1-e04d-46b1-acca-1d548490700f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 634bef1bf9d2d3128497a1321631ca8665fed144
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32423496"
---
# <a name="object-lifetime-and-resource-management-modern-c"></a>Durata degli oggetti e gestione delle risorse (C++ moderno)
A differenza dei linguaggi gestiti, non dispone di operazione di garbage collection (GC), che quale rilascia automaticamente le risorse di memoria non più lungo-utilizzati durante l'esecuzione di un programma C++. In C++, la gestione delle risorse è direttamente correlata alla durata dell'oggetto. Questo documento descrive i fattori che influiscono sulla durata dell'oggetto in C++ e modalità di gestione.  
  
 C++ non dispone di GC principalmente poiché non gestire le risorse di memoria non. Solo i distruttori deterministici analoghe a quelle in C++ possono gestire risorse di memoria e memoria non ugualmente. GC dispone anche di altri problemi, ad esempio maggiore sovraccarico nella memoria e della CPU e località. Ma universalità è un problema fondamentale che non possa essere attenuato tramite ottimizzazioni appositamente.  
  
## <a name="concepts"></a>Concetti  
 Un aspetto importante nella gestione di durata degli oggetti è l'incapsulamento, quando ci si accinge utilizza un oggetto privo di sapere che cos'è il proprietario risorse tale oggetto, o come eliminarle o anche se possiede tutte le risorse affatto. È sufficiente eliminare l'oggetto. Il linguaggio di base di C++ è progettato per garantire che gli oggetti vengono eliminati i tempi corretti, vale a dire come blocchi terminati, in ordine inverso di costruzione. Quando viene eliminato un oggetto, i relativi membri e basi vengono eliminati in un ordine particolare.  Il linguaggio elimina automaticamente gli oggetti, a meno che non si svolgono operazioni speciali come allocazione di heap o l'operatore new di posizionamento.  Ad esempio, [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) come `unique_ptr` e `shared_ptr`, e come contenitori della libreria Standard C++ `vector`, incapsulare `new` / `delete` e `new[]` / `delete[]` negli oggetti, che dispongono di distruttori. Ecco perché è così importante utilizzare puntatori intelligenti e i contenitori della libreria Standard C++.  
  
 Un altro concetto importante nella gestione della durata: distruttori. I distruttori incapsulano rilascio della risorsa.  (Il tasto di scelta rapida utilizzato è RRID, distruzione è rilascio di risorse).  Una risorsa è un elemento che si ottengono dal "system" e specificare in un secondo momento.  La memoria è la risorsa più comune, ma esistono anche i file, socket, le trame e altre risorse di memoria non. "Proprietario" di una risorsa, significa che è possibile utilizzare quando è necessario ma è anche possibile per rilasciarlo quando si è terminato con esso.  Quando viene eliminato un oggetto, il relativo distruttore rilascia le risorse che di proprietà.  
  
 Il concetto finale è DAG (grafico aciclico diretto).  La struttura di proprietà in un programma costituisce un DAG. Nessun oggetto possibile proprietario di se stesso, ovvero che non è solo possibile ma anche intrinsecamente non significativo. Ma i due oggetti possono condividere la proprietà di un terzo oggetto.  Diversi tipi di collegamenti sono possibili in un DAG simile al seguente: è un membro di B (B è il proprietario A), C archivi un `vector<D>` (C proprietario di ogni elemento D), E archivia un `shared_ptr<F>` (E condivide la proprietà di F, possibilmente con altri oggetti), e così via.  Fino a quando non esistono alcun ciclo e ogni collegamento nel DAG è rappresentato da un oggetto che ha un distruttore (anziché un puntatore non elaborato, handle o un altro meccanismo), quindi la perdita di risorse è impossibile perché la lingua impedisce loro. Le risorse vengono rilasciate immediatamente dopo che sono più necessari, senza un garbage collector in esecuzione. La durata di rilevamento è senza il sovraccarico per ambito di stack, basi, membri e casi correlati e conveniente per `shared_ptr`.  
  
### <a name="heap-based-lifetime"></a>Durata basati sull'heap  
 Per la durata degli oggetti dell'heap, utilizzare [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md). Utilizzare `shared_ptr` e `make_shared` come l'indicatore di misura predefinito e all'allocatore. Utilizzare `weak_ptr` cicli di interruzione, eseguire la memorizzazione nella cache e osservare gli oggetti senza influire su o presupponendo assolutamente relativa durata.  
  
```cpp  
void func() {  
  
auto p = make_shared<widget>(); // no leak, and exception safe  
...  
p->draw();   
  
} // no delete required, out-of-scope triggers smart pointer destructor  
  
```  
  
 Utilizzare `unique_ptr` per la proprietà univoca, ad esempio, nel *pimpl* linguaggio. (Vedere [Pimpl per incapsulamento in fase di compilazione](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md).) Rendere una `unique_ptr` la destinazione principale di tutti esplicita `new` espressioni.  
  
```cpp  
unique_ptr<widget> p(new widget());  
```  
  
 È possibile utilizzare i puntatori non elaborati per la proprietà non e osservazione. Un puntatore non proprietario può penzolare, ma non può provocare la perdita.  
  
```cpp  
class node {  
  ...  
  vector<unique_ptr<node>> children; // node owns children  
  node* parent; // node observes parent, which is not a concern  
  ...  
};  
node::node() : parent(...) { children.emplace_back(new node(...) ); }  
  
```  
  
 Quando ottimizzazione delle prestazioni è necessario, è necessario utilizzare *incapsulata ben* proprietario puntatori e chiamate esplicite da eliminare. Un esempio è quando si implementa la struttura di dati di basso livello.  
  
### <a name="stack-based-lifetime"></a>Durata basata su stack  
 Nel linguaggio C++ moderno, *ambito basato su stack* è un potente strumento per scrivere codice efficiente poiché combina automatico *durata stack* e *durata membro dati* con efficienza elevata: durata di rilevamento è essenzialmente gratuita di overhead. Durata dell'oggetto heap richiede la gestione manuale accurata e può essere l'origine delle perdite di risorse inefficienze, soprattutto quando si lavora con i puntatori non elaborati. Si consideri il codice, che illustra l'ambito basato su stack:  
  
```cpp  
class widget {  
private:  
    gadget g;   // lifetime automatically tied to enclosing object  
public:  
    void draw();  
};  
  
void functionUsingWidget () {  
    widget w;   // lifetime automatically tied to enclosing scope  
                // constructs w, including the w.g gadget member  
    // ...
    w.draw();  
    // ...
} // automatic destruction and deallocation for w and w.g  
  // automatic exception safety,   
  // as if "finally { w.dispose(); w.g.dispose(); }"  
```  
  
 Utilizzare con cautela una durata statica (statico globale e locale statica di funzione) perché possono verificarsi problemi. Cosa accade quando il costruttore di un oggetto globale genera un'eccezione? In genere, gli errori di app in modo che può essere difficile eseguire il debug. Ordine di costruzione risulta problematico per gli oggetti di durata statica e non è indipendente dalla concorrenza. Non solo è la costruzione di oggetti di un problema, ordine di distruzione può essere complessa, in particolare quando implicano un polimorfismo. Anche se l'oggetto o una variabile non è polimorfico e privo di costruzione/distruzione complessa ordinamento, è ancora presente il problema di concorrenza di thread-safe. Un'applicazione multithreading non è possibile modificare i dati in oggetti statici senza particolari precauzioni archiviazione locale di thread e blocchi di risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)