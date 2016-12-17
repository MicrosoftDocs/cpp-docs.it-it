---
title: "Classe slice_array | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "slice_array"
  - "valarray/std::slice_array"
  - "std.slice_array"
  - "std::slice_array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "slice_array (classe)"
ms.assetid: a182d5f7-f35c-4e76-86f2-b5ac64ddc846
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe slice_array
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe modello interna e ausiliaria che supporta affettano gli oggetti immettendo le operazioni tra matrici di sottoinsieme definiti dalla sezione di un valarray.  
  
## Sintassi  
  
```  
template<class Type>  
   class slice_array : public slice {  
public:  
   typedef Type value_type;  
   void operator=(  
      const valarray<Type>& x  
   ) const;  
   void operator=(  
      const Type& x  
   ) const;  
   void operator*=(  
      const valarray<Type>& x  
   ) const;  
   void operator/=(  
      const valarray<Type>& x  
   ) const;  
   void operator%=(  
      const valarray<Type>& x  
   ) const;  
   void operator+=(  
      const valarray<Type>& x  
   ) const;  
   void operator-=(  
      const valarray<Type>& x  
   ) const;  
   void operator^=(  
      const valarray<Type>& x  
   ) const;  
   void operator&=(  
      const valarray<Type>& x  
   ) const;  
   void operator|=(  
      const valarray<Type>& x  
   ) const;  
   void operator<<=(  
      const valarray<Type>& x  
   ) const;  
   void operator>>=(  
      const valarray<Type>& x  
   ) const;  
// The rest is private or implementation defined  
}  
```  
  
## Note  
 La classe descrive un oggetto che contiene un riferimento a un oggetto di classe [valarray](../standard-library/valarray-class.md)**\<Tipo\>**, con un oggetto di classe [sezione](../standard-library/slice-class.md), che descrive la sequenza di elementi choose dall'oggetto di **valarray\<Type\>**.  
  
 La classe modello viene creata indirettamente da determinate operazioni valarray e non può essere utilizzato direttamente nel programma.  Una classe modello interna e ausiliaria utilizzata dall'operatore di indice della sezione:  
  
 `slice_array`\<**Type**\>`valarray`\<**Type**::`operator[]` \(`slice`\).  
  
 Si costruisce un oggetto di **slice\_array\<Type\>** solo scrive un'espressione del tipo [va SL &#91;&#93;](../Topic/valarray::operator.md), per una sezione **sl** di **va**valarray.  Le funzioni membro delle classi slice\_array quindi si comportano come le firme della funzione corrispondenti definite per **valarray\<Type\>**, ma solo la sequenza di elementi selezionati viene modificata.  La sequenza controllata da slice\_array è definita da tre parametri del costruttore della sezione, indice del primo elemento nella sezione, il numero di elementi e della distanza tra gli elementi.  Un slice\_array taglia da **va** valarray dichiarato da **va**\[`slice`\(2, 5, 3\)\] seleziona gli elementi con gli indici 2, 5, 8, 11 e 14 per **va**.  Gli indici devono essere validi per la routine siano validi.  
  
## Esempio  
 Vedere l'esempio relativo [slice::slice](../Topic/slice::slice.md) per un esempio di come dichiarare e utilizzare uno slice\_array.  
  
## Requisiti  
 **Header:** \<valarray\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)