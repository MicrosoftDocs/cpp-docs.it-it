---
title: estrattori variant_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _variant_t.operatordouble
- operatorlong
- _variant_t::operator_bstr_t
- operatordouble
- _variant_t.operatorCY
- operatorCY
- _variant_t::operatorCY
- _variant_t::operatordouble
- operatorfloat
- operatorBYTE
- _variant_t.operatorDECIMAL
- _variant_t::operatorlong
- operatorIDispatch
- _variant_t.operatorBYTE
- operatorDECIMAL
- _variant_t.operator_bstr_t
- _variant_t::operatorDECIMAL
- _variant_t.operatorIUnknown
- _variant_t.operatorlong
- _variant_t::operatorIDispatch
- _variant_t::operatorIUnknown
- operatorIUnknown
- _variant_t.operatorbool
- _variant_t::operatorBYTE
- _variant_t.operatorfloat
- operator_bstr_t
- _variant_t::operatorbool
- operatorshort
- _variant_t::operatorshort
- _variant_t::operatorfloat
- _variant_t.operatorIDispatch
- _variant_t.operatorshort
dev_langs: C++
helpviewer_keywords:
- extractors, _variant_t class
- operator CY
- operator IDispatch
- operator SHORT
- operator double
- operator long
- operator _bstr_t
- operator DECIMAL
- operator float
- operator bool
- operator BYTE
- operator IUnknown
ms.assetid: 33c1782f-045a-4673-9619-1d750efc83a9
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8876cd486662ec1c20aea7148563fd28e8790a47
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="variantt-extractors"></a>Estrattori _variant_t
**Sezione specifica Microsoft**  
  
 Estrarre dati da incapsulato **VARIANT** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator short( ) const;   
operator long( ) const;   
operator float( ) const;   
operator double( ) const;   
operator CY( ) const;   
operator _bstr_t( ) const;   
operator IDispatch*( ) const;   
operator bool( ) const;   
operator IUnknown*( ) const;   
operator DECIMAL( ) const;   
operator BYTE( ) const;  
operator VARIANT() const throw();  
operator char() const;  
operator unsigned short() const;  
operator unsigned long() const;  
operator int() const;  
operator unsigned int() const;  
operator __int64() const;  
operator unsigned __int64() const;  
```  
  
## <a name="remarks"></a>Note  
 Estrae i dati non elaborati da un incapsulato **VARIANT**. Se il **VARIANT** non è già il tipo appropriato, **VariantChangeType** viene utilizzato per cercare una conversione e viene generato un errore in caso di errore:  
  
-   **operatore short ()** estrae un **breve** valore intero.  
  
-   **operator long ()** estrae un **lungo** valore intero.  
  
-   **operator float ()** estrae un **float** valore numerico.  
  
-   **operator double ()** estrae un **doppie** valore intero.  
  
-   **operator CY ()** estrae un **CY** oggetto.  
  
-   **operator bool ()** estrae un `bool` valore.  
  
-   **operator (decimale)** estrae un **decimale** valore.  
  
-   **operator BYTE ()** estrae un **BYTE** valore.  
  
-   **operatore bstr_t ()** estrae una stringa, che viene incapsulata in un `_bstr_t` oggetto.  
  
-   **operatore IDispatch\*()** estrae un puntatore a interfaccia dispatch da un incapsulato **VARIANT**. `AddRef`viene chiamato sul puntatore risultante, pertanto è responsabilità dell'utente chiamare **versione** per liberarlo.  
  
-   **operatore IUnknown\*()** estrae un puntatore a interfaccia COM da un incapsulato **VARIANT**. `AddRef`viene chiamato sul puntatore risultante, pertanto è responsabilità dell'utente chiamare **versione** per liberarlo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)
