---
title: Errore dell'analizzatore di espressioni CXX0030 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0030
dev_langs:
- C++
helpviewer_keywords:
- CAN0030
- CXX0030
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cb2921013d116b7d8f02e1e29380ca3cd14086b9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46102814"
---
# <a name="expression-evaluator-error-cxx0030"></a>Errore dell‘analizzatore di espressioni CXX0030

espressione non analizzabile.

L'analizzatore di espressioni del debugger non è stato possibile ottenere un valore per l'espressione così come scritta. Una causa probabile è che l'espressione fa riferimento alla memoria esterna allo spazio degli indirizzi del programma (dereferenzia un puntatore null è un esempio). Windows non consente l'accesso alla memoria esterna allo spazio degli indirizzi del programma.

È possibile riscrivere l'espressione utilizzando le parentesi per controllare l'ordine di valutazione.

Questo errore è identico all'errore CAN0030.