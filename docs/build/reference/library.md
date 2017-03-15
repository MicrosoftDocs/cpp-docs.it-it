---
title: "LIBRARY | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LIBRARY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LIBRARY (istruzione) file .def"
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# LIBRARY
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica a LINK di creare una DLL.  Verrà creata contemporaneamente anche una libreria di importazione, a meno che nella compilazione non sia utilizzato un file EXP.  
  
```  
LIBRARY [library][BASE=address]  
```  
  
## Note  
 L'argomento *library* specifica il nome della DLL.  È anche possibile utilizzare l'opzione del linker [\/OUT](../../build/reference/out-output-file-name.md) per specificare il nome di output della DLL.  
  
 L'argomento BASE\=*indirizzo* consente di impostare l'indirizzo di base utilizzato dal sistema operativo per caricare la DLL.  Questo argomento esegue l'override della posizione predefinita della DLL, 0x10000000.  Per informazioni dettagliate sugli indirizzi di base, vedere la descrizione dell'opzione [\/BASE](../../build/reference/base-base-address.md).  
  
 Utilizzare l'opzione del linker [\/DLL](../../build/reference/dll-build-a-dll.md) quando si compila una DLL.  
  
## Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)