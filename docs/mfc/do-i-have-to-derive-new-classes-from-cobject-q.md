---
title: Derivare nuove classi da CObject?
ms.date: 11/04/2016
f1_keywords:
- CObject
helpviewer_keywords:
- derived classes [MFC], from CObject
- CObject class [MFC], when to use
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
ms.openlocfilehash: cbefed5f44981d784d1fc5b6616bab5ee45e4115
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57279510"
---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Derivare nuove classi da CObject?

No.

Derivare una classe dalla classe [CObject](../mfc/reference/cobject-class.md) quando è necessaria la funzionalità che offre, ad esempio la serializzazione o la capacità creativa dinamica. Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivarle da `CObject`. Per un esempio di una classe derivata da `CObject`, vedere la [esempio Scribble](../visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Classe CObject: Domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)
