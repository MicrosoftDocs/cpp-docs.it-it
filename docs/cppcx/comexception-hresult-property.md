---
title: "COMException::HResult (propriet&#224;) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::COMException::HResult"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COMException::HResult (proprietà)"
ms.assetid: 53762ab5-ce71-4397-b7b4-8175741c838f
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# COMException::HResult (propriet&#224;)
Valore HRESULT corrispondente all'eccezione.  
  
## Sintassi  
  
```cpp  
public:property int HResult {    int get();}  
```  
  
## Valore proprietà  
 Valore HRESULT che specifica l'errore.  
  
## Note  
 Per altre informazioni su come interpretare il valore HRESULT, vedere l'articolo relativo alla [struttura dei codici di errore COM](http://go.microsoft.com/fwlink/p/?LinkId=262045).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Intestazione della sottosezione  
  
## Vedere anche  
 [Platform::COMException \(classe\)](../cppcx/platform-comexception-class.md)