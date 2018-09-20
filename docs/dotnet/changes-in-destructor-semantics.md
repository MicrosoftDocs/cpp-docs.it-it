---
title: Le modifiche nella semantica del distruttore | Microsoft Docs
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
ms.openlocfilehash: c25045291afed1e8072867ee668716b2f396ef30
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46420023"
---
# <a name="changes-in-destructor-semantics"></a>Modifiche nella semantica del distruttore

La semantica per i distruttori di classe è stati modificati in modo significativo dalle estensioni gestite per C++ in Visual C++.

Nelle estensioni gestite, è stato consentito un distruttore della classe all'interno di una classe di riferimento, ma non all'interno di una classe di valori. Ciò non è stato modificato nella nuova sintassi. Tuttavia, la semantica del distruttore della classe è state modificate. Questo argomento descrive i motivi di tale modifica e viene illustrato come questi influiscono la conversione del codice CLR esistente. È probabile che la modifica a livello di programmazione più importante tra le due versioni della lingua.

## <a name="non-deterministic-finalization"></a>Finalizzazione deterministica

Prima che la memoria associata a un oggetto venga recuperata dal garbage collector, un oggetto associato `Finalize` metodo, se presente, viene richiamato. È possibile considerare questo metodo come un tipo di distruttore con privilegi avanzati perché non è associato alla durata di programma dell'oggetto. Si parla di finalizzazione. Al momento del momento o persino se un `Finalize` metodo viene richiamato non è definito. Si tratta di cosa si intende quando ci si riferisce per operazioni di garbage collection con finalizzazione deterministica.

La finalizzazione non deterministica funziona bene con la gestione della memoria dinamica. Quando la memoria disponibile diventa insufficiente, il garbage collector non interviene. In un'operazione di garbage collection ambiente, i distruttori per liberare memoria non sono necessari. La finalizzazione non deterministiche non funziona bene, tuttavia, quando un oggetto gestisce una risorsa critica, ad esempio una connessione al database o di un blocco di qualche tipo. In questo caso, è necessario rilasciare la risorsa appena possibile. Nel mondo nativo, che è possibile ottenere con una coppia di costruttore o distruttore. Non appena termina la durata dell'oggetto, quando termina il blocco locale all'interno del quale viene dichiarata, o quando lo stack mediante a causa di un'eccezione generata, il distruttore viene eseguito e la risorsa venga rilasciata automaticamente. Questo approccio funziona molto bene e la sua assenza nelle estensioni gestite Sfortunatamente non è stato eseguito.

La soluzione fornita da CLR è per una classe implementare il `Dispose` metodo del `IDisposable` interfaccia. Il problema è che `Dispose` richiede una chiamata esplicita dell'utente. Ciò è soggetta a errori. Il linguaggio c# offre una sorta di automazione sotto forma di una speciale `using` istruzione. Estensioni gestite è non fornito alcun supporto speciale.

## <a name="destructors-in-managed-extensions-for-c"></a>Distruttori nelle estensioni gestite per C++

Nelle estensioni gestite, il distruttore di una classe di riferimento viene implementato usando i due passaggi seguenti:

1. Il distruttore fornita dall'utente è stato rinominato internamente su `Finalize`. Se la classe dispone di una classe di base (tenere presente che nel modello a oggetti CLR, è supportata solo l'ereditarietà singola), il compilatore inserisce una chiamata del finalizzatore dopo l'esecuzione del codice fornito dall'utente. Ad esempio, si consideri la seguente gerarchia semplice ricavata la specifica del linguaggio delle estensioni gestite:

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

In questo esempio, entrambi i distruttori vengono rinominati `Finalize`. `B`del `Finalize` dispone di una chiamata `A`del `Finalize` aggiunti dopo la chiamata di metodo `WriteLine`. Questo è ciò che il garbage collector per impostazione predefinita richiamerà durante la finalizzazione. Ecco come potrebbe risultare questa trasformazione interna:

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

1. Nel secondo passaggio, il compilatore sintetizza un distruttore virtuale. Questo distruttore è ciò che i nostri programmi utente estensioni gestite richiamano direttamente o tramite un'applicazione dell'espressione di eliminazione. Non viene mai richiamato dal garbage collector.

     Due istruzioni vengono posizionate all'interno di questo distruttore sintetizzato. Uno è una chiamata a `GC::SuppressFinalize` per assicurarsi che vi sono altre chiamate di `Finalize`. Il secondo è la chiamata effettiva del `Finalize`, che rappresenta il distruttore per la classe fornita dall'utente. Ecco questo aspetto:

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

Questa implementazione consente all'utente di richiamare in modo esplicito la classe `Finalize` metodo ora anziché alla volta non può essere controllata, non realmente associata con il `Dispose` soluzione del metodo. Ciò viene modificato in Visual C++.

## <a name="destructors-in-new-syntax"></a>Distruttori nella nuova sintassi

Nella nuova sintassi, il distruttore viene rinominato internamente sul `Dispose` metodo e la classe di riferimento viene esteso automaticamente per implementare il `IDispose` interfaccia. Vale a dire, in Visual C++, la coppia di classi viene trasformata come indicato di seguito:

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

