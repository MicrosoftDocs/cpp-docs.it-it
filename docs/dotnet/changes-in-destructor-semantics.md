---
title: Le modifiche nella semantica del distruttore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- finalizers [C++]
- destructors, C++
ms.assetid: f1869944-a407-452f-b99a-04d8c209f0dc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8a3d078300ca0e51ba8eb035d5428d300b0413a1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33113200"
---
# <a name="changes-in-destructor-semantics"></a>Modifiche nella semantica del distruttore
La semantica per i distruttori di classe è stati modificati in modo significativo rispetto alle estensioni gestite per C++ a Visual C++.  
  
 Nelle estensioni gestite, un distruttore della classe è stato consentito all'interno di una classe di riferimento, ma non all'interno di una classe di valori. Questo non è stato modificato nella nuova sintassi. Tuttavia, la semantica del distruttore della classe è stati modificati. Questo argomento descrive i motivi di tale modifica nonché il relativo impatto sulla conversione del codice CLR esistente. È probabile che la modifica a livello di programmazione più importante tra le due versioni della lingua.  
  
## <a name="non-deterministic-finalization"></a>Finalizzazione deterministica  
 Prima la memoria associata a un oggetto venga recuperata da garbage collector, un oggetto associato `Finalize` , se presente, viene richiamato. È possibile pensare di questo metodo come un tipo di distruttore Super perché non è associato alla durata di programma dell'oggetto. Si parla di finalizzazione. Al momento del momento o se un `Finalize` metodo viene richiamato non è definito. Si tratta di cosa si intende quando ci si riferisce per operazione di garbage collection con finalizzazione deterministica.  
  
 La finalizzazione deterministica non funziona correttamente con la gestione della memoria dinamica. Quando la memoria disponibile diventa insufficiente, il garbage collector interviene. In un garbage raccolti ambiente, non sono necessari i distruttori per liberare memoria. La finalizzazione non deterministica non funziona correttamente, tuttavia, quando un oggetto gestisce una risorsa critica, ad esempio una connessione al database o di un blocco di qualche tipo. In questo caso, è necessario rilasciare la risorsa appena possibile. Nel mondo nativo, che viene eseguita tramite una coppia di costruttore o distruttore. Non appena termina la durata dell'oggetto, al termine del blocco locale in cui viene dichiarato o quando lo stack mediante a causa di un'eccezione, il distruttore viene eseguito e la risorsa viene rilasciata automaticamente. Questo approccio funziona molto bene, e la sua assenza nelle estensioni gestite Sfortunatamente non è stata completata.  
  
 È la soluzione fornita da CLR per una classe implementare il `Dispose` metodo il `IDisposable` interfaccia. In questo caso il problema è che `Dispose` richiede una chiamata esplicita dall'utente. Questa operazione è soggetta a errore. Linguaggio c# offre una sorta di automazione in forma di una speciale `using` istruzione. Estensioni gestite è non fornito alcun supporto speciale.  
  
## <a name="destructors-in-managed-extensions-for-c"></a>Distruttori di estensioni gestite per C++  
 Nelle estensioni gestite, il distruttore di una classe di riferimento viene implementato utilizzando i due passaggi seguenti:  
  
1.  Il distruttore fornito dall'utente viene rinominato internamente in `Finalize`. Se la classe dispone di una classe di base (tenere presente che nel modello a oggetti CLR, è supportata solo l'ereditarietà singola), il compilatore inserisce una chiamata del finalizzatore dopo l'esecuzione del codice fornito dall'utente. Ad esempio, si consideri la seguente gerarchia semplice prelevata dalla specifica di linguaggio estensioni gestite:  
  
```  
__gc class A {  
public:  
   ~A() { Console::WriteLine(S"in ~A"); }  
};  
  
__gc class B : public A {  
public:  
   ~B() { Console::WriteLine(S"in ~B");  }  
};  
```  
  
 In questo esempio, entrambi i distruttori vengono rinominati `Finalize`. `B`del `Finalize` dispone di una chiamata `A`del `Finalize` aggiunti dopo la chiamata di metodo `WriteLine`. Questo è ciò che il garbage collector per impostazione predefinita richiamerà durante la finalizzazione. Ecco il possibile aspetto questa trasformazione interna:  
  
