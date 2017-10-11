---
title: Errore irreversibile C1382 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1382
dev_langs:
- C++
helpviewer_keywords:
- C1382
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ddb016e14b01b3bc1dfd45c7d5a8ad1aa489ac3a
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="fatal-error-c1382"></a>Errore irreversibile C1382
il file PCH 'file' è stato ricompilato 'obj' è stato generato. Ricompilare l'oggetto  
  
 Quando si utilizza [/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file pch più recente di un file obj CIL che fa riferimento ad esso. Le informazioni nel file obj CIL sono scadute. Ricompilare l'oggetto.  
  
 C1382 può verificarsi anche se si compila con **/Yc**, ma anche passare i file del codice sorgente più al compilatore.  Per risolvere, non utilizzare **/Yc** durante il passaggio di origine più file di codice al compilatore.  Per ulteriori informazioni, vedere [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md).
