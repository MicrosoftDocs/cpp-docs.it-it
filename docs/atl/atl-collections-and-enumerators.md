---
title: Raccolte ed enumeratori ATL
ms.date: 11/04/2016
helpviewer_keywords:
- enumerator interfaces
- collections, ATL classes
- enumerators, ATL classes
- collection interfaces
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
ms.openlocfilehash: 502bedb1773dc2a6edbd6679d50e9c5946228283
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491894"
---
# <a name="atl-collections-and-enumerators"></a>Raccolte ed enumeratori ATL

Un `collection` è un oggetto com che fornisce un'interfaccia che consente l'accesso a un gruppo di elementi di dati (dati non elaborati o altri oggetti). Un'interfaccia che segue gli standard per fornire l'accesso a un gruppo di oggetti è nota come *interfaccia di raccolta*.

Come minimo, le interfacce di raccolta devono fornire `Count` una proprietà che restituisce il numero di elementi nella raccolta, una `Item` proprietà che restituisce un elemento dalla raccolta in base a un indice e una `_NewEnum` proprietà che restituisce un oggetto. enumeratore per la raccolta. Facoltativamente, le interfacce di raccolta `Add` possono `Remove` fornire i metodi e per consentire l'inserimento o l'eliminazione di elementi dalla raccolta e `Clear` un metodo per rimuovere tutti gli elementi.

`enumerator` È un oggetto com che fornisce un'interfaccia per scorrere gli elementi di una raccolta. Le interfacce di enumeratore forniscono l'accesso seriale agli elementi di una raccolta tramite quattro `Next`metodi `Skip`obbligatori: `Clone` `Reset`,, e.

Per altre informazioni sulle interfacce dell'enumeratore, vedere contenuto di riferimento, ad esempio l'interfaccia [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

## <a name="in-this-section"></a>In questa sezione

[Classi di raccolta e di enumeratori ATL](../atl/atl-collection-and-enumerator-classes.md)<br/>
Viene brevemente descritto e vengono forniti collegamenti alle classi ATL che consentono di implementare raccolte ed enumeratori.

[Principi di progettazione per le interfacce di raccolte ed enumeratori](../atl/design-principles-for-collection-and-enumerator-interfaces.md)<br/>
Vengono illustrati i diversi principi di progettazione alla base di ogni tipo di interfaccia.

[Implementazione di una raccolta basata su libreria standard C++](../atl/implementing-an-stl-based-collection.md)<br/>
Esempio esteso che illustra l'implementazione di una C++ raccolta standard basata su libreria.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

[Esempio ATLCollections](../overview/visual-cpp-samples.md)<br/>
Esempio che illustra l'utilizzo di `ICollectionOnSTLImpl` e `CComEnumOnSTL`e l'implementazione di classi di criteri di copia personalizzate.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)
