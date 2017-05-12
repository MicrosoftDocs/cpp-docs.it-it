---
title: "Platform::IDisposable (interfaccia) | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IDisposable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::IDisposable (interfaccia)"
ms.assetid: f4344056-7030-42ed-bc98-b140edffddcd
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 2
---
# Platform::IDisposable (interfaccia)
Utilizzata per rilasciare le risorse non gestite.  
  
## Sintassi  
  
```cpp  
public interface class IDisposable  
```  
  
## Attributi  
 **GuidAttribute**\("de0cbaea\-8065\-4a45\-b196\-c9d443f9bab3"\)  
  
 **VersionAttribute**\(NTDDI\_WIN8\)  
  
## Membri  
 L'interfaccia IDisposable eredita dall'interfaccia IUnknown. IDisposable include anche i tipi di membri seguenti:  
  
 **Metodi**  
  
 L'interfaccia IDisposable include i metodi seguenti.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|HYPERLINK "http:\/\/msdnpreview.redmond.corp.microsoft.com\/en\-us\/library\/windows\/apps\/platform.idisposable.dispose.aspx" Dispose|Utilizzata per rilasciare le risorse non gestite.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform