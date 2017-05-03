---
title: "Operatore StringReference::operator= | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::StringReference::operator="
dev_langs: 
  - "C++"
ms.assetid: 03a33467-d65f-4508-bcb4-17d7cc99398f
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore StringReference::operator=
Assegna l'oggetto specificato all'oggetto `StringReference` corrente.  
  
## Sintassi  
  
```cpp  
  
   StringReference& operator=(const StringReference& __fstrArg);  
  
StringReference& operator=(const ::default::char16* __strArg);  
  
```  
  
#### Parametri  
 `__fstrArg`  
 Indirizzo di un oggetto `StringReference` utilizzato per inizializzare l'oggetto `StringReference` corrente.  
  
 `__strArg`  
 Puntatore a una matrice di valori char16 utilizzata per inizializzare l'oggetto `StringReference` corrente.  
  
## Valore restituito  
 Riferimento a un oggetto di tipo `StringReference`.  
  
## Note  
 Poiché `StringReference` è una classe C\+\+ standard e non una classe di riferimento, non viene visualizzata in **Visualizzatore oggetti**.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::StringReference](../cppcx/platform-stringreference-class.md)