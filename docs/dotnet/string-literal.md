---
title: Valore letterale stringa | Documenti Microsoft
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
ms.openlocfilehash: 9ac847f67421802fe4d31f2d66b34128e4b24794
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="string-literal"></a>Stringhe letterali
La gestione di valori letterali stringa è stata modificata dalle estensioni gestite per C++ in Visual C++.  
  
 Nelle estensioni gestite per la progettazione del linguaggio C++, una stringa letterale gestita è stata indicata anteponendo la stringa letterale con un `S`. Ad esempio:  
  
```  
String *ps1 = "hello";  
String *ps2 = S"goodbye";  
```  
  
 La riduzione delle prestazioni tra le due inizializzazioni è risultata per essere non semplice, come il codice CIL seguente rappresentazione illustrato dalla **ildasm**:  
  
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
  
 Si tratta di un notevole risparmio per semplicemente ricordare (o learning) come prefisso una valore letterale stringa per con un `S`. Nella nuova sintassi, la gestione di valori letterali stringa è trasparente, determinato dal contesto di utilizzo. Il `S` non deve essere specificata.  
  
 Per quanto riguarda i casi in cui è necessario in modo esplicito indicare al compilatore di una determinata interpretazione? In questi casi, si applica un cast esplicito. Ad esempio:  
  
```  
f( safe_cast<String^>("ABC") );  
```  
  
 Inoltre, la stringa letterale corrisponde ora un `String` con una conversione semplice, anziché una conversione standard. Anche se può sembrare non modifica la risoluzione di set di funzioni in overload che includono un `String` e `const char*` come parametri formali concorrenti. La risoluzione di una volta risolti in un `const char*` istanza ora viene contrassegnata come ambigua. Ad esempio:  
  
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
  
 Motivo per cui esiste una differenza? Poiché più di un'istanza denominata `f` esiste all'interno del programma, questa operazione richiede l'algoritmo di risoluzione dell'overload di funzione da applicare alla chiamata. La risoluzione formale di una funzione in overload prevede tre passaggi.  
  
1.  Raccolta di funzioni candidate. Le funzioni candidate sono i metodi all'interno dell'ambito lessicale corrispondano al nome della funzione richiamata. Ad esempio, poiché `f()` viene richiamato tramite un'istanza di `R`, tutte le funzioni denominate `f` che non si tratta di un membro del `R` (o della relativa gerarchia di classe di base) non sono funzioni candidate. In questo esempio, esistono due funzioni candidate. Queste sono le due funzioni membro di `R` denominato `f`. Durante questa fase, una chiamata ha esito negativo se il set di funzioni candidate è vuoto.  
  
2.  Il set di funzioni valide tra le funzioni candidate. Una funzione è valida è quello che può essere richiamato con gli argomenti specificati nella chiamata, dato il numero di argomenti e i relativi tipi. In questo esempio, entrambe le funzioni candidate sono funzioni valide. Durante questa fase, una chiamata ha esito negativo se il set di funzioni valide è vuoto.  
  
3.  Selezionare la funzione che rappresenta la migliore corrispondenza della chiamata. Questa operazione viene eseguita, classificare le conversioni applicate per trasformare gli argomenti per il tipo dei parametri di funzione valido. Questo è relativamente semplice con una funzione singolo parametro. diventa più complesso quando sono presenti più parametri. Durante questa fase, una chiamata ha esito negativo se è presente alcuna corrispondenza migliore. Ovvero, se le conversioni necessarie per trasformare il tipo dell'argomento effettivo per il tipo del parametro formale sono ugualmente valide. La chiamata viene contrassegnata come ambigua.  
  
 Nelle estensioni gestite, la risoluzione di questa chiamata viene richiamata la `const char*` istanza come corrispondenza ottimale. Nella nuova sintassi, la conversione necessaria per la corrispondenza `"abc"` a `const char*` e `String^` sono ora equivalenti, vale a dire, ugualmente valida - e pertanto la chiamata è contrassegnata, vale a dire come ambigua.  
  
 Questo ci conduce a due domande:  
  
