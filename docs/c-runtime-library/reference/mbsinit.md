---
description: 'Altre informazioni su: mbsinit'
title: mbsinit
ms.date: 11/04/2016
api_name:
- mbsinit
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbsinit
helpviewer_keywords:
- mbsinit function
ms.assetid: 4618555b-baaa-4d04-93fa-36abae411034
ms.openlocfilehash: 48edb74e47549cb9e1a97757d4922bc0bd8b6c24
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178602"
---
# <a name="mbsinit"></a>mbsinit

Tiene traccia dello stato di una conversione di caratteri multibyte.

## <a name="syntax"></a>Sintassi

```C
int mbsinit(
   const mbstate_t* ps
);
```

### <a name="parameters"></a>Parametri

*ps*<br/>
Un puntatore a una variabile [mbstate_t](../../c-runtime-library/standard-types.md).

## <a name="return-value"></a>Valore restituito

Diverso da zero se *PS* è **null** o se non si trova nel mezzo di una conversione.

## <a name="remarks"></a>Commenti

Quando si utilizza una delle funzioni ANSI che accetta un puntatore **mbstate_t** , il passaggio dell'indirizzo della **mbstate_t** restituirà informazioni sull'eventuale conversione dell'ultimo byte nel buffer.

La tabella codici appropriata deve essere installata per supportare i caratteri multibyte.

## <a name="example"></a>Esempio

```cpp
// crt_mbsinit.cpp
#include <stdio.h>
#include <mbctype.h>
#include <string.h>
#include <locale.h>
#include <cwchar>
#include <xlocinfo.h>

#define   BUF_SIZE   0x40

wchar_t      g_wcBuf[BUF_SIZE] = L"This a wc buffer that will be over written...";
char      g_mbBuf[BUF_SIZE] = "AaBbCc\x9A\x8B\xE0\xEF\xF0xXyYzZ";
int      g_nInit = strlen(g_mbBuf);

int MbsinitSample(char* szIn, wchar_t* wcOut, int nMax)
{
   mbstate_t   state = {0};
   size_t      nConvResult, nmbLen = 0, nwcLen = 0;
   wchar_t*   wcCur = wcOut;
   wchar_t*   wcEnd = wcCur + nMax;
   const char*   mbCur = szIn;
   const char*   mbEnd = mbCur + strlen(mbCur) + 1;
   char*      szLocal = setlocale(LC_ALL, "japanese");

   printf("Locale set to: \"%s\"\n", szLocal);

   if   (_setmbcp(_MB_CP_LOCALE) != -1)
   {
      while   ((mbCur < mbEnd) && (wcCur < wcEnd))
      {
         nConvResult = mbrtowc(wcCur, mbCur, 1, &state);

         switch   (nConvResult)
         {
            case 0:
            {   // done
               printf("Conversion succeeded!\nMB String: ");
               printf(szIn);
               printf("\nWC String: ");
               wprintf(wcOut);
               printf("\n");
               mbCur = mbEnd;
               break;
            }

            case -1:
            {   // encoding error
               printf("ERROR: The call to mbrtowc has detected an encoding error.\n");
               mbCur = mbEnd;
               break;
            }

            case -2:
            {   // incomplete character
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
               if   (nConvResult > 2)   // Microsoft mb should never be larger than 2
                  printf("ERROR: nConvResult = %d\n", nConvResult);

               ++nmbLen;
               ++nwcLen;
               ++wcCur;
               ++mbCur;
               break;
            }
         }
      }
   }
   else
      printf("ERROR: _setmbcp(932) failed!");

   return 0;
}

int main(int argc, char* argv[])
{
   return MbsinitSample(g_mbBuf, g_wcBuf, BUF_SIZE);
}
```

### <a name="sample-output"></a>Output di esempio

```Output
Locale set to: "Japanese_Japan.932"
Currently in middle of mb conversion, state = 9a
Currently in middle of mb conversion, state = e0
Currently in middle of mb conversion, state = f0
Conversion succeeded!
MB String: AaBbCcxXyYzZ
WC String: AaBbCcxXyYzZ
```

## <a name="see-also"></a>Vedi anche

[Classificazione byte](../../c-runtime-library/byte-classification.md)<br/>
