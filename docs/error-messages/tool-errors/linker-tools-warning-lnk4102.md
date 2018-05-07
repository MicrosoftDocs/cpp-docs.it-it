---
title: Strumenti del linker LNK4102 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4102
dev_langs:
- C++
helpviewer_keywords:
- LNK4102
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16d13dcbc6d15efd7cf3a7ea0a310de4ab7b0c93
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4102"></a>Avviso degli strumenti del linker LNK4102
esportazione dell'eliminazione del distruttore 'name'; immagine potrebbe non funzionare correttamente  
  
 Il programma ha tentato di esportare un distruttore di eliminazione. L'eliminazione risulta può verificarsi tra limiti di una DLL in modo che un processo per liberare memoria che non è proprietario. Assicurarsi che il simbolo specificato non è incluso nel file def e che il simbolo non è elencato come un argomento di **/importazione** o **/esportazione** opzione nella riga di comando del linker.  
  
 Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.