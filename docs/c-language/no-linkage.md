---
title: Nessun collegamento | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- no linkage
- linkage [C++], none
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: abacc6fbd49f9f42620385a4206c9412648c173b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="no-linkage"></a>Nessun collegamento
Se una dichiarazione di un identificatore all'interno di un blocco non include l'identificatore di classe di archiviazione `extern`, significa che l'identificatore non dispone di un collegamento ed è univoco nella funzione.  
  
 I seguenti identificatori non dispongono di collegamento:  
  
-   Identificatori dichiarati come elementi diversi da un oggetto o da una funzione  
  
-   Identificatori dichiarati come parametri di una funzione  
  
-   Identificatori con ambito di blocco per un oggetto dichiarato senza l'identificatore di classe di archiviazione `extern`  
  
 Se un identificatore non dispone di collegamento, dichiarando nuovamente lo stesso nome (in un dichiaratore o in un identificatore di tipo) nello stesso livello di ambito verrà generato un errore di ridefinizione dei simboli.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)