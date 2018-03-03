---
title: Errore del compilatore di risorse RC2001 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- RC2001
dev_langs:
- C++
helpviewer_keywords:
- RC2001
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7c04110898780495f918c1e37c0068daead340a4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-error-rc2001"></a>Errore del compilatore di risorse RC2001
nuova riga nella costante  
  
 Costante stringa continua nella riga successiva senza la presenza di una barra rovesciata (**\\**) o apertura e di chiusura utilizzando le virgolette doppie (**"**).  
  
 Per interrompere una costante stringa che viene eseguita su due righe nel file di origine, eseguire una delle operazioni seguenti:  
  
-   Terminare la prima riga con il carattere di continuazione di riga, una barra rovesciata.  
  
-   Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa nella riga successiva con un'altra virgoletta.  
  
 Non è sufficiente per terminare la prima riga con \n, la sequenza di escape per l'incorporamento di un carattere di nuova riga in una costante di stringa.