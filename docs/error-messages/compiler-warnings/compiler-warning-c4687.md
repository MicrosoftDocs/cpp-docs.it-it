---
title: "Avviso del compilatore C4687 | Microsoft Docs"
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
  - "C4687"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4687"
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4687
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': una classe astratta sealed non può implementare un'interfaccia 'interfaccia'  
  
 Un tipo astratto sealed è in genere utile solo per contenere funzioni membro static.  
  
 Per ulteriori informazioni, vedere [abstract](../../windows/abstract-cpp-component-extensions.md) e [sealed](../../windows/sealed-cpp-component-extensions.md).  
  
 Per impostazione predefinita, l'avviso C4687 viene generato come errore.  È possibile disattivarne la visualizzazione utilizzando il pragma [warning](../../preprocessor/warning.md).  Si consiglia di disattivare la visualizzazione dell'avviso C4687 solo se si desidera effettivamente implementare l'interfaccia in un tipo astratto sealed.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4687:  
  
```  
// C4687.cpp  
// compile with: /clr /c  
interface class A {};  
  
ref struct B sealed abstract : A {};   // C4687  
ref struct C sealed : A {};   // OK  
ref struct D abstract : A {};   // OK  
```