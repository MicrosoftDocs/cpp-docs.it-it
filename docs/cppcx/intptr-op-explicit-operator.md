---
title: "Operatore IntPtr::op_explicit | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IntPtr::op_explicit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IntPtr::op_explicit (metodo)"
ms.assetid: cc52e9d5-fe73-471b-8cff-d9f684ba6e20
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore IntPtr::op_explicit
Converte il parametro specificato in un IntPtr o in un puntatore a un valore IntPtr.  
  
## Sintassi  
  
```cpp  
static IntPtr::operator IntPtr( void* value1);   static IntPtr::operator IntPtr( int value2);   static IntPtr::operator void*( IntPtr value3 );  
```  
  
#### Parametri  
 value1  
 Puntatore a un handle o a un elemento IntPtr.  
  
 value2  
 Integer a 32 bit che può essere convertito in un elemento IntPtr.  
  
 value3  
 IntPtr.  
  
## Valore restituito  
 Il primo e il secondo operatore restituiscono un elemento IntPtr. Il terzo operatore restituisce un puntatore al valore rappresentato dall'elemento IntPtr corrente.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Classe di valori Platform::IntPtr](../cppcx/platform-intptr-value-class.md)