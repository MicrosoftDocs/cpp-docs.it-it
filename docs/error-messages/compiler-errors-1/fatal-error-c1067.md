---
title: Errore irreversibile C1067 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1067
dev_langs:
- C++
helpviewer_keywords:
- C1067
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8889ccbfcac31917948da719444dab68a2d1b9c6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1067"></a>Errore irreversibile C1067
limite del compilatore: superato limite di 64 KB per dimensioni di un record di tipo  
  
 Questo errore può verificarsi se un simbolo è un nome decorato superiore a 247 caratteri.  Per risolvere, abbreviare il nome del simbolo.  
  
 Quando il compilatore genera informazioni di debug, genera record di tipo per definire i tipi individuati nel codice sorgente.  Ad esempio, i record di tipo includono strutture semplici ed elenchi di argomenti di funzioni.  Alcuni di questi record di tipo possono essere elenchi di grandi dimensioni.  
  
 È previsto un limite di 64 KB sulle dimensioni di qualsiasi record di tipo.  Se viene superato il limite di 64 KB quindi verificherà questo errore.  
  
 C1067 può verificarsi anche se sono presenti più simboli con nomi lunghi o se una classe, struct o unione ha troppi membri.