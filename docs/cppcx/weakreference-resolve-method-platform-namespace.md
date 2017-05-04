---
title: "Metodo WeakReference::Resolve (spazio dei nomi Platform) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/WeakReference::Resolve"
ms.assetid: 78bbcadd-89d0-4863-a4e8-1d84040eed7d
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo WeakReference::Resolve (spazio dei nomi Platform)
Restituisce un handle alla classe di riferimento originale o `nullptr` se l'oggetto non esiste più.  
  
## Sintassi  
  
```vb  
  
template<typename T>  
T^ Resolve() const  
```  
  
#### Parametri  
  
## Valore proprietà\/Valore restituito  
 Handle alla classe di riferimento a cui l'oggetto WeakReference era precedentemente associato, oppure nullptr.  
  
## Note  
  
## Esempio  
 Questa è la descrizione per un Esempio di codice.  
  
```  
  
Bar^ bar = ref new Bar(); //use bar... if (bar != nullptr) { WeakReference wr(bar); Bar^ newReference = wr.Resolve<Bar>(); }  
```  
  
 Si noti che il parametro di tipo è T, non T^.  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)