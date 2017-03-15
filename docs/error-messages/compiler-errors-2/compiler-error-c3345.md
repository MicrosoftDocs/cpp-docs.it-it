---
title: "Errore del compilatore C3345 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3345"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3345"
ms.assetid: 1dda4c79-73bb-441b-b939-746154c3afba
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore del compilatore C3345
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': identificatore non valido per un nome di modulo  
  
 L'*identificatore* per un modulo contiene uno o più caratteri non validi. Un identificatore è valido se il primo carattere, così come qualsiasi carattere successivo, è costituito da un carattere alfabetico, un carattere di sottolineatura o un carattere ANSI esteso \(0x80\-FF\).  
  
### Per correggere l'errore  
  
1.  Verificare che l'*identificatore* non contenga spazi vuoti o altri caratteri non ammessi.  
  
## Esempio  
 L'esempio di codice seguente genera il messaggio di errore C3345 perché il parametro `name` dell'attributo `module` contiene uno spazio vuoto.  
  
```  
// cpp_attr_name_module.cpp // compile with: /LD /link /OPT:NOREF #include <atlbase.h> #include <atlcom.h> #include <atlwin.h> #include <atltypes.h> #include <atlctl.h> #include <atlhost.h> #include <atlplus.h> // C3345 expected [module(dll, name="My Library", version="1.2", helpfile="MyHelpFile")] // Try the following line instead //[module(dll, name="MyLibrary", version="1.2", helpfile="MyHelpFile")] // Module attribute now applies to this class class CMyClass { public: BOOL WINAPI DllMain(DWORD dwReason, LPVOID lpReserved) { // add your own code here return __super::DllMain(dwReason, lpReserved); } };  
```  
  
## Vedere anche  
 [\_\_iscsym](../../c-runtime-library/reference/iscsym-functions.md)   
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [modulo](../../windows/module-cpp.md)