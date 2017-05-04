---
title: "Classe Platform::Collections::MapView | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView (classe)"
ms.assetid: 9577dde7-f599-43c6-b1e4-7d653706fd62
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe Platform::Collections::MapView
Rappresenta una visualizzazione di sola lettura in una *mappa*, che rappresenta una raccolta di coppie chiave\-valore.  
  
## Sintassi  
  
```  
template <  
   typename K,  
   typename V,  
   typename C = ::std::less<K>  
>  
ref class MapView sealed;  
```  
  
#### Parametri  
 `K`  
 Tipo di chiave nella coppia chiave\-valore.  
  
 `V`  
 Tipo di valore nella coppia chiave\-valore.  
  
 `C`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView. Per impostazione predefinita, [::std::less\<K\>](../standard-library/less-struct.md).  
  
## Note  
 MapView è un'implementazione concreta di C\+\+ dell'interfaccia [Windows::Foundation::Collections::IMapView \<K,V\>](http://go.microsoft.com/fwlink/p/?LinkId=262409) passata attraverso l'interfaccia ABI \(Application Binary Interface\). Per ulteriori informazioni, vedi [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[MapView::MapView \(costruttore\)](../cppcx/mapview-mapview-constructor.md)|Inizializza una nuova istanza della classe MapView.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[MapView::First \(metodo\)](../cppcx/mapview-first-method.md)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|  
|[MapView::HasKey \(metodo\)](../cppcx/mapview-haskey-method.md)|Determina se l'oggetto MapView corrente contiene la chiave specificata.|  
|[MapView::Lookup \(metodo\)](../cppcx/mapview-lookup-method.md)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto MapView corrente.|  
|[Metodo MapView::Size](../cppcx/mapview-size-method.md)|Restituisce il numero di elementi nell'oggetto MapView corrente.|  
|[MapView::Split \(metodo\)](../cppcx/mapview-split-method.md)|Divide un oggetto MapView originale in due oggetti MapView.|  
  
## Gerarchia di ereditarietà  
 `MapView`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)