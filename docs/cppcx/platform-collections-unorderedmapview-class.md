---
title: "Classe Platform::Collections::UnorderedMapView | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView"
ms.assetid: 545a3725-2efd-4cc1-b590-4a7cd2351f61
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe Platform::Collections::UnorderedMapView
Rappresenta una visualizzazione di sola lettura in una *mappa*, che rappresenta una raccolta di coppie chiave\-valore.  
  
## Sintassi  
  
```cpp  
template <  
   typename K,  
   typename V,  
   typename C = ::std::equal_to<K>  
>  
ref class UnorderedMapView sealed;  
```  
  
#### Parametri  
 `K`  
 Tipo di chiave nella coppia chiave\-valore.  
  
 `V`  
 Tipo di valore nella coppia chiave\-valore.  
  
 `C`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di chiavi per la loro uguaglianza. Per impostazione predefinita, è [std::equal\_to\<K\>](../standard-library/equal-to-struct.md).  
  
## Note  
 UnorderedMapView è un'implementazione concreta di C\+\+ dell'interfaccia [Windows::Foundation::Collections::IMapView\<K,V\>](http://go.microsoft.com/fwlink/p/?LinkId=262409) passata attraverso l'interfaccia ABI \(Application Binary Interface\). Per ulteriori informazioni, vedi [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore UnorderedMapView::UnorderedMapView](../cppcx/unorderedmapview-unorderedmapview-constructor.md)|Inizializza una nuova istanza della classe UnorderedMapView.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo UnorderedMapView::First](../cppcx/unorderedmapview-first-method.md)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|  
|[Metodo UnorderedMapView::HasKey](../cppcx/unorderedmapview-haskey-method.md)|Determina se l'oggetto UnorderedMapView corrente contiene la chiave specificata.|  
|[Metodo UnorderedMapView::Lookup](../cppcx/unorderedmapview-lookup-method.md)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto UnorderedMapView corrente.|  
|[Metodo UnorderedMapView::Size](../cppcx/unorderedmapview-size-method.md)|Restituisce il numero di elementi nell'oggetto UnorderedMapView corrente.|  
|[Metodo UnorderedMapView::Split](../cppcx/unorderedmapview-split-method.md)|Divide un oggetto UnorderedMapView originale in due oggetti UnorderedMapView.|  
  
## Gerarchia di ereditarietà  
 `UnorderedMapView`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Platform::Collections \(spazio dei nomi\)](../cppcx/platform-collections-namespace.md)   
 [Windows::Foundation::IMapView](http://go.microsoft.com/fwlink/p/?LinkId=262409)