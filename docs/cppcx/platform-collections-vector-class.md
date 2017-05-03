---
title: "Classe Platform::Collections::Vector | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector (classe) (C++/Cx)"
ms.assetid: aee8c076-9700-47c3-99b6-799fd3edb0ca
caps.latest.revision: 17
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe Platform::Collections::Vector
Rappresenta una raccolta sequenziale di oggetti a cui è possibile accedere tramite indice.  
  
## Sintassi  
  
```  
template <typename T, typename E>  
   ref class Vector sealed;  
```  
  
#### Parametri  
 `T`  
 Tipo degli elementi contenuti nell'oggetto Vector.  
  
 `E`  
 Specifica un predicato binario per verificare l'uguaglianza con valori di tipo `T`. Il valore predefinito è `std::equal_to<T>`.  
  
## Note  
 I tipi consentiti sono:  
  
1.  Integer  
  
2.  classe di interfaccia ^  
  
3.  classe di riferimento pubblica^  
  
4.  value struct  
  
5.  classe enum pubblica  
  
 La classe Vector è l'implementazione concreta di C\+\+ dell'interfaccia [Windows::Foundation::Collections::IVector](http://go.microsoft.com/fwlink/p/?LinkId=262410).  
  
 Se tenti di utilizzare un tipo Vector in un valore restituito pubblico o in un parametro, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IVector](http://go.microsoft.com/fwlink/p/?LinkId=262410). Per ulteriori informazioni, vedi [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Vector::Vector \(costruttore\)](../cppcx/vector-vector-constructor.md)|Inizializza una nuova istanza della classe Vector.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Vector::Append](../cppcx/vector-append-method.md)|Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.|  
|[Metodo Vector::Clear](../cppcx/vector-clear-method.md)|Elimina tutti gli elementi nell'oggetto Vector corrente.|  
|[Vector::First \(metodo\)](../cppcx/vector-first-method.md)|Restituisce un iteratore che specifica il primo elemento nell'oggetto Vector.|  
|[Vector::GetAt \(metodo\)](../cppcx/vector-getat-method.md)|Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.|  
|[Vector::GetMany \(metodo\)](../cppcx/vector-getmany-method.md)|Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato.|  
|[Vector::GetView \(metodo\)](../cppcx/vector-getview-method.md)|Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|  
|[Vector::IndexOf \(metodo\)](../cppcx/vector-indexof-method.md)|Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.|  
|[Metodo Vector::InsertAt](../cppcx/vector-insertat-method.md)|Inserisce l'elemento specificato nell'oggetto Vector corrente dopo l'elemento identificato dall'indice specificato.|  
|[Metodo Vector::ReplaceAll](../cppcx/vector-replaceall-method.md)|Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.|  
|[Metodo Vector::RemoveAt](../cppcx/vector-removeat-method.md)|Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.|  
|[Metodo Vector::RemoveAtEnd](../cppcx/vector-removeatend-method.md)|Elimina l'elemento alla fine dell'oggetto Vector corrente.|  
|[Metodo Vector::SetAt](../cppcx/vector-setat-method.md)|Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.|  
|[Metodo Vector::Size](../cppcx/vector-size-method.md)|Restituisce il numero di elementi nell'oggetto Vector corrente.|  
  
### Eventi  
  
|||  
|-|-|  
|Nome|Descrizione|  
|evento [Windows::Foundation::Collection::VectorChangedEventHandler\<T\>^ VectorChanged](http://go.microsoft.com/fwlink/p/?LinkId=262644)|Si verifica quando l'oggetto Vector subisce delle modifiche.|  
  
## Gerarchia di ereditarietà  
 `Vector`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf)