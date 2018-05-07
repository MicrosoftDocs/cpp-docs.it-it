---
title: R6035 di errore di Runtime C | Documenti Microsoft
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
ms.openlocfilehash: ecadf1793475e1cf5f354796c71a1894884e24e9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="c-runtime-error-r6035"></a>R6035 di errore di Runtime C
Microsoft Visual C++ libreria di Runtime R6035 errore - un modulo in questa applicazione sta inizializzando i cookie di sicurezza globale del modulo, mentre è attiva una funzione basarsi su tale cookie di sicurezza.  Chiamata di security_init_cookie in precedenza.  
  
 [security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md) deve essere chiamato prima del primo utilizzo del cookie di sicurezza globale.  
  
 Il cookie di sicurezza globale viene utilizzato per la protezione di sovraccarico del buffer nel codice compilato con [/GS (controllo sicurezza Buffer)](../../build/reference/gs-buffer-security-check.md) e nel codice che utilizza la gestione delle eccezioni strutturata. In pratica, in ingresso a una funzione protetta da sovraccarico, il cookie viene inserito nello stack e in uscita, il valore nello stack viene confrontato con il cookie globale. Eventuali differenze tra di essi indica che si è verificato un sovraccarico del buffer e che comporta l'interruzione immediata del programma.  
  
 L'errore R6035 indica che una chiamata a `__security_init_cookie` è stata effettuata dopo che è stata immessa una funzione protetta. Se continuare l'esecuzione, verrebbe rilevato un sovraccarico del buffer non corretto poiché il cookie nello stack non corrisponderebbe il cookie globale.  
  
 Considerare il seguente esempio DLL. Il punto di ingresso DLL è impostato su DllEntryPoint attraverso il linker [/ENTRY (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md) opzione. Ignora l'inizializzazione di CRT che normalmente Inizializza il cookie di sicurezza globale, la DLL è necessario chiamare `__security_init_cookie`.  
  
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
  
 In questo esempio verrà generato l'errore R6035 perché DllEntryPoint utilizza la gestione delle eccezioni strutturata e pertanto viene usato il cookie di sicurezza per rilevare i sovraccarichi del buffer. Una volta che DllInitialize viene chiamato, il cookie di sicurezza globale è già stato inserito nello stack.  
  
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
  
 In questo caso, DllEntryPoint non è protetta da sovraccarichi del buffer (Nessun buffer di stringhe locali e non utilizza la gestione delle eccezioni strutturata); di conseguenza, può chiamare in modo sicuro `__security_init_cookie`. Quindi chiama una funzione di supporto è protetto.  
  
> [!NOTE]
>  Messaggio di errore R6035 viene generato da x86 solo eseguire il debug CRT, e solo per la gestione delle eccezioni strutturata, ma la condizione di errore in tutte le piattaforme e per tutti i tipi di eccezione gestisce, ad esempio EH di C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli di sicurezza del compilatore in dettaglio](http://go.microsoft.com/fwlink/p/?linkid=7260)