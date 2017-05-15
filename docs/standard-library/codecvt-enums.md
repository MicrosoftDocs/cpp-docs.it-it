---
title: Enumerazioni &lt;codecvt&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: []
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
caps.latest.revision: 10
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 268723c43d61761e2b0a01d337adecc3336e01f3
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="ltcodecvtgt-enums"></a>Enumerazioni &lt;codecvt&gt;
  
##  <a name="codecvt_mode"></a>  Enumerazione codecvt_mode  
 Specifica informazioni sulla configurazione dei facet delle [impostazioni locali](../standard-library/locale-class.md).  
  
```  
enum codecvt_mode {  
    consume_header = 4,  
    generate_header = 2,  
    little_endian = 1  
 };  
```  
  
### <a name="remarks"></a>Note  
 L'enumerazione definisce tre costanti che specificano informazioni di configurazione per i facet delle impostazioni locali dichiarati in [\<codecvt>](../standard-library/codecvt.md). I valori distinti sono:  
  
- `consume_header`, per consumare una sequenza di intestazione iniziale durante la lettura di una sequenza multibyte e determinare l'ordine dei byte della sequenza multibyte successiva da leggere  
  
- `generate_header`, per generare una sequenza di intestazione iniziale durante la scrittura di una sequenza multibyte per annunciare l'ordine dei byte della sequenza multibyte successiva da scrivere  
  
- `little_endian`, per generare una sequenza multibyte in ordine little endian anziché nell'ordine big endian predefinito  
  
 Queste costanti possono essere introdotte insieme dall'operatore OR in combinazioni arbitrarie.  
  
## <a name="see-also"></a>Vedere anche  
 [\<codecvt>](../standard-library/codecvt.md)


