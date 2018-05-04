---
title: estrattori com_ptr_t | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d1343d7dd5f6a35bb222b731294ec897116b9e4b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
  
-   **operatore Interface\***  restituisce un puntatore a interfaccia incapsulato, che può essere **NULL**.  
  
-   **operatore Interface &** restituisce un riferimento a puntatore a interfaccia incapsulato e genera un errore se il puntatore **NULL**.  
  
-   **operatore\***  consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.  
  
-   **operator ->** consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.  
  
-   **operatore &** rilascia qualsiasi puntatore a interfaccia incapsulato, sostituendolo con **NULL**e restituisce l'indirizzo del puntatore incapsulato. In questo modo il puntatore intelligente può essere passato in base all'indirizzo a una funzione che ha un **out** parametro con il quale restituisce un puntatore a interfaccia.  
  
-   **operatore bool** consente a un oggetto del puntatore intelligente da utilizzare in un'espressione condizionale. Questo operatore restituisce **true** se il puntatore non è **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)