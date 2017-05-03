---
title: "Platform::Exception (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Exception (classe)"
ms.assetid: ca1d5a67-3a5a-48fe-8099-f9c38a2d2dce
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# Platform::Exception (classe)
Rappresenta gli errori che si verificano durante l'esecuzione dell'applicazione. Le classi di eccezione personalizzate non possono essere derivate da `Platform::Exception`. Se devi utilizzare un'eccezione personalizzata, puoi utilizzare `Platform::COMException` e specificare un valore HRESULT specifico dell'applicazione.  
  
## Sintassi  
  
```cpp  
public ref class Exception : Object,    IException,    IPrintable,    IEquatable  
```  
  
## Membri  
 La classe `Exception` eredita dalla classe `Object` e dalle interfacce `IException`, `IPrintable` e `IEquatable`.  
  
 La classe `Exception` dispone dei seguenti generi di membri.  
  
### Costruttori  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Exception::Exception \(costruttore\)](../cppcx/exception-exception-constructor.md)|Inizializza una nuova istanza della classe `Exception`.|  
  
### Metodi  
 La classe `Exception` eredita i metodi `Equals()`, `Finalize()`,`GetHashCode()`,`GetType()`,`MemberwiseClose()` e `ToString()` da [Classe Platform::Object](../cppcx/platform-object-class.md). La classe `Exception` include anche il metodo seguente.  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Exception::CreateException \(metodo\)](../cppcx/exception-createexception-method.md)|Crea un'eccezione che rappresenta il valore HRESULT specificato.|  
  
### Proprietà  
 La classe Exception presenta inoltre le proprietà seguenti.  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Exception::HResult \(proprietà\)](../cppcx/exception-hresult-property.md)|Valore HRESULT corrispondente all'eccezione.|  
|[Exception::Message \(proprietà\)](../cppcx/exception-message-property.md)|Messaggio in cui viene descritta l'eccezione. Questo valore è di sola lettura e non può essere modificato una volta costruito `Exception`.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)