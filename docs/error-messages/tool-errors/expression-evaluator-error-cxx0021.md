---
title: Errore dell'analizzatore di espressioni CXX0021 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0021
dev_langs: C++
helpviewer_keywords:
- CXX0021
- CAN0021
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f14a0494ed580f5b9b76c8bf96e55866fc28f654
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="expression-evaluator-error-cxx0021"></a>Errore dell‘analizzatore di espressioni CXX0021
struct o unione utilizzata come scalare  
  
 Una struttura o unione è stata utilizzata in un'espressione, ma è stato specificato alcun elemento.  
  
 Quando si modifica una variabile di struttura o unione, il nome della variabile può essere visualizzata da sola, senza un qualificatore di campo. Se in un'espressione viene utilizzata una struttura o unione, deve essere qualificato con l'elemento specifico desiderato.  
  
 Specificare l'elemento il cui valore viene utilizzato nell'espressione.  
  
 Questo errore è identico all'errore CAN0021.