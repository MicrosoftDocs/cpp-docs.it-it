---
title: "VectorView::VectorView (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::VectorView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::VectorView (costruttore)"
ms.assetid: 5ec14dbc-5f6f-44b6-8fc4-f5a31053eb5f
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::VectorView (costruttore)
Inizializza una nuova istanza della classe VectorView.  
  
## Sintassi  
  
```  
VectorView();  
explicit VectorView(  
   UInt32 size  
);  
VectorView(  
   UInt32 size,  
   T value  
);  
explicit VectorView(  
   const ::std::vector<T>& v  
);  
explicit VectorView(  
   ::std::vector<T>&& v  
);  
VectorView(  
   const T * ptr,  
   UInt32 size  
);  
  
template <  
   size_t N  
>  
explicit VectorView(  
   const T (&arr)[N]  
);  
  
template <  
   size_t N  
>  
explicit VectorView(  
   const ::std::array<T,  
   N>& a  
);  
  
explicit VectorView(  
   const ::Platform::Array<T>^ arr  
);  
  
template <  
   typename InIt  
>  
VectorView(  
   InItfirst,  
   InItlast  
);  
  
VectorView(  
   std::initializer_list<T> il  
);  
```  
  
#### Parametri  
 `InIt`  
 Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto VectorView corrente.  
  
 il  
 [std::initializer\_list](../standard-library/initializer-list-class.md) i cui elementi verranno utilizzati per inizializzare VectorView.  
  
 `N`  
 Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto VectorView corrente.  
  
 `size`  
 Numero di elementi nell'oggetto VectorView.  
  
 `value`  
 Valore utilizzato per inizializzare ciascun elemento nell'oggetto VectorView corrente.  
  
 `v`  
 [Elementi Lvalue e Rvalue](~/cpp/lvalues-and-rvalues-visual-cpp.md) a [::std::vector](../Topic/vector%20Class%201.md) utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `ptr`  
 Puntatore a `std::vector` utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `arr`  
 Oggetto [Platform::Array](../cppcx/platform-array-class.md) utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `a`  
 Oggetto [std::array](../Topic/vector%20Class%201.md) utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `first`  
 Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto VectorView corrente. Il tipo di `first` viene passato mediante l'*inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](~/cpp/rvalue-reference-declarator-amp-amp.md).  
  
 `last`  
 Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto VectorView corrente. Il tipo di `last` viene passato mediante l'*inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](~/cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)