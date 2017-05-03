---
title: "Classe Platform::Collections::VectorView | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView (classe)"
ms.assetid: 05cd461d-dce7-49d3-b0e7-2e5c78ed8192
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe Platform::Collections::VectorView
Rappresenta una visualizzazione in sola lettura di una raccolta sequenziale di oggetti a cui è possibile accedere singolarmente attraverso l'indice. Il tipo di ciascun oggetto nella raccolta è specificato dal parametro del modello.  
  
## Sintassi  
  
```  
template <typename T, typename E>  
   ref class VectorView sealed;  
```  
  
#### Parametri  
 `T`  
 Tipo degli elementi contenuti nell'oggetto `VectorView`.  
  
 `E`  
 Specifica un predicato binario per verificare l'uguaglianza con valori di tipo `T`. Il valore predefinito è `std::equal_to<T>`.  
  
## Note  
 La classe `VectorView` implementa l'interfaccia [Windows::Foundation::Collections::IVectorView\<T\>](http://go.microsoft.com/fwlink/p/?LinkId=262411) e il supporto per gli iteratori della libreria dei modelli standard \(STL\).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[VectorView::VectorView \(costruttore\)](../cppcx/vectorview-vectorview-constructor.md)|Inizializza una nuova istanza della classe VectorView.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[VectorView::First \(metodo\)](../cppcx/vectorview-first-method.md)|Restituisce un iteratore che specifica il primo elemento in VectorView.|  
|[VectorView::GetAt \(metodo\)](../cppcx/vectorview-getat-method.md)|Recupera l'elemento dell'oggetto VectorView corrente indicato dall'indice specificato.|  
|[VectorView::GetMany \(metodo\)](../cppcx/vectorview-getmany-method.md)|Recupera una sequenza di elementi dall'oggetto VectorView corrente, a partire dall'indice specificato.|  
|[VectorView::IndexOf \(metodo\)](../cppcx/vectorview-indexof-method.md)|Cerca l'elemento specificato nell'oggetto VectorView corrente e, se lo trova, restituisce l'indice dell'elemento.|  
|[Metodo VectorView::Size](../cppcx/vectorview-size-method.md)|Restituisce il numero di elementi nell'oggetto VectorView corrente.|  
  
## Gerarchia di ereditarietà  
 `VectorView`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf)