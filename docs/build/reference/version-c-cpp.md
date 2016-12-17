---
title: "VERSION (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VERSION"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VERSION (istruzione) file .def"
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# VERSION (C/C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica a LINK di inserire un numero nell'intestazione del file EXE o della DLL.  
  
```  
VERSION major[.minor]  
```  
  
## Note  
 Gli argomenti *major* e *minor* sono numeri decimali compresi nell'intervallo tra 0 e 65,535.  L'impostazione predefinita è la versione 0.0.  
  
 Un metodo equivalente per specificare un numero di versione è rappresentato dall'uso dell'opzione [Informazioni sulla versione](../../build/reference/version-version-information.md) \(\/VERSION\).  
  
## Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)