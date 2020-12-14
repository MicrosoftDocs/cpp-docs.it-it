---
description: 'Altre informazioni su: è necessario derivare nuove classi da CObject?'
title: Derivare nuove classi da CObject?
ms.date: 11/04/2016
helpviewer_keywords:
- derived classes [MFC], from CObject
- CObject class [MFC], when to use
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
ms.openlocfilehash: d37570cb62f1ee274e4cea85fc95a9221c95fd8a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261307"
---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Derivare nuove classi da CObject?

No.

Derivare una classe da [CObject](reference/cobject-class.md) quando sono necessarie le funzionalità fornite, ad esempio la serializzazione o la creabilità dinamica. Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivarle da `CObject`. Per un esempio di una classe derivata da `CObject` , vedere l' [esempio Scribble](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedi anche

[Classe CObject: domande frequenti](cobject-class-frequently-asked-questions.md)
