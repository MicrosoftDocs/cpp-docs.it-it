---
title: Derivare nuove classi da CObject?
ms.date: 11/04/2016
helpviewer_keywords:
- derived classes [MFC], from CObject
- CObject class [MFC], when to use
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
ms.openlocfilehash: 371ede0f0921182c066b4cb224e66b18eb6f1208
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616735"
---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Derivare nuove classi da CObject?

No.

Derivare una classe da [CObject](reference/cobject-class.md) quando sono necessarie le funzionalità fornite, ad esempio la serializzazione o la creabilità dinamica. Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivarle da `CObject`. Per un esempio di una classe derivata da `CObject` , vedere l' [esempio Scribble](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Classe CObject: domande frequenti](cobject-class-frequently-asked-questions.md)
