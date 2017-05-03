---
title: "Platform::ArrayReference (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::ArrayReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::ArrayReference (classe)"
ms.assetid: 9ab3b15e-8a60-4600-8fcb-7d6c86284f4b
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Platform::ArrayReference (classe)
`ArrayReference` è un tipo di ottimizzazione che puoi sostituire a [Platform::Array^](../cppcx/platform-array-class.md) nei parametri di input quando vuoi compilare una matrice di tipo C con dati di input.  
  
## Sintassi  
  
```vb  
  
```  
  
```csharp  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ArrayReference::ArrayReference](../cppcx/arrayreference-arrayreference-constructor.md)|Inizializza una nuova istanza della classe `ArrayReference`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ArrayReference::operator\(\)](../cppcx/arrayreference-operator-call-operator.md)|Converte questo oggetto `ArrayReference` in `Platform::Array<T>^*`.|  
|[Operatore ArrayReference::operator\=](../cppcx/arrayreference-operator-assign-operator.md)|Assegna il contenuto di un altro oggetto `ArrayReference` a questa istanza.|  
  
## Eccezioni  
  
## Note  
 Utilizzando `ArrayReference` per compilare una matrice di tipo C, puoi evitare l'operazione di copia aggiuntiva che sarebbe richiesta per la copia prima in una variabile `Platform::Array` quindi nella matrice di tipo C. Quando usi `ArrayReference`, viene effettuata un'unica operazione di copia. Per un esempio di codice, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Intestazione della sottosezione  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)