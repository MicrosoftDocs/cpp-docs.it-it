---
title: Errore dell'analizzatore di espressioni CXX0021 | Documenti Microsoft
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
ms.openlocfilehash: 996fc46982d809da5e0b37b83f2940102892167e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299367"
---
# <a name="expression-evaluator-error-cxx0021"></a>Errore dell‘analizzatore di espressioni CXX0021
struct o unione utilizzata come scalare  
  
 Una struttura o unione è stata utilizzata in un'espressione, ma è stato specificato alcun elemento.  
  
 Quando si modifica una variabile di struttura o unione, il nome della variabile può essere visualizzata da sola, senza un qualificatore di campo. Se in un'espressione viene utilizzata una struttura o unione, deve essere qualificato con l'elemento specifico desiderato.  
  
 Specificare l'elemento il cui valore viene utilizzato nell'espressione.  
  
 Questo errore è identico all'errore CAN0021.