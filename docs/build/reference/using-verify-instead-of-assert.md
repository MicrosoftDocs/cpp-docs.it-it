---
title: Utilizzo di VERIFY invece di ASSERT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- assert
dev_langs:
- C++
helpviewer_keywords:
- ASSERT statements
- debugging [MFC], ASSERT statements
- VERIFY macro
- assertions, troubleshooting ASSERT statements
- debugging assertions
- assertions, debugging
ms.assetid: 4c46397b-3fb1-49c1-a09b-41a72fae3797
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4ffe046a281bbbbefc251b48df55ecd275515e60
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-verify-instead-of-assert"></a>Utilizzo di VERIFY invece di ASSERT
Si supponga che quando si esegue la versione di debug dell'applicazione MFC, non siano presenti problemi. Tuttavia, la versione della stessa applicazione si blocca, restituisce risultati non corretti, e/o presenta alcuni altri comportamenti anomali.  
  
 Questo problema può verificarsi quando si inserisce codice importante in un'istruzione di ASSERZIONE per verificare che venga eseguito correttamente. Poiché le istruzioni di ASSERZIONE sono impostate come commento in una build di rilascio di un programma MFC, il codice non viene eseguito in una build di rilascio.  
  
 Se si utilizza ASSERT per confermare che una chiamata di funzione ha avuto esito positivo, è consigliabile utilizzare [verificare](../../mfc/reference/diagnostic-services.md#verify) invece. La macro VERIFY valuta i propri argomenti in entrambe le modalità di debug e build di rilascio dell'applicazione.  
  
 Un altro preferito tecnica consiste nell'assegnare il valore restituito dalla funzione a una variabile temporanea e quindi la variabile in un'istruzione ASSERT.  
  
 Esaminare il frammento di codice seguente:  
  
```  
enum {  
    sizeOfBuffer = 20  
};  
char *buf;  
ASSERT(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));  
strcpy_s( buf, sizeOfBuffer, "Hello, World" );  
free( buf );  
```  
  
 Questo codice viene eseguito perfettamente in una versione di debug di un'applicazione MFC. Se la chiamata a `calloc( )` viene visualizzato un messaggio di diagnostica che include il numero di file e riga ha esito negativo,. Tuttavia, in una build finale di un'applicazione MFC:  
  
-   la chiamata a `calloc( )` non si verifica mai, lasciando `buf` non inizializzato, o  
  
-   `strcpy_s( )`copie "`Hello, World`" in una porzione di memoria, probabilmente un arresto anomalo dell'applicazione o causando l'arresto del sistema casuale o  
  
-   `free()`è stato effettuato un tentativo di liberare la memoria allocata mai.  
  
 Per utilizzare correttamente l'ASSERZIONE, il codice di esempio deve essere modificato in quanto segue:  
  
```  
enum {  
    sizeOfBuffer = 20  
};  
char *buf;  
buf = (char *) calloc(sizeOfBuffer, sizeof(char) );  
ASSERT( buf != NULL );  
strcpy_s( buf, sizeOfBuffer, "Hello, World" );  
free( buf );  
```  
  
 In alternativa, è possibile utilizzare invece verificare:  
  
```  
enum {  
    sizeOfBuffer = 20  
};  
char *buf;  
VERIFY(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));  
strcpy_s( buf, sizeOfBuffer, "Hello, World" );  
free( buf );  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)