---
title: Errore del compilatore C2447 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2447
dev_langs:
- C++
helpviewer_keywords:
- C2447
ms.assetid: d1bd6e9a-ee42-4510-ae5e-6b0378f7b931
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 20f9e3259b355a40875bd9fc06f04fe2bb3147d0
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2447"></a>Errore del compilatore C2447
'{': intestazione di funzione mancante. Elenco formale di tipo obsoleto?  
  
 Il compilatore ha rilevato una parentesi graffa aperta imprevista nell'ambito globale. Nella maggior parte dei casi, questo problema è dovuto a un'intestazione di funzione con formato errato, a una dichiarazione posizionata non correttamente o a un punto e virgola inutile. Per risolvere questo problema, verificare che la parentesi graffa aperta segua un'intestazione di funzione con formato corretto e non sia preceduta da una dichiarazione o da un punto e virgola inutile.  
  
 Questo errore può anche essere causato da un elenco di argomenti formali del linguaggio C obsoleti. Per risolvere questo problema, eseguire il refactoring dell'elenco di argomenti in base allo stile moderno, ovvero con l'utilizzo delle parentesi.  
  
 L'esempio seguente genera l'errore C2447:  
  
```  
// C2447.cpp  
int c;  
{}       // C2447  
```
