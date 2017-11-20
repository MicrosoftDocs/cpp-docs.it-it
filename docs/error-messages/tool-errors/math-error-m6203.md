---
title: Errore matematico M6203 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: M6203
dev_langs: C++
helpviewer_keywords: M6203
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0ac2e84cb3b8c05bf2b71411c406490d3f266383
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="math-error-m6203"></a>Errore matematico M6203
'function': errore overflow  
  
 Il risultato della funzione specificata è troppo grande per essere rappresentato.  
  
 L'errore chiama la `_matherr` funzione con il nome della funzione, gli argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematica a virgola mobile in fase di esecuzione.