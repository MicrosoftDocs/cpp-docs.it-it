---
title: __security_init_cookie
ms.date: 11/04/2016
api_name:
- __security_init_cookie
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- security_init_cookie
- __security_init_cookie
helpviewer_keywords:
- security cookie [C++]
- __security_init_cookie function
- security_init_cookie function
- global security cookie
ms.assetid: 32119905-0897-4a1c-84ca-bffd16c9b2af
ms.openlocfilehash: 9f7e9924f4a96803749418d777e5ee2020f9df78
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70948724"
---
# <a name="__security_init_cookie"></a>__security_init_cookie

Inizializza il cookie di sicurezza globale.

## <a name="syntax"></a>Sintassi

```C
void __security_init_cookie(void);
```

## <a name="remarks"></a>Note

Il cookie di sicurezza globale viene usato per la protezione da sovraccarico del buffer nel codice compilato con [/GS (Controllo sicurezza buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che usa la gestione delle eccezioni. All'ingresso in una funzione protetta da sovraccarico, il cookie viene inserito nello stack e, all'uscita, il valore presente nello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indicano che si è verificato un sovraccarico del buffer causando l'interruzione immediata del programma.

In genere, **__security_init_cookie** viene chiamato da CRT al momento dell'inizializzazione. Se si ignora l'inizializzazione di CRT, ad esempio se si usa [/entry](../../build/reference/entry-entry-point-symbol.md) per specificare un punto di ingresso, sarà necessario chiamare **__security_init_cookie** manualmente. Se **__security_init_cookie** non viene chiamato, il cookie di sicurezza globale viene impostato su un valore predefinito e la protezione con sovraccarico del buffer è compromessa. Poiché un utente malintenzionato può sfruttare questo valore del cookie predefinito per sconfiggere i controlli di sovraccarico del buffer, si consiglia di chiamare sempre **__security_init_cookie** quando si definisce un punto di ingresso personalizzato.

La chiamata a **__security_init_cookie** deve essere eseguita prima dell'immissione di qualsiasi funzione protetta da sovraccarico; in caso contrario, verrà rilevato un sovraccarico del buffer non corretto. Per altre informazioni, vedere [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## <a name="example"></a>Esempio

Vedere gli esempi in [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**__security_init_cookie**|\<process.h>|

**__security_init_cookie** è un'estensione Microsoft della libreria di runtime C standard. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Microsoft Security Response Center](https://www.microsoft.com/msrc?rtc=1)
