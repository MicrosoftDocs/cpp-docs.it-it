---
title: "Costruttore StringReference::StringReference | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::StringReference::StringReference"
dev_langs: 
  - "C++"
ms.assetid: 87dd9201-e638-4913-b37c-7091ae3f91ea
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore StringReference::StringReference
Inizializza una nuova istanza della classe `StringReference`.  
  
## Sintassi  
  
```cpp  
  
    StringReference();  
  
   StringReference(const StringReference& __fstrArg)  
  
StringReference(const ::default::char16* __strArg)  
  
StringReference(const ::default::char16* __strArg, size_t __lenArg)  
```  
  
#### Parametri  
 `__fstrArg`  
 `StringReference` i cui dati vengono utilizzati per inizializzare la nuova istanza.  
  
 `__strArg`  
 Puntatore a una matrice di valori char16 utilizzata per inizializzare la nuova istanza.  
  
 `__lenArg`  
 Numero di elementi in `__strArg`.  
  
## Note  
 La prima versione di questo costruttore rappresenta il costruttore predefinito. La seconda versione inizializza la nuova classe `StringReference` dell'istanza dall'oggetto specificato dal parametro `__fstrArg`. Il terzo e il quarto overload inizializzano una nuova istanza di `StringReference` da una matrice di valori char16. char16 rappresenta un carattere di testo UNICODE a 16 bit.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::StringReference](../cppcx/platform-stringreference-class.md)