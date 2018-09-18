---
title: Errore dell'analizzatore di espressioni CXX0021 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0021
dev_langs:
- C++
helpviewer_keywords:
- CXX0021
- CAN0021
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8ef765286d022b26aeed0ca98c9f43f94f5d17f8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025776"
---
# <a name="expression-evaluator-error-cxx0021"></a>Errore dell‘analizzatore di espressioni CXX0021

struct o unione utilizzato come scalare

Una struttura o un'unione è stata usata in un'espressione, ma è stato specificato alcun elemento.

Quando si modifica una struttura o una variabile di unione, il nome della variabile può comparire da solo, senza un qualificatore di campo. Se una struttura o unione viene usato in un'espressione, devono essere qualificato con l'elemento specifico desiderato.

Specificare l'elemento il cui valore deve essere utilizzato nell'espressione.

Questo errore è identico all'errore CAN0021.