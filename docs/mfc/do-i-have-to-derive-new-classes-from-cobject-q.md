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
ms.openlocfilehash: ec080e556b57afadbc3d958f4dba5ac6393108aa
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408908"
---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Derivare nuove classi da CObject?

No.

Derivare una classe dalla classe [CObject](../mfc/reference/cobject-class.md) quando è necessaria la funzionalità che offre, ad esempio la serializzazione o la capacità creativa dinamica. Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivarle da `CObject`. Per un esempio di una classe derivata da `CObject`, vedere la [esempio Scribble](../visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Classe CObject: domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)
