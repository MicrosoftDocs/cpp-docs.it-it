---
title: Ordine delle opzioni CL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- cl
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 165e20eefecd20ad9dec9e01b38c5eaa7926e4eb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL
Le opzioni possono apparire in un punto qualsiasi nella riga di comando di CL, ad eccezione dell'opzione /link deve trovarsi per ultimo. Il compilatore inizia con le opzioni specificate nel [variabile di ambiente CL](../../build/reference/cl-environment-variables.md) e quindi legge la riga di comando da sinistra a destra, l'elaborazione dei file di comando nell'ordine vengono rilevati. Ogni opzione si applica a tutti i file nella riga di comando. Se vengono rilevate CL opzioni in conflitto, viene usata l'opzione all'estrema destra.  
  
## <a name="see-also"></a>Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)