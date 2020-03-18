---
title: Derivare nuove classi da CObject?
ms.date: 11/04/2016
helpviewer_keywords:
- derived classes [MFC], from CObject
- CObject class [MFC], when to use
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
ms.openlocfilehash: d38e589f371fc56f5566c56de7b19c366065a503
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446932"
---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Derivare nuove classi da CObject?

No.

Derivare una classe da [CObject](../mfc/reference/cobject-class.md) quando sono necessarie le funzionalità fornite, ad esempio la serializzazione o la creabilità dinamica. Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivarle da `CObject`. Per un esempio di una classe derivata da `CObject`, vedere l' [esempio Scribble](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Classe CObject: domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)
