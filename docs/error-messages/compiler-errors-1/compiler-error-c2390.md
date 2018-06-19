---
title: Errore del compilatore C2390 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2390
dev_langs:
- C++
helpviewer_keywords:
- C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5a32a9ca77ba43e5f2866baed91b99103224dbc0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33198716"
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