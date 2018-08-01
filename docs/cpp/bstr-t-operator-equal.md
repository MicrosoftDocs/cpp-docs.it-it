---
title: _bstr_t::operator = | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator = [C++], bstr
- operator= [C++], bstr
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3dfed780e0769e342ff368af453fc70764a372f0
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39404473"
---
# <a name="bstrtoperator-"></a>_bstr_t::operator =
**Sezione specifica Microsoft**  
  
 Assegna un nuovo valore a un oggetto `_bstr_t` esistente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_bstr_t& operator=(const _bstr_t& s1) throw ( );  
_bstr_t& operator=(const char* s2);  
_bstr_t& operator=(const wchar_t* s3);  
_bstr_t& operator=(const _variant_t& var);  
```  
  
#### <a name="parameters"></a>Parametri  
 *s1*  
 Oggetto `_bstr_t` da assegnare a un oggetto esistente `_bstr_t`.  
  
 *s2*  
 Stringa multibyte da assegnare a un oggetto esistente `_bstr_t`.  
  
 *S3*  
 Stringa unicode da assegnare a un oggetto esistente `_bstr_t`.  
  
 *var*  
 Oggetto `_variant_t` da assegnare a un oggetto esistente `_bstr_t`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="example"></a>Esempio  
 Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **operatore =**.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)