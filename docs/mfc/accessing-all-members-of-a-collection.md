---
title: L'accesso a tutti i membri di una raccolta | Documenti Microsoft
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
- MFC, collections
- enumerations [MFC]
- enumerating collections [MFC]
- collections [MFC], accessing
- collection classes [MFC]
- ', '
- ', '
- ', '
- ', '
- ', '
- ', '
- ', '
ms.assetid: 7bbae518-062e-4393-81f9-b22abd2e5f59
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 34ba2795c12695702b2e38034081e17d69c156d4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="accessing-all-members-of-a-collection"></a>Accesso a tutti i membri di una raccolta
Le classi di raccolte di matrici di MFC, sia basate su modelli che non, usano indici per accedere ai loro elementi. Le classi di raccolte di liste e mappe di MFC, sia basate su modelli che non, usano un indicatore di tipo **POSITION** per descrivere una data posizione nella raccolta. Per accedere a uno o più membri di queste raccolte, è necessario innanzitutto inizializzare l'indicatore di posizione e poi passare ripetutamente quella posizione alla raccolta e chiederle di restituire l'elemento successivo. La raccolta non è responsabile di mantenere le informazioni di stato sull'avanzamento dell'iterazione. Tali informazioni vengono mantenute nell'indicatore di posizione. Tuttavia, data una particolare posizione, la raccolta è responsabile di restituire l'elemento successivo.  
  
 Le procedure seguenti mostrano come eseguire un'iterazione sui tre tipi principali di raccolte disponibili in MFC:  
  
-   [Iterazione su una matrice](#_core_to_iterate_an_array)  
  
-   [Iterazione su un elenco](#_core_to_iterate_a_list)  
  
-   [Iterazione su una mappa](#_core_to_iterate_a_map)  
  
### <a name="_core_to_iterate_an_array"></a> Per eseguire un'iterazione su una matrice  
  
1.  Usare numeri di indice sequenziali con la funzione membro `GetAt` :  
  
     [!code-cpp[NVC_MFCCollections#12](../mfc/codesnippet/cpp/accessing-all-members-of-a-collection_1.cpp)]  
  
     In questo esempio si usa una matrice con puntatore tipizzato che contiene puntatori agli oggetti `CPerson` . La matrice è derivata dalla classe `CObArray`, una delle classi predefinite non basate su modelli. `GetAt` restituisce un puntatore a un oggetto `CPerson` . Per le classi di raccolte con puntatore tipizzato, ovvero matrici o elenchi, il primo parametro specifica la classe base e il secondo specifica il tipo da memorizzare.  
  
     Il `CTypedPtrArray` classe anche overload di **[]** operatore in modo che è possibile utilizzare la sintassi di indice di matrice facoltativa per accedere agli elementi della matrice. Un'alternativa all'istruzione nel corpo del ciclo `for` riportato sopra è  
  
     [!code-cpp[NVC_MFCCollections#13](../mfc/codesnippet/cpp/accessing-all-members-of-a-collection_2.cpp)]  
  
     Questo operatore è disponibile in entrambe le versioni **const** e non**const** . La versione **const** , che viene richiamata per le matrici **const** , può apparire solo sul lato destro di un'istruzione di assegnazione.  
  
### <a name="_core_to_iterate_a_list"></a> Per eseguire un'iterazione su un elenco  
  
1.  Usare le funzioni membro `GetHeadPosition` e `GetNext` per percorrere l'elenco:  
  
     [!code-cpp[NVC_MFCCollections#14](../mfc/codesnippet/cpp/accessing-all-members-of-a-collection_3.cpp)]  
  
     In questo esempio si usa un elenco con puntatore tipizzato che contiene i puntatori agli oggetti `CPerson` . La dichiarazione dell'elenco è simile a quella della matrice nella procedura [Per eseguire un'iterazione su una matrice](#_core_to_iterate_an_array) ma è derivata dalla classe `CObList`. `GetNext` restituisce un puntatore a un oggetto `CPerson` .  
  
### <a name="_core_to_iterate_a_map"></a> Per eseguire un'iterazione su una mappa  
  
1.  Usare `GetStartPosition` per posizionarsi all'inizio della mappa e `GetNextAssoc` per ottenere ripetutamente la chiave e il valore successivi dalla mappa, come mostrato nell'esempio seguente:  
  
     [!code-cpp[NVC_MFCCollections#15](../mfc/codesnippet/cpp/accessing-all-members-of-a-collection_4.cpp)]  
  
     In questo esempio si usa un semplice modello di mappa (anziché una raccolta con puntatore tipizzato) che usa chiavi `CString` e memorizza puntatori agli oggetti `CPerson` . Quando si usano funzioni di accesso come `GetNextAssoc`, la classe fornisce i puntatori agli oggetti `CPerson` . Se invece si usa una delle raccolte di mappe non basate su modelli, è necessario eseguire il cast del puntatore `CObject` restituito verso un puntatore a `CPerson`.  
  
    > [!NOTE]
    >  Per le mappe non basate su modelli, il compilatore richiede un riferimento a un puntatore `CObject` nell'ultimo parametro per `GetNextAssoc`. In fase di input, è necessario eseguire il cast dei puntatori verso quel tipo, come mostrato nell'esempio successivo.  
  
     La soluzione basata su modelli è più semplice e aiuta a garantire una maggiore indipendenza dai tipi. Il codice per la soluzione non basata su modelli è più complicato, come è possibile vedere qui:  
  
     [!code-cpp[NVC_MFCCollections#16](../mfc/codesnippet/cpp/accessing-all-members-of-a-collection_5.cpp)]  
  
 Per altre informazioni vedere [Eliminazione di tutti gli oggetti in una raccolta CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte](../mfc/collections.md)

