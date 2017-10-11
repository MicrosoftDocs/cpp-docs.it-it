---
title: Errore del compilatore C2390 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2390
dev_langs:
- C++
helpviewer_keywords:
- C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 37803b8eb5034fb3281dcea385b4a0fca462aaf0
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2390"></a>Errore del compilatore C2390
'identifier': classe di archiviazione non corretto 'identificatore'  
  
 La classe di archiviazione non è valida per l'identificatore di ambito globale. La classe di archiviazione predefinito viene utilizzata al posto della classe non valida.  
  
 Soluzioni possibili:  
  
-   Se l'identificatore è una funzione, dichiararlo con `extern` archiviazione.  
  
-   Se l'identificatore è un parametro formale o una variabile locale, dichiararla come con l'archiviazione automatica.  
  
-   Se l'identificatore è una variabile globale, dichiararlo con nessuna classe di archiviazione (archiviazione automatica).  
  
## <a name="example"></a>Esempio  
  
-   L'esempio seguente genera l'errore C2390:  
  
```  
// C2390.cpp  
register int i;   // C2390  
  
int main() {  
   register int j;   // OK  
}  
```
