---
title: Errore dell'analizzatore di espressioni CXX0039 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0039
dev_langs:
- C++
helpviewer_keywords:
- CXX0039
- CAN0039
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b5397426618c5dfcbaa6307105781ff2e6f2eb97
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46048331"
---
# <a name="expression-evaluator-error-cxx0039"></a>Errore dell‘analizzatore di espressioni CXX0039

il simbolo è ambiguo

L'analizzatore di espressioni C non è possibile determinare quale istanza di un simbolo da utilizzare in un'espressione. Il simbolo è presente più volte nella struttura di ereditarietà.

È necessario usare l'operatore di risoluzione ambito (`::`) specificare in modo esplicito l'istanza da utilizzare nell'espressione.

Questo errore è identico all'errore CAN0039.