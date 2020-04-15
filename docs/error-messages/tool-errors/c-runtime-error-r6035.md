---
title: Errore di runtime di C R6035
ms.date: 11/04/2016
f1_keywords:
- R6035
helpviewer_keywords:
- R6035
ms.assetid: f8fb50b8-18bf-4258-b96a-b0a9de468d16
ms.openlocfilehash: ff3cd0259df92aa5cdade3f78a240e69f8f6f7de
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377484"
---
# <a name="c-runtime-error-r6035"></a>Errore di runtime di C R6035

Libreria di runtime di Microsoft Visual C, errore R6035 - Un modulo in questa applicazione sta inizializzando il cookie di sicurezza globale del modulo mentre è attiva una funzione che si basa su tale cookie di sicurezza.  Chiama __security_init_cookie prima.

[__security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md) devono essere chiamati prima del primo utilizzo del cookie di sicurezza globale.

Il cookie di sicurezza globale viene utilizzato per la protezione da sovraccarico del buffer nel codice compilato con [/GS (controllo](../../build/reference/gs-buffer-security-check.md) di sicurezza del buffer) e nel codice che utilizza la gestione delle eccezioni strutturata. Essenzialmente, all'ingresso in una funzione protetta da sovraccarico, il cookie viene inserito nello stack e all'uscita, il valore nello stack viene confrontato con il cookie globale. Qualsiasi differenza tra di essi indica che si è verificato un sovraccarico del buffer e comporta la chiusura immediata del programma.

L'errore R6035 indica `__security_init_cookie` che è stata effettuata una chiamata dopo l'immissione di una funzione protetta. Se l'esecuzione dovesse continuare, verrebbe rilevato un sovraccarico del buffer spurio perché il cookie nello stack non corrisponderebbe più al cookie globale.

Si consideri l'esempio di DLL seguente. Il punto di ingresso DLL è impostato su DllEntryPoint tramite l'opzione [linker /ENTRY (Entry-Point Symbol).](../../build/reference/entry-entry-point-symbol.md) In questo modo viene ignorata l'inizializzazione di CRT che normalmente `__security_init_cookie`inizializza il cookie di sicurezza globale, pertanto la DLL stessa deve chiamare .

```
// Wrong way to call __security_init_cookie
DllEntryPoint(...) {
   DllInitialize();
   ...
   __try {
      ...
   } __except()... {
      ...
   }
}

void DllInitialize() {
   __security_init_cookie();
}
```

In questo esempio viene generato l'errore R6035 perché DllEntryPoint utilizza la gestione delle eccezioni strutturata e pertanto utilizza il cookie di sicurezza per rilevare i sovraccarichi del buffer. Quando DllInitialize viene chiamato, il cookie di sicurezza globale è già stato inserito nello stack.

Il modo corretto è dimostrato in questo esempio:The correct way is demonstrated in this example:

```
// Correct way to call __security_init_cookie
DllEntryPoint(...) {
   __security_init_cookie();
   DllEntryHelper();
}

void DllEntryHelper() {
   ...
   __try {
      ...
   } __except()... {
      ...
   }
}
```

In questo caso, DllEntryPoint non è protetto da sovraccarichi del buffer (non dispone di buffer di stringa locali e non utilizza la gestione delle eccezioni strutturata); quindi può chiamare `__security_init_cookie`in modo sicuro . Chiama quindi una funzione di supporto protetta.

> [!NOTE]
> Il messaggio di errore R6035 viene generato solo dalla libreria CRT di debug x86 e solo per la gestione delle eccezioni strutturata, ma la condizione è un errore in tutte le piattaforme e per tutte le forme di gestione delle eccezioni, ad esempio C.

## <a name="see-also"></a>Vedere anche

[Funzionalità di sicurezza in MSVCSecurity Features in MSVC](https://blogs.msdn.microsoft.com/vcblog/2017/06/28/security-features-in-microsoft-visual-c/)
