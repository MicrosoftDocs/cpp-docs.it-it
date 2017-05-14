---
title: fwrite | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- fwrite
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fwrite
dev_langs:
- C++
helpviewer_keywords:
- streams, writing data to
- fwrite function
ms.assetid: 7afacf3a-72d7-4a50-ba2e-bea1ab9f4124
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 5f99375d93ab5ae54a34d72f23cd86672a79c318
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="fwrite"></a>fwrite
Scrive i dati in un flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t fwrite(  
   const void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Puntatore ai dati da scrivere.  
  
 `size`  
 Dimensioni elemento, in byte.  
  
 `count`  
 Numero massimo di elementi da scrivere.  
  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 `fwrite` restituisce il numero degli elementi completi attualmente scritti, che può risultare inferiore a `count` se si verifica un errore. Inoltre, se si verifica un errore, non è possibile determinare l'indicatore della posizione del file. Se `stream` o `buffer` è un puntatore Null o se viene specificato un numero dispari di byte da scrivere in modalità Unicode, la funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce 0.  
  
## <a name="remarks"></a>Note  
 La funzione `fwrite` scrive fino a `count` elementi, ognuno con una lunghezza pari a `size`, da `buffer` in `stream` di output. Il puntatore del file associato a `stream` (se presente) viene incrementato del numero di byte effettivamente scritti. Se `stream` viene aperto in modalità testo, ogni carattere di avanzamento riga viene sostituito con un ritorno a capo - avanzamento riga coppia. La sostituzione non ha effetto sul valore restituito.  
  
 Quando `stream` viene aperto nella modalità di conversione Unicode, ad esempio se `stream` viene aperto tramite una chiamata a `fopen` e l'uso di un parametro modalità che include `ccs=UNICODE`, `ccs=UTF-16LE` o `ccs=UTF-8`, o se la modalità viene sostituita da una modalità di conversione Unicode tramite `_setmode` e un parametro modalità che include `_O_WTEXT`, `_O_U16TEXT` o `_O_U8TEXT`, `buffer` viene interpretato come un puntatore a una matrice di `wchar_t` che contiene dati UTF-16. Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.  
  
 Poiché questa funzione blocca il thread di chiamata, può essere considerata thread-safe. Per una versione che non blocca il thread, vedere `_fwrite_nolock`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fwrite`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo a [fread](../../c-runtime-library/reference/fread.md).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)   
 [fread](../../c-runtime-library/reference/fread.md)   
 [_fwrite_nolock](../../c-runtime-library/reference/fwrite-nolock.md)   
 [_write](../../c-runtime-library/reference/write.md)
