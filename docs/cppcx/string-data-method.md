---
title: "Metodo String::Data | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Data"
ms.assetid: 9be4e015-dfb8-431e-a252-8498bd833f03
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::Data
Restituisce un puntatore all'inizio del buffer di dati dell'oggetto come matrice di tipo C di elementi `char16` \(`wchar_t`\).  
  
## Sintassi  
  
```  
const char16* Data()  
```  
  
## Valore restituito  
 Puntatore all'inizio di una matrice `const` `char16` di caratteri Unicode \(`char16` è un oggetto typedef per `wchar_t`\).  
  
## Note  
 Puoi usare questo metodo per la conversione da `Platform::String^` a `wchar_t*`. Quando l'oggetto `String` esce dall'ambito, non viene più garantito che il puntatore a dati sia valido. Per memorizzare dati oltre la durata dell'oggetto `String` originale, usa [wcscpy\_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) per copiare la matrice nella memoria che hai allocato manualmente.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)   
 [Metodo String::Begin](../cppcx/string-begin-method.md)