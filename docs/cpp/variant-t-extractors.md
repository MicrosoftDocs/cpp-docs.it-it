---
title: estrattori variant_t | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65049a473f62e728fcb4d74b581a08c0f1723fc9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32423318"
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
  
-   **operator short ()** estrae un **breve** valore intero.  
  
-   **operator long ()** estrae un **lungo** valore intero.  
  
-   **operator float ()** estrae un **float** valore numerico.  
  
-   **operator double ()** estrae un **doppie** valore intero.  
  
-   **operator CY ()** estrae un **CY** oggetto.  
  
-   **operator bool ()** estrae un `bool` valore.  
  
-   **operator DECIMAL ()** estrae un **decimale** valore.  
  
-   **operator BYTE ()** estrae un **BYTE** valore.  
  
-   **operatore bstr_t ()** estrae una stringa, che viene incapsulata in un `_bstr_t` oggetto.  
  
-   **operatore IDispatch\*()** estrae un puntatore a interfaccia dispatch da un incapsulato **VARIANT**. `AddRef` viene chiamato sul puntatore risultante, pertanto è responsabilità dell'utente per chiamare **versione** per liberarlo.  
  
-   **operatore IUnknown\*()** estrae un puntatore a interfaccia COM da un incapsulato **VARIANT**. `AddRef` viene chiamato sul puntatore risultante, pertanto è responsabilità dell'utente per chiamare **versione** per liberarlo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)
