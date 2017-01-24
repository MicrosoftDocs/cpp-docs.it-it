---
title: "Errore del compilatore C3707 | Microsoft Docs"
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
  - "C3707"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3707"
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3707
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': il metodo di interfaccia dispatch deve avere un dispid  
  
 Se si utilizza un metodo `dispinterface`, è necessario assegnargli un `dispid`.  Per risolvere il problema, assegnare un `dispid` al metodo `dispinterface`, ad esempio rimuovendo il commento dall'attributo `id` nel metodo dell'esempio riportato di seguito.  Per ulteriori informazioni sugli attributi, vedere gli attributi [dispinterface](../../windows/dispinterface.md) e [id](../../windows/id.md).  
  
 Il seguente codice di esempio genera l'errore C3707:  
  
```  
// C3707.cpp  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlctl.h>  
  
[module(name="xx")];  
[dispinterface]  
__interface IEvents : IDispatch  
{  
   HRESULT event1([in] int i);   // C3707  
   // try the following line instead  
   // [id(1)] HRESULT event1([in] int i);  
};  
  
int main() {  
}  
```