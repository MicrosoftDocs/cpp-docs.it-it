---
title: "_get_purecall_handler, set_purecall_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_purecall_handler"
  - "_set_purecall_handler_m"
  - "_get_purecall_handler"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_set_purecall_handler"
  - "_set_purecall_handler_m"
  - "set_purecall_handler_m"
  - "set_purecall_handler"
  - "stdlib/_set_purecall_handler"
  - "stdlib/_get_purecall_handler"
  - "_get_purecall_handler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_purecall_handler (funzione)"
  - "set_purecall_handler (funzione)"
  - "purecall_handler"
  - "set_purecall_handler_m (funzione)"
  - "_purecall_handler"
  - "_set_purecall_handler_m (funzione)"
  - "funzione _get_purecall_handler"
ms.assetid: 2759b878-8afa-4129-86e7-72afc2153d9c
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# _get_purecall_handler, set_purecall_handler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene o imposta il gestore degli errori per una chiamata di funzione virtuale pura.  
  
## Sintassi  
  
```  
typedef void (__cdecl* _purecall_handler)(void);  
  
_purecall_handler __cdecl _get_purecall_handler(void);  
  
_purecall_handler __cdecl _set_purecall_handler(   
   _purecall_handler function  
);  
```  
  
#### Parametri  
 `function`  
 Funzione da chiamare quando si chiama una funzione virtuale pura. Una funzione `_purecall_handler` deve avere un tipo restituito void.  
  
## Valore restituito  
 `_purecall_handler` precedente. Restituisce `nullptr` se non è disponibile alcun gestore precedente.  
  
## Note  
 Il `_get_purecall_handler` e `_set_purecall_handler` funzioni sono specifiche di Microsoft e si applicano solo al codice C\+\+.  
  
 Una chiamata a una funzione virtuale pura è un errore perché non è implementata. Per impostazione predefinita, il compilatore genera codice per richiamare una funzione del gestore errori quando viene chiamata una funzione virtuale pura, che termina il programma. È possibile installare il proprio funzione del gestore errori per le chiamate di funzione virtuale pura, a rilevarli per il debug o la creazione di report. Per utilizzare il proprio gestore degli errori, creare una funzione che ha il `_purecall_handler` firma, quindi utilizzare `_set_purecall_handler` per renderlo il gestore corrente.  
  
 Poiché è presente un solo `_purecall_handler` per ogni processo, quando si chiama `_set_purecall_handler` influisce immediatamente su tutti i thread. L'ultimo chiamante in qualsiasi thread imposta il gestore.  
  
 Per ripristinare il comportamento predefinito, chiamare `_set_purecall_handler` utilizzando un `nullptr` argomento.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_purecall_handler`, `_set_purecall_handler`|\< cstdlib \> o \< STDLIB. h \>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// _set_purecall_handler.cpp  
// compile with: /W1  
#include <tchar.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
class CDerived;  
class CBase  
{  
public:  
   CBase(CDerived *derived): m_pDerived(derived) {};  
   ~CBase();  
   virtual void function(void) = 0;  
  
   CDerived * m_pDerived;  
};  
  
class CDerived : public CBase  
{  
public:  
   CDerived() : CBase(this) {};   // C4355  
   virtual void function(void) {};  
};  
  
CBase::~CBase()  
{  
   m_pDerived -> function();  
}  
  
void myPurecallHandler(void)  
{  
   printf("In _purecall_handler.");  
   exit(0);  
}  
  
int _tmain(int argc, _TCHAR* argv[])  
{  
   _set_purecall_handler(myPurecallHandler);  
   CDerived myDerived;  
}  
```  
  
```Output  
In _purecall_handler.  
```  
  
## Vedere anche  
 [Gestione degli errori](../../c-runtime-library/error-handling-crt.md)   
 [\_purecall](../../c-runtime-library/reference/purecall.md)