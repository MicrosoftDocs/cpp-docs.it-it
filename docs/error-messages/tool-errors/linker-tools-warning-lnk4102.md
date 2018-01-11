---
title: Strumenti del linker LNK4102 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4102
dev_langs: C++
helpviewer_keywords: LNK4102
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 80efad60da9f6742110811a5cf4c12f07c7def67
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4102"></a>Avviso degli strumenti del linker LNK4102
esportazione dell'eliminazione del distruttore 'name'; immagine potrebbe non funzionare correttamente  
  
 Il programma ha tentato di esportare un distruttore di eliminazione. L'eliminazione risulta può verificarsi tra limiti di una DLL in modo che un processo per liberare memoria che non è proprietario. Assicurarsi che il simbolo specificato non è incluso nel file def e che il simbolo non è elencato come un argomento di **/importazione** o **/esportazione** opzione nella riga di comando del linker.  
  
 Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.