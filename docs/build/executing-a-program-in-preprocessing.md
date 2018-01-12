---
title: L'esecuzione di un programma nella pre-elaborazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ef000f6611c9cb3794da8e46e6b905e57d5ecf92
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione
Per utilizzare il codice di uscita di un comando durante la pre-elaborazione, specificare il comando, con tutti gli argomenti, racchiuso tra parentesi quadre ([]). Eventuali macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica di comando con codice di uscita del comando, che può essere usate in un'espressione per controllare la pre-elaborazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)