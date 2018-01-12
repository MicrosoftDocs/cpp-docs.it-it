---
title: mbrtowc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: mbrtowc
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords: mbrtowc
dev_langs: C++
helpviewer_keywords: mbrtowc function
ms.assetid: a1e87fcc-6de0-4ca1-bf26-508d28490286
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 255416b3430b75972faee018a227cc73d4f1bac6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mbrtowc"></a>mbrtowc
Converte un carattere multibyte delle impostazioni locali correnti nel carattere wide equivalente, con la possibilità di ricominciare nel mezzo di un carattere multibyte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t mbrtowc(  
   wchar_t *wchar,  
   const char *mbchar,  
   size_t count,  
   mbstate_t *mbstate  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `wchar`  
 Indirizzo di un carattere wide per ricevere la stringa di caratteri wide convertita (tipo `wchar_t`). Questo valore può essere un puntatore Null se non è richiesta la restituzione di caratteri wide.  
  
 `mbchar`  
 Indirizzo di una sequenza di byte (carattere multibyte).  
  
 `count`  
 Numero di byte da controllare.  
  
 `mbstate`  
 Puntatore all'oggetto stato di conversione. Se questo valore è un puntatore Null, la funzione userà un oggetto stato di conversione interno statico. Poiché l'oggetto interno `mbstate_t` non è thread-safe, è consigliabile passare sempre un argomento `mbstate` scelto dall'utente.  
  
## <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
 0  
 I successivi `count` byte o un numero inferiore completano il carattere multibyte che rappresenta il carattere wide Null archiviato in `wchar`, se `wchar` non è un puntatore Null.  
  
 Da 1 a `count` incluso  
 I successivi `count` byte o un numero inferiore completano un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte. Il carattere wide equivalente è archiviato in `wchar`, se `wchar` non è un puntatore Null.  
  
 (size_t)(-1)  
 Si è verificato un errore di codifica. I successivi `count` byte o un numero inferiore non contribuiscono a un carattere multibyte valido e completo. In tal caso, `errno` viene impostato su EILSEQ e non viene specificato lo stato di spostamento conversione in `mbstate`.  
  
 (size_t)(-2)  
 I successivi `count` o un numero inferiore contribuiscono a un carattere multibyte incompleto ma potenzialmente valido e tutti i `count` byte sono stati elaborati. Nessun valore viene archiviato in `wchar`, ma `mbstate` viene aggiornato per riavviare la funzione.  
  
## <a name="remarks"></a>Note  
 Se `mbchar` è un puntatore Null, la funzione è equivalente alla chiamata seguente:  
  
 `mbrtowc(NULL, "", 1, &mbstate)`  
  
 In tal caso, il valore degli argomenti `wchar` e `count` viene ignorato.  
  
 Se `mbchar` non è un puntatore Null, la funzione esamina il numero di byte indicato dal parametro `count` contenuto in `mbchar` per determinare il numero di byte necessario per completare il carattere multibyte successivo. Se il carattere successivo è valido, il carattere multibyte corrispondente viene archiviato in `wchar` se non è un puntatore Null. Se il carattere è il carattere wide Null corrispondente, lo stato risultante di `mbstate` è lo stato di conversione iniziale.  
  
 La funzione `mbrtowc` differisce da [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare `wcsrlen` anziché `wcslen` se viene usata una chiamata successiva a `wcsrtombs` anziché `wcstombs`.  
  
## <a name="example"></a>Esempio  
 Converte un carattere multibyte nel relativo carattere wide equivalente.  
  
```  
// crt_mbrtowc.cpp  
  
#include <stdio.h>  
#include <mbctype.h>  
#include <string.h>  
#include <locale.h>  
#include <wchar.h>  
  
#define BUF_SIZE 100  
  
int Sample(char* szIn, wchar_t* wcOut, int nMax)  
{  
    mbstate_t   state = {0}; // Initial state  
    size_t      nConvResult,   
                nmbLen = 0,  
                nwcLen = 0;  
    wchar_t*    wcCur = wcOut;  
    wchar_t*    wcEnd = wcCur + nMax;  
    const char* mbCur = szIn;  
    const char* mbEnd = mbCur + strlen(mbCur) + 1;  
    char*       szLocal;  
  
    // Sets all locale to French_Canada.1252  
    szLocal = setlocale(LC_ALL, "French_Canada.1252");  
    if (!szLocal)  
    {  
        printf("The fuction setlocale(LC_ALL, \"French_Canada.1252\") failed!\n");  
        return 1;  
    }  
  
    printf("Locale set to: \"%s\"\n", szLocal);  
  
    // Sets the code page associated current locale's code page  
    // from a previous call to setlocale.  
    if (_setmbcp(_MB_CP_SBCS) == -1)  
    {  
        printf("The fuction _setmbcp(_MB_CP_SBCS) failed!");  
        return 1;  
    }  
  
    while ((mbCur < mbEnd) && (wcCur < wcEnd))  
    {  
        //  
        nConvResult = mbrtowc(wcCur, mbCur, 1, &state);  
        switch (nConvResult)  
        {  
            case 0:  
            {  // done  
                printf("Conversion succeeded!\nMultibyte String: ");  
                printf(szIn);  
                printf("\nWC String: ");  
                wprintf(wcOut);  
                printf("\n");  
                mbCur = mbEnd;  
                break;  
            }  
  
            case -1:  
            {  // encoding error  
                printf("The call to mbrtowc has detected an encoding error.\n");  
                mbCur = mbEnd;  
                break;  
            }  
  
            case -2:  
            {  // incomplete character  
                if   (!mbsinit(&state))  
                {  
                    printf("Currently in middle of mb conversion, state = %x\n", state);  
                    // state will contain data regarding lead byte of mb character  
                }  
  
                ++nmbLen;  
                ++mbCur;  
                break;  
            }  
  
            default:  
            {  
                if   (nConvResult > 2) // The multibyte should never be larger than 2  
                {  
                    printf("Error: The size of the converted multibyte is %d.\n", nConvResult);  
                }  
  
                ++nmbLen;  
                ++nwcLen;  
                ++wcCur;  
                ++mbCur;  
            break;  
            }  
        }  
    }  
  
   return 0;  
}  
  
int main(int argc, char* argv[])  
{  
    char    mbBuf[BUF_SIZE] = "AaBbCc\x9A\x8B\xE0\xEF\xF0xXyYzZ";  
    wchar_t wcBuf[BUF_SIZE] = {L''};  
  
    return Sample(mbBuf, wcBuf, BUF_SIZE);  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Locale set to: "French_Canada.1252"  
Conversion succeeded!  
Multibyte String: AaBbCcÜïα∩≡xXyYzZ  
WC String: AaBbCcÜïα∩≡xXyYzZ  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`mbrtowc`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)