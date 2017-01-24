---
title: "Errore del compilatore C3753 | Microsoft Docs"
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
  - "C3753"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3753"
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3753
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

proprietà generica non consentita  
  
 L'elenco dei parametri generici può essere visualizzato solo su classi, strutture o funzioni gestite.  
  
 Per ulteriori informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md) e [property](../../windows/property-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3753:  
  
```  
// C3753.cpp  
// compile with: /clr /c  
ref struct A {  
   generic <typename T>  
   property int i;   // C3753 error  
};  
```