---
title: Errore di runtime di C R6035
ms.date: 11/04/2016
f1_keywords:
- R6035
helpviewer_keywords:
- R6035
ms.assetid: f8fb50b8-18bf-4258-b96a-b0a9de468d16
ms.openlocfilehash: 7c497347689bcfc5528280bd22aa5183d5fafd61
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80197004"
---
# <a name="c-runtime-error-r6035"></a>Errore di runtime di C R6035

Microsoft Visual C++ Runtime Library, Error R6035: un modulo in questa applicazione sta inizializzando il cookie di sicurezza globale del modulo mentre è attiva una funzione che si basa su tale cookie di sicurezza.  Chiamare __security_init_cookie in precedenza.

[__security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md) necessario chiamare prima del primo utilizzo del cookie di sicurezza globale.

Il cookie di sicurezza globale viene usato per la protezione del sovraccarico del buffer nel codice compilato con [/GS (controllo di sicurezza del buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che usa la gestione strutturata delle eccezioni. In sostanza, all'ingresso in una funzione protetta da sovraccarico, il cookie viene inserito nello stack e, all'uscita, il valore dello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indicano che si è verificato un sovraccarico del buffer e comporta la chiusura immediata del programma.

Errore R6035 indica che è stata effettuata una chiamata a `__security_init_cookie` dopo l'immissione di una funzione protetta. Se l'esecuzione continua, viene rilevato un sovraccarico del buffer non corretto perché il cookie nello stack non corrisponde più al cookie globale.

Si consideri il seguente esempio di DLL. Il punto di ingresso della DLL è impostato su DllEntryPoint tramite l'opzione del linker [/entry (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md) . Questa operazione ignora l'inizializzazione di CRT che in genere Inizializza il cookie di sicurezza globale, quindi la DLL deve chiamare `__security_init_cookie`.

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

Questo esempio genera l'errore R6035 poiché DllEntryPoint usa la gestione strutturata delle eccezioni e pertanto usa il cookie di sicurezza per rilevare i sovraccarichi del buffer. Al momento della chiamata a DllInitialize, il cookie di sicurezza globale è già stato inserito nello stack.

In questo esempio viene illustrato il modo corretto:

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

In questo caso, DllEntryPoint non è protetto da sovraccarichi del buffer (non contiene buffer di stringa locali e non usa la gestione strutturata delle eccezioni); Pertanto, può chiamare in modo sicuro `__security_init_cookie`. Viene quindi chiamata una funzione helper protetta.

> [!NOTE]
>  Il messaggio di errore R6035 viene generato solo dalla libreria CRT di debug x86 e solo per la gestione delle eccezioni strutturata, ma la condizione è un errore in tutte le piattaforme e per tutte le forme C++ di gestione delle eccezioni, ad esempio eh.

## <a name="see-also"></a>Vedere anche

[Funzionalità di sicurezza in MSVC](https://blogs.msdn.microsoft.com/vcblog/2017/06/28/security-features-in-microsoft-visual-c/)
