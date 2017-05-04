---
title: "Classe Platform::StringReference | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::StringReference"
dev_langs: 
  - "C++"
ms.assetid: 2d09c7ec-0f16-458e-83ed-7225a1b9221e
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Platform::StringReference
Tipo di ottimizzazione che puoi usare per passare dati in formato stringa dai parametri di input di `Platform::String^` ad altri metodi con un minimo di operazioni di copia.  
  
## Sintassi  
  
```cpp  
class StringReference  
```  
  
## Note  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore StringReference::StringReference](../cppcx/stringreference-stringreference-constructor.md)|Due costruttori per creare istanze di `StringReference`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo StringReference::Data](../cppcx/stringreference-data-method.md)|Restituisce i dati in formato stringa come matrice di valori char16.|  
|[Metodo StringReference::Length](../cppcx/stringreference-length-method.md)|Restituisce il numero di caratteri della stringa.|  
|[Metodo StringReference::GetHSTRING](../cppcx/stringreference-gethstring-method.md)|Restituisce i dati in formato stringa come HSTRING.|  
|[Metodo StringReference::GetString](../cppcx/stringreference-getstring-method.md)|Restituisce i dati in formato stringa come `Platform::String^`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`StringReference::operator=`|Assegna `StringReference` a una nuova istanza di `StringReference`.|  
|`StringReference::operator()`|Converte `StringReference` in `Platform::String^`.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Platform::StringReference Class](../cppcx/platform-stringreference-class.md)