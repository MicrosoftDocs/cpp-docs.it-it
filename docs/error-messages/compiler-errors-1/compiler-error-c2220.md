---
title: Errore del compilatore C2220 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2220
dev_langs:
- C++
helpviewer_keywords:
- C2220
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 14da9ea0905f2aa7aa67c2b7524314a4af74246b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2220"></a>Errore del compilatore C2220
Avviso considerato come errore - Nessun file oggetto generato  
  
 [/WX](../../build/reference/compiler-option-warning-level.md) indica al compilatore di considerare tutti gli avvisi come errori. Poiché si è verificato un errore, non è stato generato alcun oggetto o file eseguibile.  
  
 Questo errore viene visualizzato solo quando il **/WX** flag è impostato e viene generato un avviso durante la compilazione. Per correggere questo errore, è necessario eliminare ogni avviso nel progetto.  
  
### <a name="to-fix-use-one-of-the-following-techniques"></a>Per risolvere il problema, utilizzare una delle seguenti tecniche  
  
-   Correggere i problemi che causano gli avvisi nel progetto.  
  
-   Compilare a un livello di avviso inferiore, ad esempio, utilizzare **/W3** anziché **/W4**.  
  
-   Utilizzare un [avviso](../../preprocessor/warning.md) pragma per disabilitare o eliminare un avviso specifico.  
  
-   Non utilizzare **/WX** da compilare.