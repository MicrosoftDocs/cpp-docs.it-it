---
title: Errore del compilatore C2062 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2062
dev_langs: C++
helpviewer_keywords: C2062
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e4a006bed55f16e6ed94c3b5ed9415320acb86fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2062"></a>Errore del compilatore C2062
tipo 'type' imprevisto  
  
 Il compilatore non è previsto un nome di tipo.  
  
 L'esempio seguente genera l'errore C2062:  
  
```  
// C2062.cpp  
// compile with: /c  
struct A {  : int l; };   // C2062  
struct B { private: int l; };   // OK  
```  
  
 C2062 può verificarsi anche a causa della modalità, il compilatore gestisce i tipi non definiti nell'elenco di parametri di un costruttore. Se il compilatore rileva un tipo non definito (errori di ortografia), presuppone che il costruttore è un'espressione e genera l'errore C2062. Per risolvere, utilizzare solo tipi definiti in un elenco di parametri del costruttore.