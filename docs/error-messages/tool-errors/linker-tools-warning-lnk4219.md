---
title: Strumenti del linker LNK4219 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4219
dev_langs:
- C++
helpviewer_keywords:
- LNK4219
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 59cb7376957b7985b7ae2335ea472171d490ff42
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33301135"
---
# <a name="linker-tools-warning-lnk4219"></a>Avviso degli strumenti del linker LNK4219
overflow della correzione nome correzione. La destinazione 'nome simbolo di destinazione' non compreso nell'intervallo, verrà inserito il thunk  
  
 Il linker inserito un thunk in una situazione in cui l'indirizzo o offset non è riuscito per l'istruzione specificata perché il simbolo di destinazione è troppo lontano dal percorso dell'istruzione.  
  
 Si consiglia di riordinare l'immagine (con il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione, ad esempio) per evitare un livello aggiuntivo di riferimento indiretto.