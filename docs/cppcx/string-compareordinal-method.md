---
title: "Metodo String::CompareOrdinal | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::CompareOrdinal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::CompareOrdinal"
ms.assetid: dd4a7acc-fd23-4f1e-af85-64b9086f63f8
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::CompareOrdinal
Confronta due oggetti `String` valutando i valori numerici dei caratteri corrispondenti nei due valori stringa rappresentati dagli oggetti.  
  
## Sintassi  
  
```cpp  
  
int CompareOrdinal(  
           String^ str1,   
           String^ str2)  
  
```  
  
#### Parametri  
 `str1`  
 Primo oggetto String.  
  
 `str2`  
 Secondo oggetto String.  
  
## Valore restituito  
 Intero che indica la relazione lessicale tra i due termini di confronto. Nella tabella seguente sono elencati i valori restituiti possibili.  
  
|Valore|Condizione|  
|------------|----------------|  
|\-1|`str1` è minore di `str2`.|  
|0|`str1` è uguale `str2`.|  
|1|`str1` è maggiore di `str2`.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)