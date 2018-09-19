---
title: Errore dell'analizzatore di espressioni CXX0025 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0025
dev_langs:
- C++
helpviewer_keywords:
- CAN0025
- CXX0025
ms.assetid: 3e2fb541-63b3-46ac-9f93-3dadb253bcf6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd89faa4de7b296d6a6771f857f3d16dbe2f94f2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46043703"
---
# <a name="expression-evaluator-error-cxx0025"></a>Errore dell‘analizzatore di espressioni CXX0025

operatore deve struct/union

Un operatore che accetta un'espressione di `struct` oppure **union** tipo è stato applicato a un'espressione che non è un `struct` oppure **union**.

Elementi della classe, struttura o unione variabili devono avere un nome completo. I componenti non possono essere inseriti senza la specifica completa.

Questo errore è identico all'errore CAN0025.