---
title: Ordine delle opzioni CL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: cl
dev_langs: C++
helpviewer_keywords: cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8ef67792b01d4d4dab535bfb180cd70beb2316b6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL
Le opzioni possono apparire in un punto qualsiasi nella riga di comando di CL, ad eccezione dell'opzione /link deve trovarsi per ultimo. Il compilatore inizia con le opzioni specificate nel [variabile di ambiente CL](../../build/reference/cl-environment-variables.md) e quindi legge la riga di comando da sinistra a destra, l'elaborazione dei file di comando nell'ordine vengono rilevati. Ogni opzione si applica a tutti i file nella riga di comando. Se vengono rilevate CL opzioni in conflitto, viene usata l'opzione all'estrema destra.  
  
## <a name="see-also"></a>Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)