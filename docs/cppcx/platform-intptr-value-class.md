---
title: "Classe di valori Platform::IntPtr | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IntPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Struct Platform::IntPtr"
ms.assetid: 6c0326e8-edfd-4e53-a963-240b845dcde8
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe di valori Platform::IntPtr
Rappresenta un puntatore o un handle con segno la cui dimensione è specifica della piattaforma \(32 bit o 64 bit\).  
  
## Sintassi  
  
```cpp  
public value struct IntPtr  
```  
  
## Membri  
 IntPtr dispone inoltre dei membri seguenti:  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[IntPtr::IntPtr \(costruttore\)](../cppcx/intptr-intptr-constructor.md)|Inizializza una nuova istanza di IntPtr.|  
|[Operatore IntPtr::op\_explicit](../cppcx/intptr-op-explicit-operator.md)|Converte il parametro specificato in un IntPtr o in un puntatore a un valore IntPtr.|  
|[IntPtr::ToInt32 \(metodo\)](../cppcx/intptr-toint32-method.md)|Converte l'elemento IntPtr corrente in un Integer a 32 bit.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)