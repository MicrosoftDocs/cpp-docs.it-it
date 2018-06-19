---
title: Stati di flusso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- streams, states
ms.assetid: 5f28c968-f132-403f-968c-8417ff315e52
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 418ed7c98523bf8944afcccc13a0e9020036940f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32413136"
---
# <a name="stream-states"></a>Stati di flusso
Gli stati validi e le transizioni di stato per un flusso vengono illustrati nella figura seguente.  
  
 ![Flusso](../c-runtime-library/media/stream.gif "flusso")  
  
 Ognuno dei cerchi indica uno stato stabile. Ognuna delle righe indica una transizione che può verificarsi come risultato di una chiamata di funzione che opera nel flusso. Cinque gruppi di funzioni possono causare transizioni di stato.  
  
 Le funzioni nei primi tre gruppi sono dichiarate in \<stdio.h>:  
  
-   Funzioni di lettura dei byte - [fgetc](../c-runtime-library/reference/fgetc-fgetwc.md), [fgets](../c-runtime-library/reference/fgets-fgetws.md), [fread](../c-runtime-library/reference/fread.md), [fscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [getc](../c-runtime-library/reference/getc-getwc.md), [getchar](../c-runtime-library/reference/getc-getwc.md), [gets](../c-runtime-library/gets-getws.md), [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) e [ungetc](../c-runtime-library/reference/ungetc-ungetwc.md)  
  
-   Funzioni di scrittura dei byte - [fprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fputc](../c-runtime-library/reference/fputc-fputwc.md), [fputs](../c-runtime-library/reference/fputs-fputws.md), [fwrite](../c-runtime-library/reference/fwrite.md), [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), [putc](../c-runtime-library/reference/putc-putwc.md), [putchar](../c-runtime-library/reference/putc-putwc.md), [puts](../c-runtime-library/reference/puts-putws.md), [vfprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md) e [vprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)  
  
-   Funzioni di posizionamento - [fflush](../c-runtime-library/reference/fflush.md), [fseek](../c-runtime-library/reference/fseek-fseeki64.md), [fsetpos](../c-runtime-library/reference/fsetpos.md) e [rewind](../c-runtime-library/reference/rewind.md)  
  
 Le funzioni nei due gruppi rimanenti sono dichiarate in \<wchar.h>:  
  
-   Funzioni di lettura dei caratteri wide - [fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md), [fgetws](../c-runtime-library/reference/fgets-fgetws.md), [fwscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [getwc](../c-runtime-library/reference/getc-getwc.md), [getwchar](../c-runtime-library/reference/getc-getwc.md), [ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md) e [wscanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md),  
  
-   Funzioni di scrittura dei caratteri wide - [fwprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fputwc](../c-runtime-library/reference/fputc-fputwc.md), [fputws](../c-runtime-library/reference/fputs-fputws.md), [putwc](../c-runtime-library/reference/putc-putwc.md), [putwchar](../c-runtime-library/reference/fputc-fputwc.md), [vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), [vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md) e [wprintf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md),  
  
 Il diagramma di stato indica che è necessario chiamare una delle funzioni di posizionamento nella maggior parte delle operazioni di lettura e scrittura:  
  
-   Non è possibile chiamare una funzione di lettura se l'ultima operazione nel flusso è stata di scrittura.  
  
-   Non è possibile chiamare una funzione di scrittura se l'ultima operazione nel flusso è stata di lettura, a meno che tale operazione di lettura non abbia impostato l'indicatore di fine file.  
  
 Infine, il diagramma di stato mostra che un'operazione di posizionamento non riduce mai il numero di chiamate di funzione valide che possono seguire.  
  
## <a name="see-also"></a>Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)