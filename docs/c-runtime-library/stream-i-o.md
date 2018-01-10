---
title: I/O di flusso | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: c.io
dev_langs: C++
helpviewer_keywords:
- I/O routines, stream I/O
- I/O [CRT], stream
- stream I/O
ms.assetid: dc7874d3-a91b-456a-9015-4748bb358217
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f6a0c3fe1a85028f4b4220f8e2f111afa1012121
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stream-io"></a>I/O di flusso
Queste funzioni elaborano dati di diverse dimensioni e formati, da singoli caratteri a strutture dati di grandi dimensioni. Forniscono anche il buffering, migliorando le prestazioni. Le dimensioni predefinite del buffer del flusso sono 4 KB. Queste routine influiscono solo su buffer creati dalle routine di libreria di runtime e non hanno alcun effetto sui buffer creati dal sistema operativo.  
  
### <a name="stream-io-routines"></a>Routine di I/O di flusso  
  
|Routine|Usa|  
|-------------|---------|  
|[clearerr](../c-runtime-library/reference/clearerr.md), [clearerr_s](../c-runtime-library/reference/clearerr-s.md)|Eliminare l'indicatore di errore per il flusso|  
|[fclose](../c-runtime-library/reference/fclose-fcloseall.md)|Chiudere il flusso|  
|[_fcloseall](../c-runtime-library/reference/fclose-fcloseall.md)|Chiudere tutti i flussi aperti tranne `stdin`, `stdout`e `stderr`|  
|[_fdopen, wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)|Associare il flusso a un descrittore di file del file aperto|  
|[feof](../c-runtime-library/reference/feof.md)|Test per la fine del file sul flusso|  
|[ferror](../c-runtime-library/reference/ferror.md)|Test per l'errore sul flusso|  
|[fflush](../c-runtime-library/reference/fflush.md)|Svuotare il flusso dal buffer o dal dispositivo di archiviazione|  
|[fgetc, fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md)|Leggere caratteri dal flusso (versioni della funzione di `getc` e di `getwc`)|  
|[_fgetchar, _fgetwchar](../c-runtime-library/reference/fgetc-fgetwc.md)|Leggere caratteri dal flusso `stdin` (versioni della funzione di `getchar` e di `getwchar`)|  
|[fgetpos](../c-runtime-library/reference/fgetpos.md)|Ottenere l'indicatore di posizione del flusso|  
|[fgets, fgetws](../c-runtime-library/reference/fgets-fgetws.md)|Leggere una stringa dal flusso|  
|[_fileno](../c-runtime-library/reference/fileno.md)|Ottenere il descrittore di file associato al flusso|  
|[_flushall](../c-runtime-library/reference/flushall.md)|Svuotare tutti i flussi dal buffer o dal dispositivo di archiviazione|  
|[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md)|Aprire il flusso|  
|[fprintf, _fprintf_l, fwprintf, _fwprintf_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)|Scrivere dati formattati in un flusso|  
|[fputc, fputwc](../c-runtime-library/reference/fputc-fputwc.md)|Scrivere un carattere in un flusso (versioni di funzione di `putc` e di `putwc`)|  
|[_fputchar, _fputwchar](../c-runtime-library/reference/fputc-fputwc.md)|Scrivere il carattere su `stdout` (versioni di funzione di `putchar` e di `putwchar`)|  
|[fputs, fputws](../c-runtime-library/reference/fputs-fputws.md)|Scrivere una stringa nel flusso|  
|[fread](../c-runtime-library/reference/fread.md)|Leggere dati non formattati da un flusso|  
|[freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen_s, _wfreopen_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md)|Riposizionare il puntatore del flusso `FILE` in un nuovo file o dispositivo|  
|[fscanf, fwscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](../c-runtime-library/reference/fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)|Leggere dati formattati da un flusso|  
|[fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)|Spostare la posizione del file nel percorso specificato|  
|[fsetpos](../c-runtime-library/reference/fsetpos.md)|Impostare l'indicatore di posizione del flusso|  
|[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)|Aprire il flusso con condivisione di file|  
|[ftell, _ftelli64](../c-runtime-library/reference/ftell-ftelli64.md)|Ottenere la posizione corrente del file|  
|[fwrite](../c-runtime-library/reference/fwrite.md)|Scrivere gli elementi di dati non formattati nel flusso|  
|[getc, getwc](../c-runtime-library/reference/getc-getwc.md)|Leggere i caratteri dal flusso (versioni macro di `fgetc` e di `fgetwc`)|  
|[getchar, getwchar](../c-runtime-library/reference/getc-getwc.md)|Leggere i caratteri da `stdin` (versioni macro di `fgetchar` e di `fgetwchar`)|  
|[_getmaxstdio](../c-runtime-library/reference/getmaxstdio.md)|Restituisce il numero dei file aperti contemporaneamente consentito a livello di I/O del flusso.|  
|[gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md)|Leggere una riga da `stdin`|  
|[_getw](../c-runtime-library/reference/getw.md)|Leggere `int` binari da un flusso|  
|[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md),[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|Scrivere dati formattati in `stdout`|  
|[putc, putwc](../c-runtime-library/reference/putc-putwc.md)|Scrivere un carattere in un flusso (versioni macro di `fputc` e di `fputwc`)|  
|[putchar, putwchar](../c-runtime-library/reference/putc-putwc.md)|Scrivere un carattere in `stdout` (versioni macro di `fputchar` e di `fputwchar`)|  
|[puts, _putws](../c-runtime-library/reference/puts-putws.md)|Scrivere una riga nel flusso|  
|[_putw](../c-runtime-library/reference/putw.md)|Scrivere `int` binari in un flusso|  
|[rewind](../c-runtime-library/reference/rewind.md)|Spostare la posizione del file all'inizio di un flusso|  
|[_rmtmp](../c-runtime-library/reference/rmtmp.md)|Rimuovere i file temporanei creati da `tmpfile`|  
|[scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md),[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)|Leggere dati formattati da `stdin`|  
|[setbuf](../c-runtime-library/reference/setbuf.md)|Controllare il buffering del flusso|  
|[_setmaxstdio](../c-runtime-library/reference/setmaxstdio.md)|Impostare un massimo per il numero dei file aperti contemporaneamente al livello del flusso I/O.|  
|[setvbuf](../c-runtime-library/reference/setvbuf.md)|Controllare il buffering del flusso e la dimensione del buffer|  
|[_snprintf, _snwprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md), [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](../c-runtime-library/reference/snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md)|Scrivere dati formattati di lunghezza specificata in una stringa|  
|[_snscanf, _snwscanf](../c-runtime-library/reference/snscanf-snscanf-l-snwscanf-snwscanf-l.md), [_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l](../c-runtime-library/reference/snscanf-s-snscanf-s-l-snwscanf-s-snwscanf-s-l.md)|Legge i dati formattati di lunghezza specificata dal flusso dello standard input|  
|[sprintf, swprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)|Scrivere dati formattati in una stringa|  
|[sscanf, swscanf](../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md), [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../c-runtime-library/reference/sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)|Leggere dati formattati da una stringa|  
|[_tempnam, _wtempnam](../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|Creare il filename temporaneo nella directory specificata|  
|[tmpfile](../c-runtime-library/reference/tmpfile.md), [tmpfile_s](../c-runtime-library/reference/tmpfile-s.md)|Creare un file temporaneo|  
|[tmpnam, _wtmpnam](../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md), [tmpnam_s, _wtmpnam_s](../c-runtime-library/reference/tmpnam-s-wtmpnam-s.md)|Creare un filename temporaneo|  
|[ungetc, ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md)|Inserire caratteri in coda al flusso|  
|[_vcprintf, _vcwprintf](../c-runtime-library/reference/vcprintf-vcprintf-l-vcwprintf-vcwprintf-l.md), [_vcprintf_s, _vcprintf_s_l, _vcwprintf_s, _vcwprintf_s_l](../c-runtime-library/reference/vcprintf-s-vcprintf-s-l-vcwprintf-s-vcwprintf-s-l.md)|Scrivere dati formattati nella console.|  
|[vfprintf, vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), [vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../c-runtime-library/reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)|Scrivere dati formattati in un flusso|  
|[vprintf, vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md), [vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](../c-runtime-library/reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md)|Scrivere dati formattati in `stdout`|  
|[_vsnprintf, _vsnwprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md), [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md)|Scrivere dati formattati di lunghezza specificata nel buffer|  
|[vsprintf, vswprintf](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md), [vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)|Scrivere dati formattati nel buffer|  
  
 Quando un programma inizia l'esecuzione, il codice di avvio automatico apre più flussi: standard input ((a cui punta `stdin`), standard output (a cui punta `stdout`) e standard error (a cui punta `stderr`)). I flussi vengono indirizzati alla console (tastiera e schermo) per impostazione predefinita. Usare `freopen` per reindirizzare `stdin`, `stdout`o `stderr` a un file su disco o a un dispositivo.  
  
 I file aperti mediante le routine del flusso vengono memorizzati nel buffer per impostazione predefinita. Le funzioni `stdout` e `stderr` vengono scaricate e memorizzate ogni volta che vengono completate o, se si sta scrivendo su un dispositivo a caratteri, dopo ogni chiamata della libreria. Se un programma termina in modo anomalo, è possibile che i buffer di output non vengano scaricati, con conseguente perdita di dati. Usare `fflush` o `_flushall` per assicurarsi che il buffer associato a un file specificato o tutti i buffer vengono scaricati nel sistema operativo, che può memorizzare nella cache i dati prima della scrittura su disco. La funzionalità di commit su disco garantisce che il contenuto del buffer scaricato non vada perduto nel caso di un errore di sistema.  
  
 Esistono due modi per eseguire il commit del contenuto del buffer su disco:  
  
-   Eseguire il collegamento con il file COMMODE.OBJ per impostare un flag globale di commit. L'impostazione predefinita del flag globale è `n`, per "no-commit."  
  
-   Impostare il flag della modalità su `c` con `fopen` o `_fdopen`.  
  
 Qualsiasi file specificatamente aperto con il flag `c` o `n` si comporta in base al flag, indipendentemente dallo stato del flag globale di commit/no-commit.  
  
 Se il programma non chiude in modo esplicito un flusso, il flusso viene automaticamente chiuso quando il programma termina. Tuttavia, è necessario chiudere un flusso al termine di un programma, perché il numero di flussi che possono essere aperti contemporaneamente è limitato. Per informazioni sul questo limite, vedere [_setmaxstdio](../c-runtime-library/reference/setmaxstdio.md) .  
  
 L'input può usare direttamente l'output solo con una chiamata corrispondente a `fflush` o a una funzione di posizionamento di file (`fseek`, `fsetpos`o `rewind`). L'output può seguire l'input senza una corrispondente chiamata a una funzione di posizionamento dei file se l'operazione di input rileva la fine del file.  
  
## <a name="see-also"></a>Vedere anche  
 [Input e output](../c-runtime-library/input-and-output.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)