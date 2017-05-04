---
title: "Metodo Object::GetHashCode | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::GetHashCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Object::GetHashCode"
ms.assetid: 403a60e9-be1d-4702-b14d-27fa4b2a043b
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Object::GetHashCode
Restituisce il valore di identità [IUnknown](../atl/iunknown.md)\* per questa istanza se è un oggetto COM, oppure un valore hash calcolato se non è un oggetto COM.  
  
## Sintassi  
  
```cpp  
public:int GetHashCode()  
```  
  
## Valore restituito  
 Valore numerico che identifica in modo univoco l'oggetto.  
  
## Note  
 Puoi usare GetHashCode per creare chiavi per gli oggetti nella mappa. Puoi confrontare i codici hash tramite [Metodo Object::Equals](../cppcx/object-equals-method.md). Se il percorso del codice è estremamente critico e `GetHashCode` e `Equals` non sono sufficientemente veloci, puoi passare al livello COM sottostante ed effettuare confronti tra puntatori [IUnknown](../atl/iunknown.md) nativi.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Object](../cppcx/platform-object-class.md)