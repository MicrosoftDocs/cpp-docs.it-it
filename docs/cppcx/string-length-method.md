---
title: "Metodo String::Length | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Length"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Length"
ms.assetid: 92376897-1bf2-4b7a-9298-d2d3f05d8d6b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::Length
Recupera il numero di caratteri nell'oggetto in formato stringa corrente.  
  
## Sintassi  
  
```cpp  
  
unsigned int Length()  
```  
  
## Valore restituito  
 Numero di caratteri nell'oggetto in formato stringa corrente.  
  
## Note  
 La lunghezza di una stringa senza caratteri è zero. La lunghezza della stringa seguente è 5:  
  
```  
  
String^ str = "Hello";  
int len = str->Length(); //len = 5  
```  
  
 La matrice di caratteri restituita da [Metodo String::Data](../cppcx/string-data-method.md) dispone di un carattere aggiuntivo, ovvero il carattere di terminazione NULL o ‘\\0’. La lunghezza di questo carattere è inoltre di due byte.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)