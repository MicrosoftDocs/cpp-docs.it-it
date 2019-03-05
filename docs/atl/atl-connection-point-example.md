---
title: Esempio di punto di connessione ATL
ms.date: 11/04/2016
helpviewer_keywords:
- connection points [C++], examples
- examples [ATL]
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
ms.openlocfilehash: 3113637a3f777a56bc0b0994203ce709fbc189d5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265067"
---
# <a name="atl-connection-point-example"></a>Esempio di punto di connessione ATL

Questo esempio illustra un oggetto che supporta [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) come un'interfaccia in uscita:

[!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/cpp/atl-connection-point-example_1.h)]

Quando si specificano `IPropertyNotifySink` come un'interfaccia in uscita, è possibile usare classi [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) invece di `IConnectionPointImpl`. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/cpp/atl-connection-point-example_2.h)]

## <a name="see-also"></a>Vedere anche

[Punto di connessione](../atl/atl-connection-points.md)
