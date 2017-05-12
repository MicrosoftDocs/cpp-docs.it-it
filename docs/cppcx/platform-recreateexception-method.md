---
title: "Metodo Platform::ReCreateException | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::ReCreateException"
dev_langs: 
  - "C++"
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo Platform::ReCreateException
Questo metodo è solo per uso interno e non è destinata al codice utente. Usa invece il [metodo Exception::CreateException](../cppcx/exception-createexception-method.md).  
  
## Sintassi  
  
```vb  
static Exception^ ReCreateException(int hr)  
```  
  
#### Parametri  
  
## Valore proprietà\/Valore restituito  
 Restituisce un nuovo oggetto Platform::Exception^, in base all'HRESULT specificato.  
  
## Equivalente .NET Framework  
  
## Requisiti