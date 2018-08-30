---
title: Compilatore avviso (livello 1) C4951 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4951
dev_langs:
- C++
helpviewer_keywords:
- C4951
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e26c4bc176a54f063a3f9bce2faf451a9c0406f0
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43204235"
---
# <a name="compiler-warning-level-1-c4951"></a>Avviso del compilatore (livello 1) C4951

> «*funzione*' è stato modificato dopo la raccolta dei dati, profilo dati di profilo di funzione non utilizzati

Una funzione è stata modificata in un modulo di input per [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), di conseguenza, i dati del profilo non sono più validi. Il modulo di input è stato ricompilato dopo **/LTCG: PGINSTRUMENT** e ha una funzione (*funzione*) con un flusso di controllo diverso da quello presente nel modulo al momento del **/LTCG: PGINSTRUMENT**  operazione.

Si tratta di un avviso informativo. Per risolvere il problema, eseguire **/LTCG:PGINSTRUMENT**, ripetere tutte le esecuzioni dei test ed eseguire **/LTCG:PGOPTIMIZE**.

Se fosse stata usata **/LTCG:PGOPTIMIZE** , al posto di questo avviso sarebbe comparso un errore.