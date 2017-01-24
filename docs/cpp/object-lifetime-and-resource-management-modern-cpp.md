---
title: "Durata degli oggetti e gestione delle risorse (C++ moderno) | Microsoft Docs"
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
ms.assetid: 8aa0e1a1-e04d-46b1-acca-1d548490700f
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Durata degli oggetti e gestione delle risorse (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A differenza dei linguaggi gestiti, C\+\+ non dispone di Garbage Collection \(GC\), che vengono automaticamente le versioni privi lungo\- vengono utilizzate le risorse di memoria come elaborazione.  In C\+\+, la gestione delle risorse direttamente correlata alla durata degli oggetti.  In questo documento vengono descritti i fattori che influiscono sulla durata degli oggetti in C\+\+ e come gestirli.  
  
 C\+\+ non ha GC principalmente perché non gestisce le risorse non di memoria.  Solo i distruttori deterministici come quelli in C\+\+ possono gestire equamente le risorse non di memoria e di memoria.  Il GC ha anche altri problemi, quali sovraccarico maggiore in memoria e dell'utilizzo della CPU e località.  Ma viene universalità è un problema fondamentale che non è possibile con le ottimizzazioni abili.  
  
## Concetti  
 È importante in gestione della durata degli oggetti è la incapsulamento\- chiunque utilizzando un oggetto non deve riconoscere le risorse che tale oggetto è proprietario, o come liberarsele di, o anche se possiede le risorse eseguito.  Deve eliminare solo l'oggetto.  Il linguaggio di base di C\+\+ è progettato per garantire che gli oggetti si distruggano al momento corretto, ovvero, poiché i blocchi sono usciti, in ordine inverso di costruzione.  Quando un oggetto viene eliminato, le relative basi e membri vengono eliminati in un determinato ordine.  Il linguaggio automaticamente elimina gli oggetti, a meno che non venga le operazioni speciali l'allocazione heap o la nuova posizione.  Ad esempio, [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) come `unique_ptr` e `shared_ptr` e contenitori standard di \(STL\) della libreria di modelli come `vector`, incapsula `new`\/`delete` e `new[]`\/`delete[]` degli oggetti, con distruttori.  Per questo motivo è pertanto importante mantenere puntatori intelligenti e contenitori STL.  
  
 Un altro concetto fondamentale nella gestione della durata: distruttori.  I distruttori incapsulano il rilascio delle risorse.  \(Il tasto di uso comune è RRID, rilascio delle risorse è la distruzione.\)  Una risorsa è diverso da ottenere da "sistema" e sia necessario restituire avanti.  La memoria è la risorsa più comune, ma esistono inoltre file, socket, trame e altre risorse non di memoria. "Di" una risorsa significa che è possibile utilizzarlo quando sono necessarie ma è inoltre necessario rilasciare una volta terminata.  Quando un oggetto viene eliminato, il relativo distruttore rilascia le risorse che dispone di proprietà.  
  
 Il concetto finale è il DAG \(aciclico grafico diretto\).  La struttura di proprietà in un programma costituisce un DAG.  Nessun oggetto può contenere lo stesso non solo impossibile ma anche implicitamente necessaria.  Ma due oggetti consentono di condividere la proprietà di un terzo oggetto.  Diversi tipi di collegamenti sono possibili in un DAG modo seguente: Che è un membro di B \(B è proprietario A\), archivi C `vector<D>` \(C possiede ogni elemento D\), archivi E `shared_ptr<F>` \(E condivide la proprietà f, possibilmente con altri oggetti\), e così via.  Finché non sono presenti cicli e ogni collegamento in DAG è rappresentato da un oggetto con un distruttore \(anziché un puntatore non elaborato, handles, o di un altro meccanismo\), quindi perdite di risorse risultano impossibili presente alcuna ne impedisce.  Le risorse vengono rilasciate immediatamente dopo che non sono più necessari, senza un funzionamento del Garbage Collector.  La verifica della durata è meno sovraccarico di ambito, le nozioni di base, i membri e i casi relazionati dello stack e conveniente per `shared_ptr`.  
  
### Per durata basata sull'heap  
 Per la durata dell'heap, utilizzare [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md).  Utilizzare `shared_ptr` e `make_shared` come il puntatore e l'allocatore predefiniti.  Utilizzare `weak_ptr` per interrompere cicli, fare la memorizzazione nella cache e osservare gli oggetti senza influenzare o se qualsiasi elemento sulle durate.  
  
```cpp  
void func() {  
  
auto p = make_shared<widget>(); // no leak, and exception safe  
...  
p->draw();   
  
} // no delete required, out-of-scope triggers smart pointer destructor  
  
```  
  
 Utilizzare `unique_ptr` per proprietà univoco, ad esempio, nel linguaggio *di pimpl*. Per ulteriori informazioni, vedere [Pimpl per incapsulamento in fase di compilazione](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md). Rendere a `unique_ptr` l'obiettivo primario di tutte le espressioni esplicite di `new`.  
  
```cpp  
unique_ptr<widget> p(new widget());  
```  
  
 È possibile utilizzare i puntatori non elaborati per non proprietà e all'osservazione.  Un puntatore non proprietario può essere sospeso, ma non può perdere.  
  
```cpp  
class node {  
  ...  
  vector<unique_ptr<node>> children; // node owns children  
  node* parent; // node observes parent, which is not a concern  
  ...  
};  
node::node() : parent(...) { children.emplace_back(new node(...) ); }  
  
```  
  
 Quando l'ottimizzazione delle prestazioni è necessaria, potrebbe essere necessario utilizzare i puntatori *ben incapsulati* e le chiamate esplicite per eliminare.  Un esempio è quando si implementa una propria struttura dei dati di basso livello.  
  
### Per durata basata su stack  
 In C\+\+ moderno, *in ambito basato su stack* è un metodo efficace la scrittura di codice affidabile che combina *durata dello stack* e *durata del membro dati* con verifica elevata di salvataggio di temi\- durata è essenzialmente esente da sovraccarico.  La durata degli oggetti dell'heap richiede la gestione manuale diligente e può essere l'origine delle perdite e di inefficienze delle risorse, specialmente quando si utilizzano i puntatori non elaborati.  Si consideri il codice seguente, che illustri l'ambito basato su stack:  
  
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
  …  
  w.draw();  
  …  
} // automatic destruction and deallocation for w and w.g  
  // automatic exception safety,   
  // as if "finally { w.dispose(); w.g.dispose(); }"  
  
```  
  
 Utilizzare la durata con statica \(statica globale, static locale di funzione\) poiché i problemi possono sorgere.  Ciò che si verifica quando il costruttore di un oggetto globale genera un'eccezione?  In genere, l'applicazione verrà incolpa in modo che possano essere difficile il debug.  L'ordine di costruzione è problematica per gli oggetti di durata statici e non è indipendente dalla concorrenza.  Non solo è la costruzione di un oggetto un problema, l'ordine di distruzione può essere complessa, specialmente quando il polimorfismo interessato.  Anche se l'oggetto o variabile non è polimorfica e non ha ordine complesso\/eliminazione di costruzione, tuttavia è necessario l'emissione di concorrenza thread\-safe.  Un'applicazione multithreading non in modo sicuro modificare i dati negli oggetti statici senza attuare l'archiviazione locale di thread, i blocchi delle risorse e precauzioni alternative speciali.  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)