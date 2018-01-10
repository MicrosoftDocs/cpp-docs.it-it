---
title: Errore dell'analizzatore di espressioni CXX0030 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0030
dev_langs: C++
helpviewer_keywords:
- CAN0030
- CXX0030
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cb120103714c3711fb059fa736398458209b52a5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="expression-evaluator-error-cxx0030"></a>Errore dell‘analizzatore di espressioni CXX0030
espressione non analizzabile.  
  
 L'analizzatore di espressioni del debugger. Impossibile ottenere un valore per l'espressione così come scritta. Una causa probabile è che l'espressione fa riferimento alla memoria esterna allo spazio degli indirizzi del programma (dereferenziare un puntatore null è un esempio). Windows non consente l'accesso alla memoria di fuori di spazio degli indirizzi del programma.  
  
 È consigliabile riscrivere l'espressione utilizzando le parentesi per controllare l'ordine di valutazione.  
  
 Questo errore è identico all'errore CAN0030.