---
title: Uso dei tipi di dati di TCHAR.H con _MBCS | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: _mbcs
dev_langs: C++
helpviewer_keywords:
- TCHAR.H data types
- MBCS data type
- _MBCS data type
ms.assetid: 48f471e7-9d2b-4a39-b841-16a0e15c0a18
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3c015c8ff7481f0d5ba25eba023b21f4877deaa4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-tcharh-data-types-with-mbcs"></a>Using TCHAR.H Data Types with _MBCS
**Sezione specifica Microsoft**  
  
 Come indicato nella tabella dei mapping di routine di testo generico (vedere [Mapping testo generico](../c-runtime-library/generic-text-mappings.md)), quando la costante manifesto `_MBCS` è definita, una routine di testo generico specifica esegue il mapping a uno dei tipi di routine seguenti:  
  
-   Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte. In questo caso, il tipo previsto per gli argomenti della stringa è `char*`. Ad esempio, `_tprintf` viene mappata a `printf` e gli argomenti di stringa passati a `printf` sono di tipo `char*`. Se per i tipi stringa si usa il tipo di dati di testo generico `_TCHAR`, i tipi di parametro formali ed effettivi di `printf` corrisponderanno, poiché `_TCHAR*` è mappato a `char*`.  
  
-   Una routine specifica di MBCS. In questo caso, il tipo previsto per gli argomenti della stringa è `unsigned char*`. Ad esempio, `_tcsrev` viene mappato a `_mbsrev`, che accetta e restituisce una stringa di tipo `unsigned char*`. Anche in questo caso, se per i tipi di stringa si usa il tipo di dati a testo generico `_TCHAR`, è possibile che si verifichi un conflitto di tipi, poiché `_TCHAR` è mappato al tipo `char`.  
  
 Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C++:  
  
-   Usare il comportamento predefinito TCHAR.H fornisce prototipi di routine a testo generico per le routine nelle librerie run-time, come illustrato nell'esempio seguente.  
  
    ```  
    char *_tcsrev(char *);  
    ```  
  
     Nel caso predefinito, il prototipo per `_tcsrev` è mappato a `_mbsrev` tramite un thunk in LIBC.LIB. In questo modo, i tipi dei parametri di `_mbsrev` in ingresso e il valore restituito in uscita vengono modificati da `_TCHAR *` (ad esempio `char *`) a `unsigned char *`. Questo metodo assicura la corrispondenza dei tipi quando si usa `_TCHAR`, ma è relativamente lento a causa del sovraccarico di chiamate di funzione.  
  
-   Usare l'incorporamento della funzione, incorporando nel codice l'istruzione del preprocessore seguente.  
  
    ```  
    #define _USE_INLINING  
    ```  
  
     Questo metodo fa in modo che il thunk della funzione inline, fornito in TCHAR.H, esegua il mapping della routine a testo generico direttamente alla routine MBCS appropriata, come illustrato nel segmento di codice tratto da TCHAR.H riportato di seguito.  
  
    ```  
    __inline char *_tcsrev(char *_s1)  
    {return (char *)_mbsrev((unsigned char *)_s1);}  
    ```  
  
     Se è possibile usarlo, l'incorporamento rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.  
  
-   Usare il mapping diretto, incorporando nel codice l'istruzione del preprocessore seguente.  
  
    ```  
    #define _MB_MAP_DIRECT  
    ```  
  
     Se non si vuole usare il funzionamento predefinito o se non è possibile usare l'incorporamento, questo approccio è una rapida alternativa. In questo modo, la routine a testo generico viene mappata da una macro direttamente alla versione MBCS della routine, come illustrato nel seguente esempio tratto da TCHAR.H.  
  
    ```  
    #define _tcschr _mbschr  
    ```  
  
 Se si adotta questo approccio, è necessario prestare molta attenzione per assicurare l'uso di tipi di dati appropriati per gli argomenti stringa e per i valori stringa restituiti. Per garantire la corrispondenza corretta dei tipi, è possibile usare il cast dei tipi oppure il tipo di dati a testo generico `_TXCHAR`. `_TXCHAR`viene mappato al tipo `char` nel codice SBCS, ma viene mappato al tipo `unsigned char` nel codice MBCS. Per altre informazioni sulle macro a testo generico, vedere [Mapping testo generico](../c-runtime-library/generic-text-mappings.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)