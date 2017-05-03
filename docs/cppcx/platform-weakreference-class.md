---
title: "Classe Platform::WeakReference | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform::WeakReference"
ms.assetid: 8cfe1977-a8c7-4b7b-b539-25c77ed4c5f1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Platform::WeakReference
Rappresenta un riferimento debole a un'istanza di una classe di riferimento.  
  
## Sintassi  
  
```vb  
class WeakReference  
```  
  
#### Parametri  
  
## Membri  
  
### Costruttori  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Costruttore WeakReference::WeakReference](../cppcx/weakreference-weakreference-constructor-c-cx.md)|Inizializza una nuova istanza della classe WeakReference.|  
  
### Metodi  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Metodo WeakReference::Resolve](../cppcx/weakreference-resolve-method-platform-namespace.md)|Restituisce un handle alla classe di riferimento sottostante o nullptr se l'oggetto non esiste più.|  
  
### Operatori  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[WeakReference::operator\=](../cppcx/weakreference-operator-assign.md)|Assegna un nuovo valore all'oggetto WeakReference.|  
  
## Note  
 La classe WeakReference stessa non è una classe di riferimento e pertanto non eredita da Platform::Object^ e non può essere usata nella firma di un metodo pubblico.  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)