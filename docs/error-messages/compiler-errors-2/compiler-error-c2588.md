---
title: Errore del compilatore C2588 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2588
dev_langs:
- C++
helpviewer_keywords:
- C2588
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 807574f0f94f989726ca19d3260b9668f6c84055
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2588"></a>Errore del compilatore C2588
':: ~ identifier': distruttore globale non valido  
  
 Il distruttore è definito per un elemento diverso da una classe, struttura o unione. ma questa operazione non è consentita.  
  
 Questo errore può essere causato da una classe mancante, struttura o unione nome sul lato sinistro della risoluzione dell'ambito (`::`) (operatore).  
  
 L'esempio seguente genera l'errore C2588:  
  
```  
// C2588.cpp  
~F();   // C2588  
```