```  
// internal transformation of destructor under Managed Extensions  
__gc class A {  
public:  
   void Finalize() { Console::WriteLine(S"in ~A"); }  
};  
  
__gc class B : public A {  
public:  
   void Finalize() {   
      Console::WriteLine(S"in ~B");  
      A::Finalize();   
   }  
};  
```  
  
1.  Nel secondo passaggio, il compilatore sintetizza un distruttore virtuale. Questo distruttore è ciò che i nostri programmi di estensioni gestite utente richiamano direttamente o tramite un'applicazione dell'espressione delete. Non viene richiamato dal garbage collector.  
  
     Sono incluse due istruzioni all'interno del distruttore sintetizzato. Uno è una chiamata a `GC::SuppressFinalize` per assicurarsi che vi sono ulteriori chiamate di `Finalize`. Il secondo è la chiamata effettiva del `Finalize`, che rappresenta il distruttore fornito dall'utente per tale classe. Ecco questo aspetto:  
  
```  
__gc class A {  
public:  
   virtual ~A() {  
      System::GC::SuppressFinalize(this);  
      A::Finalize();  
   }  
};  
  
__gc class B : public A {  
public:  
   virtual ~B() {  
      System::GC::SuppressFinalize(this);  
      B::Finalize();  
   }  
};  
```  
  
 Questa implementazione consente all'utente di richiamare in modo esplicito la classe `Finalize` metodo ora anziché in un momento in cui si ha alcun controllo, non effettivamente vincola con il `Dispose` soluzione del metodo. Questo viene modificato in Visual C++.  
  
## <a name="destructors-in-new-syntax"></a>Distruttori nella nuova sintassi  
 Nella nuova sintassi, il distruttore viene rinominato internamente nel `Dispose` metodo e la classe di riferimento viene estesa automaticamente per implementare il `IDispose` interfaccia. Ovvero, in Visual C++, la coppia di classi viene trasformata come segue:  
  
```  
// internal transformation of destructor under the new syntax  
__gc class A : IDisposable {  
public:  
   void Dispose() {   
      System::GC::SuppressFinalize(this);  
      Console::WriteLine( "in ~A");  
   }  
};  
  
__gc class B : public A {  
public:  
   void Dispose() {   
      System::GC::SuppressFinalize(this);  
      Console::WriteLine( "in ~B");    
      A::Dispose();   
   }  
};  
```  
  
 Quando un distruttore viene richiamato in modo esplicito nella nuova sintassi o `delete` viene applicato a un handle di rilevamento, sottostante `Dispose` metodo viene richiamato automaticamente. Se è una classe derivata, una chiamata di `Dispose` metodo della classe di base viene inserito alla fine del metodo sintetizzato.  
  
 Ma ciò non ottiene us per la finalizzazione deterministica. Per raggiungere tale obiettivo, è necessario il supporto di altro oggetti di riferimento locale. (Non produce alcun supporto analogo nelle estensioni gestite e non è un problema di conversione).  
  
## <a name="declaring-a-reference-object"></a>Dichiara un oggetto di riferimento  
 Visual C++ supporta la dichiarazione di un oggetto di una classe di riferimento sullo stack locale o come membro di una classe come se fosse direttamente accessibile. In combinazione con l'associazione del distruttore con il `Dispose` (metodo), il risultato è la chiamata automatica della semantica di finalizzazione su tipi di riferimento.  
  
 In primo luogo, è possibile definire la classe di riferimento in modo che la creazione dell'oggetto funziona come l'acquisizione di una risorsa tramite il costruttore di classe. In secondo luogo, all'interno del costruttore di classe è rilasciare la risorsa acquisita al momento della creazione dell'oggetto.  
  
