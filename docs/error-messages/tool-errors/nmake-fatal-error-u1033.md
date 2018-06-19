---
title: Errore irreversibile U1033 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1033
dev_langs:
- C++
helpviewer_keywords:
- U1033
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e1d39d4c35ec66d405d51d601b7c5d2b2ab37b02
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33319270"
---
# <a name="nmake-fatal-error-u1033"></a>Errore irreversibile U1033 di NMAKE 
Errore di sintassi: 'string' imprevisto  
  
 La stringa non è parte della sintassi valida per un makefile.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Se la chiusura di set di parentesi angolari (**<<**) per un file inline non all'inizio di una riga, si verificherà l'errore seguente:  
  
    ```  
    syntax error : 'EOF' unexpected  
    ```  
  
2.  Se una definizione di macro nel makefile contiene un segno di uguale (**=**) senza precedente nome o se viene definito il nome è una macro che non è definita, viene generato l'errore seguente:  
  
    ```  
    syntax error : '=' unexpected  
    ```  
  
3.  Se il punto e virgola (**;**) in una riga di commento in strumenti. INI non è all'inizio della riga, si verifica l'errore seguente:  
  
    ```  
    syntax error : ';' unexpected  
    ```  
  
4.  Se il file di progetto è stato formattato da un elaboratore di testo, può verificarsi l'errore seguente:  
  
    ```  
    syntax error : ':' unexpected  
    ```