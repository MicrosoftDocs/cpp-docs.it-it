---
title: "Utilizzo di VERIFY invece di ASSERT | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "assert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ASSERT (istruzioni)"
  - "asserzioni, debug"
  - "asserzioni, risoluzione dei problemi di istruzioni ASSERT"
  - "debug [MFC], ASSERT (istruzioni)"
  - "debug di asserzioni"
  - "VERIFY (macro)"
ms.assetid: 4c46397b-3fb1-49c1-a09b-41a72fae3797
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo di VERIFY invece di ASSERT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Si supponga che, quando si esegue la versione di debug dell'applicazione MFC, non si verifichi alcun problema.  La versione di rilascio della stessa applicazione, tuttavia, si blocca, restituisce risultati errati e\/o presenta un funzionamento anomalo.  
  
 Questo problema può verificarsi quando si inserisce codice importante in un'istruzione ASSERT per verificare che venga eseguito correttamente.  Dal momento che, nelle build di rilascio dei programmi MFC, le istruzioni ASSERT vengono considerate come commento, il codice non viene eseguito.  
  
 Se si utilizza ASSERT per confermare l'esito positivo della chiamata di una funzione, è possibile utilizzare in alternativa [VERIFY](../Topic/VERIFY.md).  Gli argomenti della macro VERIFY vengono infatti valutati sia nelle build di debug che nelle build di rilascio dell'applicazione.  
  
 Un'altra tecnica che è possibile adottare consiste nell'assegnare il valore restituito dalla funzione a una variabile temporanea, testando quindi tale variabile in un'istruzione ASSERT.  
  
 Esaminare il seguente frammento di codice:  
  
```  
enum {  
    sizeOfBuffer = 20  
};  
char *buf;  
ASSERT(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));  
strcpy_s( buf, sizeOfBuffer, "Hello, World" );  
free( buf );  
```  
  
 Questo codice viene eseguito perfettamente nella versione di debug di un'applicazione MFC.  Se la chiamata a `calloc( )` ha esito negativo, viene visualizzato un messaggio di diagnostica che indica il file e il numero di riga.  Tuttavia, nella build finale di un'applicazione MFC:  
  
-   la chiamata di `calloc( )` non si verifica mai, lasciando `buf` privo di inizializzazione, oppure  
  
-   `strcpy_s( )` copia "`Hello, World`" in una porzione di memoria casuale, con il rischio di un arresto anomalo dell'applicazione o di un blocco del sistema o ancora  
  
-   `free()` tenta di liberare memoria mai allocata.  
  
 Per utilizzare ASSERT correttamente, il codice di esempio deve essere modificato come segue:  
  
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
  
 In alternativa è possibile ricorrere a VERIFY:  
  
```  
enum {  
    sizeOfBuffer = 20  
};  
char *buf;  
VERIFY(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));  
strcpy_s( buf, sizeOfBuffer, "Hello, World" );  
free( buf );  
```  
  
## Vedere anche  
 [Correzione dei problemi della build di rilascio](../../build/reference/fixing-release-build-problems.md)