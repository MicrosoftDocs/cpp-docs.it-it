---
title: "Avviso del compilatore (livello 1) C4683 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4683"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4683"
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4683
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**'**   
 ***funzione* : l'origine eventi ha un parametro 'out'. Prestare attenzione nello stabilire associazioni a più gestori eventi**  
  
 Se più sink di eventi sono in attesa di un'origine eventi COM, è possibile ignorare il valore di un parametro out.  
  
 Nelle seguenti situazioni si verifica una perdita di memoria:  
  
1.  Se un metodo dispone di un parametro out allocato internamente, ad esempio un BSTR \*.  
  
2.  Se un evento dispone di più gestori, ovvero è un evento multicast.  
  
 La perdita di memoria dipende dal fatto che il parametro out viene impostato da più gestori, ma viene restituito al sito di chiamata solo dall'ultimo gestore.  
  
 Il seguente codice di esempio genera l'errore C4683:  
  
```  
// C4683.cpp  
// compile with: /W1 /LD  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[ module(name="xx") ];  
  
[ object ]  
__interface I {  
   HRESULT f([out] int* pi);  
   // try the following line instead  
   // HRESULT f(int* pi);  
};  
  
[ coclass, event_source(com) ]  
struct E {  
   __event __interface I;   // C4683  
};  
```