---
title: "Procedura: creare e utilizzare istanze weak_ptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 8dd6909b-b070-4afa-9696-f2fc94579c65
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Procedura: creare e utilizzare istanze weak_ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Talvolta un oggetto deve memorizzare un modo per accedere all'oggetto sottostante di un `shared_ptr` senza causare l'incremento del conteggio dei riferimenti.  In genere, questa situazione si verifica in presenza di riferimenti ciclici tra le istanze di `shared_ptr`.  
  
 Per progettare al meglio è consigliato evitare il più possibile la proprietà condivisa dei puntatori.  Tuttavia, se è necessario condividere la proprietà di istanze `shared_ptr`, evitare riferimenti ciclici tra queste.  Quando i riferimenti ciclici sono inevitabili o preferibili per una qualche ragione, utilizzare `weak_ptr` per fornire a uno o più proprietari un riferimento debole a un altro `shared_ptr`.  Utilizzando `weak_ptr`, è possibile creare un oggetto `shared_ptr` che si unisce a un set di istanze correlate esistente, ma solo se la risorsa di memoria sottostante è ancora valida.  `weak_ptr` non partecipa al conteggio dei riferimenti, pertanto non può impedire che il conteggio dei riferimenti passi a zero.  Tuttavia, è possibile utilizzare `weak_ptr` per tentare di ottenere una nuova copia di `shared_ptr` con cui è stata inizializzata.  Se la memoria è già stata eliminata, viene generata un'eccezione **bad\_weak\_ptr**.  Se la memoria è ancora valida, il nuovo puntatore condiviso incrementa il conteggio dei riferimenti e garantisce che la memoria sarà valida fino a che la variabile `shared_ptr` rimane nell'ambito.  
  
## Esempio  
 Nell'esempio di codice seguente è illustrato un caso in cui `weak_ptr` è utilizzato per garantire l'eliminazione di oggetti con dipendenze circolari.  Quando si esamina l'esempio, si supponga che è stato creato solo dopo che le soluzioni alternative sono state valutate.  Gli oggetti `Controller` rappresentano alcuni aspetti del processo di un computer e operano in modo indipendente.  Ogni controller deve essere in grado di eseguire una query sullo stato degli altri controller in qualsiasi momento e contiene un `vector<weak_ptr<Controller>>` privato per espletare questa funzione.  Ogni vettore contiene un riferimento circolare, pertanto vengono utilizzate le istanze `weak_ptr` anziché `shared_ptr`.  
  
 [!code-cpp[stl_smart_pointers#222](../cpp/codesnippet/CPP/how-to-create-and-use-weak-ptr-instances_1.cpp)]  
  
  **Creazione di Controller0**  
**Creazione di Controller1**  
**Creazione di Controller2**  
**Creazione di Controller3**  
**Creazione di Controller4**  
**push\_back a v\[0\]: 1**  
**push\_back to v\[0\]: 2**  
**push\_back to v\[0\]: 3**  
**push\_back to v\[0\]: 4**  
**push\_back to v\[1\]: 0**  
**push\_back to v\[1\]: 2**  
**push\_back to v\[1\]: 3**  
**push\_back to v\[1\]: 4**  
**push\_back to v\[2\]: 0**  
**push\_back to v\[2\]: 1**  
**push\_back to v\[2\]: 3**  
**push\_back to v\[2\]: 4**  
**push\_back to v\[3\]: 0**  
**push\_back to v\[3\]: 1**  
**push\_back to v\[3\]: 2**  
**push\_back to v\[3\]: 4**  
**push\_back to v\[4\]: 0**  
**push\_back to v\[4\]: 1**  
**push\_back to v\[4\]: 2**  
**push\_back to v\[4\]: 3**  
**use\_count \= 1**  
**Stato di 1 \= On**  
**Stato di 2 \= On**  
**Stato di 3 \= On**  
**Stato di 4 \= On**  
**use\_count \= 1**  
**Stato di 0 \= On**  
**Stato di 2 \= On**  
**Stato di 3 \= On**  
**Stato di 4 \= On**  
**use\_count \= 1**  
**Stato di 0 \= On**  
**Stato di 1 \= On**  
**Stato di 3 \= On**  
**Stato di 4 \= On**  
**use\_count \= 1**  
**Stato di 0 \= On**  
**Stato di 1 \= On**  
**Stato di 2 \= On**  
**Stato di 4 \= On**  
**use\_count \= 1**  
**Stato di 0 \= On**  
**Stato di 1 \= On**  
**Stato di 2 \= On**  
**Stato di 3 \= On**  
**Eliminazione di Controller0**  
**Eliminazione di Controller1**  
**Eliminazione di Controller2**  
**Eliminazione di Controller3**  
**Eliminazione di Controller4**  
**Premere un tasto qualsiasi** Come esperimento, modificare il vettore `others` in `vector<shared_ptr<Controller>>`, quindi nell'output, notare che non viene richiamato alcun distruttore quando viene restituito `TestRun`.  
  
## Vedere anche  
 [Puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md)