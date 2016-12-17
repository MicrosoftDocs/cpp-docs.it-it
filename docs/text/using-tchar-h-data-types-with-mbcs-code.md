---
title: "Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS | Microsoft Docs"
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
  - ""tchar.h""
  - "TCHAR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di dati per testo generico [C++]"
  - "mapping testo generico [C++]"
  - "mapping testo generico"
  - "mapping [C++], TCHAR.H"
  - "MBCS [C++], mapping testo generico"
  - "tipi di dati TCHAR.H, mapping"
ms.assetid: 298583c5-22c3-40f6-920e-9ec96d42abd8
caps.latest.revision: 7
caps.handback.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando la costante **\_MBCS** del manifesto è definita, una routine a testo generico viene mappata a uno dei tipi di routine indicati di seguito.  
  
-   Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte.  In questo caso, si prevede che gli argomenti della stringa siano di tipo **char\***.  `_tprintf`, ad esempio, corrisponde a `printf` e gli argomenti della stringa relativi a `printf` sono di tipo **char\***.  Se si utilizza per i tipi di stringa il tipo di dati a testo generico **\_TCHAR**, i tipi di parametro formale ed effettivo di `printf` corrisponderanno, poiché **\_TCHAR**\* corrisponde a **char\***.  
  
-   Una routine specifica di MBCS.  In questo caso, si prevede che gli argomenti della stringa siano di tipo `unsigned` **char\***.  `_tcsrev`, ad esempio, corrisponde a `_mbsrev`, che prevede e restituisce una stringa di tipo `unsigned` **char\***.  Se si utilizza il tipo di dati a testo generico **\_TCHAR** per i tipi di stringa, è possibile che si verifichi un conflitto di tipi, poiché **\_TCHAR** corrisponde al tipo `char`.  
  
 Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C\+\+.  
  
-   Utilizzare il funzionamento predefinito.  In Tchar.h vengono forniti prototipi di routine a testo generico per le routine nelle librerie di runtime, come illustrato nell'esempio seguente:  
  
    ```  
    char * _tcsrev(char *);  
    ```  
  
     Nel caso predefinito, il prototipo per `_tcsrev` è mappato a `_mbsrev` tramite un thunk in Libc.lib.  In questo modo, i tipi dei parametri in ingresso `_mbsrev` e del valore restituito in uscita vengono modificati da **\_TCHAR \*** \(ovvero `char` **\***\) a `unsigned` `char` **\***.  Questo metodo assicura la corrispondenza dei tipi quando si utilizza **\_TCHAR**, ma è relativamente lento per l'overhead delle chiamate delle funzioni.  
  
-   Utilizzare l'inlining della funzione, incorporando nel codice la seguente istruzione del preprocessore:  
  
    ```  
    #define _USE_INLINING  
    ```  
  
     Questo metodo fa in modo che il thunk della funzione inline, fornito in Tchar.h, esegua il mapping della routine a testo generico direttamente alla routine MBCS appropriata,  come illustrato nel segmento di codice tratto da Tchar.h riportato di seguito.  
  
    ```  
    __inline char *_tcsrev(char *_s1)  
    {return (char *)_mbsrev((unsigned char *)_s1);}  
    ```  
  
     Se è possibile utilizzare l'inlining, questa rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.  
  
-   Utilizzare il mapping diretto incorporando nel codice la seguente istruzione del preprocessore:  
  
    ```  
    #define _MB_MAP_DIRECT  
    ```  
  
     Se non si desidera utilizzare il funzionamento predefinito o se non è possibile utilizzare l'inlining, questo approccio è una rapida alternativa.  In questo modo, la routine a testo generico viene mappata da una macro direttamente alla versione MBCS della routine, come illustrato nel seguente esempio tratto da Tchar.h:  
  
    ```  
    #define _tcschr _mbschr  
    ```  
  
     Quando si utilizza questo approccio, è necessario prestare molta attenzione per assicurare l'utilizzo di tipi di dati appropriati per gli argomenti della stringa e per i valori restituiti della stringa.  È possibile utilizzare il cast dei tipi per garantire una corretta corrispondenza dei tipi oppure il tipo di dati a testo generico **\_TXCHAR**.  **\_TXCHAR** corrisponde al tipo `char` nel codice SBCS, ma corrisponde al tipo `unsigned` `char` nel codice MBCS.  Per ulteriori informazioni sulle macro per il testo generico, vedere [Mappature di testo generico](../c-runtime-library/generic-text-mappings.md) in *Riferimenti alla libreria di runtime*.  
  
## Vedere anche  
 [Mappature di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md)