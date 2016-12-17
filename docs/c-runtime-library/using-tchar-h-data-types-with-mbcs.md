---
title: "Using TCHAR.H Data Types with _MBCS | Microsoft Docs"
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
  - "_mbcs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_MBCS (tipo di dati)"
  - "MBCS (tipo di dati)"
  - "tipi di dati TCHAR.H"
ms.assetid: 48f471e7-9d2b-4a39-b841-16a0e15c0a18
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Using TCHAR.H Data Types with _MBCS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Mentre la tabella di mapping di routine a testo generico indica \(vedere [Mappature di testo generico](../c-runtime-library/generic-text-mappings.md)\), quando la costante del manifesto `_MBCS` è definita, un dato testo generico di routine si mappa ad uno dei seguenti tipi di routine:  
  
-   Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte.  In questo caso, si prevede che gli argomenti della stringa siano di tipo `char*`.  Per esempio, `_tprintf` corrisponde a `printf` e gli argomenti della stringa relativi a `printf` sono di tipo `char*`.  Se si utilizza per i tipi di stringa il tipo di dati a testo generico `_TCHAR`, i tipi di parametro formale ed effettivo di `printf` corrisponderanno, poiché `_TCHAR*` corrispondono a `char*`.  
  
-   Una routine specifica di MBCS.  In questo caso, si prevede che gli argomenti della stringa siano di tipo `unsigned char*`.  Per esempio, `_tcsrev` corrisponde a `_mbsrev`, che prevede e restituisce una stringa di tipo `unsigned char*`.  Ancora, se si utilizza il tipo di dati a testo generico `_TCHAR` per i tipi di stringa, è possibile che si verifichi un conflitto di tipi, poiché `_TCHAR` corrisponde al tipo `char`.  
  
 Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C\+\+.  
  
-   Utilizzare il funzionamento predefinito.  TCHAR.H fornisce prototipi di routine a testo generico per le routine nelle librerie di runtime, come illustrato nell'esempio seguente:  
  
    ```  
    char *_tcsrev(char *);  
    ```  
  
     Nel caso predefinito, il prototipo per `_tcsrev` è mappato a `_mbsrev` tramite un thunk in LIBC.LIB.  In questo modo, i tipi dei parametri in ingresso `_mbsrev` e del valore restituito in uscita vengono modificati da `_TCHAR *` \(ovvero `char *`\) a `unsigned char *`.  Questo metodo assicura la corrispondenza dei tipi quando si utilizza `_TCHAR`, ma è relativamente lento a causa dell'overhead delle chiamate delle funzioni.  
  
-   Utilizzare l'inlining della funzione, incorporando nel codice la seguente istruzione del preprocessore:  
  
    ```  
    #define _USE_INLINING  
    ```  
  
     Questo metodo fa in modo che il thunk della funzione inline, fornito in TCHAR.H, esegua il mapping della routine a testo generico direttamente alla routine MBCS appropriata,  come illustrato nel segmento di codice tratto da TCHAR.H riportato di seguito.  
  
    ```  
    __inline char *_tcsrev(char *_s1)  
    {return (char *)_mbsrev((unsigned char *)_s1);}  
    ```  
  
     Se è possibile utilizzare l'inlining, questa rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.  
  
-   Utilizzare il "mapping diretto" incorporando nel codice la seguente istruzione del preprocessore:  
  
    ```  
    #define _MB_MAP_DIRECT  
    ```  
  
     Se non si desidera utilizzare il funzionamento predefinito o se non è possibile utilizzare l'inlining, questo approccio è una rapida alternativa.  In questo modo, la routine a testo generico viene mappata da una macro direttamente alla versione MBCS della routine, come illustrato nel seguente esempio tratto da TCHAR.H.  
  
    ```  
    #define _tcschr _mbschr  
    ```  
  
 Quando si utilizza questo approccio, è necessario prestare molta attenzione per assicurare l'utilizzo di tipi di dati appropriati per gli argomenti della stringa e per i valori restituiti della stringa.  È possibile utilizzare il cast dei tipi per garantire una corretta corrispondenza dei tipi oppure il tipo di dati a testo generico `_TXCHAR`.  `_TXCHAR` corrisponde al tipo `char` nel codice SBCS, ma corrisponde al tipo `unsigned char` nel codice MBCS.  Per ulteriori informazioni sulle macro di testo generico, vedere [Mappature di testo generico](../c-runtime-library/generic-text-mappings.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)