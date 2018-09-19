---
title: Classi Collection ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- collection classes
ms.assetid: eff95de6-78ef-4212-9d7d-1dacbdd4cc58
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9e6c86db9be77e098d1160b847fce5ff940d20cb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093428"
---
# <a name="collection-classes"></a>Classi Collection

Le classi seguenti forniscono supporto per matrici, elenchi, mappe e anche i metodi di tratti per contribuire con i confronti e l'accesso all'elemento.

- [CAtlArray](../atl/reference/catlarray-class.md) questa classe implementa un oggetto matrice.

- [CAtlList](../atl/reference/catllist-class.md) questa classe fornisce metodi per creare e gestire un oggetto elenco.

- [CAtlMap](../atl/reference/catlmap-class.md) questa classe fornisce metodi per creare e gestire un oggetto map.

- [CAutoPtrArray](../atl/reference/cautoptrarray-class.md) questa classe fornisce metodi utili quando si crea una matrice di puntatori intelligenti.

- [CAutoPtrElementTraits](../atl/reference/cautoptrelementtraits-class.md) questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori intelligenti.

- [CAutoPtrList](../atl/reference/cautoptrlist-class.md) questa classe fornisce metodi utili quando si crea un elenco di puntatori intelligenti.

- [CAutoVectorPtrElementTraits](../atl/reference/cautovectorptrelementtraits-class.md) questa classe fornisce metodi, funzioni statiche, e typedef utile durante la creazione di raccolte di puntatori intelligenti usando vettoriale nuovi ed eliminare gli operatori.

- [CComQIPtrElementTraits](../atl/reference/ccomqiptrelementtraits-class.md) questa classe fornisce i metodi, funzioni statiche, nonché i puntatori a interfaccia typedef utile durante la creazione di raccolte di COM.

- [CComSafeArray](../atl/reference/ccomsafearray-class.md) questa classe è un wrapper per il [SAFEARRAY Data Type](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagsafearray) struttura.

- [CComSafeArrayBound](../atl/reference/ccomsafearraybound-class.md) questa classe è un wrapper per un [SAFEARRAYBOUND](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagsafearraybound) struttura.

- [CComUnkArray](../atl/reference/ccomunkarray-class.md) questa classe Archivia **IUnknown** puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) classe modello.

- [CDefaultCharTraits](../atl/reference/cdefaultchartraits-class.md) questa classe fornisce due funzioni statiche per la conversione dei caratteri tra lettere maiuscole e minuscole.

- [CDefaultCompareTraits](../atl/reference/cdefaultcomparetraits-class.md) questa classe fornisce funzioni di confronto di elemento predefinite.

- [CDefaultElementTraits](../atl/reference/cdefaultelementtraits-class.md) questa classe fornisce funzioni e metodi predefiniti per una classe di raccolta.

- [CDefaultHashTraits](../atl/reference/cdefaulthashtraits-class.md) questa classe fornisce una funzione statica per il calcolo dei valori hash.

- [CElementTraits](../atl/reference/celementtraits-class.md) questa classe viene utilizzata dalle classi di raccolta per fornire funzioni e metodi per lo spostamento, copia, confronto e operazioni di hashing.

- [CElementTraitsBase](../atl/reference/celementtraitsbase-class.md) questa classe fornisce l'impostazione predefinita i metodi di copia e spostamento per una classe di raccolta.

- [CHeapPtrElementTraits](../atl/reference/cheapptrelementtraits-class.md) questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori di heap.

- [CHeapPtrList](../atl/reference/cheapptrlist-class.md) questa classe fornisce metodi utili quando si crea un elenco di puntatori di heap.

- [CInterfaceArray](../atl/reference/cinterfacearray-class.md) questa classe fornisce metodi utili quando si crea una matrice di puntatori a interfaccia COM.

- [CInterfaceList](../atl/reference/cinterfacelist-class.md) questa classe fornisce metodi utili quando si crea un elenco di puntatori a interfaccia COM.

- [CPrimitiveElementTraits](../atl/reference/cprimitiveelementtraits-class.md) questa classe fornisce metodi predefiniti e le funzioni per una classe di raccolta è costituita da tipi di dati primitivi.

- [CRBMap](../atl/reference/crbmap-class.md) questa classe rappresenta una struttura di mapping, utilizzando un albero binario rosso-bianco.

- [CRBMultiMap](../atl/reference/crbmultimap-class.md) questa classe rappresenta una struttura di mapping che consente a ogni chiave da associare a più di un valore, usando un albero binario rosso-bianco.

- [CRBTree](../atl/reference/crbtree-class.md) questa classe fornisce metodi per la creazione e utilizzo di una struttura ad albero rosso-bianco.

- [CSimpleArray](../atl/reference/csimplearray-class.md) questa classe fornisce metodi per la gestione di una matrice semplice.

- [CSimpleArrayEqualHelper](../atl/reference/csimplearrayequalhelper-class.md) questa classe è un supporto per il [CSimpleArray](../atl/reference/csimplearray-class.md) classe.

- [CSimpleArrayEqualHelperFalse](../atl/reference/csimplearrayequalhelperfalse-class.md) questa classe è un supporto per il [CSimpleArray](../atl/reference/csimplearray-class.md) classe.

- [CSimpleMap](../atl/reference/csimplemap-class.md) questa classe offre supporto per un array di mapping semplice.

- [CSimpleMapEqualHelper](../atl/reference/csimplemapequalhelper-class.md) questa classe è un supporto per il [CSimpleMap](../atl/reference/csimplemap-class.md) classe.

- [CSimpleMapEqualHelperFalse](../atl/reference/csimplemapequalhelperfalse-class.md) questa classe è un supporto per il [CSimpleMap](../atl/reference/csimplemap-class.md) classe.

- [CStringElementTraits](../atl/reference/cstringelementtraits-class.md) questa classe fornisce funzioni statiche utilizzate dalle classi di raccolta l'archiviazione `CString` oggetti.

- [CStringElementTraitsI](../atl/reference/cstringelementtraitsi-class.md) questa classe fornisce funzioni statiche relative alle stringhe negli oggetti di classe di raccolta. È simile a [CStringElementTraits](../atl/reference/cstringelementtraits-class.md), ma esegue i confronti tra maiuscole e minuscole.

- [CStringRefElementTraits](../atl/reference/cstringrefelementtraits-class.md) questa classe fornisce funzioni statiche relative alle stringhe negli oggetti di classe di raccolta. Gli oggetti stringa sono trattati come riferimenti.

## <a name="related-articles"></a>Articoli correlati

[Classi di raccolta ATL](../atl/atl-collection-classes.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)<br/>
[Classi di raccolta](../atl/atl-collection-classes.md)

