---
title: "IntPtr::IntPtr (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IntPtr::IntPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IntPtr::IntPtr (costruttore)"
ms.assetid: 828b4c18-790d-4fb4-90fe-47769ff381c0
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# IntPtr::IntPtr (costruttore)
Inizializza una nuova istanza di un elemento IntPtr con il valore specificato.  
  
## Sintassi  
  
```cpp  
IntPtr( __int64 handle-or-pointer );   IntPtr( void* value );   IntPtr( int 32-bit_value );  
```  
  
#### Parametri  
 predefinito  
 Handle o puntatore a 64 bit o puntatore a un valore a 64 bit o a un valore a 32 bit che può essere convertito in un valore a 64 bit.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Classe di valori Platform::IntPtr](../cppcx/platform-intptr-value-class.md)