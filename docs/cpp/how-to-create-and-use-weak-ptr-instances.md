---
title: 'Procedura: creare e utilizzare istanze weak_ptr | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 8dd6909b-b070-4afa-9696-f2fc94579c65
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3e51e523540e14905bef17edd52205c4d2102afa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-create-and-use-weakptr-instances"></a>Procedura: creare e utilizzare istanze weak_ptr
In alcuni casi un oggetto necessario archiviare un modo per accedere all'oggetto sottostante di un `shared_ptr` senza causare il conteggio dei riferimenti deve essere incrementato. Questa situazione si verifica in genere, quando si dispone di riferimenti ciclici tra `shared_ptr` istanze.  
  
 L'approccio migliore consiste nell'evitare proprietà condivisa di puntatori, quando possibile. Tuttavia, se è necessario avere proprietà condivisa di `shared_ptr` istanze, evitare riferimenti ciclici tra di essi. Quando i riferimenti ciclici sono inevitabili, o anche preferibile per qualche motivo, utilizzare `weak_ptr` per assegnare uno o più dei proprietari di un riferimento debole a un altro `shared_ptr`. Utilizzando un `weak_ptr`, è possibile creare un `shared_ptr` che si unisce a un set esistente di istanze correlate, ma solo se la risorsa di memoria sottostante è ancora valida. Oggetto `weak_ptr` stesso non viene utilizzato il conteggio dei riferimenti, e, pertanto non può impedire il conteggio dei riferimenti da passare a zero. Tuttavia, è possibile utilizzare un `weak_ptr` per tentare di ottenere una nuova copia del `shared_ptr` con cui è stato inizializzato. Se la memoria è già stata eliminata, un **bad_weak_ptr** viene generata un'eccezione. Se la memoria è ancora valida, il nuovo puntatore condiviso incrementa il conteggio dei riferimenti e garantisce che la memoria sia valida, purché il `shared_ptr` variabile rimane nell'ambito.  
  
## <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrato un caso in cui `weak_ptr` viene utilizzato per garantire una corretta eliminazione di oggetti che hanno dipendenze circolari. Quando si esamina l'esempio, si supponga che è stato creato solo dopo che sono state considerate le soluzioni alternative. Il `Controller` oggetti rappresentano alcuni aspetti di un processo di computer e possono essere utilizzate in modo indipendente. Ogni controller deve essere in grado di richiedere lo stato degli altri controller in qualsiasi momento e ognuno di essi contiene una privata `vector<weak_ptr<Controller>>` a questo scopo. Ogni vettore contiene un riferimento circolare e di conseguenza, `weak_ptr` le istanze vengono utilizzate al posto di `shared_ptr`.  
  
 [!code-cpp[stl_smart_pointers#222](../cpp/codesnippet/CPP/how-to-create-and-use-weak-ptr-instances_1.cpp)]  
  
```Output  
Creating Controller0Creating Controller1Creating Controller2Creating Controller3Creating Controller4push_back to v[0]: 1push_back to v[0]: 2push_back to v[0]: 3push_back to v[0]: 4push_back to v[1]: 0push_back to v[1]: 2push_back to v[1]: 3push_back to v[1]: 4push_back to v[2]: 0push_back to v[2]: 1push_back to v[2]: 3push_back to v[2]: 4push_back to v[3]: 0push_back to v[3]: 1push_back to v[3]: 2push_back to v[3]: 4push_back to v[4]: 0push_back to v[4]: 1push_back to v[4]: 2push_back to v[4]: 3use_count = 1Status of 1 = OnStatus of 2 = OnStatus of 3 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 2 = OnStatus of 3 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 1 = OnStatus of 3 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 1 = OnStatus of 2 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 1 = OnStatus of 2 = OnStatus of 3 = OnDestroying Controller0Destroying Controller1Destroying Controller2Destroying Controller3Destroying Controller4Press any key  
```  
  
 Come esperimento, modificare il vettore `others` da un `vector<shared_ptr<Controller>>`e nell'output, si noti che nessuna distruttori vengono richiamati quando `TestRun` restituisce.  
  
## <a name="see-also"></a>Vedere anche  
 [Puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md)