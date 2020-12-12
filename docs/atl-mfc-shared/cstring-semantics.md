---
description: 'Altre informazioni su: semantica di CString'
title: Semantica di CString
ms.date: 11/04/2016
helpviewer_keywords:
- semantics in Cstring
- CString objects, assignment semantics
- assignment statements, assigning CString objects
ms.assetid: d4023480-526f-499a-85f6-324b4de5b85f
ms.openlocfilehash: 7c6dde91e7f87908c0c6bc2d49ff455eb79f6eb3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167045"
---
# <a name="cstring-semantics"></a>Semantica di CString

Sebbene gli oggetti [CString](../atl-mfc-shared/reference/cstringt-class.md) siano oggetti dinamici che possono crescere, agiscono come tipi primitivi incorporati e classi semplici. Ogni `CString` oggetto rappresenta un valore univoco. `CString` gli oggetti devono essere considerati come stringhe effettive anziché come puntatori alle stringhe.

È possibile assegnare un `CString` oggetto a un altro. Tuttavia, quando si modifica uno dei due `CString` oggetti, l'altro `CString` oggetto non viene modificato, come illustrato nell'esempio seguente:

[!code-cpp[NVC_ATLMFC_Utilities#188](../atl-mfc-shared/codesnippet/cpp/cstring-semantics_1.cpp)]

Si noti che nell'esempio i due `CString` oggetti vengono considerati "uguali" perché rappresentano la stessa stringa di caratteri. La `CString` classe consente di eseguire l'overload dell'operatore `==` di uguaglianza () per confrontare due `CString` oggetti in base al relativo valore (contenuto) anziché alla relativa identità (indirizzo).

## <a name="see-also"></a>Vedi anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
