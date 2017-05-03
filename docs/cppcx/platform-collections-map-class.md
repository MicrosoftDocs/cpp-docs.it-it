---
title: "Classe Platform::Collections::Map | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map (classe) (C++/Cx)"
ms.assetid: 2b8cf968-1167-4898-a149-1195b32c1785
caps.latest.revision: 19
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe Platform::Collections::Map
Rappresenta una *mappa*, che è una raccolta di coppie chiave\-valore.  
  
## Sintassi  
  
```  
template <  
   typename K,  
   typename V,  
   typename C = std::less<K>  
ref class Map sealed;  
```  
  
#### Parametri  
 `K`  
 Tipo di chiave nella coppia chiave\-valore.  
  
 `V`  
 Tipo di valore nella coppia chiave\-valore.  
  
 `C`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [std::less\<K\>](../standard-library/less-struct.md).  
  
 \_\_is\_valid\_winrt\_type\(\)  
 Funzione generata dal compilatore che convalida il tipo di K e V e fornisce un messaggio di errore descrittivo se il tipo non può essere archiviato nella mappa.  
  
## Note  
 I tipi consentiti sono:  
  
-   Integer  
  
-   classe di interfaccia ^  
  
-   classe di riferimento pubblica^  
  
-   value struct  
  
-   classe enum pubblica  
  
 La mappa è fondamentalmente un wrapper per [std::map](../standard-library/map-class.md). È un'implementazione concreta di C\+\+ dei tipi [Windows::Foundation::Collections::IMap\<Windows::Foundation::Collections::IKeyValuePair\<K,V\>\>](http://go.microsoft.com/fwlink/p/?LinkId=262408) e [IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) passati attraverso le interfacce [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] pubbliche. Se tenti di usare un tipo `Platform::Collections::Map` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. Per correggere l'errore, modificare il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IMap\<K,V\>](http://go.microsoft.com/fwlink/p/?LinkId=262408).  
  
 Per altre informazioni, vedere [Raccolte](../cppcx/collections-c-cx.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Map::Map \(costruttore\)](../cppcx/map-map-constructor.md)|Inizializza una nuova istanza della classe Map.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Map::Clear](../cppcx/map-clear-method.md)|Rimuove tutte le coppie chiave\-valore dall'oggetto Map corrente.|  
|[Map::First \(metodo\)](../cppcx/map-first-method.md)|Restituisce un iteratore che specifica il primo elemento nella mappa.|  
|[Map::GetView \(metodo\)](../cppcx/map-getview-method.md)|Restituisce una visualizzazione di sola lettura dell'oggetto Map corrente, ovvero [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md).|  
|[Map::HasKey \(metodo\)](../cppcx/map-haskey-method.md)|Determina se l'oggetto Map corrente contiene la chiave specificata.|  
|[Metodo Map::Insert](../cppcx/map-insert-method.md)|Aggiunge la coppia chiave\-valore all'oggetto Map corrente.|  
|[Map::Lookup \(metodo\)](../cppcx/map-lookup-method.md)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|  
|[Metodo Map::Remove](../cppcx/map-remove-method.md)|Elimina la coppia chiave\-valore specificata dall'oggetto Map corrente.|  
|[Metodo Map::Size](../cppcx/map-size-method.md)|Restituisce il numero di elementi nell'oggetto Map corrente.|  
  
### Eventi  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[Evento Map::MapChanged](../cppcx/map-mapchanged-event.md) `event`|Si verifica quando l'oggetto Map subisce delle modifiche.|  
  
## Gerarchia di ereditarietà  
 `Map`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf)