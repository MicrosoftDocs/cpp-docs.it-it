---
description: 'Altre informazioni su: allocazione e rilascio di memoria per un BSTR'
title: Allocazione e rilascio di memoria per un oggetto BSTR
ms.date: 11/04/2016
f1_keywords:
- bstr
helpviewer_keywords:
- BSTRs, memory allocation
- memory deallocation, string memory
- memory [C++], releasing
- memory allocation, BSTRs
- memory deallocation, BSTR memory
- strings [C++], releasing
ms.assetid: 98041e29-3442-4a02-b425-7a4a13e9cc84
ms.openlocfilehash: 2b027bdc5615578bc785075ae7e8709e2b3a7ea5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142663"
---
# <a name="allocating-and-releasing-memory-for-a-bstr"></a>Allocazione e rilascio di memoria per un oggetto BSTR

Quando si creano `BSTR` e li si passa tra oggetti com, è necessario prestare attenzione a trattare la memoria usata per evitare perdite di memoria. Quando un `BSTR` rimane all'interno di un'interfaccia, è necessario liberare la memoria al termine dell'operazione. Tuttavia, quando un viene `BSTR` passato da un'interfaccia, l'oggetto ricevente assume la responsabilità della gestione della memoria.

In generale, le regole per l'allocazione e il rilascio della memoria allocata per `BSTR` s sono le seguenti:

- Quando si effettua una chiamata in una funzione che prevede un `BSTR` argomento, è necessario allocare la memoria per `BSTR` prima della chiamata e rilasciarla successivamente. Ad esempio:

   [!code-cpp[NVC_ATLMFC_Utilities#192](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_1.cpp)]

   [!code-cpp[NVC_ATLMFC_Utilities#193](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_2.cpp)]

- Quando si effettua una chiamata in una funzione che restituisce un `BSTR` , è necessario liberare la stringa manualmente. Ad esempio:

   [!code-cpp[NVC_ATLMFC_Utilities#194](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_3.cpp)]

   [!code-cpp[NVC_ATLMFC_Utilities#195](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_4.cpp)]

- Quando si implementa una funzione che restituisce un `BSTR` , allocare la stringa senza liberarla. Il che riceve la funzione rilascia la memoria. Ad esempio:

   [!code-cpp[NVC_ATLMFC_Utilities#196](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[CStringt:: AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring)<br/>
[SysAllocString](/windows/win32/api/oleauto/nf-oleauto-sysallocstring)<br/>
[SysFreeString](/windows/win32/api/oleauto/nf-oleauto-sysfreestring)
