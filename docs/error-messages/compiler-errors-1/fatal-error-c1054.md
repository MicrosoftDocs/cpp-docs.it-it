---
title: Errore irreversibile C1054 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1054
dev_langs:
- C++
helpviewer_keywords:
- C1054
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a9daac4944c57dbf08fe0ebcbc95993a97838585
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33198898"
---
# <a name="fatal-error-c1054"></a>Errore irreversibile C1054
limite del compilatore: inizializzatori eccessivamente annidati  
  
 Il codice supera il limite di nidificazione sugli inizializzatori (10-15 livelli, a seconda della combinazione di tipi di fase di inizializzazione).  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Semplificare i tipi di dati da inizializzare per ridurre la nidificazione.  
  
2.  Inizializzare le variabili in istruzioni distinte dopo la dichiarazione.