---
title: Errore irreversibile C1382 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1382
dev_langs: C++
helpviewer_keywords: C1382
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 923cc957dd136147a6c749f5ebf9508ca7e2052d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1382"></a>Errore irreversibile C1382
il file PCH 'file' è stato ricompilato 'obj' è stato generato. Ricompilare l'oggetto  
  
 Quando si utilizza [/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file pch più recente di un file obj CIL che fa riferimento ad esso. Le informazioni nel file obj CIL sono scadute. Ricompilare l'oggetto.  
  
 C1382 può verificarsi anche se si compila con **/Yc**, ma anche passare i file del codice sorgente più al compilatore.  Per risolvere, non utilizzare **/Yc** durante il passaggio di origine più file di codice al compilatore.  Per ulteriori informazioni, vedere [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md).