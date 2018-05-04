---
title: L'esecuzione di un programma nella pre-elaborazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: da87a87a2e97736d202b7ddb9be2dbec54fed44d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione
Per utilizzare il codice di uscita di un comando durante la pre-elaborazione, specificare il comando, con tutti gli argomenti, racchiuso tra parentesi quadre ([]). Eventuali macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica di comando con codice di uscita del comando, che può essere usate in un'espressione per controllare la pre-elaborazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)