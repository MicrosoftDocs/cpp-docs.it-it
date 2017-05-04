---
title: "Classe Platform::Agile | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile"
ms.assetid: e34459a9-c429-4c79-97fd-030c43ca4155
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Platform::Agile
Rappresenta un oggetto con MashalingBehavior\=Standard come oggetto Agile, che riduce fortemente le probabilità che si verifichino eccezioni di threading di runtime.`Agile<T>` consente all'oggetto non Agile di chiamare o essere chiamato dallo stesso thread o da un thread differente. Per altre informazioni, vedere [Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md).  
  
## Sintassi  
  
```scr  
  
template <typename T>  
    class Agile  
;  
```  
  
#### Parametri  
 T  
 Typename per la classe non Agile.  
  
## Note  
 Le classi in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] sono per lo più Agile. Un oggetto Agile può chiamare o essere chiamato da un oggetto in\-process o out\-of\-process nello stesso thread o in uno differente. Se un oggetto non è Agile, eseguire il wrapping dell'oggetto non Agile in un oggetto `Agile<T>`, che è Agile. Si può quindi eseguire il marshalling dell'oggetto `Agile<T>` e usare l'oggetto non Agile sottostante.  
  
 La classe `Agile<T>` è una classe C\+\+ standard nativa e richiede `agile.h`. Rappresenta l'oggetto non Agile e il *contesto* dell'oggetto Agile. Il contesto specifica il modello di threading e il comportamento di marshalling di un oggetto Agile. Il sistema operativo usa il contesto per determinare come eseguire il marshalling di un oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Agile::Agile](../cppcx/agile-agile-constructor.md)|Inizializza una nuova istanza della classe Agile.|  
|[Distruttore Agile::~Agile](../cppcx/agile-tilde-agile-destructor.md)|Eliminata l'istanza corrente della classe Agile.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Agile::Get](../cppcx/agile-get-method.md)|Restituisce un handle all'oggetto rappresentato dall'oggetto Agile corrente.|  
|[Agile::GetAddressOf](../cppcx/agile-getaddressof-method.md)|Reinizializza l'oggetto Agile corrente e restituisce l'indirizzo di un handle a un oggetto di tipo `T`.|  
|[Agile::GetAddressOfForInOut](../cppcx/agile-getaddressofforinout-method.md)|Restituisce l'indirizzo di un handle all'oggetto rappresentato dall'oggetto Agile corrente.|  
|[Agile::Release](../cppcx/agile-release-method.md)|Rimuove l'oggetto e il contesto sottostanti dell'oggetto Agile corrente.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Agile::operator\-\>](../cppcx/agile-operator-arrow-operator.md)|Recupera un handle all'oggetto rappresentato dall'oggetto Agile corrente.|  
|[Agile::operator\=](../cppcx/agile-operator-assign-operator.md)|Assegna il valore specificato all'oggetto Agile corrente.|  
  
## Gerarchia di ereditarietà  
 `Object`  
  
 `Agile`  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** agile.h  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)