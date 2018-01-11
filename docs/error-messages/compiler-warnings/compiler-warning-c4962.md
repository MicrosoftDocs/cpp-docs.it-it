---
title: Avviso del compilatore C4962 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4962
dev_langs: C++
helpviewer_keywords: C4962
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: da57dfd020b1763d0749f66098a17c37a722a44d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-c4962"></a>Avviso del compilatore C4962
'function': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati di profilo"  
  
 Una funzione non è stata compilata con /LTCG:PGO perché i dati del conteggio (profilo) per la funzione non erano affidabili. Ripetere la profilatura per rigenerare il file PGC che contiene i dati del profilo non affidabili per tale funzione.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).