---
title: La conversione Boxing implicita dei tipi di valore | Microsoft Docs
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
ms.openlocfilehash: e9c232dba6d766d0855bb4bb29e33d85b5fd5a2d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46387588"
---
# <a name="implicit-boxing-of-value-types"></a>Boxing implicito di tipi di valore

La conversione boxing dei tipi di valore è stato modificato dalle estensioni gestite per C++ in Visual C++.

In Progettazione del linguaggio, abbiamo teorico anziché esperienza pratica con la funzionalità e, in pratica, è verificato un errore. Come un'analogia, originale progettazione del linguaggio più ereditarietà Stroustrup ha deciso che non è possibile inizializzare un oggetto secondario di classi basi virtuali all'interno di un costruttore della classe derivata, e pertanto la lingua è obbligatoria che qualsiasi classe che funge da base virtuale classe deve definire un costruttore predefinito. È il costruttore predefinito che sarebbe stato richiamato da qualsiasi derivazione virtuale successive.

Il problema di una gerarchia di classi basi virtuali è che sposta la responsabilità per l'inizializzazione dell'oggetto secondario virtuale condivisa con ognuna delle derivazioni successive. Ad esempio, se definisce una classe base per cui l'inizializzazione richiede l'allocazione di buffer, le dimensioni del buffer specificato dall'utente può essere passato come argomento al costruttore. Se specificano quindi due derivazioni virtuali successive, chiamarle `inputb` e `outputb`, ognuno fornisce un valore specifico per il costruttore di classe di base. A questo punto, quando si deriva una `in_out` classe da entrambe `inputb` e `outputb`, nessuno di questi valori per l'oggetto secondario di classe base virtuale condivisa sarà possibile precisa da valutare.

Pertanto, in Progettazione del linguaggio originale, Stroustrup ha disattivato l'inizializzazione esplicita di una classe base virtuale all'interno dell'elenco di inizializzazione del membro del costruttore della classe derivata. Sebbene questo stato risolto il problema, in pratica l'impossibilità di indirizzare l'inizializzazione della classe di base virtuale si è rivelata impraticabile. Keith Gorlen del National Institute of Health, che ha implementato una versione freeware della libreria di raccolta SmallTalk denominata nihcl, è stato in convincere Stroustrup che aveva dovranno inventare una progettazione di linguaggio più flessibile.

Un principio di progettazione gerarchico orientata sostiene che una classe derivata deve riferirsi stesso solo con l'implementazione non privati delle relative classi base immediate. Per supportare una progettazione flessibile di inizializzazione per l'ereditarietà virtuale, Stroustrup dovevano violino questo principio. La classe più derivata in una gerarchia assume la responsabilità del tutto l'inizializzazione dell'oggetto secondarie virtuale indipendentemente dal livello di profondità nella gerarchia di cui si verifica. Ad esempio, `inputb` e `outputb` sono entrambi responsabile dell'inizializzazione in modo esplicito la relativa classe base virtuale. Quando `in_out` deriva da entrambe `inputb` e `outputb`, `in_out` diventa responsabile per l'inizializzazione di una sola classe base virtuale rimossa e resa esplicita all'interno di inizializzazione `inputb` e `outputb` è soppresso.

Questo offre la flessibilità necessaria dagli sviluppatori di linguaggi, ma al costo di una semantica complicata. Questo carico di lavoro della complicazione viene escluso se limitiamo una classe base virtuale per essere senza stato e consente semplicemente di specificare un'interfaccia. Si tratta di un linguaggio di progettazione consigliato all'interno di C++. All'interno di programmazione CLR, viene generato per i criteri con il tipo di interfaccia.

Ecco un esempio di codice semplice - e in questo caso, non è necessario la conversione boxing esplicito:

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

[Tipi di valore e relativi comportamenti (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
[Conversione boxing](../windows/boxing-cpp-component-extensions.md)