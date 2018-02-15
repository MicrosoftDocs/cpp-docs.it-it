---
title: fflush | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- fflush
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
- fflush
dev_langs:
- C++
helpviewer_keywords:
- streams, flushing
- flushing
- fflush function
ms.assetid: 8bbc753f-dc74-4e77-b563-74da2835e92b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 23d90b61862736fc97c18343fe82f8ccf3aa42b5
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fflush"></a>fflush
Scarica un flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fflush(   
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 `fflush` restituisce 0 se il buffer è stato scaricato correttamente. Il valore 0 viene restituito anche nel caso in cui il flusso specificato non ha nessun buffer o viene aperto in sola lettura. Un valore restituito di `EOF` indica un errore.  
  
> [!NOTE]
>  Se `fflush` restituisce `EOF`, i dati potrebbero essere andati persi a causa di un errore di scrittura. Quando si configura un gestore degli errori critici, è consigliabile disattivare il buffering con la funzione `setvbuf` o usare routine I/O di basso livello, ad esempio `_open`, `_close` e `_write` anziché le funzioni I/O del flusso.  
  
## <a name="remarks"></a>Note  
 La funzione `fflush` scarica il flusso `stream`. Se il flusso è stato aperto in modalità scrittura o in modalità aggiornamento e l'ultima operazione è stata un'operazione di scrittura, il contenuto del buffer di flusso viene scritto nel file sottostante o nel dispositivo e il buffer viene eliminato. Se il flusso è stato aperto in modalità di lettura o se il flusso non ha buffer, la chiamata a `fflush` non ha alcun effetto e qualsiasi buffer viene mantenuto. Una chiamata a `fflush` annulla l'effetto di qualsiasi chiamata precedente a `ungetc` per il flusso. Il flusso rimane aperto dopo la chiamata.  
  
 Se `stream` è `NULL`, il comportamento è lo stesso di una chiamata a `fflush` su ogni flusso aperto. Tutti i flussi aperti in modalità scrittura e in modalità aggiornamento in cui l'ultima operazione è stata un'operazione di scrittura vengono scaricati. La chiamata non ha effetto su altri flussi.  
  
 I buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è pieno, quando un flusso viene chiuso o quando un programma termina normalmente senza chiudere i flussi. La funzionalità di commit al disco della libreria di runtime consente di assicurare che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo. Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a COMMODE.OBJ. Nel file eseguibile risultante, le chiamate a `_flushall` scrivono il contenuto di tutti i buffer sul disco. Solo `_flushall` e `fflush` sono interessati da COMMODE.OBJ.  
  
 Per informazioni sul controllo della funzionalità di commit al disco, vedere [I/O del flusso](../../c-runtime-library/stream-i-o.md), [fopen](../../c-runtime-library/reference/fopen-wfopen.md) e [_fdopen](../../c-runtime-library/reference/fdopen-wfdopen.md).  
  
 Questa funzione blocca il thread che chiama e quindi è thread-safe. Per una versione che non blocca il thread, vedere `_fflush_nolock`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fflush`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fflush.c  
#include <stdio.h>  
#include <conio.h>  
  
int main( void )  
{  
   int integer;  
   char string[81];  
  
   // Read each word as a string.  
   printf( "Enter a sentence of four words with scanf: " );  
   for( integer = 0; integer < 4; integer++ )  
   {  
      scanf_s( "%s", string, sizeof(string) );        
      printf( "%s\n", string );  
   }  
  
   // You must flush the input buffer before using gets.   
   // fflush on input stream is an extension to the C standard   
   fflush( stdin );     
   printf( "Enter the same sentence with gets: " );  
   gets_s( string, sizeof(string) );  
   printf( "%s\n", string );  
}  
```  
  
```Output  
  
      This is a test  
This is a test  
  
```  
  
```Output  
  
      This is a test  
This is a testEnter a sentence of four words with scanf: This is a test  
This  
is  
a  
test  
Enter the same sentence with gets: This is a test  
This is a test  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_flushall](../../c-runtime-library/reference/flushall.md)   
 [setvbuf](../../c-runtime-library/reference/setvbuf.md)