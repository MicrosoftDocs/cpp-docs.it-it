---
title: Classe result_of | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- result_of
- std::result_of
- type_traits/std::result_of
- std::result_of_t
- type_traits/std::result_of_t
- std::result_of::type
- type_traits/std::result_of::type
dev_langs:
- C++
helpviewer_keywords:
- result_of
ms.assetid: 5374a096-4b4a-4712-aa97-6852c5cdd6be
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.sourcegitcommit: 41b445ceeeb1f37ee9873cb55f62d30d480d8718
ms.openlocfilehash: 8ffd540b812aedcc3cff9703a1b45ef2ce57983c
ms.lasthandoff: 02/24/2017

---
# <a name="resultof-class"></a>Classe result_of
Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class>  
struct result_of; // Causes a static assert  
  
template <class Fn, class... ArgTypes>  
struct result_of<Fn(ArgTypes...)>;

// Helper type  
template<class T>
   using result_of_t = typename result_of<T>::type;
```  
  
#### <a name="parameters"></a>Parametri  
 `Fn`  
 Tipo chiamabile su cui eseguire una query.  
  
 `ArgTypes`  
 Tipi dell'elenco di argomenti al tipo chiamabile su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Usare questo modello per determinare in fase di compilazione il tipo di risultato di `Fn`(`ArgTypes`), dove `Fn` è un tipo chiamabile, un riferimento alla funzione o un riferimento al tipo chiamabile, richiamato tramite un elenco di argomenti dei tipi in `ArgTypes`. Il membro `type` della classe modello attribuisce un nome al tipo di risultato di `decltype(std::invoke(declval<Fn>(), declval<ArgTypes>()...))` se l'espressione non valutata `std::invoke(declval<Fn>(), declval<ArgTypes>()...)` è nel formato corretto. In caso contrario, la classe di modello non ha alcun membro `type`. Il tipo `Fn` e tutti i tipi inclusi nel pacchetto di parametri `ArgTypes` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




