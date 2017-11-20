---
title: Quanto costa derivare una classe da CObject? | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CObject
dev_langs: C++
helpviewer_keywords: CObject class [MFC], overhead of derived classes [MFC]
ms.assetid: 9b92c98b-b3dd-48a7-9d24-c3b8554edf90
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e440897bd3c047a5f6598187004808defb4f6eaa
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="what-does-it-cost-me-to-derive-a-class-from-cobject"></a>Quanto costa derivare una classe da CObject?
Il sovraccarico dovuto alla derivazione dalla classe [CObject](../mfc/reference/cobject-class.md) è minimo. La classe derivata eredita solo quattro funzioni virtuali e un singolo [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject: domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)
