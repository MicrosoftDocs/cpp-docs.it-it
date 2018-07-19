---
title: Semantica di CString | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- semantics in Cstring
- CString objects, assignment semantics
- assignment statements, assigning CString objects
ms.assetid: d4023480-526f-499a-85f6-324b4de5b85f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b1638b279f0bd9ee968451ea75ec1c5549e369d9
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37886154"
---
# <a name="cstring-semantics"></a>Semantica di CString
Sebbene [CString](../atl-mfc-shared/reference/cstringt-class.md) gli oggetti sono oggetti dinamici che possono raggiungere, funzionano come tipi primitivi incorporati e le classi semplici. Ogni `CString` oggetto rappresenta un valore univoco. `CString` gli oggetti devono essere considerati come stringhe effettive anziché come puntatori alle stringhe.  
  
 È possibile assegnare uno `CString` oggetto a altro. Tuttavia, quando si modifica uno dei due `CString` oggetti, l'altro `CString` oggetto non venga modificato, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#188](../atl-mfc-shared/codesnippet/cpp/cstring-semantics_1.cpp)]  
  
 Si noti nell'esempio che i due `CString` gli oggetti sono considerati "equal" poiché rappresentano la stessa stringa di caratteri. Il `CString` classe esegue l'overload dell'operatore di uguaglianza (`==`) per confrontare due `CString` gli oggetti in base al relativo valore (contenuto) anziché la propria identità (indirizzo).  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

