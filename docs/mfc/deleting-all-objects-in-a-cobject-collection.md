---
title: Eliminazione di tutti gli oggetti in una raccolta CObject
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], deleting in collections
- objects in CObject collections, deleting
- CObject class [MFC], deleting in collection
- collection classes [MFC], deleting all objects
- CObject class collection
- objects in CObject collections
- collection classes [MFC], shared objects
ms.assetid: 81d2c1d5-a0a5-46e1-8ab9-82b45cf7afd2
ms.openlocfilehash: 5aac324b6af50db019c2a4b55b26a612cc081894
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225072"
---
# <a name="deleting-all-objects-in-a-cobject-collection"></a>Eliminazione di tutti gli oggetti in una raccolta CObject

Questo articolo illustra come eliminare tutti gli oggetti in una raccolta (senza eliminare l'oggetto raccolta).

Per eliminare tutti gli oggetti in una raccolta di `CObject` (o di oggetti derivati da `CObject` ), è possibile utilizzare una delle tecniche di iterazione descritte nell'articolo [accesso a tutti i membri di una raccolta](accessing-all-members-of-a-collection.md) per eliminare ogni oggetto a sua volta.

> [!CAUTION]
> Gli oggetti nelle raccolte possono essere condivisi. Ovvero la raccolta mantiene un puntatore all'oggetto, ma anche altre parti del programma potrebbero avere puntatori allo stesso oggetto. È necessario prestare attenzione a non eliminare un oggetto condiviso fino al termine dell'utilizzo dell'oggetto da parte di tutte le parti.

Questo articolo illustra come eliminare gli oggetti in:

- [Elenco](#_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject)

- [Matrice](#_core_to_delete_all_elements_in_an_array)

- [Mappa](#_core_to_delete_all_elements_in_a_map)

#### <a name="to-delete-all-objects-in-a-list-of-pointers-to-cobject"></a><a name="_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject"></a>Per eliminare tutti gli oggetti in un elenco di puntatori a CObject

1. Usare `GetHeadPosition` e `GetNext` per scorrere l'elenco.

1. Utilizzare l' **`delete`** operatore per eliminare ogni oggetto rilevato nell'iterazione.

1. Chiamare la `RemoveAll` funzione per rimuovere tutti gli elementi dall'elenco dopo che gli oggetti associati a tali elementi sono stati eliminati.

Nell'esempio seguente viene illustrato come eliminare tutti gli oggetti da un elenco di `CPerson` oggetti. Ogni oggetto nell'elenco è un puntatore a un `CPerson` oggetto che è stato originariamente allocato nell'heap.

[!code-cpp[NVC_MFCCollections#17](codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_1.cpp)]

L'ultima chiamata di funzione, `RemoveAll` , è una funzione membro di elenco che rimuove tutti gli elementi dall'elenco. La funzione membro `RemoveAt` rimuove un singolo elemento.

Si noti la differenza tra l'eliminazione dell'oggetto di un elemento e la rimozione dell'elemento stesso. La rimozione di un elemento dall'elenco rimuove semplicemente il riferimento all'elenco all'oggetto. L'oggetto esiste ancora in memoria. Quando si elimina un oggetto, questo smette di esistere e la relativa memoria viene recuperata. Pertanto, è importante rimuovere un elemento subito dopo l'eliminazione dell'oggetto dell'elemento in modo che l'elenco non tenti di accedere a oggetti che non esistono più.

#### <a name="to-delete-all-elements-in-an-array"></a><a name="_core_to_delete_all_elements_in_an_array"></a>Per eliminare tutti gli elementi di una matrice

1. Usare i `GetSize` valori di indice Integer e per scorrere la matrice.

1. Utilizzare l' **`delete`** operatore per eliminare ogni elemento rilevato nell'iterazione.

1. Chiamare la `RemoveAll` funzione per rimuovere tutti gli elementi dalla matrice dopo che sono stati eliminati.

   Il codice per l'eliminazione di tutti gli elementi di una matrice è il seguente:

   [!code-cpp[NVC_MFCCollections#18](codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_2.cpp)]

Come nell'esempio di elenco precedente, è possibile chiamare `RemoveAll` per rimuovere tutti gli elementi di una matrice o `RemoveAt` per rimuovere un singolo elemento.

#### <a name="to-delete-all-elements-in-a-map"></a><a name="_core_to_delete_all_elements_in_a_map"></a>Per eliminare tutti gli elementi di una mappa

1. Usare `GetStartPosition` e `GetNextAssoc` per scorrere la matrice.

1. Utilizzare l' **`delete`** operatore per eliminare la chiave e/o il valore per ogni elemento della mappa quando viene rilevato nell'iterazione.

1. Chiamare la `RemoveAll` funzione per rimuovere tutti gli elementi dalla mappa dopo che sono stati eliminati.

   Di seguito è riportato il codice per l'eliminazione di tutti gli elementi di una `CMap` raccolta. Ogni elemento della mappa ha una stringa come chiave e un `CPerson` oggetto (derivato da `CObject` ) come valore.

   [!code-cpp[NVC_MFCCollections#19](codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_3.cpp)]

È possibile chiamare `RemoveAll` per rimuovere tutti gli elementi di una mappa o `RemoveKey` per rimuovere un singolo elemento con la chiave specificata.

## <a name="see-also"></a>Vedere anche

[Accesso a tutti i membri di una raccolta](accessing-all-members-of-a-collection.md)
