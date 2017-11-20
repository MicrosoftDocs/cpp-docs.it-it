---
title: 'CArrayRowset:: operator | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CArrayRowset::operator[]
- CArrayRowset.operator[]
dev_langs: C++
helpviewer_keywords:
- operator [], arrays
- '[] operator'
- operator[], arrays
ms.assetid: 3bb8c310-cc1e-46e8-9711-9b565488acaa
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 14d0c07f8d1b8ff5cef19620fc00d156e251bf80
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="carrayrowsetoperator"></a>CArrayRowset::operator
Fornisce una sintassi simile a matrice per l'accesso a una riga nel set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
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