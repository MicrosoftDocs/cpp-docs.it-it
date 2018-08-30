---
title: Esempio di punto di connessione ATL | Microsoft Docs
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
ms.openlocfilehash: 3a35b1e40718c26eb094eddb420f885a37907071
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43212594"
---
# <a name="atl-connection-point-example"></a>Esempio di punto di connessione ATL
Questo esempio illustra un oggetto che supporta [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) come un'interfaccia in uscita:  
  
 [!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/cpp/atl-connection-point-example_1.h)]  
  
 Quando si specificano `IPropertyNotifySink` come un'interfaccia in uscita, è possibile usare classi [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) invece di `IConnectionPointImpl`. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/cpp/atl-connection-point-example_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Punto di connessione](../atl/atl-connection-points.md)

