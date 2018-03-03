---
title: 2.7.2.1 privato | Documenti Microsoft
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
ms.assetid: 079b4b84-f2b3-4050-a0ac-289493c36b3d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2a08faf39ab2f82d76a936c216ba6707bee5c240
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="2721-private"></a>2.7.2.1 private
Il `private` clausola dichiara le variabili nell'elenco di variabile come privato per ogni thread in un team. La sintassi del `private` clausola è il seguente:  
  
```  
private(variable-list)  
```  
  
 Il comportamento di una variabile specificata un `private` clausola è indicato di seguito. Per il costrutto viene allocato un nuovo oggetto con durata di archiviazione automatica. Le dimensioni e l'allineamento del nuovo oggetto dipendono dal tipo della variabile. Ciò si verifica una volta per ogni thread del team e viene richiamato un costruttore predefinito per un oggetto di classe, se necessario. in caso contrario, il valore iniziale è indeterminato.  L'oggetto originale a cui fa riferimento la variabile contiene un valore indeterminato al momento dell'accesso a un costrutto non deve essere modificata all'interno di extent dinamica del costrutto e ha un valore indeterminato all'uscita dal costrutto.  
  
 In quanto lessicale del costrutto di direttiva, la variabile fa riferimento il nuovo oggetto privato allocato dal thread.  
  
 Le restrizioni per il `private` clausola sono i seguenti:  
  
-   Una variabile con un tipo di classe specificato in un `private` clausola deve avere un costruttore predefinito accessibile e non ambigua.  
  
-   Una variabile specificata un `private` clausola non deve avere un **const**-tipo completo, a meno che non dispone di una classe di tipo con un `mutable` membro.  
  
-   Una variabile specificata un `private` clausola non deve avere un tipo incompleto o un tipo riferimento.  
  
-   Le variabili incluse nella `reduction` clausola di un **parallela** direttiva può essere specificata in un `private` clausola in una direttiva di condivisione del lavoro che viene associato a un costrutto parallelo.