---
title: Errore irreversibile C1067 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1067
dev_langs:
- C++
helpviewer_keywords:
- C1067
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 89ac7084e92f7f2ed496a4c1572e94a4fa46862f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1067"></a>Errore irreversibile C1067
limite del compilatore: superato limite di 64 KB per dimensioni di un record di tipo  
  
 Questo errore può verificarsi se un simbolo è un nome decorato superiore a 247 caratteri.  Per risolvere, abbreviare il nome del simbolo.  
  
 Quando il compilatore genera informazioni di debug, genera record di tipo per definire i tipi individuati nel codice sorgente.  Ad esempio, i record di tipo includono strutture semplici ed elenchi di argomenti di funzioni.  Alcuni di questi record di tipo possono essere elenchi di grandi dimensioni.  
  
 È previsto un limite di 64 KB sulle dimensioni di qualsiasi record di tipo.  Se viene superato il limite di 64 KB quindi verificherà questo errore.  
  
 C1067 può verificarsi anche se sono presenti più simboli con nomi lunghi o se una classe, struct o unione ha troppi membri.