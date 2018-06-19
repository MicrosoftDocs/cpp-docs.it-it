---
title: 'Costruttore hstringreference:: Hstringreference | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference
dev_langs:
- C++
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dc88ea32d4384b36559a4a10da0a5975345bf0d7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876007"
---
# <a name="hstringreferencehstringreference-constructor"></a>Costruttore HStringReference::HStringReference
Inizializza una nuova istanza della classe HStringReference.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<unsigned int sizeDest>  
HStringReference(wchar_t const (&str)[ sizeDest]) throw();  
  
template<unsigned int sizeDest>  
HStringReference(wchar_t const (&str)[ sizeDest],   
                 unsigned int len) throw();  
  
HStringReference(HStringReference&& other) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `sizeDest`  
 Un parametro di modello che specifica la dimensione del buffer di HStringReference di destinazione.  
  
 `str`  
 Un riferimento a una stringa di caratteri "wide".  
  
 `len`  
 La lunghezza massima del `str` buffer del parametro da utilizzare in questa operazione. Se il `len` parametro non è specificato, l'intero `str` parametro viene utilizzato. Se `len` è maggiore di `sizeDest`, `len` è impostato su `sizeDest`-1.  
  
 `other`  
 Un altro oggetto HStringReference.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un nuovo oggetto HStringReference che le stesse dimensioni come parametro `str`.  
  
 Il secondo costruttore inizializza un nuovo HStringReference oggetto specifeid le dimensioni dal parametro `len`.  
  
 Il terzo costruttore inizializza un nuovo oggetto HStringReference al valore del `other` parametro, quindi Elimina il `other` parametro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)