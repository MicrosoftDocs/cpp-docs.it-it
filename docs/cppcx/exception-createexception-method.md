---
title: "Exception::CreateException (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::CreateException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::CreateException (metodo)"
ms.assetid: 70e72bb4-3fec-478d-af3d-9ec8762d2825
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::CreateException (metodo)
Crea Platform::Exception^ da un valore HRESULT specificato.  
  
## Sintassi  
  
```cpp  
Exception^ CreateException(int32 hr)  
Exception^ CreateException(int32 hr, Platform::String^ message)  
```  
  
## Parametri  
 hr  
 Valore HRESULT che in genere si ottiene da una chiamata a un metodo COM. Se il valore è 0, che è uguale a S\_OK, il metodo genera [Platform::InvalidArgumentException](../cppcx/platform-invalidargumentexception-class.md) in quanto i metodi COM con esito positivo non devono generare eccezioni.  
  
 messaggio  
 Stringa che descrive l'errore.  
  
## Valore restituito  
 Eccezione che rappresenta il valore HRESULT dell'errore.  
  
## Note  
 Utilizza questo metodo per creare un'eccezione da un valore HRESULT restituito, ad esempio, da una chiamata a un metodo di un'interfaccia COM. Puoi utilizzare l'overload che accetta un parametro String^ per fornire un messaggio personalizzato.  
  
 È consigliabile utilizzare CreateException per creare un'eccezione fortemente tipizzata, anziché creare [Platform::COMException](../cppcx/platform-comexception-class.md) che contiene solo il valore HRESULT.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)