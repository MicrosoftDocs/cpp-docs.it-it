---
title: "Avoidance of Heap Contention | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "heap contention"
ms.assetid: 797129d7-5f8c-4b0e-8974-bb93217e9ab5
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Avoidance of Heap Contention
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli amministratori predefiniti della stringa fornita da MFC e da ATL sono wrapper semplici in un heap globale.  Questa heap globale è completamente thread\-safe, pertanto i thread possono provocare allocare e liberare memoria da senza danneggiare heap.  Per fornire il thread safety, l'heap serializzi l'accesso se stesso.  A tale scopo si utilizza in genere una sezione critica o un come meccanismo di blocco.  Ogni volta che due thread tentano di accedere contemporaneamente a heap, un thread è bloccato fino alla richiesta completamento dell'altro thread.  Per molte applicazioni, questa situazione si verifica raramente e l'impatto sulle prestazioni del meccanismo di blocco dell'heap è trascurabile.  Tuttavia, per le applicazioni che accedono frequentemente l'heap dai conflitti dei thread di blocco dell'heap può condurre l'applicazione essere più lenta di se fosse a thread singolo \(anche nei computer con più CPU\).  
  
 Le applicazioni che utilizzano [CStringT](../atl-mfc-shared/reference/cstringt-class.md) sono particolarmente soggette risolte nel conflitto in quanto le operazioni sugli oggetti `CStringT` richiedono frequente riallocazione del buffer di stringa.  
  
 Un modo per alleviare il conflitto dell'heap tra thread consiste ogni allocazione thread stringhe da un heap privata e di thread locale.  Se le stringhe allocate con l'allocatore di un particolare thread vengono utilizzate solo in tale thread, l'allocatore non deve essere thread\-safe.  
  
## Esempio  
 Nell'esempio seguente viene illustrata una routine del thread che alloca la propria heap non thread\-safe privata da utilizzare per le stringhe su tale thread:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#182](../atl-mfc-shared/codesnippet/CPP/avoidance-of-heap-contention_1.cpp)]  
  
## Commenti  
 I thread potrebbero essere in esecuzione utilizzando la stessa routine del thread ma poiché ogni thread dispone dell'heap non esistono conflitti tra i thread.  Inoltre, il fatto che ogni heap non è thread\-safe fornisce un aumento miglioramento delle prestazioni anche se solo una copia del thread è in esecuzione.  È il risultato dell'heap non tramite operazioni interlock costose da proteggere dall'accesso simultaneo.  
  
 Per una routine del thread più complessa, può essere utile memorizzare un puntatore all'amministratore di stringa del thread in uno slot \(TLS\) di memoria locale di thread.  Ciò consente altre funzioni chiamate dalla routine del thread per accedere a gestione delle stringhe di thread.  
  
## Vedere anche  
 [Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)