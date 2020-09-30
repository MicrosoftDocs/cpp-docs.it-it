---
title: Using TCHAR.H Data Types with _MBCS
description: Panoramica della modalità di mapping delle routine di testo del runtime di Microsoft C quando si usa TCHAR. Tipi di dati H con la costante multibyte _MBCS.
ms.topic: conceptual
ms.date: 11/04/2016
helpviewer_keywords:
- TCHAR.H data types
- MBCS data type
- _MBCS data type
ms.assetid: 48f471e7-9d2b-4a39-b841-16a0e15c0a18
ms.openlocfilehash: 001f745c03e4e0c0090e40c00c5394397028659f
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589952"
---
# <a name="using-tcharh-data-types-with-_mbcs"></a>Using TCHAR.H Data Types with _MBCS

**Specifico di Microsoft**

Come indicato nella tabella dei mapping di routine di testo generico (vedere [Mapping testo generico](../c-runtime-library/generic-text-mappings.md)), quando la costante manifesto **_MBCS** è definita, una routine di testo generico specifica esegue il mapping a uno dei tipi di routine seguenti:

- Una routine SBCS che gestisce in modo corretto byte, caratteri e stringhe multibyte. In questo caso, il tipo previsto per gli argomenti della stringa è **char&#42;**. Ad esempio, **_tprintf** viene mappata a **printf** e gli argomenti di stringa passati a **printf** sono di tipo **char&#42;**. Se per i tipi stringa si usa il tipo di dati di testo generico **_TCHAR**, i tipi di parametro formali ed effettivi di **printf** corrisponderanno, poiché **_TCHAR&#42;** è mappato a **char&#42;**.

- Una routine specifica di MBCS. In questo caso, il tipo previsto per gli argomenti della stringa è __unsigned char&#42;__. Ad esempio, **_tcsrev** viene mappato a **_mbsrev**, che accetta e restituisce una stringa di tipo __unsigned char&#42;__. Anche in questo caso, se si usa il **_TCHAR** tipo di dati di testo generico per i tipi di stringa, è possibile che si verifichi un conflitto di tipo perché **_TCHAR** esegue il mapping al tipo **`char`** .

Di seguito sono riportate tre soluzioni che consentono di evitare questo conflitto di tipi e la conseguente visualizzazione dei messaggi di avviso del compilatore C o degli errori del compilatore C++:

- Usare il comportamento predefinito TCHAR.H fornisce prototipi di routine a testo generico per le routine nelle librerie run-time, come illustrato nell'esempio seguente.

   ```C
   char *_tcsrev(char *);
   ```

   Nel caso predefinito, il prototipo per **_tcsrev** è mappato a **_mbsrev** tramite un thunk in LIBC.LIB. In questo modo, i tipi dei parametri di **_mbsrev** in ingresso e il valore restituito in uscita vengono modificati da **_TCHAR &#42;** ( ad esempio **char &#42;**) a **unsigned char &#42;**. Questo metodo assicura la corrispondenza dei tipi quando si usa **_TCHAR**, ma è relativamente lento a causa del sovraccarico della chiamata di funzione.

- Usare l'incorporamento della funzione, incorporando nel codice l'istruzione del preprocessore seguente.

   ```C
   #define _USE_INLINING
   ```

   Questo metodo fa in modo che il thunk della funzione inline, fornito in TCHAR.H, esegua il mapping della routine a testo generico direttamente alla routine MBCS appropriata, come illustrato nel segmento di codice tratto da TCHAR.H riportato di seguito.

   ```C
   __inline char *_tcsrev(char *_s1)
   {return (char *)_mbsrev((unsigned char *)_s1);}
   ```

   Se è possibile usarlo, l'incorporamento rappresenta la soluzione migliore, poiché garantisce la corrispondenza dei tipi e non presenta costi aggiuntivi in termini di tempo.

- Usare il mapping diretto, incorporando nel codice l'istruzione del preprocessore seguente.

   ```C
   #define _MB_MAP_DIRECT
   ```

   Questo approccio fornisce un'alternativa rapida se non si vuole usare il comportamento predefinito o non è possibile usare l'incorporamento. Una macro esegue il mapping della routine di testo generico alla versione MBCS della routine, come nell'esempio seguente da TCHAR. H.

   ```C
   #define _tcschr _mbschr
   ```

Quando si adotta questo approccio, assicurarsi che vengano utilizzati tipi di dati appropriati per gli argomenti stringa e i valori restituiti di stringa. Per garantire la corrispondenza corretta dei tipi, è possibile usare il cast dei tipi oppure il tipo di dati a testo generico **_TXCHAR**. **_TXCHAR** esegue il mapping al tipo **`char`** nel codice SBCS, ma esegue il mapping al tipo **`unsigned char`** nel codice MBCS. Per altre informazioni sulle macro a testo generico, vedere [Mapping testo generico](../c-runtime-library/generic-text-mappings.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)\
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
