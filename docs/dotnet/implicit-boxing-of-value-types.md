---
title: La conversione Boxing implicita dei tipi di valore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- boxing, Visual C++
- __box keyword
- boxing
- boxing, __box keyword
- value types, boxed
ms.assetid: 9597c92f-a3fe-44af-ad80-f9d656847a35
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f1f5a455333e5cb40b63d5a5237b2df053cef194
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132219"
---
# <a name="implicit-boxing-of-value-types"></a>Boxing implicito di tipi di valore
La conversione boxing dei tipi di valore è cambiato da estensioni gestite per C++ a Visual C++.  
  
 Nella progettazione del linguaggio è teorico anziché esperienza pratica con la funzionalità e, in pratica, è verificato un errore. Come un'analogia, originale progettazione del linguaggio più ereditarietà Stroustrup deciso che non è possibile inizializzare un oggetto secondario di classe base virtuale all'interno di un costruttore di classe derivata e, di conseguenza il linguaggio necessario che qualsiasi classe che funge da base virtuale classe deve definire un costruttore predefinito. È il costruttore predefinito che sarebbe stato richiamato da qualsiasi derivazione virtuale successive.  
  
 Il problema di una gerarchia di classe base virtuale è che la responsabilità dell'inizializzazione dell'oggetto secondario virtuale condivisa viene aggiornata di conseguenza ogni derivazione successive. Ad esempio, se definisce una classe base per cui inizializzazione richiede l'allocazione di un buffer, le dimensioni specificate dall'utente di buffer può essere passata come argomento al costruttore. Se si specificano quindi due derivazioni virtuali successive, chiamare `inputb` e `outputb`, ciascuna fornisce un valore particolare per il costruttore della classe base. A questo punto, quando si deriva un `in_out` classe sia da `inputb` e `outputb`, nessuno di questi valori per l'oggetto secondario condiviso di classe base virtuale sarà possibile precisa da valutare.  
  
 Pertanto, nella finestra di progettazione del linguaggio originale Stroustrup ha disattivato l'inizializzazione esplicita di una classe base virtuale all'interno dell'elenco di inizializzazione del membro del costruttore della classe derivata. Anche se è stato risolto il problema, in pratica l'impossibilità di indirizzare l'inizializzazione della classe base virtuale dimostrato impraticabile. Keith Gorlen del National Institute of Health, che ha implementato una versione gratuita di libreria della raccolta SmallTalk chiamata nihcl, è stato in convincere Stroustrup che aveva ideare una progettazione di linguaggio più flessibile.  
  
 Un principio di progettazione gerarchica orientata agli oggetti contiene che una classe derivata deve riferirsi a se stessa solo con l'implementazione non privati delle relative classi base. Per supportare una progettazione di inizializzazione più flessibile per l'ereditarietà virtuale, Stroustrup doveva violare questo principio. La classe più derivata in una gerarchia assume la responsabilità per l'inizializzazione di tutti i sotto-oggetto virtuale indipendentemente dal livello di profondità nella gerarchia di cui si verifica. Ad esempio, `inputb` e `outputb` sono entrambi responsabili di inizializzare in modo esplicito la relativa classe base virtuale. Quando `in_out` deriva da entrambi `inputb` e `outputb`, `in_out` diventa responsabile per l'inizializzazione di una volta rimosso classe base virtuale e l'inizializzazione resa esplicita in `inputb` e `outputb` è eliminato.  
  
 Questo offre la flessibilità necessaria per gli sviluppatori di lingua, ma anche una più complessa la semantica. Per eliminare tale complicazione viene escluso se si limita a una classe base virtuale senza stato e consente semplicemente di specificare un'interfaccia. Questo costituisce un idioma progettazione consigliato in C++. All'interno di programmazione CLR, viene generato per i criteri con il tipo di interfaccia.  
  
 Ecco un esempio di codice semplice - e in questo caso, non è necessario il boxing esplicito:  
  
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
  
 Come si può notare, è molto di boxing. Tipo di valore in Visual C++, la conversione boxing è implicito:  
  
```  
// new syntax makes boxing implicit  
array<int>^ my1DIntArray = {1,2,3,4,5};  
array<Object^>^ myObjArray = {26,27,28,29,30};  
  
Console::WriteLine( "{0}\t{1}\t{2}", 0,   
   my1DIntArray->GetLowerBound( 0 ),   
   my1DIntArray->GetUpperBound( 0 ) );  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di valore e i relativi comportamenti (C + c++ /CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Conversione boxing](../windows/boxing-cpp-component-extensions.md)