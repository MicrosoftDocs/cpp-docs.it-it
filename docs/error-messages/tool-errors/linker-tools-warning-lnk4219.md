---
title: Strumenti del linker LNK4219 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4219
dev_langs: C++
helpviewer_keywords: LNK4219
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1331931ba2fa7219a27b8f60b185dc3ab9310328
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4219"></a>Avviso degli strumenti del linker LNK4219
overflow della correzione nome correzione. La destinazione 'nome simbolo di destinazione' non compreso nell'intervallo, verrà inserito il thunk  
  
 Il linker inserito un thunk in una situazione in cui l'indirizzo o offset non è riuscito per l'istruzione specificata perché il simbolo di destinazione è troppo lontano dal percorso dell'istruzione.  
  
 Si consiglia di riordinare l'immagine (con il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione, ad esempio) per evitare un livello aggiuntivo di riferimento indiretto.