---
title: "Boxing implicito di tipi di valore | Microsoft Docs"
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
  - "__box (parola chiave)"
  - "boxing"
  - "boxing, __box (parola chiave)"
  - "boxing, Visual C++"
  - "tipi di valori, boxed"
ms.assetid: 9597c92f-a3fe-44af-ad80-f9d656847a35
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Boxing implicito di tipi di valore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La conversione boxing dei tipi di valore è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nella progettazione del linguaggio è stato adottato un approccio teorico anziché pratico basato sull'utilizzo della funzionalità e questa scelta si è rivelata errata.  Per analogia, Stroustrup decise che nella progettazione originale del linguaggio con ereditarietà multipla un sotto\-oggetto di classe base virtuale non potesse essere inizializzato all'interno di un costruttore di classe derivata. Il linguaggio richiedeva quindi che qualsiasi classe utilizzata come classe base virtuale definisse un costruttore predefinito,  che sarebbe stato richiamato da tutte le successive derivazioni virtuali.  
  
 Il problema posto da una gerarchia di classi base virtuali è che la responsabilità dell'inizializzazione del sotto\-oggetto virtuale condiviso si sposta con ognuna delle derivazioni successive.  Se, ad esempio, si definisce una classe base la cui inizializzazione richiede l'allocazione di un buffer, le dimensioni di tale buffer definite dall'utente devono essere passate al costruttore come argomento.  Se si specificano quindi due derivazioni virtuali successive, chiamate `inputb` e `outputb`, ognuna di esse indica un valore particolare per il costruttore della classe base.  Se ora si deriva una classe `in_out` sia da `inputb` che da `outputb`, non sarà possibile eseguire una valutazione precisa di nessuno di questi valori del sotto\-oggetto condiviso di classe base virtuale.  
  
 Di conseguenza, nella progettazione del linguaggio originale Stroustrup ha disattivato l'inizializzazione esplicita di una classe base virtuale all'interno dell'elenco di inizializzazione dei membri relativo al costruttore della classe derivata.  Questo ha teoricamente risolto il problema, ma l'impossibilità di controllare l'inizializzazione della classe base virtuale si è dimostrata una soluzione impraticabile.  Keith Gorlen del National Institute of Health, che ha implementato una versione freeware della libreria della raccolta SmallTalk chiamata nihcl, è stato determinante nel convincere Stroustrup che era ormai necessario creare una progettazione del linguaggio più flessibile.  
  
 Uno dei principi della progettazione gerarchica orientata agli oggetti sostiene che una classe derivata deve riferirsi solo a se stessa con l'implementazione non privata delle relative classi base.  Per garantire il supporto di una progettazione di inizializzazione più flessibile per l'ereditarietà virtuale, Stroustrup doveva violare tale principio.  La classe derivata di livello più basso in una gerarchia si assume la responsabilità dell'inizializzazione di tutti i sotto\-oggetti virtuali, indipendentemente dal punto della gerarchia in cui questa viene eseguita.  Ad esempio, `inputb` e `outputb` sono entrambi responsabili di inizializzare in modo esplicito la relativa classe base virtuale.  Se `in_out` deriva sia da `inputb` che da `outputb`, `in_out` diventa responsabile di inizializzare la classe base virtuale precedentemente rimossa, l'inizializzazione viene resa esplicita in `inputb` e `outputb` viene eliminato.  
  
 Questo garantisce la flessibilità richiesta dagli sviluppatori di linguaggio, ma rende più complessa la semantica.  Per eliminare tale complessità, è sufficiente limitare una classe base virtuale in modo che risulti senza stato e consentirle di specificare un'interfaccia.  Questo linguaggio di progettazione è consigliabile in C\+\+,  mentre assume il ruolo di criteri con il tipo interfaccia nella programmazione CLR.  
  
 Di seguito è riportato un esempio di codice semplice in cui il boxing esplicito non è necessario:  
  
```  
// Managed Extensions for C++ requires explicit __box operation  
int my1DIntArray __gc[] = { 1, 2, 3, 4, 5 };  
Object* myObjArray __gc[] = {   
   __box(26), __box(27), __box(28), __box(29), __box(30)  
};  
  
Console::WriteLine( "{0}\t{1}\t{2}", __box(0),  
   __box(my1DIntArray->GetLowerBound(0)),  
   __box(my1DIntArray->GetUpperBound(0)) );  
```  
  
 Come si può notare, vengono eseguite numerose operazioni di boxing.  In [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], la conversione boxing del tipo di valore è implicita:  
  
```  
// new syntax makes boxing implicit  
array<int>^ my1DIntArray = {1,2,3,4,5};  
array<Object^>^ myObjArray = {26,27,28,29,30};  
  
Console::WriteLine( "{0}\t{1}\t{2}", 0,   
   my1DIntArray->GetLowerBound( 0 ),   
   my1DIntArray->GetUpperBound( 0 ) );  
```  
  
## Vedere anche  
 [Tipi di valore e relativi comportamenti \(C\+\+\/CLI\)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Boxing](../windows/boxing-cpp-component-extensions.md)