---
title: ATL raccolte ed enumeratori | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- enumerator interfaces
- collections, ATL classes
- enumerators, ATL classes
- collection interfaces
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9837b42148062bdd2c44855c129f085ca47cdec0
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848794"
---
# <a name="atl-collections-and-enumerators"></a>Raccolte ed enumeratori ATL
Oggetto `collection` è un oggetto COM che offre un'interfaccia che consente l'accesso a un gruppo di elementi di dati (dati non elaborati o altri oggetti). Un'interfaccia che segue gli standard per fornire l'accesso a un gruppo di oggetti è noto come un *interfaccia di raccolta*.  
  
 Come minimo, è necessario fornire le interfacce di raccolta una `Count` proprietà che restituisce il numero di elementi nella raccolta, un' `Item` proprietà che restituisce un elemento dalla raccolta in base a un indice, e un `_NewEnum` proprietà che restituisce un enumeratore per la raccolta. Interfacce di raccolta possono facoltativamente fornire `Add` e `Remove` metodi per consentire gli elementi da essere inserita o eliminata dalla raccolta e un `Clear` metodo per rimuovere tutti gli elementi.  
  
 Un `enumerator` è un oggetto COM che offre un'interfaccia per scorrere gli elementi in una raccolta. Enumeratore (interfacce) forniscono l'accesso seriale agli elementi di una raccolta tramite quattro metodi richiesti: `Next`, `Skip`, `Reset`, e `Clone`.  
  
 Altre informazioni sull'enumeratore (interfacce), vedere l'archetipo (ma interamente immaginaria) [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx) interfaccia.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Classi di raccolta e di enumeratori ATL](../atl/atl-collection-and-enumerator-classes.md)  
 Descrive brevemente e fornisce collegamenti alle classi ATL che consentono di implementano le raccolte ed enumeratori.  
  
 [Principi di progettazione per le interfacce di raccolte ed enumeratori](../atl/design-principles-for-collection-and-enumerator-interfaces.md)  
 Vengono illustrati i principi di progettazione alla base di ogni tipo di interfaccia.  
  
 [Implementazione di una raccolta basata su libreria standard C++](../atl/implementing-an-stl-based-collection.md)  
 Un esempio esteso che illustra l'implementazione di una raccolta basata su libreria Standard C++.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
 [Nell'esempio ATLCollections](../visual-cpp-samples.md)  
 Un esempio che illustra l'uso della `ICollectionOnSTLImpl` e `CComEnumOnSTL`e l'implementazione di classi di criteri di copia personalizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

