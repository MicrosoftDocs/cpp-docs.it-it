---
title: Errore del compilatore C2390 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2390
dev_langs: C++
helpviewer_keywords: C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 93d4cbd9de274d53fdc0369c2b85dbf2e97af48f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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