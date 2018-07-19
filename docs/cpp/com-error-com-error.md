---
title: _com_error::_com_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::_com_error
dev_langs:
- C++
helpviewer_keywords:
- _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ec16faa9881fc1c69dca5f8f39b8797cf0fcff0d
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943509"
---
# <a name="comerrorcomerror"></a>_com_error::_com_error
**Sezione specifica Microsoft**  
  
 Costruisce un oggetto `_com_error`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
_com_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = NULL,  
   bool fAddRef=false) throw( );  

_com_error( const _com_error& that ) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *risorse umane*  
 Informazioni su HRESULT.  
  
 *perrinfo*  
 Oggetto `IErrorInfo`.  
  
 `bool fAddRef=false`  
 Fa sì che il costruttore di chiamare AddRef su non null `IErrorInfo` interfaccia. Ciò consente un conteggio corretto dei riferimenti nel caso comune in cui la proprietà dell'interfaccia venga passata all'oggetto `_com_error`, ad esempio:  
  
```cpp 
throw _com_error(hr, perrinfo);  
```  
  
 Se non si desidera il codice per trasferire la proprietà per il `_com_error` oggetto e il `AddRef` è necessario per compensare la `Release` nel `_com_error` distruttore, costruire l'oggetto come indicato di seguito:  
  
```cpp 
_com_error err(hr, perrinfo, true);  
```  
  
 *che*  
 Oggetto `_com_error` esistente.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore crea un nuovo oggetto dato un oggetto HRESULT e facoltative `IErrorInfo` oggetto. Il secondo crea una copia di un oggetto `_com_error` esistente.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)