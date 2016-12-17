---
title: "Modifiche nella semantica del distruttore | Microsoft Docs"
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
  - "distruttori, C++"
  - "finalizzatori [C++]"
ms.assetid: f1869944-a407-452f-b99a-04d8c209f0dc
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifiche nella semantica del distruttore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La semantica dei distruttori di classe è stata modificata in modo significativo in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nelle estensioni gestite i distruttori di classe sono consentiti all'interno di classi di riferimenti ma non all'interno di classi di valori.  Questo aspetto non è stato modificato nella nuova sintassi.  La semantica del distruttore di classi, tuttavia, è stata modificata.  In questo argomento vengono illustrate le ragioni di tale modifica nonché come questa influisca sulla conversione del codice CLR esistente.  Si tratta probabilmente della modifica più importante a livello di codice tra le due versioni del linguaggio.  
  
## Finalizzazione non deterministica  
 Prima che la memoria associata a un oggetto venga recuperata da Garbage Collector, viene richiamato il metodo associato `Finalize`, se disponibile.  Questo metodo può essere considerato alla stregua di un distruttore particolarmente efficace, dal momento che non è legato alla durata di programma dell'oggetto,  e viene indicato come finalizzazione.  La durata, il momento o l'eventualità della chiamata al metodo `Finalize` non sono definiti.  Per Garbage Collection con finalizzazione non deterministica si intende tutto questo.  
  
 La finalizzazione non deterministica funziona in maniera ottimale con la gestione dinamica della memoria.  Quando la memoria disponibile è insufficiente, viene avviato il Garbage Collector  e non è pertanto necessario ricorrere a distruttori per liberare memoria.  La finalizzazione non deterministica non funziona correttamente, tuttavia, in presenza di un oggetto che contiene una risorsa fondamentale, ad esempio una connessione a un database o un blocco.  In questo caso, è necessario rilasciare la risorsa al più presto.  In ambiente nativo, questa operazione viene eseguita mediante una coppia di costruttore e distruttore.  Al termine della durata dell'oggetto, mediante il completamento del blocco locale in cui tale oggetto è dichiarato oppure mediante la risoluzione dello stack a causa di un'eccezione, il distruttore viene eseguito e la risorsa viene rilasciata automaticamente.  Questa procedura, dal funzionamento efficace, non è disponibile con le estensioni gestite.  
  
 La soluzione offerta da CLR prevede che una classe implementi il metodo `Dispose` dell'interfaccia `IDisposable`.  Il metodo `Dispose`, tuttavia, richiede una chiamata esplicita da parte dell'utente  e ciò è soggetto a errori.  Nel linguaggio C\# è disponibile una sorta di automazione mediante una speciale istruzione `using`.  La progettazione delle estensioni gestite, invece, non fornisce supporto speciale.  
  
## Distruttori nelle estensioni gestite per C\+\+  
 Nelle estensioni gestite il distruttore di una classe di riferimenti viene implementato mediante i due passaggi riportati di seguito:  
  
1.  Il distruttore fornito dall'utente viene rinominato internamente in `Finalize`.  Se la classe dispone di una classe base \(tenere presente che nel modello a oggetti CLR è supportata solo l'ereditarietà singola\), il compilatore inserisce una chiamata del finalizzatore dopo l'esecuzione del codice fornito dall'utente.  Si consideri ad esempio la semplice gerarchia riportata di seguito, tratta dalla specifica di linguaggio delle estensioni gestite:  
  
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
  
 In questo esempio, entrambi i distruttori vengono rinominati `Finalize`.  `Finalize` di `B` prevede l'aggiunta di una chiamata del metodo `Finalize` di `A` dopo la chiamata di `WriteLine`.  La chiamata da parte del Garbage Collector avverrà per impostazione predefinita durante la finalizzazione.  Di seguito è riportato l'esito della trasformazione interna:  
  
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
  
1.  Nel secondo passaggio il compilatore sintetizza un distruttore virtuale.  Questo distruttore viene chiamato direttamente o mediante un'applicazione dell'espressione delete dai programmi utente delle estensioni gestite.  Non viene mai chiamato dal Garbage Collector.  
  
     All'interno del distruttore sintetizzato sono incluse due istruzioni.  Un'istruzione è una chiamata a `GC::SuppressFinalize` per assicurarsi che non vi siano ulteriori chiamate di `Finalize`.  La seconda è la vera e propria chiamata di `Finalize`, che rappresenta il distruttore fornito dall'utente per la classe.  Di seguito ne è riportato l'aspetto:  
  
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
  
 Questa implementazione consente all'utente di richiamare esplicitamente il metodo `Finalize` della classe, tuttavia non riguarda strettamente la soluzione del metodo `Dispose`.  È modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
## Distruttori nella nuova sintassi  
 Nella nuova sintassi, il distruttore viene rinominato internamente al metodo `Dispose` e la classe di riferimenti viene estesa automaticamente in modo da implementare l'interfaccia `IDispose`.  In [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], pertanto, la coppia di classi viene trasformata come segue:  
  
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
  
 Se un distruttore viene richiamato esplicitamente nella nuova sintassi oppure viene applicato `delete` a un handle di rilevamento, il metodo `Dispose` sottostante viene richiamato automaticamente.  Se si tratta di una classe derivata, alla chiusura del metodo sintetizzato viene inserita la chiamata al metodo `Dispose` della classe base.  
  
 Ma ciò non consente di ottenere la finalizzazione deterministica.  Per raggiungere tale obiettivo, è necessario il supporto aggiuntivo di oggetti di riferimento locali. Non è disponibile un supporto analogo nelle estensioni gestite, pertanto la questione non riguarda la conversione.  
  
