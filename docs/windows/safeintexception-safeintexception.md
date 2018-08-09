---
title: 'SafeIntException:: SafeIntException | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeIntException
- SafeIntException.SafeIntException
- SafeIntException::SafeIntException
dev_langs:
- C++
helpviewer_keywords:
- SafeIntException, constructor
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 393c424feb2a84fff85ba0efb5de7cbcaf54737c
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40016759"
---
# <a name="safeintexceptionsafeintexception"></a>SafeIntException::SafeIntException
Crea una **SafeIntException** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
SafeIntException();  
  
SafeIntException(  
   SafeIntError code  
);  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *codice*  
 Un valore di dati enumerato che descrive l'errore che si sono verificati.  
  
## <a name="remarks"></a>Note  
 I valori possibili per *codice* sono definiti nel file di SafeInt. h. Per praticità, i valori possibili sono inoltre elencati di seguito.  
  
-   `SafeIntNoError`  
  
-   `SafeIntArithmeticOverflow`  
  
-   `SafeIntDivideByZero`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** MSL:: Utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)   
 [Classe SafeInt](../windows/safeint-class.md)