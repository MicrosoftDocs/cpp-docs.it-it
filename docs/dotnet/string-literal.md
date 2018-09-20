---
title: Valore letterale stringa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- string literals
- strings [C++], string literals
ms.assetid: 6d1fc3f8-0d58-4d68-9678-16b4f6dc4766
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 41f1996cd4f4caf24ac08d09b05e636cb09f7eed
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415265"
---
# <a name="string-literal"></a>Stringhe letterali

La gestione dei valori letterali stringa è stato modificato dalle estensioni gestite per C++ in Visual C++.

Nelle estensioni gestite per la progettazione del linguaggio C++, un valore letterale stringa gestita è stata indicata anteponendo il valore letterale stringa con un `S`. Ad esempio:

```
String *ps1 = "hello";
String *ps2 = S"goodbye";
```

La riduzione delle prestazioni tra le due inizializzazioni si rivela non semplici, come l'elenco CIL segue illustrato rappresentazione **ildasm**:

```
// String *ps1 = "hello";
ldsflda    valuetype $ArrayType$0xd61117dd
     modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier)
     '?A0xbdde7aca.unnamed-global-0'

newobj instance void [mscorlib]System.String::.ctor(int8*)
stloc.0

// String *ps2 = S"goodbye";
ldstr      "goodbye"
stloc.0
```

Si tratta di un notevole risparmio per semplicemente ricordare (o learning) come prefisso una valore letterale stringa con un `S`. Nella nuova sintassi, la gestione dei valori letterali stringa è trasparente, determinato dal contesto d'uso. Il `S` non deve più essere specificato.

Per quanto riguarda casi in cui è necessario in modo esplicito indicare al compilatore di una determinata interpretazione? In questi casi, viene applicato un cast esplicito. Ad esempio:

```
f( safe_cast<String^>("ABC") );
```

Inoltre, il valore letterale stringa corrisponde a questo punto un `String` con una conversione semplice invece di una conversione standard. Anche se potrebbe sembrare non modifica la risoluzione dei set di funzioni in overload che includono un `String` e un `const char*` come parametri formali concorrenti. La risoluzione che una volta risolta in un `const char*` istanza ora viene contrassegnata come ambigua. Ad esempio:

```
ref struct R {
   void f(const char*);
   void f(String^);
};

int main () {
   R r;
   // old syntax: f( const char* );
   // new syntax: error: ambiguous
   r.f("ABC"); 
}
```

Perché è presente una differenza? Poiché più di un'istanza denominata `f` esiste all'interno del programma, questa operazione richiede l'algoritmo di risoluzione dell'overload funzione da applicare alla chiamata. La risoluzione formale di una funzione in overload prevede tre passaggi.

1. Raccolta di funzioni candidate. Le funzioni candidate sono i metodi all'interno dell'ambito lessicale corrispondono al nome della funzione di richiamata. Ad esempio, poiché `f()` viene richiamato tramite un'istanza di `R`, tutte le funzioni denominate `f` che non sono membri di `R` (o della relativa gerarchia di classe di base) non sono funzioni candidate. In questo esempio, sono presenti due funzioni candidate. Queste sono le due funzioni membro di `R` denominato `f`. Una chiamata ha esito negativo durante questa fase, se il set di funzioni candidate è vuoto.

1. Il set di funzioni valide tra le funzioni candidate. Una funzione di disponibile è quello che può essere richiamato con gli argomenti specificati nella chiamata, dato il numero di argomenti e i relativi tipi. In questo esempio, entrambe le funzioni candidate sono anche funzioni valide. Una chiamata ha esito negativo durante questa fase, se il set di funzioni valide è vuoto.

1. Selezionare la funzione che rappresenta la migliore corrispondenza della chiamata. Questa operazione viene eseguita, classificare le conversioni applicate per trasformare gli argomenti per il tipo dei parametri di funzione valido. Questo è relativamente semplice con una funzione singolo parametro; diventa un po' più complesso quando sono presenti più parametri. Una chiamata ha esito negativo durante questa fase, se non esiste alcuna corrispondenza migliore. Vale a dire, se le conversioni necessarie per trasformare il tipo dell'argomento effettivo al tipo del parametro formale sono ugualmente valide. La chiamata viene contrassegnata come ambigua.

