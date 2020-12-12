---
description: 'Ulteriori informazioni su: esempio di punto di connessione ATL'
title: Esempio di punto di connessione ATL
ms.date: 11/04/2016
helpviewer_keywords:
- connection points [C++], examples
- examples [ATL]
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
ms.openlocfilehash: 6416720b5366838f9687f31947cac9a6824da058
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165810"
---
# <a name="atl-connection-point-example"></a>Esempio di punto di connessione ATL

Questo esempio mostra un oggetto che supporta [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) come interfaccia in uscita:

[!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/cpp/atl-connection-point-example_1.h)]

Quando `IPropertyNotifySink` si specifica come interfaccia in uscita, è possibile usare la classe [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) anziché `IConnectionPointImpl` . Ad esempio:

[!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/cpp/atl-connection-point-example_2.h)]

## <a name="see-also"></a>Vedere anche

[Punto di connessione](../atl/atl-connection-points.md)
