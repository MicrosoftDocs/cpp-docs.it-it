---
title: "Eliminazione di tutti gli oggetti in una raccolta CObject | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "raccolta di classi CObject"
  - "CObject (classe), eliminazione dalla raccolta"
  - "classi di raccolte, eliminazione di tutti gli oggetti"
  - "classi di raccolte, oggetti condivisi"
  - "oggetti [C++], eliminazione dalle raccolte"
  - "oggetti nelle raccolte CObject"
  - "oggetti nelle raccolte CObject, eliminazione"
ms.assetid: 81d2c1d5-a0a5-46e1-8ab9-82b45cf7afd2
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eliminazione di tutti gli oggetti in una raccolta CObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come rimuovere tutti gli oggetti in una raccolta \(senza eliminare l'oggetto Collection stesso\).  
  
 Per eliminare tutti gli oggetti in una raccolta di `CObject`s \(o di oggetti derivati da `CObject`\), utilizzare una delle tecniche di iterazione descritte nell'articolo [Accedere a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md) per eliminare ogni oggetto alla volta.  
  
> [!CAUTION]
>  Gli oggetti nelle raccolte possono essere condivisi.  Ovvero la raccolta mantiene un puntatore all'oggetto, ma altre parti del programma possono inoltre essere puntatori allo stesso oggetto.  È necessario prestare attenzione a non eliminare un oggetto che sia condiviso finché tutte le parti non ha completato utilizzo dell'oggetto.  
  
 In questo articolo viene illustrato come eliminare gli oggetti in:  
  
-   [Un elenco](#_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject)  
  
-   [Una matrice](#_core_to_delete_all_elements_in_an_array)  
  
-   [Una mappa](#_core_to_delete_all_elements_in_a_map)  
  
#### Per rimuovere tutti gli oggetti in un elenco dei puntatori a CObject  
  
1.  Utilizzo `GetHeadPosition` e `GetNext` scorrere l'elenco.  
  
2.  Utilizzare l'operatore di **eliminazione** per eliminare ogni oggetto come viene visualizzato nell'iterazione.  
  
3.  Chiamare la funzione di `RemoveAll` per rimuovere tutti gli elementi dall'elenco dopo gli oggetti associati agli elementi eliminati.  
  
 Nell'esempio seguente viene illustrato come rimuovere tutti gli oggetti da un elenco di `CPerson` oggetti.  Ogni oggetto nell'elenco è un puntatore a un oggetto di `CPerson` che è stato originariamente l'heap nativo.  
  
 [!code-cpp[NVC_MFCCollections#17](../mfc/codesnippet/CPP/deleting-all-objects-in-a-cobject-collection_1.cpp)]  
  
 L'ultima chiamata di funzione, `RemoveAll`, è una funzione membro list che rimuove tutti gli elementi dall'elenco.  La funzione membro `RemoveAt` rimuove un singolo elemento.  
  
 Si noti la differenza tra eliminare l'oggetto di un elemento e rimuovere l'elemento stesso.  Rimuove un elemento dall'elenco vengono rimossi solo il riferimento all'elenco all'oggetto.  L'oggetto esiste ancora in memoria.  Quando si elimina un oggetto, cessa di esistere e la memoria viene recuperata.  Pertanto, è importante rimuovere un elemento immediatamente dopo che l'oggetto dell'elemento eliminato in modo che l'elenco non tentare di accedere agli oggetti che non esistono più.  
  
#### Per rimuovere tutti gli elementi di una matrice  
  
1.  Utilizzare `GetSize` e i valori di indice Integer per scorrere la matrice.  
  
2.  Utilizzare l'operatore di **eliminazione** per eliminare tutte le voci come viene visualizzato nell'iterazione.  
  
3.  Chiamare la funzione di `RemoveAll` per rimuovere tutti gli elementi dalla matrice dopo che sono stati eliminati.  
  
     Il codice per rimuovere tutti gli elementi di una matrice è la seguente:  
  
     [!code-cpp[NVC_MFCCollections#18](../mfc/codesnippet/CPP/deleting-all-objects-in-a-cobject-collection_2.cpp)]  
  
 Come con l'esempio dell'elenco precedente, è possibile chiamare `RemoveAll` per rimuovere tutti gli elementi di una matrice o in `RemoveAt` per rimuovere un singolo elemento.  
  
#### Per rimuovere tutti gli elementi in una mappa  
  
1.  Utilizzare `GetStartPosition` e `GetNextAssoc` per scorrere la matrice.  
  
2.  Utilizzare l'operatore di **eliminazione** per eliminare la chiave e\/o un valore per ogni elemento della mappa come viene visualizzato nell'iterazione.  
  
3.  Chiamare la funzione di `RemoveAll` per rimuovere tutti gli elementi dalla mappa dopo che sono stati eliminati.  
  
     Il codice per rimuovere tutti gli elementi di una raccolta di `CMap` è il seguente.  Ogni elemento nella mappa contiene una stringa come chiave e oggetto di `CPerson` \(derivati da `CObject`\) come valore.  
  
     [!code-cpp[NVC_MFCCollections#19](../mfc/codesnippet/CPP/deleting-all-objects-in-a-cobject-collection_3.cpp)]  
  
 È possibile chiamare `RemoveAll` per rimuovere tutti gli elementi in una mappa o in `RemoveKey` per rimuovere un singolo elemento alla chiave specificata.  
  
## Vedere anche  
 [Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)