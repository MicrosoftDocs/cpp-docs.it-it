---
title: Errore irreversibile C1054 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1054
dev_langs: C++
helpviewer_keywords: C1054
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d02d8eb05633d7250dc3f7ee85dd78ccf4153052
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fatal-error-c1054"></a>Errore irreversibile C1054
limite del compilatore: inizializzatori eccessivamente annidati  
  
 Il codice supera il limite di nidificazione sugli inizializzatori (10-15 livelli, a seconda della combinazione di tipi di fase di inizializzazione).  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Semplificare i tipi di dati da inizializzare per ridurre la nidificazione.  
  
2.  Inizializzare le variabili in istruzioni distinte dopo la dichiarazione.