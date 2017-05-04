---
title: "Classe Platform::Object | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Object (classe)"
ms.assetid: 709e84a8-0bff-471b-bc14-63e424080b5a
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe Platform::Object
Fornisce il comportamento comune per le classi e gli struct di riferimento nelle app Windows Store. Tutte le istanze delle classi e degli struct di riferimento sono implicitamente convertibili a Platform::Object^ e possono eseguire l'override del relativo metodo ToString virtuale.  
  
## Sintassi  
  
```scr  
public ref class Object : Object  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Object::Object](../cppcx/object-object-constructor.md)|Inizializza una nuova istanza della classe Object.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Object::Equals](../cppcx/object-equals-method.md)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|  
|[Metodo Object::GetHashCode](../cppcx/object-gethashcode-method.md)|Restituisce il codice hash per l'istanza.|  
|[Metodo Object::ReferenceEquals](../cppcx/object-referenceequals-method.md)|Determina se le istanze di Object specificate rappresentano la stessa istanza.|  
|[Metodo ToString](../cppcx/object-tostring-method-c-cx.md)|Restituisce una stringa che rappresenta l'oggetto corrente. È possibile eseguirne l'override.|  
|[Metodo GetType](../cppcx/object-gettype-method.md)|Ottiene un oggetto [Platform::Type](../cppcx/platform-type-class.md) che descrive l'istanza corrente.|  
  
## Gerarchia di ereditarietà  
 `Object`  
  
 `Object`  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)