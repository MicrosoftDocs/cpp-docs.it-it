---
description: 'Ulteriori informazioni su: raccolte ed enumeratori ATL'
title: Raccolte ed enumeratori ATL
ms.date: 11/04/2016
helpviewer_keywords:
- enumerator interfaces
- collections, ATL classes
- enumerators, ATL classes
- collection interfaces
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
ms.openlocfilehash: 92e9ab3df52219812d72ae5cb811f57a3ecf4fad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166005"
---
# <a name="atl-collections-and-enumerators"></a>Raccolte ed enumeratori ATL

Un `collection` è un oggetto com che fornisce un'interfaccia che consente l'accesso a un gruppo di elementi di dati (dati non elaborati o altri oggetti). Un'interfaccia che segue gli standard per fornire l'accesso a un gruppo di oggetti è nota come *interfaccia di raccolta*.

Come minimo, le interfacce di raccolta devono fornire una `Count` proprietà che restituisce il numero di elementi nella raccolta, una `Item` proprietà che restituisce un elemento dalla raccolta in base a un indice e una `_NewEnum` proprietà che restituisce un enumeratore per la raccolta. Facoltativamente, le interfacce di raccolta possono fornire i `Add` `Remove` metodi e per consentire l'inserimento o l'eliminazione di elementi dalla raccolta e un `Clear` metodo per rimuovere tutti gli elementi.

`enumerator`È un oggetto com che fornisce un'interfaccia per scorrere gli elementi di una raccolta. Le interfacce di enumeratore forniscono l'accesso seriale agli elementi di una raccolta tramite quattro metodi obbligatori: `Next` ,, `Skip` `Reset` e `Clone` .

Per altre informazioni sulle interfacce dell'enumeratore, vedere contenuto di riferimento, ad esempio l'interfaccia [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

## <a name="in-this-section"></a>Contenuto della sezione

[Classi di enumeratore e raccolta ATL](../atl/atl-collection-and-enumerator-classes.md)<br/>
Viene brevemente descritto e vengono forniti collegamenti alle classi ATL che consentono di implementare raccolte ed enumeratori.

[Principi di progettazione per le interfacce di raccolta ed enumeratore](../atl/design-principles-for-collection-and-enumerator-interfaces.md)<br/>
Vengono illustrati i diversi principi di progettazione alla base di ogni tipo di interfaccia.

[Implementazione di una raccolta di Library-Based C++ standard](../atl/implementing-an-stl-based-collection.md)<br/>
Esempio esteso che illustra l'implementazione di una raccolta basata sulla libreria standard C++.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

[Esempio ATLCollections](../overview/visual-cpp-samples.md)<br/>
Esempio che illustra l'utilizzo di `ICollectionOnSTLImpl` e `CComEnumOnSTL` e l'implementazione di classi di criteri di copia personalizzate.

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)