Quando un distruttore viene richiamato in modo esplicito nella nuova sintassi o quando `delete` viene applicato a un handle di rilevamento, sottostante `Dispose` metodo viene richiamato automaticamente. Se è una classe derivata, una chiamata del `Dispose` metodo della classe di base viene inserito alla fine del metodo sintetizzato.

Ma ciò non prepararci fino alla finalizzazione deterministica. Per raggiungere tale obiettivo, è necessario il supporto aggiuntivo di oggetti di riferimento locale. (Non si dispone di alcun supporto analogo nelle estensioni gestite, e quindi non è un problema di conversione).

## <a name="declaring-a-reference-object"></a>La dichiarazione di un oggetto di riferimento

Visual C++ supporta la dichiarazione di un oggetto di una classe di riferimento sullo stack locale o come membro di una classe come se fosse direttamente accessibile. In combinazione con l'associazione del distruttore con il `Dispose` metodo, il risultato è la chiamata automatica della semantica di finalizzazione sui tipi di riferimento.

In primo luogo, definiamo la classe di riferimento in modo che la creazione di oggetti funziona come l'acquisizione di una risorsa mediante il relativo costruttore di classe. In secondo luogo, entro il distruttore della classe, vengono rilasciati la risorsa acquisita al momento della creazione dell'oggetto.

```
public ref class R {
public:
   R() { /* acquire expensive resource */ }
   ~R() { /* release expensive resource */ }

   // everything else...
};
```

L'oggetto viene dichiarato in locale usando il nome del tipo, ma senza l'accento circonflesso. Tutti gli utilizzi dell'oggetto, ad esempio richiamando un metodo, vengono eseguiti tramite il punto di selezione membro (`.`) anziché freccia (`->`). Alla fine del blocco, il distruttore associato, trasformati in `Dispose`, viene richiamata automaticamente, come illustrato di seguito:

```
void f() {
   R r;
   r.methodCall();

   // r is automatically destructed here -
   // that is, r.Dispose() is invoked
}
```

Come con la `using` istruzione all'interno di c#, ciò non ignora il vincolo CLR sottostante che i tipi di riferimento deve essere allocato sull'heap di Common Language Runtime. La semantica sottostante restano invariata. L'utente è stato possibile allo stesso modo scritto il codice seguente (e si tratta probabilmente della trasformazione interna eseguita dal compilatore):

```
// equivalent implementation
// except that it should be in a try/finally clause
void f() {
   R^ r = gcnew R;
   r->methodCall();

   delete r;
}
```

In effetti, sotto la nuova sintassi, i distruttori vengono nuovamente associati costruttori come un'acquisizione/rilascio automatizzato meccanismo legato alla durata dell'oggetto locale.

## <a name="declaring-an-explicit-finalize"></a>La dichiarazione esplicita di Finalize

Nella nuova sintassi, come abbiamo visto, il distruttore è sintetizzato nel `Dispose` (metodo). Ciò significa che quando il distruttore non viene richiamato in modo esplicito, il garbage collector, durante la finalizzazione, non come indicato in precedenza troverà un oggetto associato `Finalize` metodo per l'oggetto. Per supportare la distruzione e la finalizzazione, è stata introdotta una sintassi speciale per fornire un finalizzatore. Ad esempio:

```
public ref class R {
public:
   !R() { Console::WriteLine( "I am the R::finalizer()!" ); }
};
```

Il `!` prefisso è analogo a tilde (`~`) che presenta un distruttore della classe, vale a dire, entrambi i metodi post-durati necessario un token di prefisso per il nome della classe. Se il sintetizzati `Finalize` metodo si trova all'interno di una classe derivata, una chiamata della classe di base `Finalize` metodo viene inserito alla fine. Se il distruttore viene richiamato in modo esplicito, il finalizzatore viene eliminato. Ecco la trasformazione aspetto:

```
// internal transformation under new syntax
public ref class R {
public:
   void Finalize() {
      Console::WriteLine( "I am the R::finalizer()!" );
   }
};
```

## <a name="moving-from-managed-extensions-for-c-to-visual-c-2010"></a>Migrazione dalle estensioni gestite per C++ per Visual C++ 2010

Il comportamento di runtime delle estensioni gestite per programma C++ viene modificato quando viene compilato in Visual C++ ogni volta che una classe di riferimento contiene un distruttore non semplice. L'algoritmo di traduzione richiesto è simile al seguente:

1. Se è presente un distruttore, riscrivere in modo che sia il finalizzatore della classe.

1. Se un `Dispose` metodo è presente, riscriverlo nel distruttore della classe.

1. Se un distruttore è presente ma è presente alcun `Dispose` (metodo), mantenere il distruttore durante l'esecuzione del primo elemento.

Lo spostamento di codice dalle estensioni gestite per la nuova sintassi, si potrebbero perdere l'esecuzione della trasformazione. Se l'applicazione dipende in qualche modo l'esecuzione dei metodi di finalizzazione associati, il comportamento dell'applicazione sarà invisibile all'utente diverso da quello previsto.

## <a name="see-also"></a>Vedere anche

[Tipi gestiti (C + + / CL)](../dotnet/managed-types-cpp-cl.md)<br/>
[Distruttori e finalizzatori in Procedura: definire e usare classi e struct (C + + / CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)