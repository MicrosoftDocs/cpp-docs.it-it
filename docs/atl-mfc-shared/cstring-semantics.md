---
title: Semantica di CString | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- semantics in Cstring
- CString objects, assignment semantics
- assignment statements, assigning CString objects
ms.assetid: d4023480-526f-499a-85f6-324b4de5b85f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 394e459a46003e3f1baccff7dd4c76f40b73e354
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstring-semantics"></a>Semantica di CString
Anche se [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti sono dinamica che può raggiungere, funzionano come tipi primitivi incorporati e le classi semplici. Ogni `CString` oggetto rappresenta un valore univoco. `CString`gli oggetti devono essere considerati come stringhe effettive anziché come puntatori alle stringhe.  
  
 È possibile assegnare uno **CString** oggetto a un altro. Tuttavia, quando si modifica uno dei due `CString` oggetti, l'altro `CString` oggetto non viene modificato, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#188](../atl-mfc-shared/codesnippet/cpp/cstring-semantics_1.cpp)]  
  
 Si noti nell'esempio che i due `CString` gli oggetti sono considerati "uguali a", poiché rappresentano la stessa stringa di caratteri. Il `CString` classe overload dell'operatore di uguaglianza (`==`) per confrontare due `CString` oggetti in base al relativo valore (contenuto) anziché la propria identità (indirizzo).  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

