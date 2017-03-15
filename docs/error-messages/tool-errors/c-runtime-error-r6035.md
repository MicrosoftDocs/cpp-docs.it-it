---
title: "R6035 errore di Runtime C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6035"
ms.assetid: f8fb50b8-18bf-4258-b96a-b0a9de468d16
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore di runtime R6035 del linguaggio C
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Libreria di runtime di Microsoft Visual C\+\+. Errore R6035 \- È in corso l'inizializzazione del cookie di sicurezza globale di un modulo dell'applicazione mentre è attiva una funzione basata su tale cookie.  Chiamare prima \_\_security\_init\_cookie.  
  
 [\_\_security\_init\_cookie](../../c-runtime-library/reference/security-init-cookie.md) deve essere chiamato prima del primo utilizzo del cookie di sicurezza globale.  
  
 Il cookie di sicurezza globale viene utilizzato per la sicurezza dai sovraccarichi del buffer nel codice compilato con [\/GS \(Controllo sicurezza buffer\)](../../build/reference/gs-buffer-security-check.md) e nel codice che utilizza la gestione delle eccezioni strutturata.  In pratica, all'ingresso in una funzione protetta da sovraccarichi il cookie viene inserito nello stack e, all'uscita, il valore presente nello stack viene confrontato con il cookie globale.  L'eventuale differenza tra di essi indica che si è verificato un sovraccarico del buffer e determina l'interruzione immediata del programma.  
  
 L'errore R6035 indica che è stata effettuata una chiamata a `__security_init_cookie` dopo l'ingresso di una funzione protetta.  Se l'esecuzione continuasse, verrebbe rilevato un sovraccarico del buffer non corretto poiché il cookie nello stack non corrisponderebbe più a quello globale.  
  
 Si consideri l'esempio relativo alla DLL riportato di seguito.  Il punto di ingresso DLL è impostato su DllEntryPoint attraverso l'opzione [\/ENTRY \(Simbolo del punto di ingresso\)](../../build/reference/entry-entry-point-symbol.md) del linker.  Poiché in questo modo viene ignorata l'inizializzazione di CRT che normalmente inizializza il cookie di sicurezza globale, la DLL stessa dovrà chiamare `__security_init_cookie`.  
  
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
  
 In questo esempio verrà generato l'errore R6035, in quanto DllEntryPoint utilizza la gestione delle eccezioni strutturata e si serve pertanto del cookie di sicurezza per rilevare i sovraccarichi del buffer.  Mentre viene effettuata la chiamata a DllInitialize, il cookie di sicurezza globale è stato già inserito nello stack.  
  
 In questo esempio viene illustrato il sistema corretto:  
  
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
  
 In questo caso, DllEntryPoint non dispone di protezione dai sovraccarichi del buffer \(non presenta buffer di stringa locale e non utilizza la gestione delle eccezioni strutturata\). Di conseguenza, può chiamare senza rischi `__security_init_cookie`.  Chiama quindi una funzione di supporto protetta.  
  
> [!NOTE]
>  Il messaggio di errore R6035 viene generato esclusivamente dal CRT di debug dei processori x86 e solo per la gestione delle eccezioni strutturata, ma la condizione è quella di un errore su tutte le piattaforme e per tutte le forme di gestione delle eccezioni, ad esempio EH di C\+\+.  
  
## Vedere anche  
 [Controlli approfonditi di sicurezza del compilatore](http://go.microsoft.com/fwlink/?linkid=7260)