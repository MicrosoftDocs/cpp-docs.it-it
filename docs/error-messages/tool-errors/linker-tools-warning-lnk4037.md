---
title: LNK4037 Avviso degli strumenti del linker | Documenti Microsoft
ms.custom: ''
ms.date: 10/04/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4037
dev_langs:
- C++
helpviewer_keywords:
- LNK4037
ms.assetid: 9ba02fd3-b04f-4679-bab9-26fa82cf09bb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6b87f0a415d6ae7d282e29c2ca67fda043c2a901
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4037"></a>Avviso LNK4037 degli strumenti del linker

>'*simbolo*' non esiste e verrà ignorato

Il nome decorato *simbolo* non può essere ordinati in base al [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione perché non è stato trovato nel programma. Verificare le specifiche di *simbolo* nel file di risposta ordine. Per ulteriori informazioni, vedere il [/ORDER (Put funzioni in ordine)](../../build/reference/order-put-functions-in-order.md) l'opzione del linker.

> [!NOTE]
> COLLEGAMENTO non è possibile ordinare funzioni statiche poiché i nomi delle funzioni statiche non sono nomi di simboli pubblici. Quando **/ORDER** è specificato, viene generato questo avviso del linker per ogni simbolo nel file di risposta ordine statico o non trovato.