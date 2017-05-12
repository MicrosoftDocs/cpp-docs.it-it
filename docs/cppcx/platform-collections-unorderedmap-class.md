---
title: "Classe Platform::Collections::UnorderedMap | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap"
ms.assetid: dc84f261-b13c-4c0a-9b57-30dcb9e3065e
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe Platform::Collections::UnorderedMap
Rappresenta una *mappa* non ordinata, che è una raccolta di coppie chiave\-valore.  
  
## Sintassi  
  
```scr  
template <  
   typename K,  
   typename V,  
   typename C = std::equal_to<K>  
>  
ref class Map sealed;  
```  
  
#### Parametri  
 `K`  
 Tipo di chiave nella coppia chiave\-valore.  
  
 `V`  
 Tipo di valore nella coppia chiave\-valore.  
  
 `C`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [std::equal\_to\<K\>](../standard-library/equal-to-struct.md).  
  
## Note  
 I tipi consentiti sono:  
  
-   Integer  
  
-   classe di interfaccia ^  
  
-   classe di riferimento pubblica^  
  
-   value struct  
  
-   classe enum pubblica  
  
 UnorderedMap è fondamentalmente un wrapper per [std::unordered\_map](../standard-library/unordered-map-class.md) che supporta l'archiviazione dei tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. È un'implementazione concreta dei tipi [Windows::Foundation::Collections::IMap](http://go.microsoft.com/fwlink/p/?LinkId=262408) e [IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) passati attraverso le interfacce [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] pubbliche. Se tenti di usare un tipo Platform::Collections::UnorderedMap in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. Per correggere l'errore, modificare il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IMap](http://go.microsoft.com/fwlink/p/?LinkId=262408).  
  
 Per altre informazioni, vedere [Raccolte](../cppcx/collections-c-cx.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Costruttore UnorderedMap::UnorderedMap|Inizializza una nuova istanza della classe Map.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo UnorderedMap::Clear](../cppcx/unorderedmap-clear-method.md)|Rimuove tutte le coppie chiave\-valore dall'oggetto Map corrente.|  
|[Metodo UnorderedMap::First](../cppcx/unorderedmap-first-method.md)|Restituisce un iteratore che specifica il primo elemento nella mappa.|  
|[Metodo UnorderedMap::GetView](../cppcx/unorderedmap-getview-method.md)|Restituisce una visualizzazione in sola lettura dell'elemento Map corrente, ovvero una classe Platform::Collections::UnorderedMapView.|  
|[Metodo UnorderedMap::HasKey](../cppcx/unorderedmap-haskey-method.md)|Determina se l'oggetto Map corrente contiene la chiave specificata.|  
|[Metodo UnorderedMap::Insert](../cppcx/unorderedmap-insert-method.md)|Aggiunge la coppia chiave\-valore all'oggetto Map corrente.|  
|[Metodo UnorderedMap::Lookup](../cppcx/unorderedmap-lookup-method.md)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|  
|[Metodo UnorderedMap::Remove](../cppcx/unorderedmap-remove-method.md)|Elimina la coppia chiave\-valore specificata dall'oggetto Map corrente.|  
|[Metodo UnorderedMap::Size](../cppcx/unorderedmap-size-method.md)|Restituisce il numero di elementi nell'oggetto Map corrente.|  
  
### Eventi  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[Evento Map::MapChanged](../cppcx/map-mapchanged-event.md) `event`|Si verifica quando l'oggetto Map subisce delle modifiche.|  
  
## Gerarchia di ereditarietà  
 `UnorderedMap`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Platform::Collections \(spazio dei nomi\)](../cppcx/platform-collections-namespace.md)   
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)   
 [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)   
 [Raccolte](../cppcx/collections-c-cx.md)   
 [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf)