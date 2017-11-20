---
title: Classe gslice_array | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: valarray/std::gslice_array
dev_langs: C++
helpviewer_keywords: gslice_array class
ms.assetid: ad1b4514-b14a-4baf-a293-d5a8e8674c75
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: bec570f3a1b0c2ddd8454935b5cfd26e2a217da0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="gslicearray-class"></a>Classe gslice_array
Classe modello ausiliaria interna che supporta oggetti sezione generale fornendo operazioni tra matrici di subset definite dalla sezione generale di un oggetto valarray.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Type>  
class gslice_array : public gsplice {  
public:  
    typedef Type value_type;  
    void operator=(const valarray<Type>& x) const;

 
 
    void operator=(const Type& x) const;

 
 
    void operator*=(const valarray<Type>& x) const;

 
 
    void operator/=(const valarray<Type>& x) const;

 
 
    void operator%=(const valarray<Type>& x) const;

 
 
    void operator+=(const valarray<Type>& x) const;

 
 
    void operator-=(const valarray<Type>& x) const;

 
 
    void operator^=(const valarray<Type>& x) const;

 
 
    void operator&=(const valarray<Type>& x) const;

 
 
    void operator|=(const valarray<Type>& x) const;

 
 
    void operator<<=(const valarray<Type>& x) const;

 
 
    void operator>>=(const valarray<Type>& x) const;

 
 
// The rest is private or implementation defined  
}  
```  
  
## <a name="remarks"></a>Note  
 La classe descrive un oggetto che archivia un riferimento a un oggetto **va** della classe [valarray](../standard-library/valarray-class.md)**\<Type>**, insieme a un oggetto **gs** della classe [gslice](../standard-library/gslice-class.md), che descrive la sequenza di elementi da selezionare dall'oggetto **valarray\<Type>**.  
  
 Si costruisce un oggetto **gslice_array\<Type>** solo scrivendo un'espressione nel formato [va&#91;gs&#93;](../standard-library/valarray-class.md#op_at). Le funzioni membro della classe gslice_array si comportano quindi come le firme di funzione corrispondenti definite per **valarray\<Type>**, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.  
  
 La classe modello viene creata indirettamente da alcune operazioni valarray e non può essere usata direttamente nel programma. Una classe modello ausiliaria interna invece viene usata dall'operatore di indice inferiore di sezione:  
  
 `gslice_array`\< **Type**> `valarray`\< **Type**>:: `operator[]` ( **constgslice&**).  
  
 Si costruisce un oggetto **gslice_array\<Type>** solo scrivendo un'espressione nel formato **va[gsl]**, per una sezione **gsl** di valarray **va**. Le funzioni membro della classe gslice_array si comportano quindi come le firme di funzione corrispondenti definite per **valarray\<Type>**, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati. La sequenza controllata dall'oggetto gslice_array è definita dai tre parametri del costruttore di sezione, ovvero l'indice del primo elemento nella prima sezione, il numero di elementi in ogni sezione e la distanza tra gli elementi in ogni sezione.  
  
 Nell'esempio seguente:  
  
```  
const size_t lv[] = {2, 3};  
const size_t dv[] = {7, 2};  
const valarray<size_t> len(lv, 2), str(dv, 2);

// va[gslice(3, len, str)] selects elements with  
//   indices 3, 5, 7, 10, 12, 14  
```  
  
 Affinché la procedura sia valida, è necessario che gli indici siano validi.  
  
## <a name="example"></a>Esempio  
 Per un esempio di come dichiarare e usare un oggetto slice_array, vedere l'esempio relativo a [gslice::gslice](../standard-library/gslice-class.md#gslice).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<valarray>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)

