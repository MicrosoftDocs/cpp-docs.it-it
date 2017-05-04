---
title: "Costruttore Agile::Agile | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::Agile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::Agile"
ms.assetid: 33c1df82-f5db-4750-98cc-0daa03be4e59
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore Agile::Agile
Inizializza una nuova istanza della classe Agile.  
  
## Sintassi  
  
```cpp  
  
 Agile();  
  
Agile(T^ object);   
  
Agile(const Agile<T>& object);  
  
Agile(Agile<T>&& object);  
  
```  
  
#### Parametri  
 `T`  
 Tipo specificato dal parametro typename del modello.  
  
 `object`  
 Nella seconda versione di questo costruttore, oggetto utilizzato per inizializzare una nuova istanza Agile. Nella terza versione, oggetto copiato nella nuova istanza Agile. Nella quarta versione, oggetto spostato nella nuova istanza Agile.  
  
## Note  
 La prima versione di questo costruttore rappresenta il costruttore predefinito. Nella seconda versione viene inizializzata la nuova classe Agile dell'istanza dall'oggetto specificato dal parametro `object`. La terza versione rappresenta il costruttore di copia. La quarta versione rappresenta il costruttore di spostamento. Questo costruttore non può generare eccezioni.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)