---
title: 'Costruttore hstringreference:: Hstringreference | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference
dev_langs: C++
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
caps.latest.revision: "2"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b73e25977b91940031316f6d85c0bcfded4ab3ef
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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