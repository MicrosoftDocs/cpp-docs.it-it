---
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
ms.openlocfilehash: adc3e1efd032bb3e3e45381da24c5a5b59852375
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57747138"
---
# <a name="allocating-and-releasing-memory-for-a-bstr"></a>Allocazione e rilascio di memoria per un oggetto BSTR

Quando si creano `BSTR`s e passarle tra gli oggetti COM, è necessario prestare attenzione nella gestione della memoria usano per evitare perdite di memoria. Quando un `BSTR` rimane all'interno di un'interfaccia, è necessario liberare la memoria al termine con esso. Tuttavia, quando un `BSTR` passa all'esterno di un'interfaccia, l'oggetto ricevente assume la responsabilità per la gestione della memoria.

In generale, le regole di allocazione e deallocazione di memoria allocata per `BSTR`sono come segue:

- Quando si chiama una funzione che prevede un `BSTR` argomento, è necessario allocare la memoria per il `BSTR` prima della chiamata e deallocarla. Ad esempio:

   [!code-cpp[NVC_ATLMFC_Utilities#192](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_1.cpp)]

   [!code-cpp[NVC_ATLMFC_Utilities#193](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_2.cpp)]

- Quando si chiama una funzione che restituisce un `BSTR`, è necessario liberare la stringa manualmente. Ad esempio:

   [!code-cpp[NVC_ATLMFC_Utilities#194](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_3.cpp)]

   [!code-cpp[NVC_ATLMFC_Utilities#195](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_4.cpp)]

- Quando si implementa una funzione che restituisce un `BSTR`, allocare la stringa, ma non deve essere liberata. La ricezione di funzione rilascia la memoria. Ad esempio:

   [!code-cpp[NVC_ATLMFC_Utilities#196](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring)<br/>
[SysAllocString](/windows/desktop/api/oleauto/nf-oleauto-sysallocstring)<br/>
[SysFreeString](/windows/desktop/api/oleauto/nf-oleauto-sysfreestring)
