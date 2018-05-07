---
title: 'CArrayRowset:: operator | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CArrayRowset::operator[]
- CArrayRowset.operator[]
dev_langs:
- C++
helpviewer_keywords:
- operator [], arrays
- '[] operator'
- operator[], arrays
ms.assetid: 3bb8c310-cc1e-46e8-9711-9b565488acaa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 755e484f430f47eb072e3c590bfbee8471984bb6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="carrayrowsetoperator"></a>CArrayRowset::operator
Fornisce una sintassi simile a matrice per l'accesso a una riga nel set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      TAccessor  
      & operator[](int nrow);  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Un parametro basato su modelli che specifica il tipo di funzione di accesso archiviati nel set di righe.  
  
 `nRow`  
 [in] Numero della riga (elemento della matrice) di cui che si desidera accedere.  
  
## <a name="return-value"></a>Valore restituito  
 Il contenuto della riga richiesta.  
  
## <a name="remarks"></a>Note  
 Se `nRow` supera il numero di righe nel set di righe, viene generata un'eccezione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CArrayRowset](../../data/oledb/carrayrowset-class.md)