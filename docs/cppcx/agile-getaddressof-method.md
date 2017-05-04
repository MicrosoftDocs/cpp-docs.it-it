---
title: "Metodo Agile::GetAddressOf | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::GetAddressOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::GetAddressOf"
ms.assetid: f015edf9-4155-4992-a6fc-7ff1edcc5d1e
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Agile::GetAddressOf
Reinizializza l'oggetto Agile corrente e restituisce l'indirizzo di un handle a un oggetto di tipo `T`.  
  
## Sintassi  
  
```cpp  
  
       T^* GetAddressOf()   
throw();  
```  
  
#### Parametri  
 `T`  
 Tipo specificato dal parametro typename del modello.  
  
## Valore restituito  
 Indirizzo di un handle a un oggetto di tipo `T`.  
  
## Note  
 Questa operazione rilascia la rappresentazione corrente di un oggetto di tipo `T`, se presente, reinizializza i membri dati dell'oggetto Agile, acquisisce il contesto di threading corrente e quindi restituisce l'indirizzo di una variabile handle\-oggetto che può rappresentare un oggetto non Agile. Per rappresentare un oggetto con un'istanza della classe Agile, usare l'operatore di assegnazione \([Agile::operator\=](../cppcx/agile-operator-assign-operator.md)\) per assegnare l'oggetto all'istanza della classe Agile.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)