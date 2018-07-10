---
title: Usando TCHAR. I tipi di dati con codice MBCS H | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- tchar.h
- TCHAR
dev_langs:
- C++
helpviewer_keywords:
- mapping generic-text
- generic-text data types [C++]
- generic-text mappings [C++]
- MBCS [C++], generic-text mappings
- TCHAR.H data types, mapping
- mappings [C++], TCHAR.H
ms.assetid: 298583c5-22c3-40f6-920e-9ec96d42abd8
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e80ecd123e3fc47705563156e33f46ecd99a0321
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33858354"
---
# <a name="using-tcharh-data-types-with-mbcs-code"></a>Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS
Quando la costante manifesto **MBCS** è definito, una determinata routine di testo generico esegue il mapping a uno dei seguenti tipi di routine:  
  
-   Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte. In questo caso, gli argomenti di stringa devono essere di tipo **char\***. Ad esempio, `_tprintf` esegue il mapping a `printf`; gli argomenti stringa da `printf` sono di tipo **char\***. Se si utilizza il **TCHAR** il tipo di dati di testo generico per la stringa di tipi, i tipi dei parametri formali ed effettivi `printf` perché **TCHAR** \* esegue il mapping a **char \***.  
  
-   Una routine specifica di MBCS. In questo caso, gli argomenti di stringa devono essere di tipo `unsigned` **char\***. Ad esempio, `_tcsrev` esegue il mapping a `_mbsrev`, che prevede e restituisce una stringa di tipo `unsigned` **char\***. Se si utilizza il **TCHAR** tipo di dati di testo generico per i tipi di stringa, non esiste infatti un potenziale conflitto di tipo **TCHAR** corrisponde al tipo `char`.  
  
 Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C++:  
  
-   Usare il comportamento predefinito Tchar. h fornisce prototipi di routine di testo generico per le routine nelle librerie di runtime, come nell'esempio seguente.  
  
    ```  
    char * _tcsrev(char *);  
    ```  
  
     Nel caso predefinito, il prototipo per `_tcsrev` esegue il mapping a `_mbsrev` attraverso un thunk in LIBC. In questo modo, i tipi del `_mbsrev` parametri in entrata e in uscita restituito da **TCHAR \***  (vale a dire `char` **\***) per `unsigned` `char` **\***. Questo metodo garantisce tipo corrispondente quando si utilizza **TCHAR**, ma è relativamente lenta a causa del sovraccarico di chiamata di funzione.  
  
-   Usare l'incorporamento della funzione, incorporando nel codice l'istruzione del preprocessore seguente.  
  
    ```  
    #define _USE_INLINING  
    ```  
  
     Questo metodo determina un thunk di funzione inline, fornito in Tchar. h, per eseguire il mapping di routine di testo generico direttamente alla routine MBCS appropriata. Nel seguente estratto di codice dal TCHAR. h fornisce un esempio di questa procedura.  
  
    ```  
    __inline char *_tcsrev(char *_s1)  
    {return (char *)_mbsrev((unsigned char *)_s1);}  
    ```  
  
     Se è possibile usarlo, l'incorporamento rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.  
  
-   Utilizzare il mapping diretto incorporando l'istruzione seguente per il preprocessore nel codice.  
  
    ```  
    #define _MB_MAP_DIRECT  
    ```  
  
     Se non si vuole usare il funzionamento predefinito o se non è possibile usare l'incorporamento, questo approccio è una rapida alternativa. In questo modo la routine di testo generico eseguire il mapping da una macro direttamente alla versione MBCS di routine, come nell'esempio seguente da TCHAR. h.  
  
    ```  
    #define _tcschr _mbschr  
    ```  
  
     Quando si adotta questo approccio, è necessario fare attenzione a garantire l'utilizzo dei tipi di dati appropriato per gli argomenti di stringa e valori restituiti di stringa. Per garantire la corrispondenza corretta dei tipi, è possibile usare il cast dei tipi oppure il tipo di dati a testo generico **_TXCHAR**. **TXCHAR** corrisponde al tipo `char` nel codice SBCS ma corrisponde al tipo `unsigned` `char` nel codice MBCS. Per ulteriori informazioni sulle macro di testo generico, vedere [mapping testo generico](../c-runtime-library/generic-text-mappings.md) nel *riferimenti alla libreria di Run-Time*.  
  
## <a name="see-also"></a>Vedere anche  
 [Mappature di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md)