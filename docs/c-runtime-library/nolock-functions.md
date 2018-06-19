---
title: Funzioni _nolock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- _nolock functions
- nolock functions
ms.assetid: 7d651d87-38d2-4303-9897-fdb5f7a3e899
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b5dca9fa9e0708e1fa8562fe2188362ac73c9be4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32391574"
---
# <a name="nolock-functions"></a>Funzioni _nolock

Queste sono funzioni che non eseguono alcun blocco. Vengono fornite per gli utenti che richiedono le massime prestazioni. Per altre informazioni, vedere [Prestazioni librerie multithread](../c-runtime-library/multithreaded-libraries-performance.md).

 Utilizzare le funzioni _nolock solo se il programma è effettivamente a thread singolo o se esegue il proprio blocco.

## <a name="no-lock-routines"></a>Routine senza blocco

 [_fclose_nolock](../c-runtime-library/reference/fclose-nolock.md)

 [_fflush_nolock](../c-runtime-library/reference/fflush-nolock.md)

 [_fgetc_nolock, _fgetwc_nolock](../c-runtime-library/reference/fgetc-nolock-fgetwc-nolock.md)

 [_fread_nolock](../c-runtime-library/reference/fread-nolock.md)

 [_fseek_nolock, _fseeki64_nolock](../c-runtime-library/reference/fseek-nolock-fseeki64-nolock.md)

 [_ftell_nolock, _ftelli64_nolock](../c-runtime-library/reference/ftell-nolock-ftelli64-nolock.md)

 [_fwrite_nolock](../c-runtime-library/reference/fwrite-nolock.md)

 [_getc_nolock, _getwc_nolock](../c-runtime-library/reference/getc-nolock-getwc-nolock.md)

 [_getch_nolock, _getwch_nolock](../c-runtime-library/reference/getch-nolock-getwch-nolock.md)

 [_getchar_nolock, _getwchar_nolock](../c-runtime-library/reference/getchar-nolock-getwchar-nolock.md)

 [_getche_nolock, _getwche_nolock](../c-runtime-library/reference/getche-nolock-getwche-nolock.md)

 [_getdcwd_nolock, _wgetdcwd_nolock](../c-runtime-library/reference/getdcwd-nolock-wgetdcwd-nolock.md)

 [_putc_nolock, _putwc_nolock](../c-runtime-library/reference/putc-nolock-putwc-nolock.md)

 [_putch_nolock, _putwch_nolock](../c-runtime-library/reference/putch-nolock-putwch-nolock.md)

 [_putchar_nolock, _putwchar_nolock](../c-runtime-library/reference/putchar-nolock-putwchar-nolock.md)

 [_ungetc_nolock, _ungetwc_nolock](../c-runtime-library/reference/ungetc-nolock-ungetwc-nolock.md)

 [_ungetch_nolock, _ungetwch_nolock](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)

## <a name="see-also"></a>Vedere anche

[Input e output](../c-runtime-library/input-and-output.md)<br/>
 [Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
