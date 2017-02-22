---
title: "Errore del compilatore C3744 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3744"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3744"
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3744
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\_\_unhook deve avere almeno 3 argomenti per gli eventi gestiti  
  
 Quando viene utilizzata in un programma che viene compilato per le estensioni gestite C\+\+, la funzione [\_\_unhook](../../cpp/unhook.md) deve accettare tre parametri.  
  
 `__hook` e `__unhook` non sono compatibili con la programmazione \/clr.  In alternativa, utilizzare gli operatori \+\= e \-\=.  
  
 L'errore C3744 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
 Il seguente codice di esempio genera l'errore C3744:  
  
```  
// C3744.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
public __delegate void delegate1();  
  
[ event_source(managed) ]  
public __gc class CPSource {  
public:  
   __event delegate1* event1;  
};  
  
[event_receiver(managed)]  
public __gc class CReceiver {  
public:  
   void Handler1() {  
   }  
  
   void UnhookAll1(CPSource* pSrc, CReceiver* pRec) {  
      pRec;  
      __unhook(pSrc);   // C3744  
      // The following line resolves the error.  
      // __unhook(&CPSource::event1, pSrc, &CReceiver::Handler1);  
   }  
};  
  
int main() {  
}  
```