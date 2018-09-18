---
title: C errore di Runtime R6035 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6035
dev_langs:
- C++
helpviewer_keywords:
- R6035
ms.assetid: f8fb50b8-18bf-4258-b96a-b0a9de468d16
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 081e878e6bc96edc734f84e0e4efecee607135b5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026713"
---
# <a name="c-runtime-error-r6035"></a>C errore di Runtime R6035

Microsoft Visual C++ libreria di Runtime R6035 errore - un modulo in questa applicazione sta inizializzando il cookie di sicurezza globale del modulo mentre è attiva una funzione di basarsi su tale cookie di sicurezza.  Chiamata di security_init_cookie in precedenza.

[security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md) deve essere chiamato prima del primo utilizzo del cookie di sicurezza globale.

Il cookie di sicurezza globale viene usato per la protezione da sovraccarico del buffer nel codice compilato con [/GS (controllo sicurezza Buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che usa la gestione delle eccezioni strutturata. In pratica, in ingresso a una funzione protetta da sovraccarico, il cookie viene inserito nello stack e in uscita, il valore dello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indica che si è verificato un sovraccarico del buffer e che comporta la terminazione immediata del programma.

R6035 di errore indica che una chiamata a `__security_init_cookie` è stato effettuato dopo che è stata immessa una funzione protetta. Se l'esecuzione continua, verrebbe rilevato un sovraccarico del buffer non corretto perché il cookie nello stack non è più corrisponderebbe il cookie globale.

Considerare il seguente esempio DLL. Il punto di ingresso DLL è impostato su DllEntryPoint tramite il linker [/ENTRY (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md) opzione. Ciò consente di ignorare l'inizializzazione di CRT che normalmente Inizializza il cookie di sicurezza globale, in modo che la DLL deve chiamare `__security_init_cookie`.

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

In questo esempio verrà generato l'errore R6035 poiché DllEntryPoint Usa la gestione delle eccezioni strutturata e Usa quindi il cookie di sicurezza per rilevare i sovraccarichi del buffer. Una volta che DllInitialize viene chiamato, il cookie di sicurezza globale è già stato inserito nello stack.

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

In questo caso, non è protetto DllEntryPoint dai sovraccarichi del buffer (non dispone di alcun buffer di stringhe locali e non Usa gestione strutturata delle eccezioni); di conseguenza, può chiamare in modo sicuro `__security_init_cookie`. Quindi chiama una funzione helper che è protetta.

> [!NOTE]
>  Messaggio di errore è R6035 CRT debug solo generati da x86 e solo per la gestione strutturata delle eccezioni, ma la condizione di un errore in tutte le piattaforme e per tutte le forme di eccezione gestisce, ad esempio gestione delle eccezioni C++.

## <a name="see-also"></a>Vedere anche

[Funzionalità di sicurezza in MSVC](https://blogs.msdn.microsoft.com/vcblog/2017/06/28/security-features-in-microsoft-visual-c/)