Nelle estensioni gestite, la risoluzione di questa chiamata viene richiamata la `const char*` istanza come corrispondenza migliore. Nella nuova sintassi, la conversione necessaria in modo che corrispondano `"abc"` al `const char*` e `String^` equivalgono a questo punto, vale a dire, ugualmente valida - e pertanto la chiamata è contrassegnata come non valida -, ovvero come ambigua.

Passiamo ora a due domande:

- Che cos'è il tipo di argomento effettivo, `"abc"`?

- Che cos'è l'algoritmo per determinare quando una conversione del tipo è preferibile rispetto a un altro?

Il tipo di valore letterale stringa `"abc"` è `const char[4]` -non c'è un carattere di terminazione null implicito alla fine di ogni stringa letterale.

L'algoritmo per determinare quando una conversione del tipo è preferibile rispetto a un altro prevede l'inserimento delle conversioni dei tipi possibili in una gerarchia. Ecco la mia conoscenza di tale gerarchia - tutte le queste conversioni, naturalmente, sono implicite. Usando una notazione cast esplicito sostituisce la gerarchia allo stesso modo delle parentesi esegue l'override di precedenza degli operatori normale di un'espressione.

1. È consigliabile una corrispondenza esatta. Sorprendentemente, per un argomento di una corrispondenza sia esatta, se è necessario che corrisponde esattamente al tipo di parametro; è sufficiente essere sufficientemente vicino. Si tratta della chiave per comprendere cosa sta succedendo in questo esempio, e come è stata modificata la lingua.

1. Una promozione tramite mailing è preferibile rispetto a una conversione standard. Ad esempio alzando di livello un `short int` a un `int` è preferibile rispetto alla conversione di un `int` in un `double`.

1. Una conversione standard è preferibile rispetto a una conversione boxing. Ad esempio, la conversione un' `int` in un `double` è preferibile rispetto alla conversione boxing un `int` in un `Object`.

1. Conversione boxing è preferibile rispetto a una conversione implicita definito dall'utente. Ad esempio, la conversione boxing un `int` in un `Object` migliore applicando un operatore di conversione di un `SmallInt` classe di valore.

1. Una conversione implicita definito dall'utente è preferibile rispetto a nessuna conversione affatto. Una conversione implicita definito dall'utente è l'ultima uscita prima dell'errore (tenendo presente che la firma formale può contenere una matrice di parametri o sui puntini di sospensione in tale posizione).

Quindi, cosa significa dire che una corrispondenza esatta non è necessariamente una corrispondenza? Ad esempio, `const char[4]` corrisponde esattamente a uno `const char*` o `String^`, ma l'ambiguità di questo esempio riguarda due corrispondenze esatte in conflitto.

Una corrispondenza esatta, come accade, include una serie di conversioni semplici. Esistono quattro le conversioni semplici in ISO-c che può essere applicato e ancora considerata una corrispondenza esatta. Tre sono detti trasformazioni lvalue. Un quarto tipo viene chiamato una conversione di qualificazione. Le tre trasformazioni lvalue vengono considerate come una corrispondenza esatta meglio quello che richiede una conversione di qualificazione.

Un tipo di trasformazione lvalue è la conversione nativa matrice al puntatore. Questo è ciò che è coinvolto nella corrispondenza un' `const char[4]` a `const char*`. Pertanto, la corrispondenza di `f("abc")` a `f(const char*)` una corrispondenza esatta. Nelle versioni precedenti del linguaggio, questo era la migliore corrispondenza, in realtà.

Per il compilatore contrassegnare la chiamata come ambiguo ed è pertanto necessario che la conversione di un `const char[4]` a un `String^` anche essere una corrispondenza esatta tramite una conversione semplice. Si tratta di modifica che è stata introdotta nella nuova versione del linguaggio. E questo è il motivo per cui la chiamata a questo punto viene contrassegnata come ambiguo.

## <a name="see-also"></a>Vedere anche

[Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)<br/>
[String](../windows/string-cpp-component-extensions.md)