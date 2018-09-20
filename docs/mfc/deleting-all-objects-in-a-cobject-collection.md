---
title: L'eliminazione di tutti gli oggetti in una raccolta CObject | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- objects [MFC], deleting in collections
- objects in CObject collections, deleting
- CObject class [MFC], deleting in collection
- collection classes [MFC], deleting all objects
- CObject class collection
- objects in CObject collections
- collection classes [MFC], shared objects
ms.assetid: 81d2c1d5-a0a5-46e1-8ab9-82b45cf7afd2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3374b2a292fc6463cb4fd85d0cd56fe9c3556443
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46448247"
---
# <a name="deleting-all-objects-in-a-cobject-collection"></a>Eliminazione di tutti gli oggetti in una raccolta CObject

Questo articolo illustra come eliminare tutti gli oggetti in una raccolta (senza eliminare l'oggetto raccolta stesso).

Per eliminare tutti gli oggetti in una raccolta di `CObject`s (o di oggetti derivati dal `CObject`), si usa una delle tecniche di iterazione descritte nell'articolo [l'accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md) per eliminare tutti gli oggetti in attiva.

> [!CAUTION]
>  Gli oggetti nelle raccolte possono essere condivisi. Vale a dire, la raccolta include un puntatore all'oggetto, ma altre parti del programma possono contenere anche i puntatori allo stesso oggetto. È necessario prestare attenzione a non eliminare un oggetto condiviso fino a quando tutte le parti hanno terminato di utilizzare l'oggetto.

Questo articolo illustra come eliminare gli oggetti in:

- [Un elenco](#_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject)

- [Una matrice](#_core_to_delete_all_elements_in_an_array)

- [Una mappa](#_core_to_delete_all_elements_in_a_map)

#### <a name="_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject"></a>  Per eliminare tutti gli oggetti in un elenco di puntatori da CObject

1. Uso `GetHeadPosition` e `GetNext` per scorrere l'elenco.

1. Usare la **eliminare** operatore da eliminare ogni oggetto in quanto si è verificato nell'iterazione.

1. Chiamare il `RemoveAll` funzione per rimuovere tutti gli elementi dall'elenco dopo l'eliminazione di oggetti associati a tali elementi.

Nell'esempio seguente viene illustrato come eliminare tutti gli oggetti da un elenco di `CPerson` oggetti. Ogni oggetto nell'elenco è un puntatore a un `CPerson` oggetto originariamente è stata allocata nell'heap.

[!code-cpp[NVC_MFCCollections#17](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_1.cpp)]

L'ultima chiamata di funzione, `RemoveAll`, è una funzione membro di elenco che rimuove tutti gli elementi dall'elenco. La funzione membro `RemoveAt` rimosso un singolo elemento.

Si noti la differenza tra l'eliminazione di oggetti di un elemento e la rimozione dell'elemento stesso. L'eliminazione di un elemento dall'elenco semplicemente rimuove riferimento all'oggetto dell'elenco. L'oggetto esiste ancora in memoria. Quando si elimina un oggetto, questo cessa di esistere e la memoria viene recuperata. Di conseguenza, è importante rimuovere un elemento immediatamente dopo l'oggetto dell'elemento è stato eliminato in modo che l'elenco non tenti di accedere agli oggetti che non esistono più.

#### <a name="_core_to_delete_all_elements_in_an_array"></a>  Per eliminare tutti gli elementi in una matrice

1. Usare `GetSize` e valori di indice integer per scorrere la matrice.

1. Usare la **eliminare** operatore da eliminare tutti gli elementi come si è verificato nell'iterazione.

1. Chiamare il `RemoveAll` funzione per rimuovere tutti gli elementi dalla matrice dopo che sono stati eliminati.

     Il codice per l'eliminazione di tutti gli elementi della matrice è come segue:

     [!code-cpp[NVC_MFCCollections#18](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_2.cpp)]

Come con l'elenco riportato di seguito viene riportato sopra, è possibile chiamare `RemoveAll` per rimuovere tutti gli elementi in una matrice o `RemoveAt` per rimuovere un singolo elemento.

#### <a name="_core_to_delete_all_elements_in_a_map"></a> Per eliminare tutti gli elementi in una mappa

1. Uso `GetStartPosition` e `GetNextAssoc` per scorrere la matrice.

1. Usare la **eliminare** operatore da eliminare la chiave e/o il valore per ogni elemento della mappa perché si è verificato nell'iterazione.

1. Chiamare il `RemoveAll` funzione per rimuovere tutti gli elementi dalla mappa dopo che sono stati eliminati.

     Il codice per l'eliminazione di tutti gli elementi di un `CMap` raccolta è come indicato di seguito. Ogni elemento della mappa è una stringa come chiave e un `CPerson` oggetto (derivato da `CObject`) come valore.

     [!code-cpp[NVC_MFCCollections#19](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_3.cpp)]

È possibile chiamare `RemoveAll` per rimuovere tutti gli elementi in una mappa o `RemoveKey` per rimuovere un singolo elemento con la chiave specificata.

## <a name="see-also"></a>Vedere anche

[Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)

