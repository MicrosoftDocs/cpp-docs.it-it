---
title: "Operatore String::operator+ | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::operator+"
dev_langs: 
  - "C++"
ms.assetid: 919b5ba4-3d3b-47a4-9893-9a9ce51fb9c8
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore String::operator+
Indica se due oggetti [String](../cppcx/platform-string-class.md) specificati hanno lo stesso valore.  
  
## Sintassi  
  
```cpp  
  
bool String::operator+( String^ str1,  
                         String^ str2)  
  
```  
  
#### Parametri  
 `str1`  
 Primo oggetto `String`.  
  
 `str2`  
 Secondo oggetto `String`, il cui contenuto verrà aggiunto a `str1`.  
  
## Valore restituito  
 `true` se `str1` è uguale a `str2`; in caso contrario, `false`.  
  
## Note  
 Questo operatore crea un oggetto `String^` contenente i dati dei due operandi. Puoi usarlo per praticità quando non è fondamentale ottenere prestazioni estreme. Alcune chiamate a "`+`" in una funzione non saranno probabilmente rilevanti, ma se modifichi oggetti di grandi dimensioni o dati di testo in un ciclo rigido, usa tipi e meccanismi C\+\+ standard.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)