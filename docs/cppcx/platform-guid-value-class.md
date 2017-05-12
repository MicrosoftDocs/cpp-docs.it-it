---
title: "Classe di valori Platform::Guid | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Guid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Struct Platform::Guid"
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# Classe di valori Platform::Guid
Rappresenta un tipo [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx) nel sistema di tipi di Windows Runtime.  
  
## Sintassi  
  
```cpp  
public value struct Guid  
```  
  
## Membri  
 Il GUID dispone dei metodi Equals\(\), GetHashCode\(\) e ToString\(\) derivati dalla [Classe Platform::Object](../cppcx/platform-object-class.md)e del metodo GetTypeCode\(\) derivato dalla [Platform::Type \(classe\)](../cppcx/platform-type-class.md). Il GUID dispone inoltre dei membri seguenti.  
  
|Membro|Descrizione|  
|------------|-----------------|  
|Guid|Inizializza una nuova istanza dello struct Guid.|  
|operator\=\=|Operatore di uguaglianza.|  
|operator\!\=|Operatore di disuguaglianza.|  
|operator\(\)|Converte Guid in GUID.|  
  
## Note  
 Per un esempio di come generare un nuovo oggetto Platform::Guid tramite la funzione [CoCreateGuid](http://msdn.microsoft.com/library/windows/desktop/ms688568\(v=vs.85\).aspx) di Windows, vedere il post di blog relativo a [come generare un GUID per il componente WinRT](http://blogs.msdn.com/b/eternalcoding/archive/2013/03/25/winrt-component-how-to-generate-a-guid.aspx)  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)