---
title: Errore del compilatore C2447 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2447
dev_langs: C++
helpviewer_keywords: C2447
ms.assetid: d1bd6e9a-ee42-4510-ae5e-6b0378f7b931
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 30c8195467b9cf287ba9f7220555d903ba51c164
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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