---
title: L'eliminazione di tutti gli oggetti in una raccolta CObject | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 04f1edc7f181bdb23e050d2fa608c9b3a2056749
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deleting-all-objects-in-a-cobject-collection"></a>Eliminazione di tutti gli oggetti in una raccolta CObject
In questo articolo viene illustrato come eliminare tutti gli oggetti in una raccolta (senza eliminare l'oggetto raccolta stesso).  
  
 Per eliminare tutti gli oggetti in una raccolta di `CObject`s (o di oggetti derivati da `CObject`), utilizzare una delle tecniche di iterazione descritte nell'articolo [l'accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md) per eliminare tutti gli oggetti in Consente di attivare.  
  
> [!CAUTION]
>  Oggetti nelle raccolte possono essere condivisa. Ovvero, la raccolta include un puntatore all'oggetto, ma altre parti del programma potrebbero anche essere puntatori allo stesso oggetto. È necessario fare attenzione a non eliminare un oggetto condiviso fino a quando tutte le parti terminato di utilizzare l'oggetto.  
  
 In questo articolo viene illustrato come eliminare gli oggetti in:  
  
-   [Un elenco](#_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject)  
  
-   [Una matrice](#_core_to_delete_all_elements_in_an_array)  
  
-   [Una mappa](#_core_to_delete_all_elements_in_a_map)  
  
#### <a name="_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject"></a>Per eliminare tutti gli oggetti in un elenco di puntatori a CObject  
  
1.  Utilizzare `GetHeadPosition` e `GetNext` per scorrere l'elenco.  
  
2.  Utilizzare il **eliminare** operatore eliminare ogni oggetto in quanto viene rilevata nell'iterazione.  
  
3.  Chiamare il `RemoveAll` funzione per rimuovere tutti gli elementi dall'elenco dopo l'eliminazione degli oggetti associati a tali elementi.  
  
 Nell'esempio seguente viene illustrato come eliminare tutti gli oggetti da un elenco di `CPerson` oggetti. Ogni oggetto nell'elenco è un puntatore a un `CPerson` oggetto originariamente allocato nell'heap.  
  
 [!code-cpp[NVC_MFCCollections#17](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_1.cpp)]  
  
 L'ultima chiamata di funzione, `RemoveAll`, è una funzione membro di elenco che rimuove tutti gli elementi dall'elenco. La funzione membro `RemoveAt` rimuove un singolo elemento.  
  
 Si noti la differenza tra l'oggetto di un elemento di eliminazione e la rimozione dell'elemento stesso. Rimozione di un elemento dall'elenco semplicemente rimuove riferimento all'oggetto dell'elenco. L'oggetto esiste ancora in memoria. Quando si elimina un oggetto, questo cessa di esistere e la memoria viene recuperata. Di conseguenza, è importante rimuovere un elemento subito dopo l'oggetto dell'elemento è stato eliminato in modo che l'elenco non verrà tentato di accedere agli oggetti che non esistono più.  
  
#### <a name="_core_to_delete_all_elements_in_an_array"></a>Per eliminare tutti gli elementi in una matrice  
  
1.  Utilizzare `GetSize` e valori di indice integer per scorrere la matrice.  
  
2.  Utilizzare il **eliminare** operatore eliminare ogni elemento in quanto viene rilevata nell'iterazione.  
  
3.  Chiamare il `RemoveAll` funzione per rimuovere tutti gli elementi dalla matrice dopo che sono state eliminate.  
  
     Il codice per l'eliminazione di tutti gli elementi della matrice è come segue:  
  
     [!code-cpp[NVC_MFCCollections#18](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_2.cpp)]  
  
 Come nell'esempio di elenco precedente, è possibile chiamare `RemoveAll` per rimuovere tutti gli elementi in una matrice o `RemoveAt` per rimuovere un singolo elemento.  
  
#### <a name="_core_to_delete_all_elements_in_a_map"></a>Per eliminare tutti gli elementi in una mappa  
  
1.  Utilizzare `GetStartPosition` e `GetNextAssoc` per scorrere la matrice.  
  
2.  Utilizzare il **eliminare** operatore da eliminare la chiave e/o il valore per ogni elemento della mappa come viene rilevata nell'iterazione.  
  
3.  Chiamare il `RemoveAll` funzione per rimuovere tutti gli elementi dalla mappa dopo che sono state eliminate.  
  
     Il codice per l'eliminazione di tutti gli elementi di un `CMap` insieme è indicato di seguito. Ogni elemento della mappa è una stringa come chiave e un `CPerson` oggetto (derivato da `CObject`) come valore.  
  
     [!code-cpp[NVC_MFCCollections#19](../mfc/codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_3.cpp)]  
  
 È possibile chiamare `RemoveAll` per rimuovere tutti gli elementi in una mappa o `RemoveKey` per rimuovere un singolo elemento con la chiave specificata.  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)

