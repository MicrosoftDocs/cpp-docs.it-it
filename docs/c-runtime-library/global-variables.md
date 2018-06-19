---
title: Variabili globali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.variables
dev_langs:
- C++
helpviewer_keywords:
- global variables
- variables, global
- global variables, Microsoft run-time library
ms.assetid: 01d1551c-2f0c-4f72-935c-6442caccf84f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a2da3dd07c7088bee4be750b764b4a467bfebeae
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32392039"
---
# <a name="global-variables"></a>Variabili globali
La libreria di runtime Microsoft C fornisce le macro o le variabili globali seguenti. Molte di queste variabili globali o macro sono deprecate a favore di versioni funzionali più sicure ed è consigliabile usare queste ultime invece delle variabili globali.  
  
|Variabile|Descrizione|  
|--------------|-----------------|  
|[__argc, \__argv, \__wargv](../c-runtime-library/argc-argv-wargv.md)|Contiene gli argomenti della riga di comando.|  
|[_daylight, _dstbias, _timezone e _tzname](../c-runtime-library/daylight-dstbias-timezone-and-tzname.md)|Deprecato. Usare invece `_get_daylight`, `_get_dstbias`, `_get_timezone` e `_get_tzname`.<br /><br /> Rettifica l'ora locale. È usata in alcune funzioni di data e ora.|  
|[errno, _doserrno, _sys_errlist e _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)|Deprecato. Usare invece `_get_errno`, `_set_errno`, `_get_doserrno`, `_set_doserrno`, `perror` e `strerror`.<br /><br /> Archivia i codici di errore e le informazioni correlate.|  
|[_environ, _wenviron](../c-runtime-library/environ-wenviron.md)|Deprecato. Usare invece `getenv_s`, `_wgetenv_s`, `_dupenv_s`, `_wdupenv_s`, `_putenv_s` e `_wputenv_s`.<br /><br /> Puntatori a matrici di puntatori alle stringhe dell'ambiente di elaborazione. Inizializzata all'avvio.|  
|[_fmode](../c-runtime-library/fmode.md)|Deprecato. Usare invece `_get_fmode` o `_set_fmode`.<br /><br /> Imposta la modalità di conversione di file predefinita.|  
|[_iob](../c-runtime-library/iob.md)|Matrice di strutture di controllo di I/O per console, file e dispositivi.|  
|[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)|Contiene informazioni usate dalle funzioni di classificazione dei caratteri.|  
|[_pgmptr, _wpgmptr](../c-runtime-library/pgmptr-wpgmptr.md)|Deprecato. Usare invece `_get_pgmptr` o `_get_wpgmptr`.<br /><br /> Inizializzata all'avvio del programma sul percorso completo o relativo del programma, il nome del programma completo o il nome del programma senza l'estensione del nome file, a seconda del modo in cui è stato richiamato il programma.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti della libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)   
 [__argc, \__argv, \__wargv](../c-runtime-library/argc-argv-wargv.md)   
 [_get_daylight](../c-runtime-library/reference/get-daylight.md)   
 [_get_dstbias](../c-runtime-library/reference/get-dstbias.md)   
 [_get_timezone](../c-runtime-library/reference/get-timezone.md)   
 [_get_tzname](../c-runtime-library/reference/get-tzname.md)   
 [perror](../c-runtime-library/reference/perror-wperror.md)   
 [strerror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)   
 [_get_doserrno](../c-runtime-library/reference/get-doserrno.md)   
 [_set_doserrno](../c-runtime-library/reference/set-doserrno.md)   
 [_get_errno](../c-runtime-library/reference/get-errno.md)   
 [_set_errno](../c-runtime-library/reference/set-errno.md)   
 [_dupenv_s, _wdupenv_s](../c-runtime-library/reference/dupenv-s-wdupenv-s.md)   
 [getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)   
 [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)   
 [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)   
 [_get_fmode](../c-runtime-library/reference/get-fmode.md)   
 [_set_fmode](../c-runtime-library/reference/set-fmode.md)