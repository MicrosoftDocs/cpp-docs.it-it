---
title: Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS
ms.date: 11/04/2016
helpviewer_keywords:
- mapping generic-text
- generic-text data types [C++]
- generic-text mappings [C++]
- MBCS [C++], generic-text mappings
- TCHAR.H data types, mapping
- mappings [C++], TCHAR.H
ms.assetid: 298583c5-22c3-40f6-920e-9ec96d42abd8
ms.openlocfilehash: dd43c29d77c3351e8f597b474c4756ad3d45ef2b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215361"
---
# <a name="using-tcharh-data-types-with-_mbcs-code"></a>Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS

Quando viene definita la costante del manifesto `_MBCS` , una routine di testo generico specifica esegue il mapping a uno dei tipi di routine seguenti:

- Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte. In questo caso, è previsto che gli argomenti di stringa siano di tipo **`char*`** . Ad esempio, `_tprintf` esegue il mapping a `printf` ; gli argomenti stringa di `printf` sono di tipo **`char*`** . Se si usa il `_TCHAR` tipo di dati di testo generico per i tipi di stringa, i tipi di parametro formali ed effettivi per `printf` corrisponderanno perché `_TCHAR*` esegue il mapping a **`char*`** .

- Una routine specifica di MBCS. In questo caso, il tipo previsto per gli argomenti della stringa è `unsigned char*`. Ad esempio, `_tcsrev` viene mappato a `_mbsrev`, che accetta e restituisce una stringa di tipo `unsigned char*`. Se si usa il `_TCHAR` tipo di dati di testo generico per i tipi di stringa, è possibile che si verifichi un conflitto di tipi perché `_TCHAR` esegue il mapping al tipo **`char`** .

Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C++:

- Usare il comportamento predefinito TCHAR. h fornisce prototipi di routine di testo generico per le routine nelle librerie di runtime, come nell'esempio seguente.

    ```cpp
    char * _tcsrev(char *);
    ```

   Nel caso predefinito, il prototipo per viene `_tcsrev` mappato a `_mbsrev` tramite un thunk in libc. lib. In questo modo vengono modificati i tipi di `_mbsrev` parametri in ingresso e il valore restituito in uscita da `_TCHAR*` (ovvero `char *` ) a `unsigned char *` . Questo metodo assicura la corrispondenza dei tipi quando si usa `_TCHAR` , ma è relativamente lento a causa del sovraccarico della chiamata di funzione.

- Usare l'incorporamento della funzione, incorporando nel codice l'istruzione del preprocessore seguente.

    ```cpp
    #define _USE_INLINING
    ```

   Questo metodo fa in modo che un thunk della funzione inline, fornito in TCHAR. h, per eseguire il mapping della routine di testo generico direttamente alla routine MBCS appropriata. Il seguente estratto di codice da TCHAR. h fornisce un esempio di come questa operazione viene eseguita.

    ```cpp
    __inline char *_tcsrev(char *_s1)
    {return (char *)_mbsrev((unsigned char *)_s1);}
    ```

   Se è possibile usarlo, l'incorporamento rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.

- Usare il mapping diretto incorporando l'istruzione del preprocessore seguente nel codice.

    ```cpp
    #define _MB_MAP_DIRECT
    ```

   Se non si vuole usare il funzionamento predefinito o se non è possibile usare l'incorporamento, questo approccio è una rapida alternativa. Causa la mappatura della routine di testo generico tramite una macro direttamente alla versione MBCS della routine, come nell'esempio seguente da TCHAR. h.

    ```cpp
    #define _tcschr _mbschr
    ```

   Quando si esegue questo approccio, è necessario prestare attenzione per garantire l'utilizzo dei tipi di dati appropriati per gli argomenti stringa e i valori restituiti di stringa. Per garantire la corrispondenza corretta dei tipi, è possibile usare il cast dei tipi oppure il tipo di dati a testo generico `_TXCHAR`. `_TXCHAR`esegue il mapping al tipo **`char`** nel codice SBCS, ma esegue il mapping al tipo **`unsigned char`** nel codice MBCS. Per ulteriori informazioni sulle macro di testo generico, vedere [mapping di testo generico](../c-runtime-library/generic-text-mappings.md) in riferimenti alla *libreria di runtime*.

## <a name="see-also"></a>Vedere anche

[Mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md)
