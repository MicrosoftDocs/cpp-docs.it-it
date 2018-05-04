---
title: Semantica di CString | Documenti Microsoft
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
ms.openlocfilehash: b1765f1f7f4103b1b2cfe6012b42ebef12f8863f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cstring-semantics"></a>Semantica di CString
Anche se [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti sono dinamica che può raggiungere, funzionano come tipi primitivi incorporati e le classi semplici. Ogni `CString` oggetto rappresenta un valore univoco. `CString` gli oggetti devono essere considerati come stringhe effettive, anziché come puntatori alle stringhe.  
  
 È possibile assegnare uno **CString** oggetto a un altro. Tuttavia, quando si modifica uno dei due `CString` oggetti, l'altro `CString` oggetto non viene modificato, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#188](../atl-mfc-shared/codesnippet/cpp/cstring-semantics_1.cpp)]  
  
 Si noti nell'esempio che i due `CString` gli oggetti sono considerati "uguali a", poiché rappresentano la stessa stringa di caratteri. Il `CString` classe overload dell'operatore di uguaglianza (`==`) per confrontare due `CString` oggetti in base al relativo valore (contenuto) anziché la propria identità (indirizzo).  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

