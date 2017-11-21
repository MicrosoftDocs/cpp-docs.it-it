---
title: Insiemi ed enumeratori ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- enumerator interfaces
- collections, ATL classes
- enumerators, ATL classes
- collection interfaces
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4738e3f5256fe654dd64541dfd021ba2b4fce090
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="atl-collections-and-enumerators"></a>Raccolte ed enumeratori ATL
Oggetto `collection` è un oggetto COM che fornisce un'interfaccia che consente l'accesso a un gruppo di elementi di dati (dati non elaborati o altri oggetti). Un'interfaccia che segue gli standard per fornire l'accesso a un gruppo di oggetti è noto come un *interfaccia di raccolta*.  
  
 Come minimo, è necessario fornire le interfacce di raccolta una **conteggio** proprietà che restituisce il numero di elementi nella raccolta, un **elemento** proprietà che restituisce un elemento dalla raccolta in base a un indice e un `_NewEnum` proprietà che restituisce un enumeratore per la raccolta. Facoltativamente, è possono fornire le interfacce di raccolta **Aggiungi** e **rimuovere** metodi che consentono di essere inserito o eliminato dalla raccolta di elementi e un **deselezionare** rimuovere (metodo) tutti gli elementi.  
  
 Un `enumerator` è un oggetto COM che fornisce un'interfaccia per scorrere gli elementi in una raccolta. Enumeratore (interfacce) forniscono l'accesso seriale agli elementi di una raccolta tramite i quattro metodi richiesti: `Next`, **Skip**, **reimpostare**, e `Clone`.  
  
 Sono disponibili ulteriori informazioni sulle interfacce di enumeratore leggendo sull'archetipo (ma completamente immaginaria) [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx) interfaccia.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Classi di raccolta e di enumeratori ATL](../atl/atl-collection-and-enumerator-classes.md)  
 Descrive brevemente e fornisce collegamenti alle classi ATL che consentono di implementano raccolte ed enumeratori.  
  
 [Principi di progettazione per le interfacce di raccolte ed enumeratori](../atl/design-principles-for-collection-and-enumerator-interfaces.md)  
 Vengono illustrati i principi di progettazione protetti da ogni tipo di interfaccia.  
  
 [Implementazione di una raccolta basata su libreria standard C++](../atl/implementing-an-stl-based-collection.md)  
 Un esempio esteso che illustra l'implementazione di una raccolta basata sulla libreria Standard C++.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
 [Nell'esempio ATLCollections](../visual-cpp-samples.md)  
 Un esempio che illustra l'uso di `ICollectionOnSTLImpl` e `CComEnumOnSTL`e l'implementazione di classi di criteri di copia personalizzata.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

