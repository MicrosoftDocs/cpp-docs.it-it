---
title: nonextensible (attributo) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- nonextensible
dev_langs:
- C++
helpviewer_keywords:
- nonextensible attribute
- dual interfaces, nonextensible attribute
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 40b4b79701862ca07e704aca098419479923ef1a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="nonextensible-attribute"></a>nonextensible (attributo)
Se un'interfaccia duale non viene estesa in fase di esecuzione (ovvero, se non sono forniti metodi o proprietà tramite **IDispatch:: Invoke** che non sono disponibili tramite vtable), è necessario applicare il **nonextensible** attributo alla definizione di interfaccia. Questo attributo fornisce informazioni per le lingue client (ad esempio Visual Basic) che può essere usato per abilitare la verifica del codice completo in fase di compilazione. Se questo attributo viene omesso, i bug possono rimanere nascosti nel codice client in fase di esecuzione.  
  
 Per ulteriori informazioni sul **nonextensible** attributo e un esempio, vedere [nonextensible](../windows/nonextensible.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

