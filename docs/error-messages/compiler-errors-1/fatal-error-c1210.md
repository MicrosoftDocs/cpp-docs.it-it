---
title: Errore irreversibile C1210 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C1210
dev_langs: C++
helpviewer_keywords: C1210
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c11ed9df47ae7fc607189683b52a35779e485996
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1210"></a>Errore irreversibile C1210
/clr:pure e /clr:safe non supportate dalla versione del runtime installata  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 L'errore C1210 si verifica quando è presente un compilatore per la versione corrente, ma un Common Language Runtime di una versione precedente.  
  
 Alcune funzionalità del compilatore potrebbero non funzionare in una versione precedente del runtime.  
  
 Per risolvere l'errore C1210, installare la versione di Common Language Runtime che deve essere usata con il compilatore.