-   Che cos'è il tipo dell'argomento effettivo, `"abc"`?  
  
-   Che cos'è l'algoritmo per determinare quando una conversione di tipo è migliore di altro?  
  
 Il tipo di valore letterale stringa `"abc"` è `const char[4]` -non c'è un carattere di terminazione null implicito alla fine di ogni stringa letterale.  
  
 L'algoritmo per determinare quando una conversione di tipo è migliore di altro prevede l'inserimento le conversioni dei tipi possibili in una gerarchia. Ecco la conoscenza di tale gerarchia - tali conversioni, naturalmente, sono implicite. Utilizzando una notazione cast esplicito esegue l'override della gerarchia simile a quello parentesi esegue l'override di precedenza degli operatori normale di un'espressione.  
  
1.  Una corrispondenza esatta è migliore. Sorprendentemente, per un argomento di essere una corrispondenza esatta, non deve corrispondere esattamente al tipo di parametro; solo deve essere sufficientemente vicino. Si tratta della chiave per conoscere cosa accade in questo esempio, e come è stata modificata la lingua.  
  
2.  Una promozione è preferibile rispetto a una conversione standard. Innalzamento di livello, ad esempio, un `short int` per un `int` è preferibile rispetto alla conversione di un `int` in un `double`.  
  
3.  Una conversione standard è preferibile rispetto a una conversione boxing. Ad esempio, la conversione di un `int` in un `double` è preferibile rispetto alla conversione boxing un `int` in un `Object`.  
  
4.  Una conversione boxing è migliore di una conversione implicita definita dall'utente. Ad esempio, la conversione boxing un `int` in un `Object` è preferibile rispetto all'applicazione di un operatore di conversione di un `SmallInt` classe di valori.  
  
5.  Una conversione implicita definita dall'utente è migliore di alcuna conversione affatto. Una conversione implicita definita dall'utente è l'ultima uscita prima dell'errore (tenendo però che la firma formale potrebbe contenere una matrice di parametri o i puntini di sospensione in tale posizione).  
  
 In tal caso, la cosa significa che una corrispondenza esatta non è necessariamente esattamente una corrispondenza? Ad esempio, `const char[4]` corrisponde esattamente a `const char*` o `String^`, ma l'ambiguità dell'esempio riguarda due corrispondenze esatte in conflitto.  
  
 Una corrispondenza esatta, in questo caso, include un numero di conversioni semplici. Esistono quattro conversioni semplici standard ISO c++ che possono essere applicati e comunque considerata una corrispondenza esatta. Tre sono definiti per le trasformazioni di lvalue. Un quarto tipo viene chiamato una conversione di qualificazione. Le tre trasformazioni di lvalue vengono considerate come una corrispondenza esatta migliore rispetto a uno che richiedono una conversione di qualificazione.  
  
 Una forma della trasformazione lvalue è la matrice nativa al puntatore conversione. Si tratta gli elementi coinvolti in corrispondenza un `const char[4]` a `const char*`. Pertanto, la corrispondenza di `f("abc")` a `f(const char*)` è una corrispondenza esatta. In versioni precedenti del linguaggio, questo è infatti la migliore corrispondenza.  
  
 Il compilatore chiamata venga contrassegnata come ambigua, è pertanto necessario che la conversione di un `const char[4]` per un `String^` anche essere una corrispondenza esatta tramite conversione semplice. Questa è la modifica che è stata introdotta la nuova versione di lingua. E per questo motivo la chiamata a questo punto viene contrassegnata come ambiguo.  
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche generali del linguaggio (C + c++ /CLI)](../dotnet/general-language-changes-cpp-cli.md)   
 [String](../windows/string-cpp-component-extensions.md)