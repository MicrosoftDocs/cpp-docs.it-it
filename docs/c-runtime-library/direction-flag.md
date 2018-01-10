---
title: Flag di direzione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: c.flags
dev_langs: C++
helpviewer_keywords: direction flag
ms.assetid: 0836b4af-dbbb-4ab8-a4b2-156f2e2099e2
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e0a43bac113c013ecb93f5b6e84aa2075a052f8c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="direction-flag"></a>Flag di direzione
Il flag di direzione è un flag di CPU specifico dei processori Intel 80x86. Viene applicato a tutte le istruzioni in linguaggio assembly che usano il prefisso REP (ripeti), ad esempio MOVS, MOVSD, MOVSW e altre. Gli indirizzi specificati alle istruzioni a cui è possibile applicarli vengono incrementati se il flag di direzione non è impostato.  
  
 Nelle routine di runtime del linguaggio C si presuppone che il flag di direzione non sia impostato. Se si usano altre funzioni insieme alle funzioni di runtime del linguaggio C, è necessario verificare che le altre funzioni non influiscano sul flag di direzione o lo ripristinino alle sue condizioni originali. Prevedendo la rimozione del flag di direzione al momento dell'accesso il codice di runtime viene reso più veloce ed efficiente.  
  
 Le funzioni della libreria di runtime del linguaggio C, come le routine per la gestione delle stringhe e quelle per la gestione del buffer, prevedono che il flag di direzione non sia impostato.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)