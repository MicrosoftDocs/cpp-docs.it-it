---
title: "Errore del compilatore C3163 | Microsoft Docs"
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
  - "C3163"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3163"
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3163
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'costrutto': attributi non coerenti con la dichiarazione precedente  
  
 Gli attributi applicati a una definizione sono in conflitto con gli attributi applicati a una dichiarazione.  
  
 Un modo per risolvere l'errore C3163 consiste nell'eliminare gli attributi sulla dichiarazione con prototipo.  Tutti gli attributi su una dichiarazione con prototipo devono essere di numero inferiore rispetto agli attributi sulla definizione o, al massimo, di pari numero.  
  
 Una causa possibile dell'errore C3163 riguarda il linguaggio di annotazione del codice sorgente Microsoft \(SAL\).  Le macro SAL si espandono solo se il progetto viene compilato utilizzando il flag **\/analyze**.  Un programma che viene compilato in modo corretto senza l'opzione \/analyze potrebbe generare l'errore C3163 se viene ricompilato con l'opzione \/analyze.  Per ulteriori informazioni su SAL, vedere [Annotazioni SAL](../../c-runtime-library/sal-annotations.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3163.  
  
```  
// C3163.cpp  
// compile with: /clr /c  
using namespace System;  
  
[CLSCompliant(true)] void f();  
[CLSCompliant(false)] void f() {}   // C3163  
// try the following line instead  
// [CLSCompliant(true)] void f() {}  
```  
  
## Vedere anche  
 [Annotazioni SAL](../../c-runtime-library/sal-annotations.md)