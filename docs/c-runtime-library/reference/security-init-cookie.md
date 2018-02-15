---
title: __security_init_cookie | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- __security_init_cookie
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
apitype: DLLExport
f1_keywords:
- security_init_cookie
- __security_init_cookie
dev_langs:
- C++
helpviewer_keywords:
- security cookie [C++]
- __security_init_cookie function
- security_init_cookie function
- global security cookie
ms.assetid: 32119905-0897-4a1c-84ca-bffd16c9b2af
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7c51e02a36df9a54d2f301eafc24a0181e97153f
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="securityinitcookie"></a>__security_init_cookie
Inizializza il cookie di sicurezza globale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __security_init_cookie(void);  
```  
  
## <a name="remarks"></a>Note  
 Il cookie di sicurezza globale viene usato per la protezione da sovraccarico del buffer nel codice compilato con [/GS (Controllo sicurezza buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che usa la gestione delle eccezioni. All'ingresso in una funzione protetta da sovraccarico, il cookie viene inserito nello stack e, all'uscita, il valore presente nello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indicano che si è verificato un sovraccarico del buffer causando l'interruzione immediata del programma.  
  
 In genere, `__security_init_cookie` viene chiamato da CRT all'inizializzazione. Se si ignora l'inizializzazione di CRT, ad esempio se si usa [/ENTRY](../../build/reference/entry-entry-point-symbol.md) per specificare un punto di ingresso, sarà necessario chiamare `__security_init_cookie` manualmente. Se `__security_init_cookie` non viene chiamato, il cookie di sicurezza globale viene impostato su un valore predefinito compromettendo la protezione da sovraccarico del buffer. Poiché un utente malintenzionato può sfruttare questo valore del cookie predefinito per aggirare i controlli di sovraccarico del buffer, si consiglia di chiamare sempre `__security_init_cookie` quando si definisce un punto di ingresso.  
  
 La chiamata a `__security_init_cookie` deve essere eseguita prima dell'immissione di qualsiasi funzione protetta da sovraccarico; in caso contrario, verrà rilevato un sovraccarico del buffer non corretto. Per altre informazioni, vedere [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).  
  
## <a name="example"></a>Esempio  
 Vedere gli esempi in [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`__security_init_cookie`|\<process.h>|  
  
 `__security_init_cookie` è un'estensione Microsoft della libreria di runtime C standard. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli di sicurezza del compilatore in dettaglio](http://go.microsoft.com/fwlink/p/?linkid=7260)