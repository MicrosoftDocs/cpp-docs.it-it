---
title: fgetpos | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- fgetpos
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
- fgetpos
dev_langs:
- C++
helpviewer_keywords:
- fgetpos function
- streams, file position indicator
ms.assetid: bfa05c38-1135-418c-bda1-d41be51acb62
caps.latest.revision: 14
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: c53e5742a518934ad0afcfaa06ad4e5905c484e3
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="fgetpos"></a>fgetpos
Ottiene un indicatore di posizione file del flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fgetpos(   
   FILE *stream,  
   fpos_t *pos   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Flusso di destinazione.  
  
 `pos`  
 Archiviazione dell'indicatore di posizione.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'esito è positivo, `fgetpos` restituisce 0. In caso di errore, restituisce un valore diverso da zero e imposta `errno` a una delle seguenti costanti di manifesto (definite in STDIO.H): `EBADF`, vale a dire che il flusso specificato non è un puntatore di file valido o non è accessibile, o `EINVAL`, vale a dire che il valore `stream` o il valore di `pos` non è valido, come se entrambi i puntatori fossero null. Se `stream` o `pos` è un puntatore `NULL`, la funzione richiama il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## <a name="remarks"></a>Note  
 La funzione `fgetpos` ottiene il valore corrente dell'indicatore della posizione file dell'argomento `stream` e lo archivia nell'oggetto a cui punta `pos`. La funzione `fsetpos` può successivamente usare le informazioni archiviate in `pos` per reimpostare il puntatore dell'argomento `stream` sulla propria posizione al momento in cui è stata chiamata `fgetpos`. Il valore `pos` è archiviato in un formato interno e può essere usato solo da `fgetpos` e `fsetpos`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fgetpos`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fgetpos.c  
// This program uses fgetpos and fsetpos to  
// return to a location in a file.  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE   *stream;  
   fpos_t pos;  
   char   buffer[20];  
  
   if( fopen_s( &stream, "crt_fgetpos.txt", "rb" ) ) {  
      perror( "Trouble opening file" );  
      return -1;  
   }  
  
   // Read some data and then save the position.   
   fread( buffer, sizeof( char ), 8, stream );  
   if( fgetpos( stream, &pos ) != 0 ) {  
      perror( "fgetpos error" );  
      return -1;  
   }  
  
   fread( buffer, sizeof( char ), 13, stream );  
   printf( "after fgetpos: %.13s\n", buffer );  
  
   // Restore to old position and read data   
   if( fsetpos( stream, &pos ) != 0 ) {  
      perror( "fsetpos error" );  
      return -1;  
   }  
  
   fread( buffer, sizeof( char ), 13, stream );  
   printf( "after fsetpos: %.13s\n", buffer );  
   fclose( stream );  
}  
```  
  
## <a name="input-crtfgetpostxt"></a>Input: crt_fgetpos.txt  
  
```  
fgetpos gets a stream's file-position indicator.  
```  
  
### <a name="output-crtfgetpostxt"></a>Output crt_fgetpos.txt  
  
```  
after fgetpos: gets a stream  
after fsetpos: gets a stream  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fsetpos](../../c-runtime-library/reference/fsetpos.md)
