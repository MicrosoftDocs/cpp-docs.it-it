---
title: LNK4037 Avviso degli strumenti del linker | Documenti Microsoft
ms.custom: 
ms.date: 10/04/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4037
dev_langs: C++
helpviewer_keywords: LNK4037
ms.assetid: 9ba02fd3-b04f-4679-bab9-26fa82cf09bb
caps.latest.revision: "0"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0c93eab2faf81e4cd743eae4befa2f842c100589
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4037"></a>Avviso LNK4037 degli strumenti del linker

>'*simbolo*' non esiste e verrà ignorato

Il nome decorato *simbolo* non può essere ordinati in base al [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione perché non è stato trovato nel programma. Verificare le specifiche di *simbolo* nel file di risposta ordine. Per ulteriori informazioni, vedere il [/ORDER (Put funzioni in ordine)](../../build/reference/order-put-functions-in-order.md) l'opzione del linker.

> [!NOTE]
> COLLEGAMENTO non è possibile ordinare funzioni statiche poiché i nomi delle funzioni statiche non sono nomi di simboli pubblici. Quando **/ORDER** è specificato, viene generato questo avviso del linker per ogni simbolo nel file di risposta ordine statico o non trovato.