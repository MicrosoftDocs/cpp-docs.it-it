---
title: __security_init_cookie
ms.date: 11/04/2016
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
helpviewer_keywords:
- security cookie [C++]
- __security_init_cookie function
- security_init_cookie function
- global security cookie
ms.assetid: 32119905-0897-4a1c-84ca-bffd16c9b2af
ms.openlocfilehash: c7b25e05b4574a7b397cd07d55000a5e53db58f6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62356836"
---
# <a name="securityinitcookie"></a>__security_init_cookie

Inizializza il cookie di sicurezza globale.

## <a name="syntax"></a>Sintassi

```C
void __security_init_cookie(void);
```

## <a name="remarks"></a>Note

Il cookie di sicurezza globale viene usato per la protezione da sovraccarico del buffer nel codice compilato con [/GS (Controllo sicurezza buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che usa la gestione delle eccezioni. All'ingresso in una funzione protetta da sovraccarico, il cookie viene inserito nello stack e, all'uscita, il valore presente nello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indicano che si è verificato un sovraccarico del buffer causando l'interruzione immediata del programma.

In genere **security_init_cookie** viene chiamato da CRT quando viene inizializzato. Se si ignora l'inizializzazione di CRT, ad esempio, se si usa [/ENTRY](../../build/reference/entry-entry-point-symbol.md) per specificare un punto di ingresso, sarà necessario chiamare **security_init_cookie** manualmente. Se **security_init_cookie** non viene chiamato, globale cookie di sicurezza è impostata su un valore predefinito e protezione da sovraccarico del buffer è compromesso. Poiché un utente malintenzionato può sfruttare questo valore di cookie predefinito per aggirare i controlli di sovraccarico del buffer, è consigliabile chiamare sempre **security_init_cookie** quando si definisce un punto di ingresso.

La chiamata a **security_init_cookie** deve essere effettuata prima di qualsiasi protetta da sovraccarico (funzione) viene immesso; in caso contrario, verrà rilevato un sovraccarico del buffer non corretto. Per altre informazioni, vedere [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## <a name="example"></a>Esempio

Vedere gli esempi in [Errore di run-time C R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**__security_init_cookie**|\<process.h>|

**security_init_cookie** è un'estensione Microsoft della libreria di Runtime C standard. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Microsoft Security Response Center](https://www.microsoft.com/msrc?rtc=1)
