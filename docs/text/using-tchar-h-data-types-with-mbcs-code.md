---
title: Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS
ms.date: 11/04/2016
f1_keywords:
- tchar.h
- TCHAR
helpviewer_keywords:
- mapping generic-text
- generic-text data types [C++]
- generic-text mappings [C++]
- MBCS [C++], generic-text mappings
- TCHAR.H data types, mapping
- mappings [C++], TCHAR.H
ms.assetid: 298583c5-22c3-40f6-920e-9ec96d42abd8
ms.openlocfilehash: dcb194c72ca2a64317cddda8a1559e78edc0978f
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53626669"
---
# <a name="using-tcharh-data-types-with-mbcs-code"></a>Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS

Quando la costante manifesto `_MBCS` è definito, una routine di testo generico specifica esegue il mapping a uno dei tipi di routine seguenti:

- Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte. In questo caso, il tipo previsto per gli argomenti della stringa è `char*`. Ad esempio, `_tprintf` viene mappata a `printf` e gli argomenti di stringa passati a `printf` sono di tipo `char*`. Se per i tipi stringa si usa il tipo di dati di testo generico `_TCHAR`, i tipi di parametro formali ed effettivi di `printf` corrisponderanno, poiché `_TCHAR*` è mappato a `char*`.

- Una routine specifica di MBCS. In questo caso, il tipo previsto per gli argomenti della stringa è `unsigned char*`. Ad esempio, `_tcsrev` viene mappato a `_mbsrev`, che accetta e restituisce una stringa di tipo `unsigned char*`. Se si usa la `_TCHAR` tipo di dati di testo generico per i tipi di stringa, vi è un potenziale conflitto di tipo perché `_TCHAR` mappato al tipo `char`.

Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C++:

- Usare il comportamento predefinito Tchar. h fornisce prototipi di routine a testo generico per le routine nelle librerie di runtime, come nell'esempio seguente.

    ```cpp
    char * _tcsrev(char *);
    ```

   Nel caso predefinito, il prototipo `_tcsrev` esegue il mapping a `_mbsrev` tramite un thunk in LIBC. lib. In questo modo, i tipi dei `_mbsrev` parametri in entrata e in uscita restituito da `_TCHAR*` (vale a dire `char *`) a `unsigned char *`. Questo metodo assicura corrispondenza dei tipi quando si usa `_TCHAR`, ma è relativamente lento a causa del sovraccarico di chiamate di funzione.

- Usare l'incorporamento della funzione, incorporando nel codice l'istruzione del preprocessore seguente.

    ```cpp
    #define _USE_INLINING
    ```

   Questo metodo fa in modo che un thunk della funzione inline, fornito in Tchar. h, per eseguire il mapping di routine a testo generico direttamente alla routine MBCS appropriata. Nel seguente estratto di codice dal TCHAR. h fornisce un esempio di come questa operazione viene eseguita.

    ```cpp
    __inline char *_tcsrev(char *_s1)
    {return (char *)_mbsrev((unsigned char *)_s1);}
    ```

   Se è possibile usarlo, l'incorporamento rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.

- Usare il mapping diretto, incorporando l'istruzione del preprocessore seguente nel codice.

    ```cpp
    #define _MB_MAP_DIRECT
    ```

   Se non si vuole usare il funzionamento predefinito o se non è possibile usare l'incorporamento, questo approccio è una rapida alternativa. Lo fa sì che la routine di testo generico eseguire il mapping da una macro direttamente alla versione MBCS della routine, come illustrato di seguito da TCHAR. h.

    ```cpp
    #define _tcschr _mbschr
    ```

   Quando si adotta questo approccio, è necessario prestare attenzione all'uso di tipi di dati appropriati per gli argomenti stringa e valori restituiti di stringa. Per garantire la corrispondenza corretta dei tipi, è possibile usare il cast dei tipi oppure il tipo di dati a testo generico `_TXCHAR`. `_TXCHAR` viene mappato al tipo **char** nel codice SBCS, ma viene mappato al tipo **unsigned char** nel codice MBCS. Per altre informazioni sulle macro a testo generico, vedere [mapping testo generico](../c-runtime-library/generic-text-mappings.md) nel *Run-Time Library Reference*.

## <a name="see-also"></a>Vedere anche

[Mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md)
