---
title: nonextensible (attributo) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: nonextensible
dev_langs: C++
helpviewer_keywords:
- nonextensible attribute
- dual interfaces, nonextensible attribute
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 54c76d640171a6068421ff4199b6e77480db28d7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="nonextensible-attribute"></a>nonextensible (attributo)
Se un'interfaccia duale non viene estesa in fase di esecuzione (ovvero, se non sono forniti metodi o proprietà tramite **IDispatch:: Invoke** che non sono disponibili tramite vtable), è necessario applicare il **nonextensible** attributo alla definizione di interfaccia. Questo attributo fornisce informazioni per le lingue client (ad esempio Visual Basic) che può essere usato per abilitare la verifica del codice completo in fase di compilazione. Se questo attributo viene omesso, i bug possono rimanere nascosti nel codice client in fase di esecuzione.  
  
 Per ulteriori informazioni sul **nonextensible** attributo e un esempio, vedere [nonextensible](../windows/nonextensible.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

