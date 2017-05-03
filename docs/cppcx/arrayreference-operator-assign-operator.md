---
title: "Operatore ArrayReference::operator= | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::ArrayReference::operator="
dev_langs: 
  - "C++"
ms.assetid: 131a4612-d66b-48e4-90af-c665ccc0cce4
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore ArrayReference::operator=
Assegna l'oggetto specificato all'oggetto [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) utilizzando la semantica di spostamento.  
  
## Sintassi  
  
```cpp  
  
ArrayReference& operator=(ArrayReference&& __otherArg);  
  
```  
  
#### Parametri  
 `__ otherArg`  
 Oggetto spostato nell'oggetto `ArrayReference` corrente.  
  
## Valore restituito  
 Riferimento a un oggetto di tipo `ArrayReference`.  
  
## Note  
 `Platform::ArrayReference` è un modello di classe C\+\+ standard, non una classe di riferimento.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Platform::ArrayReference \(classe\)](../cppcx/platform-arrayreference-class.md)