---
title: "Classe gslice_array | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::gslice_array"
  - "gslice_array"
  - "valarray/std::gslice_array"
  - "std.gslice_array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gslice_array (classe)"
ms.assetid: ad1b4514-b14a-4baf-a293-d5a8e8674c75
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe gslice_array
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe modello interna e ausiliaria che supporta la sezione generale oggetti immettendo le operazioni tra matrici di sottoinsieme definite dalla sezione generale di un valarray.  
  
## Sintassi  
  
```  
template<class Type>  
   class gslice_array : public gsplice {  
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
 La classe descrive un oggetto che contiene un riferimento a un oggetto **va** di classe [valarray](../standard-library/valarray-class.md)**\<Tipo\>**, con un oggetto **gs** di classe [gslice](../standard-library/gslice-class.md) che descrive la sequenza di elementi choose dall'oggetto di **valarray\<Type\>**.  
  
 Si costruisce un oggetto di **gslice\_array\<Type\>** solo scrive un'espressione del tipo [vai gs &#91;&#93;](../Topic/valarray::operator.md).  Le funzioni membro delle classi gslice\_array quindi si comportano come le firme della funzione corrispondenti definite per **valarray\<Type\>**, ma solo la sequenza di elementi selezionati viene modificata.  
  
 La classe modello viene creata indirettamente da determinate operazioni valarray e non può essere utilizzato direttamente nel programma.  Una classe modello ausiliaria interna viene invece utilizzata dall'operatore di indice della sezione:  
  
 ::\<`operator[]` \> \(\<**const**\>**gslice&**\) di`gslice_array`**Tipo** `valarray`**Tipo**.  
  
 Si costruisce un oggetto di **gslice\_array\<Type\>** solo scrive un'espressione del tipo **va\[gsl\]**, per una sezione **gsl** di **va**valarray.  Le funzioni membro delle classi gslice\_array quindi si comportano come le firme della funzione corrispondenti definite per **valarray\<Type\>**, ma solo la sequenza di elementi selezionati viene modificata.  La sequenza controllata da gslice\_array è definita da tre parametri del costruttore della sezione, indice del primo elemento della prima sezione, il numero di elementi in ogni sezione e la distanza tra gli elementi in ogni sezione.  
  
 Nell'esempio riportato di seguito:  
  
```  
const size_t lv[] = {2, 3};  
const size_t dv[] = {7, 2};  
const valarray<size_t> len(lv, 2), str(dv, 2);  
// va[gslice(3, len, str)] selects elements with  
//   indices 3, 5, 7, 10, 12, 14  
```  
  
 Gli indici devono essere validi per la routine siano validi.  
  
## Esempio  
 Vedere l'esempio relativo [gslice::gslice](../Topic/gslice::gslice.md) per un esempio di come dichiarare e utilizzare uno slice\_array.  
  
## Requisiti  
 **Header:** \<valarray\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)