## Dichiarazione di un oggetto di riferimento  
 [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] supporta la dichiarazione di un oggetto di una classe di riferimento sullo stack locale oppure come membro di una classe come se fosse direttamente accessibile.  In combinazione con l'associazione del distruttore con il metodo `Dispose`, il risultato ottenuto è la chiamata automatica della semantica di finalizzazione su tipi di riferimento.  
  
 In primo luogo, è necessario definire la classe di riferimento in modo che la creazione dell'oggetto funzioni come l'acquisizione di una risorsa mediante il costruttore di classe.  In secondo luogo, all'interno del costruttore di classe è necessario rilasciare la risorsa acquisita al momento della creazione dell'oggetto.  
  
```  
public ref class R {  
public:  
   R() { /* acquire expensive resource */ }  
   ~R() { /* release expensive resource */ }  
  
   // … everything else …  
};  
```  
  
 L'oggetto viene dichiarato localmente mediante il nome di tipo ma senza accento circonflesso.  Qualsiasi utilizzo dell'oggetto, ad esempio la chiamata a un metodo, avviene mediante il punto di selezione dei membri \(`.`\) e non mediante la freccia \(`->`\).  Al termine del blocco, il distruttore associato, trasformato in `Dispose`, verrà richiamato automaticamente, come illustrato di seguito:  
  
```  
void f() {  
   R r;   
   r.methodCall();  
  
   // r is automatically destructed here –  
   // that is, r.Dispose() is invoked  
}  
```  
  
 Come per l'istruzione `using` in C\#, ciò non ignora i vincoli del CLR sottostante per cui i tipi di riferimento devono essere allocati nell'heap CLR.  La semantica sottostante rimane invariata.  Se l'utente avesse scritto il codice seguente, simile alla trasformazione interna eseguita dal compilatore, il risultato sarebbe stato equivalente:  
  
```  
// equivalent implementation  
// except that it should be in a try/finally clause  
void f() {  
   R^ r = gcnew R;   
   r->methodCall();  
  
   delete r;  
}  
```  
  
 Nella nuova sintassi, in effetti, i distruttori sono associati ancora una volta ai costruttori come in un meccanismo automatizzato di acquisizione e rilascio legato alla durata dell'oggetto locale.  
  
## Dichiarazione esplicita di Finalize  
 Nella nuova sintassi, come illustrato in precedenza, il distruttore è sintetizzato nel metodo `Dispose`.  Ciò significa che se il distruttore non viene chiamato esplicitamente, durante la finalizzazione il Garbage Collector non individuerà un metodo `Finalize` associato per l'oggetto.  Per supportare distruzione e finalizzazione, è stata introdotta una sintassi speciale per rendere disponibile un finalizzatore.  Di seguito è riportato un esempio.  
  
```  
public ref class R {  
public:  
   !R() { Console::WriteLine( "I am the R::finalizer()!" ); }  
};  
```  
  
 Il prefisso `!` è analogo al carattere tilde \(`~`\) che introduce un distruttore di classe, vale a dire che entrambi i metodi post\-durata presentano un token di prefisso per il nome della classe.  Se il metodo sintetizzato `Finalize` si verifica all'interno di una classe derivata, al termine viene inserita una chiamata al metodo `Finalize` della classe base.  Se il distruttore viene chiamato in modo esplicito, il finalizzatore viene eliminato.  Di seguito è riportato l'esito della trasformazione:  
  
```  
// internal transformation under new syntax  
public ref class R {  
public:  
   void Finalize() {  
      Console::WriteLine( "I am the R::finalizer()!" );  
   }  
};   
```  
  
## Migrazione dalle estensioni gestite per C\+\+ a Visual C\+\+ 2010  
 Il comportamento in fase di runtime di un programma delle estensioni gestite di C\+\+ viene modificato se la compilazione avviene in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] quando una classe di riferimento contiene un distruttore non complesso.  L'algoritmo di conversione richiesto è simile al seguente:  
  
1.  Se è presente un distruttore, riscriverlo in modo che sia il finalizzatore di classe.  
  
2.  Se è presente un metodo `Dispose`, riscriverlo nel distruttore di classe.  
  
3.  Se il distruttore è presente ma non è disponibile un metodo `Dispose`, mantenere il distruttore durante l'esecuzione della prima operazione.  
  
 Nel corso dello spostamento del codice dalle estensioni gestite alla nuova sintassi, è possibile che l'esecuzione della trasformazione venga trascurata.  Se l'applicazione dipende dall'esecuzione di metodi di finalizzazione associati, il comportamento verrà modificato automaticamente rispetto a quanto previsto.  
  
## Vedere anche  
 [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md)   
 [Distruttori e finalizzatori in Visual C\+\+](../misc/destructors-and-finalizers-in-visual-cpp.md)