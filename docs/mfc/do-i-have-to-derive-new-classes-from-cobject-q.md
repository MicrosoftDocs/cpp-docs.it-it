---
title: Derivare nuove classi da CObject? | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CObject
dev_langs:
- C++
helpviewer_keywords:
- derived classes [MFC], from CObject
- CObject class [MFC], when to use
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 51904ac06ae6c2db5586f8dc405f85145c5b1f30
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Derivare nuove classi da CObject?
No.  
  
 Derivare una classe da [CObject](../mfc/reference/cobject-class.md) quando sono necessarie le funzionalità disponibili, ad esempio la serializzazione o la capacità creativa dinamica. Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivarle da `CObject`. Per un esempio di una classe derivata da `CObject`, vedere il [esempio Scribble](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject: domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)
