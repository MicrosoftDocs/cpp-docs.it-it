---
title: "Costruttori Guid::Guid | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Guid::Guid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Guid::Guid"
  - "Guid::Guid"
ms.assetid: dfa4dcad-1c3b-481f-9f60-05141b9788d1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttori Guid::Guid
Inizializza una nuova istanza di uno struct Guid.  
  
## Sintassi  
  
```cpp  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        unsigned char d,   
        unsigned char e,   
        unsigned char f,   
        unsigned char g,   
        unsigned char h,   
        unsigned char i,   
        unsigned char j,   
        unsigned char k  
);  
  
    Guid(   
        GUID m  
);  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        Array<unsigned char>^ n  
);  
```  
  
#### Parametri  
 `a`  
 Primi 4 byte del GUID.  
  
 `b`  
 I 2 byte successivi del GUID.  
  
 `c`  
 I 2 byte successivi del GUID.  
  
 `d`  
 Byte successivo del GUID.  
  
 `e`  
 Byte successivo del GUID.  
  
 `f`  
 Byte successivo del GUID.  
  
 `g`  
 Byte successivo del GUID.  
  
 `h`  
 Byte successivo del GUID.  
  
 `i`  
 Byte successivo del GUID.  
  
 `j`  
 Byte successivo del GUID.  
  
 `k`  
 Byte successivo del GUID.  
  
 `m`  
 GUID come definito.  
  
 `n`  
 Gli 8 byte rimanenti del GUID.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Classe di valori Platform::Guid](../cppcx/platform-guid-value-class.md)