```  
public ref class R {  
public:  
   R() { /* acquire expensive resource */ }  
   ~R() { /* release expensive resource */ }  
  
   // everything else...  
};  
```  
  
 L'oggetto viene dichiarato localmente utilizzando il nome del tipo, ma senza accento circonflesso. Tutti gli utilizzi dell'oggetto, ad esempio richiamando un metodo, vengono eseguiti tramite il punto di selezione membro (`.`) anziché freccia (`->`). Alla fine del blocco, il distruttore associato, trasformato in `Dispose`, viene richiamata automaticamente, come illustrato di seguito:  
  
```  
void f() {  
   R r;   
   r.methodCall();  
  
   // r is automatically destructed here -  
   // that is, r.Dispose() is invoked  
}  
```  
  
 Come con la `using` istruzione in c#, ciò non ignora i vincoli del CLR sottostante che i tipi di riferimento deve essere allocato nell'heap di Common Language Runtime. La semantica sottostante restano invariata. L'utente potrebbe allo stesso modo scritto il codice seguente (simile alla trasformazione interna eseguita dal compilatore):  
  
```  
// equivalent implementation  
// except that it should be in a try/finally clause  
void f() {  
   R^ r = gcnew R;   
   r->methodCall();  
  
   delete r;  
}  
```  
  
 In effetti, nella nuova sintassi, i distruttori vengono nuovamente associati costruttori come un'acquisizione/rilascio automatico meccanismo legato alla durata di un oggetto locale.  
  
## <a name="declaring-an-explicit-finalize"></a>La dichiarazione esplicita di Finalize  
 Nella nuova sintassi, come illustrato in precedenza, il distruttore è sintetizzato nel `Dispose` metodo. Ciò significa che quando il distruttore non viene richiamato in modo esplicito, il garbage collector, durante la finalizzazione, non come prima troverà un oggetto associato `Finalize` metodo per l'oggetto. Per supportare la distruzione e finalizzazione, abbiamo introdotto una sintassi speciale per fornire un finalizzatore. Ad esempio:  
  
```  
public ref class R {  
public:  
   !R() { Console::WriteLine( "I am the R::finalizer()!" ); }  
};  
```  
  
 Il `!` prefisso è analogo a tilde (`~`) che introduce un distruttore della classe, ovvero, entrambi i metodi post-durati presentano un token di prefisso per il nome della classe. Se il sintetizzato `Finalize` metodo si trova all'interno di una classe derivata, una chiamata della classe di base `Finalize` metodo viene inserito alla fine. Se il distruttore viene richiamato in modo esplicito, il finalizzatore viene eliminato. Ecco il possibile aspetto della trasformazione:  
  
```  
// internal transformation under new syntax  
public ref class R {  
public:  
   void Finalize() {  
      Console::WriteLine( "I am the R::finalizer()!" );  
   }  
};   
```  
  
## <a name="moving-from-managed-extensions-for-c-to-visual-c-2010"></a>Migrazione dalle estensioni gestite per C++ a Visual C++ 2010  
 Il comportamento di runtime di estensioni gestite per programma C++ viene modificato quando viene compilato in Visual C++ quando una classe di riferimento contiene un distruttore non semplice. Algoritmo di conversione richiesto è simile al seguente:  
  
1.  Se è presente un distruttore, riscrivere in modo che sia il finalizzatore della classe.  
  
2.  Se un `Dispose` metodo è presente, riscriverlo nel distruttore della classe.  
  
3.  Se un distruttore è presente ma è presente alcun `Dispose` (metodo), mantenere il distruttore durante l'esecuzione del primo elemento.  
  
 Lo spostamento di codice dalle estensioni gestite per la nuova sintassi, si potrebbe perdere esecuzione della trasformazione. Se l'applicazione dipende da in qualche modo l'esecuzione dei metodi di finalizzazione associati, il comportamento dell'applicazione verrà automaticamente diverso da quello previsto.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi gestiti (C + + CL)](../dotnet/managed-types-cpp-cl.md)   
 [Distruttori e finalizzatori nella procedura: definire e usare classi e struct (C + c++ /CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)