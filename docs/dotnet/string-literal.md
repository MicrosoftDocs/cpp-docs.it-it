---
title: "Stringhe letterali | Microsoft Docs"
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
  - "stringhe letterali"
  - "stringhe [C++], stringhe letterali"
ms.assetid: 6d1fc3f8-0d58-4d68-9678-16b4f6dc4766
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stringhe letterali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La gestione dei valori letterali stringa è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nella progettazione con le estensioni gestite per C\+\+, una stringa letterale gestita viene indicata anteponendo una `S`.  Di seguito è riportato un esempio.  
  
```  
String *ps1 = "hello";  
String *ps2 = S"goodbye";  
```  
  
 La riduzione delle prestazioni tra le due inizializzazioni risulta significativa, come illustrato dalla rappresentazione CIL riportata di seguito basata su **ildasm**:  
  
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
  
 Ricordando di anteporre il prefisso `S` a una stringa letterale si ottiene un risparmio significativo.  Nella nuova sintassi, la gestione delle stringhe letterali è trasparente e determinata dal contesto di utilizzo.  Non è più necessario specificare il prefisso `S`.  
  
 Nei casi in cui è necessario indirizzare il compilatore in modo esplicito verso una determinata interpretazione,  si applica un cast esplicito.  Di seguito è riportato un esempio.  
  
```  
f( safe_cast<String^>("ABC") );  
```  
  
 La stringa letterale corrisponde ora a `String` con conversione semplice, anziché conversione standard.  Ciò modifica la risoluzione di insiemi di funzioni in overload comprendenti `String` e `const char*` come parametri formali antagonisti.  La risoluzione precedentemente risolta in un'istanza di `const char*` viene ora contrassegnata come ambigua.  Di seguito è riportato un esempio.  
  
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
  
 Perché c'è una differenza?  Poiché all'interno del programma esistono più istanze denominate `f`, è necessario applicare alla chiamata l'algoritmo di risoluzione dell'overload della funzione.  La risoluzione formale di una funzione in overload prevede tre passaggi.  
  
1.  Raccolta delle funzioni candidate.  Le funzioni candidate sono costituite dai metodi all'interno dell'ambito che corrispondono a livello lessicale al nome della funzione richiamata.  Poiché la chiamata di `f()` viene eseguita tramite un'istanza di `R`, tutte le funzioni denominate `f` che non sono membri di `R` o della gerarchia di classi base non sono funzioni candidate.  Nell'esempio sono incluse due funzioni candidate,  corrispondenti alle due funzioni membro di `R` denominate `f`.  In questa fase, una chiamata ha esito negativo se l'insieme delle funzioni candidate è vuoto.  
  
2.  Insieme delle funzioni valide tra le funzioni candidate.  Una funzione è valida se può essere richiamata con gli argomenti specificati nella chiamata, dati il numero di argomenti e i relativi tipi.  Nell'esempio, entrambe le funzioni candidate rappresentano funzioni valide.  In questa fase, una chiamata ha esito negativo se l'insieme delle funzioni valide è vuoto.  
  
3.  Selezionare la funzione che rappresenta la corrispondenza ottimale con la chiamata.  A tale scopo, classificare le conversioni applicate per trasformare gli argomenti nel tipo dei parametri delle funzioni valide.  Questa operazione risulta relativamente semplice con una funzione con singolo parametro, ma diventa più complessa in presenza di più parametri.  In questa fase, una chiamata ha esito negativo se non è presente una corrispondenza ottimale,  ovvero se le conversioni necessarie per trasformare il tipo dell'argomento effettivo nel tipo del parametro formale presentano lo stesso livello di efficienza.  La chiamata viene contrassegnata come ambigua.  
  
 Nelle estensioni gestite, nella risoluzione di questa chiamata viene richiamata l'istanza di `const char*` come corrispondenza ottimale.  Nella nuova sintassi, la conversione necessaria per ottenere la corrispondenza di `"abc"` con `const char*` e `String^` è equivalente, ovvero caratterizzata dallo stesso livello di efficienza, e la chiamata viene pertanto contrassegnata come ambigua.  
  
 È pertanto necessario definire quanto segue:  
  
