---
title: "Costruttore ArrayReference::ArrayReference | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::ArrayReference::ArrayReference"
dev_langs: 
  - "C++"
ms.assetid: 9fc7dfcf-47af-40ba-a697-da476fb90efc
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore ArrayReference::ArrayReference
Inizializza una nuova istanza della classe [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md).  
  
## Sintassi  
  
```cpp  
ArrayReference(TArg* ataArg, unsigned int sizeArg, bool needsInitArg = false);  
ArrayReference(ArrayReference&& otherArg)  
  
```  
  
#### Parametri  
 `dataArg`  
 Puntatore alla matrice di dati.  
  
 `sizeArg`  
 Numero di elementi nella matrice di origine.  
  
 `otherArg`  
 Oggetto `ArrayReference` i cui dati verranno spostati per inizializzare la nuova istanza.  
  
## Note  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Platform::ArrayReference \(classe\)](../cppcx/platform-arrayreference-class.md)   
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)