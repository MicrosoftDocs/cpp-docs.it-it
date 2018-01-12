---
title: Errore del compilatore C2734 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2734
dev_langs: C++
helpviewer_keywords: C2734
ms.assetid: e53a77b7-825c-42d1-a655-90e1c93b833e
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 73767f86fa4a91b397d31d08a7bf5291502839b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2734"></a>Errore del compilatore C2734
'identifier': deve inizializzare un oggetto const se non extern  
  
 L'identificatore è dichiarato `const` ma non inizializzato o `extern`.  
  
 L'esempio seguente genera l'errore C2734:  
  
```  
// C2734.cpp  
const int j;   // C2734  
extern const int i;   // OK, declared as extern  
```