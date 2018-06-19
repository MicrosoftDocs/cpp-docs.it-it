---
title: Errore del compilatore di risorse RC2001 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC2001
dev_langs:
- C++
helpviewer_keywords:
- RC2001
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ef1fd5d29fc5784ee418a8456cacec37e943b73
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33322419"
---
# <a name="resource-compiler-error-rc2001"></a>Errore del compilatore di risorse RC2001
nuova riga nella costante  
  
 Costante stringa continua nella riga successiva senza la presenza di una barra rovesciata (**\\**) o apertura e di chiusura utilizzando le virgolette doppie (**"**).  
  
 Per interrompere una costante stringa che viene eseguita su due righe nel file di origine, eseguire una delle operazioni seguenti:  
  
-   Terminare la prima riga con il carattere di continuazione di riga, una barra rovesciata.  
  
-   Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa nella riga successiva con un'altra virgoletta.  
  
 Non è sufficiente per terminare la prima riga con \n, la sequenza di escape per l'incorporamento di un carattere di nuova riga in una costante di stringa.