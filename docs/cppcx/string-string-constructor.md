---
title: "Costruttore String::String | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::String"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::String"
ms.assetid: 80b6461a-5b12-4dcb-9323-f2c5f310bbc6
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore String::String
Inizializza una nuova istanza della classe String con una copia dei dati della stringa di input.  
  
## Sintassi  
  
```cpp  
  
String();  
  
String(  
  char16* s  
)  
  
String(  
  char16* s,   
  unsigned int n  
)  
```  
  
## Parametri  
 `s`  
 Serie di caratteri "wide" che inizializzano la stringa char16  
  
 `n`  
 Numero che specifica la lunghezza della stringa.  
  
## Note  
 Se le prestazioni sono essenziali e controlli la durata della stringa di origine, puoi usare [Platform::StringReference](../cppcx/platform-stringreference-class.md) invece di String.  
  
## Esempio  
  
```  
String^ s = L”Hello!”;  
```  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)