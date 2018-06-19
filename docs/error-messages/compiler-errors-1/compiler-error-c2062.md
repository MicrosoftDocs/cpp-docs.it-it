---
title: Errore del compilatore C2062 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2062
dev_langs:
- C++
helpviewer_keywords:
- C2062
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d11151a8e842796e4a5a8d45956782421daa1c70
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33168659"
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