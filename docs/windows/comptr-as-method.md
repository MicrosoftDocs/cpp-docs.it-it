---
title: 'Metodo comptr:: As | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::As
dev_langs:
- C++
helpviewer_keywords:
- As method
ms.assetid: 2ad6c262-9bdb-4c59-a330-1af8bcd445cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: debf10e3c3d7ca68bd277a32e55c21b3e8bf3421
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39645425"
---
# <a name="comptras-method"></a>Metodo ComPtr::As
Restituisce un **ComPtr** oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename U>  
HRESULT As(  
   _Out_ ComPtr<U>* p  
) const;  
  
template<typename U>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> p  
) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *U*  
 L'interfaccia per essere rappresentato dal parametro *p*.  
  
 *p*  
 Oggetto **ComPtr** che rappresenta l'interfaccia specificata dal parametro *U*. Parametro *p* non deve fare riferimento all'oggetto corrente **ComPtr** oggetto.  
  
## <a name="remarks"></a>Note  
 Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)