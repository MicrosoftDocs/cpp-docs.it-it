---
title: __security_init_cookie | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e6bfafa1322d9730923867c86f754153f641460
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32406576"
---
# <a name="securityinitcookie"></a>__security_init_cookie

Inizializza il cookie di sicurezza globale.

## <a name="syntax"></a>Sintassi

```C
void __security_init_cookie(void);
```

## <a name="remarks"></a>Note

Il cookie di sicurezza globale viene usato per la protezione da sovraccarico del buffer nel codice compilato con [/GS (Controllo sicurezza buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che usa la gestione delle eccezioni. All'ingresso in una funzione protetta da sovraccarico, il cookie viene inserito nello stack e, all'uscita, il valore presente nello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indicano che si è verificato un sovraccarico del buffer causando l'interruzione immediata del programma.

In genere **security_init_cookie** viene chiamato da CRT durante l'inizializzazione. Se si ignora l'inizializzazione CRT, ad esempio, se si utilizza [/ENTRY](../../build/reference/entry-entry-point-symbol.md) per specificare un punto di ingresso, sarà necessario chiamare **security_init_cookie** manualmente. Se **security_init_cookie** non viene chiamato, globale cookie di sicurezza è impostata su un valore predefinito e protezione di sovraccarico del buffer è compromesso. Poiché un utente malintenzionato può sfruttare questo valore del cookie predefinito per aggirare i controlli di sovraccarico del buffer, è consigliabile chiamare sempre **security_init_cookie** quando si definisce un punto di ingresso.

La chiamata a **security_init_cookie** devono essere eseguite prima di qualsiasi protetta da sovraccarico inserimento della funzione; in caso contrario, verrà rilevato un sovraccarico del buffer non corretto. Per altre informazioni, vedere [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## <a name="example"></a>Esempio

Vedere gli esempi in [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**__security_init_cookie**|\<process.h>|

**security_init_cookie** è un'estensione Microsoft della libreria di Runtime C standard. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Controlli di sicurezza del compilatore in dettaglio](http://go.microsoft.com/fwlink/p/?linkid=7260)<br/>
