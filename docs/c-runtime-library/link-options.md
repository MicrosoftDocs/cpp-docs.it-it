---
title: Opzioni di collegamento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- nothrownew.obj
- newmode.obj
- noenv.obj
- psetargv.obj
- loosefpmath.obj
- smallheap.obj
- fp10.obj
- nochkclr.obj
- chkstk.obj
- pcommode.obj
- pnoenv.obj
- link options [C++]
- invalidcontinue.obj
- pnothrownew.obj
- pwsetargv.obj
- pinvalidcontinue.obj
- wsetargv.obj
- binmode.obj
- setargv.obj
- noarg.obj
- pnewmode.obj
- commode.obj
- pthreadlocale.obj
- pbinmode.obj
- threadlocale.obj
- pnoarg.obj
ms.assetid: 05b5a77b-9dd1-494b-ae46-314598c770bb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c7cccd76f428ea2e1234a0e2da54452c051e683d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="link-options"></a>Opzioni collegamento
La directory lib CRT include un certo numero di file di oggetti piccoli che abilitano specifiche funzionalità CRT senza apportare modifiche al codice. Queste funzionalità sono denominate "opzioni di collegamento" perché è sufficiente aggiungerle alla riga di comando del linker per usarle.  
  
 Le versioni in modalità pure sono deprecate in Visual Studio 2015. Usare le versioni normali per il codice nativo e /clr.  
  
|Codice nativo e /clr|Modalità pure|Descrizione|  
|----------------------|---------------|-----------------|  
|binmode.obj|pbinmode.obj|Imposta la modalità binaria come modalità di conversione di file predefinita. Vedere [_fmode](../c-runtime-library/fmode.md).|  
|chkstk.obj|N/D|Fornisce il controllo dello stack e il supporto di alloca quando non si usa CRT.|  
|commode.obj|pcommode.obj|Imposta il flag di commit globale su "commit". Vedere [fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md) e [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md).|  
|fp10.obj|N/D|Modifica il controllo della precisione predefinito in 64 bit. Vedere [Supporto delle funzioni a virgola mobile](../c-runtime-library/floating-point-support.md).|  
|invalidcontinue.obj|pinvalidcontinue.obj|Imposta un gestore di parametri non validi predefinito che non esegue alcuna operazione, vale a dire che i parametri non validi passati alle funzioni CRT impostano semplicemente errno e restituiscono un risultato di errore.|  
|loosefpmath.obj|N/D|Assicura che il codice a virgola mobile tolleri i valori denormalizzati.|  
|newmode.obj|pnewmode.obj|Fa sì che [malloc](../c-runtime-library/reference/malloc.md) chiami il nuovo gestore in caso di errore. Vedere [_set_new_mode](../c-runtime-library/reference/set-new-mode.md), [_set_new_handler](../c-runtime-library/reference/set-new-handler.md), [calloc](../c-runtime-library/reference/calloc.md) e [realloc](../c-runtime-library/reference/realloc.md).|  
|noarg.obj|pnoarg.obj|Disabilita tutte le elaborazioni di argc e argv.|  
|nochkclr.obj|N/D|Non effettua alcuna operazione. Rimuovere dal progetto.|  
|noenv.obj|pnoenv.obj|Disabilita la creazione di un ambiente memorizzato nella cache per CRT.|  
|nothrownew.obj|pnothrownew.obj|Abilita la versione di new che non genera eccezioni in CRT. Vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).|  
|setargv.obj|psetargv.obj|Consente l'espansione dei caratteri jolly negli argomenti della riga di comando. Vedere [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).|  
|threadlocale.obj|pthreadlocale.obj|Abilita le impostazioni locali per singoli thread per tutti i nuovi thread per impostazione predefinita.|  
|wsetargv.obj|pwsetargv.obj|Consente l'espansione dei caratteri jolly negli argomenti della riga di comando. Vedere [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).|  
  
## <a name="see-also"></a>Vedere anche  
 [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)