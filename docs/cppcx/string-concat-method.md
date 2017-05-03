---
title: "Metodo String::Concat | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Concat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Concat"
ms.assetid: 68052d22-3df0-4777-828d-fc3a8e8a3ab7
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::Concat
Concatena i valori di due oggetti String specificati.  
  
## Sintassi  
  
```cpp  
  
String^ Concat( String ^ str1,   
String ^ str2  
)  
  
```  
  
#### Parametri  
 `str1`  
 Primo oggetto String o `null`.  
  
 `str2`  
 Secondo oggetto String o `null`.  
  
## Valore restituito  
 Nuovo oggetto String^ il cui valore è dato dalla concatenazione dei valori di `str1` e `str2`.  
  
 Se `str1` è `null` e `str2` è diverso da Null, viene restituito `str1` . Se `str2` è `null` e `str1` è diverso da Null, viene restituito `str2`. Se `str1` e `str2` sono entrambi `null`, viene restituita la stringa vuota \(L""\).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)