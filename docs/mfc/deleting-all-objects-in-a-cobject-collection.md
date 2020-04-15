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
ms.openlocfilehash: 303b8a566a730c5abd06d51fb7977174e19a6435
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370542"
---
# <a name="deleting-all-objects-in-a-cobject-collection"></a>Eliminazione di tutti gli oggetti in una raccolta CObject

In questo articolo viene illustrato come eliminare tutti gli oggetti in una raccolta (senza eliminare l'oggetto raccolta stesso).

Per eliminare tutti gli oggetti `CObject`in un insieme `CObject`di s (o di oggetti derivati da ), si utilizza una delle tecniche di iterazione descritte nell'articolo [Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md) per eliminare ogni oggetto a turno.

> [!CAUTION]
> Gli oggetti nelle raccolte possono essere condivisi. Ovvero, la raccolta mantiene un puntatore all'oggetto, ma altre parti del programma possono anche avere puntatori allo stesso oggetto. È necessario fare attenzione a non eliminare un oggetto condiviso fino a quando tutte le parti non hanno terminato di utilizzare l'oggetto.

In questo articolo viene illustrato come eliminare gli oggetti in:

- [Un elenco](#_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject)

- [Un array](#_core_to_delete_all_elements_in_an_array)

- [Una mappa](#_core_to_delete_all_elements_in_a_map)

#### <a name="to-delete-all-objects-in-a-list-of-pointers-to-cobject"></a><a name="_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject"></a>To delete all objects in a list of pointers to CObject

1. Utilizzare `GetHeadPosition` `GetNext` e per scorrere l'elenco.

1. Utilizzare l'operatore **delete** per eliminare ogni oggetto quando viene rilevato nell'iterazione.

1. Chiamare `RemoveAll` la funzione per rimuovere tutti gli elementi dall'elenco dopo che gli oggetti associati a tali elementi sono stati eliminati.

Nell'esempio seguente viene illustrato come eliminare `CPerson` tutti gli oggetti da un elenco di oggetti. Ogni oggetto nell'elenco è `CPerson` un puntatore a un oggetto originariamente allocato nell'heap.

[!code-cpp[NVC_MFCCollections#17](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_1.cpp)]

L'ultima chiamata `RemoveAll`di funzione, , è una funzione membro di elenco che rimuove tutti gli elementi dall'elenco. La funzione `RemoveAt` membro rimuove un singolo elemento.

Si noti la differenza tra l'eliminazione dell'oggetto di un elemento e la rimozione dell'elemento stesso. La rimozione di un elemento dall'elenco rimuove semplicemente il riferimento dell'elenco all'oggetto. L'oggetto esiste ancora in memoria. Quando si elimina un oggetto, questo cessa di esistere e la relativa memoria viene recuperata. Pertanto, è importante rimuovere un elemento immediatamente dopo che l'oggetto dell'elemento è stato eliminato in modo che l'elenco non tenterà di accedere agli oggetti che non esistono più.

#### <a name="to-delete-all-elements-in-an-array"></a><a name="_core_to_delete_all_elements_in_an_array"></a>Per eliminare tutti gli elementi di una matrice

1. Utilizzare `GetSize` e valori di indice integer per scorrere la matrice.

1. Utilizzare l'operatore **delete** per eliminare ogni elemento così come viene rilevato nell'iterazione.

1. Chiamare `RemoveAll` la funzione per rimuovere tutti gli elementi dalla matrice dopo che sono stati eliminati.

   Il codice per l'eliminazione di tutti gli elementi di una matrice è il seguente:

   [!code-cpp[NVC_MFCCollections#18](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_2.cpp)]

Come per l'esempio di `RemoveAll` elenco precedente, è possibile `RemoveAt` chiamare per rimuovere tutti gli elementi in una matrice o per rimuovere un singolo elemento.

#### <a name="to-delete-all-elements-in-a-map"></a><a name="_core_to_delete_all_elements_in_a_map"></a>Per eliminare tutti gli elementi in una mappa

1. Utilizzare `GetStartPosition` `GetNextAssoc` e per scorrere la matrice.

1. Utilizzare l'operatore **delete** per eliminare la chiave e/o il valore per ogni elemento della mappa come viene rilevato nell'iterazione.

1. Chiamare `RemoveAll` la funzione per rimuovere tutti gli elementi dalla mappa dopo che sono stati eliminati.

   Il codice per eliminare `CMap` tutti gli elementi di una raccolta è il seguente. Ogni elemento nella mappa ha una stringa `CPerson` come chiave `CObject`e un oggetto (derivato da ) come valore.

   [!code-cpp[NVC_MFCCollections#19](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_3.cpp)]

È possibile `RemoveAll` chiamare per rimuovere tutti `RemoveKey` gli elementi in una mappa o per rimuovere un singolo elemento con la chiave specificata.

## <a name="see-also"></a>Vedere anche

[Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)
