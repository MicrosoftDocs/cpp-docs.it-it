---
title: Errore irreversibile C1382 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1382
dev_langs:
- C++
helpviewer_keywords:
- C1382
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 07c6af1209faface96585224cbd08b4e35101478
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1382"></a>Errore irreversibile C1382
il file PCH 'file' è stato ricompilato 'obj' è stato generato. Ricompilare l'oggetto  
  
 Quando si utilizza [/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file pch più recente di un file obj CIL che fa riferimento ad esso. Le informazioni nel file obj CIL sono scadute. Ricompilare l'oggetto.  
  
 C1382 può verificarsi anche se si compila con **/Yc**, ma anche passare i file del codice sorgente più al compilatore.  Per risolvere, non utilizzare **/Yc** durante il passaggio di origine più file di codice al compilatore.  Per ulteriori informazioni, vedere [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md).