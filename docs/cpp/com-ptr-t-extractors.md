---
title: estrattori com_ptr_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::operatorInterface&
- _com_ptr_t::operatorbool
- _com_ptr_t::operator->
- _com_ptr_t::operator*
dev_langs:
- C++
helpviewer_keywords:
- operator Interface& [C++]
- '* operator [C++], with specific objects'
- operator& [C++]
- operator* [C++]
- -> operator [C++], with specific objects
- '& operator [C++], with specific objects'
- operator Interface* [C++]
- operator * [C++]
- operator->
- operator bool
- extractors, _com_ptr_t class
- extractors [C++]
ms.assetid: 194b9e0e-123c-49ff-a187-0a7fcd68145a
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 136afa55361ff25f9ad606886be938a00551393d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comptrt-extractors"></a>_com_ptr_t Extractors
**Sezione specifica Microsoft**  
  
 Estrae il puntatore a interfaccia COM incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      operator Interface*( ) const throw( );   
operator Interface&( ) const;   
Interface& operator*( ) const;   
Interface* operator->( ) const;   
Interface** operator&( ) throw( );   
operator bool( ) const throw( );  
```  
  
## <a name="remarks"></a>Note  
  
-   **operatore Interface\* ** restituisce il puntatore a interfaccia incapsulato, che può essere **NULL**.  
  
-   **operatore Interface &** restituisce un riferimento al puntatore a interfaccia incapsulato e genera un errore se il puntatore **NULL**.  
  
-   **operatore\* ** consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.  
  
-   **operator ->** consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.  
  
-   **operatore &** rilascia qualsiasi puntatore a interfaccia incapsulato, sostituendolo con **NULL**e restituisce l'indirizzo del puntatore incapsulato. In questo modo il puntatore intelligente può essere passato in base all'indirizzo a una funzione che ha un **out** parametro con il quale restituisce un puntatore a interfaccia.  
  
-   **operatore bool** consente a un oggetto del puntatore intelligente da utilizzare in un'espressione condizionale. Questo operatore restituisce **true** se il puntatore non è **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
