---
title: "Allocating and Releasing Memory for a BSTR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "bstr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BSTR, allocazione di memoria"
  - "memoria [C++], rilascio"
  - "allocazione di memoria, BSTR"
  - "memory deallocation, BSTR memory"
  - "memory deallocation, string memory"
  - "stringhe [C++], rilascio"
ms.assetid: 98041e29-3442-4a02-b425-7a4a13e9cc84
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Allocating and Releasing Memory for a BSTR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea `BSTR`oggetti che vengono passati tra gli oggetti COM, è necessario richiedere attenzione in modo che la memoria che utilizzano per evitare perdite di memoria.  Quando `BSTR` rimane all'interno di un'interfaccia, è necessario liberare la memoria a quando l'operazione è stata eseguita.  Tuttavia, quando `BSTR` passa da un'interfaccia, l'oggetto ricevente è responsabile della gestione della memoria.  
  
 In genere le regole per l'allocazione e il rilascio di memoria allocata per `BSTR`oggetti sono le seguenti:  
  
-   Quando si chiama una funzione che accetta un argomento `BSTR`, è necessario allocare memoria per `BSTR` prima della chiamata e rilasciarlo in seguito.  Di seguito è riportato un esempio:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#192](../atl-mfc-shared/codesnippet/CPP/allocating-and-releasing-memory-for-a-bstr_1.cpp)]  
  
     [!code-cpp[NVC_ATLMFC_Utilities#193](../atl-mfc-shared/codesnippet/CPP/allocating-and-releasing-memory-for-a-bstr_2.cpp)]  
  
-   Quando si chiama una funzione che restituisce `BSTR`, è necessario liberare la stringa manualmente.  Di seguito è riportato un esempio:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#194](../atl-mfc-shared/codesnippet/CPP/allocating-and-releasing-memory-for-a-bstr_3.cpp)]  
  
     [!code-cpp[NVC_ATLMFC_Utilities#195](../atl-mfc-shared/codesnippet/CPP/allocating-and-releasing-memory-for-a-bstr_4.cpp)]  
  
-   Quando si distribuisce una funzione che restituisce `BSTR`, allocare la stringa ma non libero.  La ricezione della funzione liberare memoria.  Di seguito è riportato un esempio:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#196](../atl-mfc-shared/codesnippet/CPP/allocating-and-releasing-memory-for-a-bstr_5.cpp)]  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)   
 [CStringT::AllocSysString](../Topic/CStringT::AllocSysString.md)   
 [SysAllocString](http://msdn.microsoft.com/it-it/9e0437a2-9b4a-4576-88b0-5cb9d08ca29b)   
 [SysFreeString](http://msdn.microsoft.com/it-it/8f230ee3-5f6e-4cb9-a910-9c90b754dcd3)