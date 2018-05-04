---
title: Esempio di punto di connessione ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], examples
- examples [ATL]
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a265d26e8733a7eb2982fb84e8d69ed621922d36
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-connection-point-example"></a>Esempio di punto di connessione ATL
Questo esempio viene illustrato un oggetto che supporta [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) come un'interfaccia in uscita:  
  
 [!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/cpp/atl-connection-point-example_1.h)]  
  
 Quando si specifica `IPropertyNotifySink` come un'interfaccia in uscita, è possibile utilizzare una classe [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) anziché `IConnectionPointImpl`. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/cpp/atl-connection-point-example_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Punto di connessione](../atl/atl-connection-points.md)

