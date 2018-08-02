---
title: 'Metodo asyncbase:: Firecompletion | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::FireCompletion
dev_langs:
- C++
helpviewer_keywords:
- FireCompletion method
ms.assetid: b5e29d6d-52e7-4148-a7f3-a313b1359819
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fa5988516f3836749357b15295ac228b78fe3f04
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39467241"
---
# <a name="asyncbasefirecompletion-method"></a>Metodo AsyncBase::FireCompletion
Richiama il gestore di evento di completamento, o Reimposta il delegato di stato interno.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void FireCompletion(  
   void  
) override;  
  
virtual void FireCompletion();  
```  
  
## <a name="remarks"></a>Note  
 La prima versione di **FireCompletion()** Reimposta la variabile delegato stato interno. La seconda versione richiama il gestore di evento di completamento se l'operazione asincrona è completa.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)