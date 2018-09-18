---
title: Errore dell'analizzatore di espressioni CXX0052 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0052
dev_langs:
- C++
helpviewer_keywords:
- CXX0052
- CAN0052
ms.assetid: 5060d479-d0a4-4682-b858-c8b9a4f324e6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1ba8fb898930ef830857773a89cd80e4c43c59c4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028155"
---
# <a name="expression-evaluator-error-cxx0052"></a>Errore dell‘analizzatore di espressioni CXX0052

funzione membro non è presente

Una funzione membro come un punto di interruzione è stata specificata ma non è stata trovata. L'impostazione di un punto di interruzione in una funzione che è stato impostato come inline possono causare questo errore.

Ricompilare il file con l'incorporamento forzata la chiusura (/ Ob0) per impostare un punto di interruzione in questa funzione.

Un'espressione chiamata una funzione che non è stata definita.

Questo errore è identico all'errore CAN0052.