---
title: Classe value_compare (&lt;map&gt;) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std::value_compare
- std.value_compare
- map/std::value_compare
- value_compare
dev_langs:
- C++
helpviewer_keywords:
- value_compare class
ms.assetid: ea97c1d0-04b2-4d42-8d96-23522c04cc41
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: 200e62472c8c6002cdc45181ad019a1d78ca7977
ms.lasthandoff: 02/24/2017

---
# <a name="valuecompare-class-ltmapgt"></a>Classe value_compare (&lt;map&gt;)
Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.  
  
## <a name="syntax"></a>Sintassi  
  
```
class value_compare : public binary_function<value_type, value_type, bool>
{
public:
    bool operator()(const value_type& left, const value_type& right) const;
    value_compare(key_compare pred) : comp(pred);
protected:
    key_compare comp;
};
```  
  
## <a name="remarks"></a>Note  
 Il criterio di confronto fornito da `value_compare` tra oggetti **value_type** di elementi interi in un oggetto map deriva da un confronto tra le chiavi degli elementi rispettivi mediante la costruzione della classe ausiliaria. L'operatore della funzione membro usa l'oggetto **comp** di tipo `key_compare` memorizzato nell'oggetto funzione fornito da `value_compare` per confrontare i componenti della chiave di ordinamento di due elementi.  
  
 Per set e multiset, che sono semplici contenitori in cui i valori delle chiavi sono identici ai valori degli elementi, `value_compare` equivale a `key_compare`. Questo non si applica per gli oggetti di tipo map e multimap, poiché il valore degli elementi di tipo `pair` non è identico al valore della chiave dell'elemento.  
  
## <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [value_comp](../standard-library/map-class.md#map__value_comp) per indicazioni su come dichiarare e usare `value_compare`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<map>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Struct binary_function](../standard-library/binary-function-struct.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




