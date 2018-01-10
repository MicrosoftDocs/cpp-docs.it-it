---
title: Allocazione e deallocazione di memoria per un oggetto BSTR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: bstr
dev_langs: C++
helpviewer_keywords:
- BSTRs, memory allocation
- memory deallocation, string memory
- memory [C++], releasing
- memory allocation, BSTRs
- memory deallocation, BSTR memory
- strings [C++], releasing
ms.assetid: 98041e29-3442-4a02-b425-7a4a13e9cc84
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 282ceac05587452fad750f05b642c0ffd5b929a7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="allocating-and-releasing-memory-for-a-bstr"></a>Allocazione e rilascio di memoria per un oggetto BSTR
Quando si crea `BSTR`s e passarle tra gli oggetti COM, è necessario prestare attenzione nella gestione della memoria utilizzano per evitare perdite di memoria. Quando un `BSTR` rimane all'interno di un'interfaccia, è necessario liberare la memoria al termine con esso. Tuttavia, quando un `BSTR` passa da un'interfaccia, l'oggetto ricevente assume la responsabilità per la gestione della memoria.  
  
 In generale, le regole di allocazione e deallocazione di memoria allocata per `BSTR`sono come segue:  
  
-   Quando si chiama una funzione che prevede un `BSTR` argomento, è necessario allocare la memoria per il `BSTR` prima della chiamata e rilasciarlo in un secondo momento. Ad esempio:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#192](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_1.cpp)]  
  
     [!code-cpp[NVC_ATLMFC_Utilities#193](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_2.cpp)]  
  
-   Quando si chiama una funzione che restituisce un `BSTR`, è necessario liberare la stringa manualmente. Ad esempio:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#194](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_3.cpp)]  
  
     [!code-cpp[NVC_ATLMFC_Utilities#195](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_4.cpp)]  
  
-   Quando si implementa una funzione che restituisce un `BSTR`, allocare la stringa, ma non deve essere liberata. La ricezione di funzione rilascia la memoria. Ad esempio:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#196](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring)   
 [SysAllocString](https://msdn.microsoft.com/library/windows/desktop/ms221458.aspx)   
 [SysFreeString](https://msdn.microsoft.com/library/windows/desktop/ms221481.aspx)

