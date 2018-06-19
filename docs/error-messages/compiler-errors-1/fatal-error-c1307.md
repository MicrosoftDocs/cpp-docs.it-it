---
title: Errore irreversibile C1307 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1307
dev_langs:
- C++
helpviewer_keywords:
- C1307
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9d06ce51ada7cd9159b8e02ff627bf12ebb7293d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33227135"
---
# <a name="fatal-error-c1307"></a>Errore irreversibile C1307
programma modificato dopo la raccolta dei dati di profilo  
  
 Quando si utilizza [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), il linker ha rilevato un modulo di input che è stato ricompilato dopo /LTCG: PGINSTRUMENT e che il modulo è stato modificato al punto in cui i dati di profilo esistente non sono più pertinenti. Ad esempio, se il grafico delle chiamate è stato modificato nel modulo ricompilato, il compilatore genererà C1307.  
  
 Per correggere l'errore, eseguire /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test e l'esecuzione di /LTCG: PGOPTIMIZE. Se non viene eseguito è possibile eseguire /LTCG: PGINSTRUMENT e Ripristina che tutti i test, utilizzare PGUPDATE anziché /LTCG: PGOPTIMIZE per creare l'immagine ottimizzata.