-   Il tipo dell'argomento effettivo `"abc"`  
  
-   L'algoritmo per determinare quando una conversione di tipo risulta più efficiente di un'altra  
  
 Il tipo della stringa letterale `"abc"` è `const char[4]`. Alla fine di ogni stringa letterale è presente un carattere di terminazione null implicito.  
  
 L'algoritmo per determinare quando una conversione di tipo risulta più efficiente di un'altra prevede l'inserimento delle conversioni di tipo possibili in una gerarchia.  Di seguito viene illustrata tale gerarchia. Tutte le conversioni sono implicite.  Utilizzando una notazione di cast esplicita viene ignorata la gerarchia, così come la consueta precedenza degli operatori di un'espressione viene ignorata in presenza di parentesi.  
  
1.  Una corrispondenza esatta è ottimale.  Per costituire una corrispondenza esatta, un argomento non deve corrispondere esattamente al tipo di parametro. È sufficiente un elevato grado di approssimazione.  Questo principio è essenziale per comprendere l'esempio e le modifiche apportate al linguaggio.  
  
2.  Una promozione è preferibile rispetto a una conversione standard.  La promozione di `short int` a `int`, ad esempio, è preferibile rispetto alla conversione di `int` in `double`.  
  
3.  Una conversione standard è preferibile rispetto a una conversione boxing.  La conversione di `int` in `double`, ad esempio, è preferibile rispetto alla conversione boxing di `int` in `Object`.  
  
4.  Una conversione boxing è preferibile rispetto a una conversione definita dall'utente implicita.  La conversione boxing di `int` in `Object`, ad esempio, è preferibile rispetto all'applicazione di un operatore di conversione di una classe di valori `SmallInt`.  
  
5.  Una conversione definita dall'utente implicita è preferibile rispetto a nessuna conversione.  Una conversione definita dall'utente implicita rappresenta l'ultima possibilità per evitare un errore, a condizione che la firma formale possa contenere una matrice di parametri o puntini di sospensione nella posizione corrispondente.  
  
 Come sopra accennato, una corrispondenza esatta non è necessariamente esatta.  Ad esempio, `const char[4]` non corrisponde esattamente a `const char*` o `String^`, ma l'ambiguità dell'esempio riguarda due corrispondenze esatte in conflitto.  
  
 Una corrispondenza esatta include diverse conversioni semplici.  Nello standard ISO C\+\+ sono applicabili quattro conversioni semplici qualificabili come corrispondenza esatta.  Tre sono denominate trasformazioni di lvalue.  Un quarto tipo viene denominato conversione di qualificazione.  Le tre trasformazioni di lvalue vengono trattate come una corrispondenza esatta migliore rispetto a una corrispondenza che richiede una conversione di qualificazione.  
  
 Una forma di trasformazione di lvalue è rappresentata dalla conversione da matrice nativa a puntatore,  utilizzata per la corrispondenza tra `const char[4]` e `const char*`.  La corrispondenza tra `f("abc")` e `f(const char*)` è pertanto una corrispondenza esatta.  Nelle precedenti rappresentazioni del linguaggio costituisce infatti la corrispondenza ottimale.  
  
 Affinché la chiamata venga contrassegnata come ambigua dal compilatore, è pertanto necessario che la conversione di `const char[4]` in `String^` sia anche una corrispondenza esatta tramite conversione semplice.  Questa modifica introdotta nella nuova versione del linguaggio  rappresenta il motivo per cui la chiamata viene ora contrassegnata come ambigua.  
  
## Vedere anche  
 [Modifica generale del linguaggio](../dotnet/general-language-changes-cpp-cli.md)   
 [String](../windows/string-cpp-component-extensions.md)