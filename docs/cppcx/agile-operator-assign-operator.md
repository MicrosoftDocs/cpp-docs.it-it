---
title: "Operatore Agile::operator= | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::operator="
ms.assetid: 2c413bef-f103-4911-afb3-0dac5f6a760e
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore Agile::operator=
Assegna l'oggetto specificato all'oggetto Agile corrente.  
  
## Sintassi  
  
```cpp  
  
   Agile<T> operator=(  
   T^ object  
) throw();  
  
   Agile<T> operator=(  
      const Agile<T>& object  
) throw();  
  
   Agile<T> operator=(  
      Agile<T>&& object  
) throw();  
  
   T^ operator=(  
      IUnknown* lp  
) throw();  
  
```  
  
#### Parametri  
 `T`  
 Tipo specificato dal typename del modello.  
  
 `object`  
 Oggetto o handle a un oggetto che viene copiato o spostato nell'oggetto Agile corrente.  
  
 `lp`  
 Puntatore a interfaccia IUnknown di un oggetto.  
  
## Valore restituito  
 Handle a un oggetto di tipo `T`  
  
## Note  
 La prima versione dell'operatore di assegnazione copia un handle a un tipo di riferimento all'oggetto Agile corrente. La seconda versione copia un riferimento a un tipo Agile all'oggetto Agile corrente. La terza versione sposta un tipo Agile all'oggetto Agile corrente. La quarta versione sposta un puntatore a un oggetto COM all'oggetto Agile corrente.  
  
 L'operazione di assegnazione rende automaticamente persistente il contesto dell'oggetto Agile corrente.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)