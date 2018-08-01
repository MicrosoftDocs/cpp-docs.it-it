---
title: Oggetto durata e la gestione delle risorse (C++ moderno) | Microsoft Docs
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
ms.openlocfilehash: 365f9196f3d482098c29bf4b04610120ecbbeec4
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406042"
---
# <a name="object-lifetime-and-resource-management-modern-c"></a>Durata degli oggetti e gestione delle risorse (C++ moderno)
A differenza dei linguaggi gestiti, C++ non dispone di operazione di garbage collection (GC), che rilascia automaticamente le risorse di memoria non più utilizzati di come viene eseguito un programma. In C++, la gestione delle risorse è direttamente correlata alla durata dell'oggetto. Questo documento descrive i fattori che influiscono sulla durata dell'oggetto in C++ e come gestirli.  
  
 C++ non dispone di GC principalmente perché non è di gestire le risorse di memoria non. Solo i distruttori deterministici, come quelli in C++ possono gestire le risorse di memoria e memoria non altrettanto. Garbage Collector ha anche ad altri problemi, ad esempio un sovraccarico superiore in memoria e utilizzo della CPU e la località. Ma universalità comporta un problema che non può essere ridotta tramite ottimizzazioni clever.  
  
## <a name="concepts"></a>Concetti  
 Un elemento importante nella gestione di durata degli oggetti è l'incapsulamento, chiunque usi un oggetto privo di sapere quali risorse di tale oggetto è il proprietario, o come eliminarle o persino se possiede tutte le risorse affatto. È sufficiente che l'eliminazione dell'oggetto. Il linguaggio di base di C++ è progettato per garantire che gli oggetti vengono eliminati nei momenti corrette, vale a dire, come i blocchi sono è stata chiusa, in ordine inverso di costruzione. Quando un oggetto viene eliminato definitivamente, relative basi e membri vengono eliminati definitivamente in un ordine particolare.  Il linguaggio elimina automaticamente gli oggetti, se non si effettua importanti, ad esempio l'allocazione dell'heap o la nuova posizione.  Ad esempio, [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) , ad esempio `unique_ptr` e `shared_ptr`, e i contenitori della libreria Standard C++, ad esempio `vector`, incapsulare **nuovo** /  **eliminare** e `new[]` / `delete[]` negli oggetti che hanno dei distruttori. Ecco perché è così importante usare puntatori intelligenti e i contenitori della libreria Standard C++.  
  
 Un altro concetto importante nella gestione della durata: distruttori. I distruttori incapsulano rilascio della risorsa.  (Il generalmente utilizzato tasto di scelta è RRID, risorsa di versione è l'eliminazione permanente).  Una risorsa è un elemento che si ottengono dal "sistema" e di riepilogare in un secondo momento.  La memoria è la risorsa più comune, ma esistono anche file, socket, trame e altre risorse di memoria non. Una risorsa "proprietario" significa che è possibile usare quando è necessario ma è anche possibile rilasciarlo quando hai finito con esso.  Quando viene eliminato un oggetto, il relativo distruttore rilascia le risorse che il proprietario.  
  
 Il concetto finale è il grafo aciclico diretto (grafico aciclico diretto).  La struttura di proprietà in un programma costituisce un grafo aciclico diretto. Nessun oggetto è proprietaria di se stessa, ovvero che non è solo possibile ma anche implicitamente privo di significato. Ma due oggetti possono condividere la proprietà di un terzo oggetto.  Diversi tipi di collegamenti sono possibili in un grafo aciclico diretto simile al seguente: A è un membro di B (B è il proprietario A), gli archivi di C un' `vector<D>` (C è proprietario ogni elemento D), E archivia un `shared_ptr<F>` (E condivide la proprietà di F, possibilmente con altri oggetti), e così via.  Fino a quando non esistono alcun ciclo e ogni collegamento nel DAG è rappresentato da un oggetto che ha un distruttore (invece di un puntatore non elaborato, handle o altro meccanismo), quindi sfuggono perdite di risorse perché il linguaggio impedisce questi ultimi. Le risorse vengono rilasciate immediatamente dopo che non sono più necessari, senza un garbage collector in esecuzione. La durata di rilevamento è senza sovraccarico per l'ambito dello stack, le basi, membri e case correlati e conveniente per `shared_ptr`.  
  
### <a name="heap-based-lifetime"></a>Ciclo di vita basati su heap  
 Per la durata degli oggetti dell'heap, usare [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md). Uso `shared_ptr` e `make_shared` come l'indicatore di misura predefinito e all'allocatore. Usare `weak_ptr` cicli di interruzione, eseguire la memorizzazione nella cache e osservare oggetti senza influenzare o presupponendo che tutti gli elementi della loro durata.  
  
```cpp  
void func() {  
  
auto p = make_shared<widget>(); // no leak, and exception safe  
...  
p->draw();   
  
} // no delete required, out-of-scope triggers smart pointer destructor  
```  
  
 Uso `unique_ptr` per la proprietà univoca, ad esempio, nelle *pimpl* idioma. (Vedere [Pimpl per incapsulamento in fase di compilazione](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md).) Creare un `unique_ptr` destinazione primaria di tutti di tipo esplicito **nuovi** espressioni.  
  
```cpp  
unique_ptr<widget> p(new widget());  
```  
  
 È possibile usare i puntatori non elaborati per la non proprietà e osservazione. Un puntatore non proprietario può penzolare, ma non può determinare una perdita.  
  
```cpp  
class node {  
  ...  
  vector<unique_ptr<node>> children; // node owns children  
  node* parent; // node observes parent, which is not a concern  
  ...  
};  
node::node() : parent(...) { children.emplace_back(new node(...) ); }  
```  
  
 Quando è necessario ottimizzare le prestazioni, potrebbe essere necessario usare *ben incapsulato* proprietario puntatori e le chiamate esplicite da eliminare. Un esempio è quando si implementa la propria struttura di dati a basso livello.  
  
### <a name="stack-based-lifetime"></a>Durata basata su stack  
 Nel linguaggio C++ moderno, *ambito basato su stack* è un modo potente per scrivere codice efficace, perché combina automatici *durata stack* e *durata membro dati* con efficienza elevata: durata di rilevamento è essenzialmente gratuita di overhead. Durata dell'oggetto heap richiede la gestione manuale rifinitura e può essere l'origine di perdite di risorse e le inefficienze, soprattutto quando si lavora con i puntatori non elaborati. Si consideri il codice, che illustra l'ambito basato su stack:  
  
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
  
 Utilizzare una durata statica sporadicamente (statiche globali, funzione locale statico) perché possono verificarsi problemi. Cosa accade quando il costruttore di un oggetto globale genera un'eccezione? In genere, gli errori di app in modo che può essere difficile eseguire il debug. Ordine di costruzione può causare problemi per gli oggetti di una durata statica e non è indipendente dalla concorrenza. Non solo è un problema, la costruzione di oggetti dell'ordine di distruzione può risultare complesso, specialmente quando implicano un polimorfismo. Anche se l'oggetto o una variabile non è polimorfica e non dispone di complessa costruzione/distruzione di ordinamento, resta il problema di concorrenza di thread-safe. Un'app multithread non può modificare in modo sicuro i dati in oggetti statici senza la necessità di archiviazione thread-local, i blocchi di risorsa e altri alcune particolari precauzioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)