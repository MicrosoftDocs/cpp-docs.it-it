---
title: "_com_raise_error | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_raise_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_raise_error (funzione)"
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_raise_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Genera [\_com\_error](../cpp/com-error-class.md) in risposta a un errore.  
  
## Sintassi  
  
```  
  
      void __stdcall _com_raise_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = 0  
);  
```  
  
#### Parametri  
 `hr`  
 Informazioni `HRESULT`.  
  
 `perrinfo`  
 Oggetto **IErrorInfo**.  
  
## Note  
 `_com_raise_error`, definito in comdef.h, può essere sostituito con una versione scritta dall'utente avente lo stesso nome e prototipo.  Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C\+\+.  In questo caso, una versione dell'utente di **\_com\_raise\_error** potrebbe decidere di eseguire `longjmp` o di visualizzare una finestra di messaggio per poi interrompersi.  La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.  
  
 È inoltre possibile utilizzare [\_set\_com\_error\_handler](../cpp/set-com-error-handler.md) per sostituire la funzione predefinita di gestione degli errori.  
  
 Per impostazione predefinita, `_com_raise_error` viene definito come segue:  
  
```  
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {  
   throw _com_error(hr, perrinfo);  
}  
```  
  
## Fine sezione specifica Microsoft  
  
## Requisiti  
 **Intestazione:** comdef.h  
  
 **Lib:** Se l'opzione del compilatore "wchar\_t è il tipo nativo" è attiva, utilizzare comsuppw.lib o comsuppwd.lib.  Se "wchar\_t è il tipo nativo" è disattiva, utilizzare comsupp.lib.  Per ulteriori informazioni, vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [\_set\_com\_error\_handler](../cpp/set-com-error-handler.md)