---
title: classe bstr_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _bstr_t
dev_langs: C++
helpviewer_keywords:
- BSTR object
- _bstr_t class
- BSTR object [C++], COM encapsulation
ms.assetid: 58841fef-fe21-4a84-aab9-780262b5201f
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6943a75f83bac517ce3c9677b0abd8ef560e9b77
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="bstrt-class"></a>_bstr_t Class
**Sezione specifica Microsoft**  
  
 Oggetto `_bstr_t` incapsulata dall'oggetto di [tipo di dati BSTR](http://msdn.microsoft.com/en-us/1b2d7d2c-47af-4389-a6b6-b01b7e915228). La classe gestisce l'allocazione e deallocazione tramite le chiamate di funzione per **SysAllocString** e **SysFreeString** e altri `BSTR` API quando appropriato. La classe `_bstr_t` utilizza il conteggio dei riferimenti per evitare un sovraccarico eccessivo.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[_bstr_t](../cpp/bstr-t-bstr-t.md)|Costruisce un oggetto `_bstr_t`.|  
  
### <a name="operations"></a>Operazioni  
  
|||  
|-|-|  
|[Assign](../cpp/bstr-t-assign.md)|Copia `BSTR` in  `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`.|  
|[Attach](../cpp/bstr-t-attach.md)|Collega un wrapper `_bstr_t` a  `BSTR`.|  
|[copy](../cpp/bstr-t-copy.md)|Costruisce una copia dell'oggetto `BSTR` incapsulato.|  
|[Detach](../cpp/bstr-t-detach.md)|Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.|  
|[GetAddress](../cpp/bstr-t-getaddress.md)|Punta a `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`.|  
|[GetBSTR](../cpp/bstr-t-getbstr.md)|Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.|  
|[length](../cpp/bstr-t-length.md)|Restituisce il numero di caratteri presenti in `_bstr_t`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../cpp/bstr-t-operator-equal.md)|Assegna un nuovo valore a un oggetto `_bstr_t` esistente.|  
|[+ = (operatore)](../cpp/bstr-t-operator-add-equal-plus.md)|Aggiunge caratteri alla fine dell'oggetto `_bstr_t`.|  
|[operatore +](../cpp/bstr-t-operator-add-equal-plus.md)|Concatena due stringhe.|  
|[operatore !](../cpp/bstr-t-operator-logical-not.md)|Controlla se incapsulato `BSTR` è un **NULL** stringa.|  
|[operator ==, !=, \<, >, \<=, >=](../cpp/bstr-t-relational-operators.md)|Confronta due oggetti `_bstr_t`.|  
|[operatore wchar_t * &#124; Char\*](../cpp/bstr-t-wchar-t-star-bstr-t-char-star.md)|Estrae i puntatori all'oggetto Unicode incapsulato o all'oggetto multibyte `BSTR`.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<comutil.h >  
  
 **Lib:** comsuppw.lib o comsuppwd.lib (vedere [/Zc: wchar_t (wchar_t è il tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)