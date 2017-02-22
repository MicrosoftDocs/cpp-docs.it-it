---
title: "Stati di flusso | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flussi, stati"
ms.assetid: 5f28c968-f132-403f-968c-8417ff315e52
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Stati di flusso
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli stati validi e le transizioni di stato, per un flusso vengono illustrati nella figura seguente.  
  
 ![Flusso](../c-runtime-library/media/stream.png "stream")  
  
 Ognuno dei cerchi indica uno stato stabile.  Ognuna delle righe indica una transizione che può verificarsi come risultato di una chiamata di funzione che opera nel flusso.  Cinque gruppi di funzioni possono causare le transizioni di stato.  
  
 Le funzioni nei primi tre gruppi vengono dichiarate in \<stdio.h\>:  
  
-   Le funzioni che leggono byte \- [fgetc](../c-runtime-library/reference/fgetc-fgetwc.md), [fgets](../c-runtime-library/reference/fgets-fgetws.md), [fread](../c-runtime-library/reference/fread.md), [fscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [getc](../c-runtime-library/reference/getc-getwc.md), [getchar](../c-runtime-library/reference/getc-getwc.md), [ottiene](../c-runtime-library/gets-getws.md), [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) e [ungetc](../c-runtime-library/reference/ungetc-ungetwc.md)  
  
-   Le funzioni che scrivono byte \- [mentre](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fputc](../c-runtime-library/reference/fputc-fputwc.md), [fputs](../c-runtime-library/reference/fputs-fputws.md), [fwrite](../c-runtime-library/reference/fwrite.md), [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), [putc](../c-runtime-library/reference/putc-putwc.md), [putchar](../c-runtime-library/reference/putc-putwc.md), [inserisce](../c-runtime-library/reference/puts-putws.md), [vfprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md) e [vprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)  
  
-   Le funzioni di posizionamento [fflush](../c-runtime-library/reference/fflush.md), [fseek](../c-runtime-library/reference/fseek-fseeki64.md), [fsetpos](../c-runtime-library/reference/fsetpos.md) e [rewind](../c-runtime-library/reference/rewind.md)  
  
 Le funzioni nei due gruppi rimanenti vengono dichiarate in \<wchar.h\>:  
  
-   Le funzioni di lettura di caratteri wide \- [fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md), [fgetws](../c-runtime-library/reference/fgets-fgetws.md), [fwscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [getwc](../c-runtime-library/reference/getc-getwc.md), [getwchar](../c-runtime-library/reference/getc-getwc.md), [ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md) e [wscanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md),  
  
-   Le funzioni di scrittura di caratteri wide \- [fwprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fputwc](../c-runtime-library/reference/fputc-fputwc.md), [fputws](../c-runtime-library/reference/fputs-fputws.md), [putwc](../c-runtime-library/reference/putc-putwc.md), [putwchar](../c-runtime-library/reference/fputc-fputwc.md), [vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), [vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md) e [wprintf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md),  
  
 Il diagramma di stato indica che è necessario chiamare una delle funzioni di posizionamento nella maggior parte delle operazioni di lettura e scrittura:  
  
-   Non è possibile chiamare una funzione di lettura se l'ultima operazione sul flusso è stata di scrittura.  
  
-   Non è possibile chiamare una funzione di scrittura se l'ultima operazione sul flusso è stata di lettura, a meno che tale operazione di lettura imposti l'indicatore di fine file.  
  
 Infine, il diagramma di stato mostra che un'operazione di posizionamento non riduce mai il numero di chiamate di funzione valide che possono seguire.  
  
## Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)