---
title: "Exception::HResult (propriet&#224;) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::HResult"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::HResult (proprietà)"
ms.assetid: 24ef008d-6884-4b8b-9556-41bfa6e1edf1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::HResult (propriet&#224;)
Valore HRESULT corrispondente all'eccezione.  
  
## Sintassi  
  
```cpp  
public:property int HResult {    int get();}  
```  
  
## Valore proprietà  
 Valore HRESULT.  
  
## Note  
 La maggior parte delle eccezioni inizia come errori COM, che vengono restituiti come valori HRESULT. C\+\+\/CX converte questi valori in oggetti Platform::Exception^ e la proprietà archivia il valore del codice di errore originale.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::Exception \(classe\)](../cppcx/platform-exception-class.md)