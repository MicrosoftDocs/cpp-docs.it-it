---
title: Raccolte ed enumeratori ATL
ms.date: 11/04/2016
helpviewer_keywords:
- enumerator interfaces
- collections, ATL classes
- enumerators, ATL classes
- collection interfaces
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
ms.openlocfilehash: ebf7be8b2c80a714a27567ce0334475519a69454
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58768016"
---
# <a name="atl-collections-and-enumerators"></a>Raccolte ed enumeratori ATL

Oggetto `collection` è un oggetto COM che offre un'interfaccia che consente l'accesso a un gruppo di elementi di dati (dati non elaborati o altri oggetti). Un'interfaccia che segue gli standard per fornire l'accesso a un gruppo di oggetti è noto come un *interfaccia di raccolta*.

Come minimo, è necessario fornire le interfacce di raccolta una `Count` proprietà che restituisce il numero di elementi nella raccolta, un' `Item` proprietà che restituisce un elemento dalla raccolta in base a un indice, e un `_NewEnum` proprietà che restituisce un enumeratore per la raccolta. Interfacce di raccolta possono facoltativamente fornire `Add` e `Remove` metodi per consentire gli elementi da essere inserita o eliminata dalla raccolta e un `Clear` metodo per rimuovere tutti gli elementi.

Un `enumerator` è un oggetto COM che offre un'interfaccia per scorrere gli elementi in una raccolta. Enumeratore (interfacce) forniscono l'accesso seriale agli elementi di una raccolta tramite quattro metodi richiesti: `Next`, `Skip`, `Reset`, e `Clone`.

Altre informazioni sulle interfacce enumeratore mediante la lettura dei contenuti di riferimento, ad esempio [IEnumString](/windows/desktop/api/objidl/nn-objidl-ienumstring) interfaccia.

## <a name="in-this-section"></a>In questa sezione

[Classi di raccolta e di enumeratori ATL](../atl/atl-collection-and-enumerator-classes.md)<br/>
Descrive brevemente e fornisce collegamenti alle classi ATL che consentono di implementano le raccolte ed enumeratori.

[Principi di progettazione per le interfacce di raccolte ed enumeratori](../atl/design-principles-for-collection-and-enumerator-interfaces.md)<br/>
Vengono illustrati i principi di progettazione alla base di ogni tipo di interfaccia.

[Implementazione di una raccolta basata su libreria standard C++](../atl/implementing-an-stl-based-collection.md)<br/>
Un esempio esteso che illustra l'implementazione di una raccolta basata su libreria Standard C++.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

[Nell'esempio ATLCollections](../overview/visual-cpp-samples.md)<br/>
Un esempio che illustra l'uso della `ICollectionOnSTLImpl` e `CComEnumOnSTL`e l'implementazione di classi di criteri di copia personalizzate.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)
