---
title: "Errore del compilatore C3508 | Microsoft Docs"
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
  - "C3508"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3508"
ms.assetid: 16d08f89-2f32-44eb-9421-68acecddf49b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3508
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': non è un tipo di automazione valido  
  
 È stato specificato un tipo non valido.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C3508:  
  
```  
// C3508.cpp  
#define _ATL_DEBUG_QI  
  
#define WIN32_LEAN_AND_MEAN  
#define STRICT  
#ifndef _WIN32_WINNT  
#define _WIN32_WINNT 0x0400  
#endif  
  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
extern CComModule _Module;  
#include <atlcom.h>  
#include <atlctl.h>  
#include <atlstr.h>  
  
extern "C" int printf_s(const char*, ...);  
  
[module(name=oso)];  
  
union U  
// try the following two lines instead  
// [export]  
// struct U  
{  
   int i, j;  
};  
  
[dispinterface]  
__interface I  
{  
   [id(1)] HRESULT func(U* u);  
};  
  
[coclass]  
struct C : I  
{  
   HRESULT func(U*)   // C3508  
   {  
      return E_FAIL;  
   }  
};  
  
int main()  
{  
}  
```