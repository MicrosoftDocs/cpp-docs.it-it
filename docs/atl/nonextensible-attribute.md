---
title: Attributo nonextensible | Microsoft Docs
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
ms.openlocfilehash: 1112f533e2e38dd90b1693e8bd31e5896ebca5e7
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848435"
---
# <a name="nonextensible-attribute"></a>nonextensible (attributo)
Se un'interfaccia duale verrà estesa non in fase di esecuzione (vale a dire, se non sono forniti metodi o proprietà attraverso `IDispatch::Invoke` che non sono disponibili tramite la vtable), è consigliabile applicare il **nonextensible** attributo all'interfaccia definizione. Questo attributo fornisce informazioni per le lingue client (ad esempio Visual Basic) che può essere usato per abilitare la verifica del codice completo in fase di compilazione. Se questo attributo viene omesso, i bug possono rimanere nascosti nel codice client alla fase di esecuzione.  
  
 Per altre informazioni sul **nonextensible** attributo e un esempio, vedere [nonextensible](../windows/nonextensible.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

