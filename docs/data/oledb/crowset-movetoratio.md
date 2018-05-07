---
title: CRowset::MoveToRatio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- MoveToRatio
- CRowset<TAccessor>::MoveToRatio
- CRowset::MoveToRatio
- CRowset<TAccessor>.MoveToRatio
- ATL.CRowset.MoveToRatio
- ATL::CRowset::MoveToRatio
- CRowset.MoveToRatio
- ATL.CRowset<TAccessor>.MoveToRatio
- ATL::CRowset<TAccessor>::MoveToRatio
dev_langs:
- C++
helpviewer_keywords:
- MoveToRatio method
ms.assetid: 1fa313bd-8fd1-4608-8e85-44993b97dd88
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9c864933070af4f2a40572d0133027fb81f0855a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="crowsetmovetoratio"></a>CRowset::MoveToRatio
Recupera le righe a partire da una posizione decimale nel set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT MoveToRatio(DBCOUNTITEM nNumerator,   
   DBCOUNTITEM nDenominator,bool bForward = true) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nNumerator`  
 [in] Il numeratore utilizzato per determinare il frazionari posizione da cui recuperare i dati.  
  
 `nDenominator`  
 [in] Il denominatore utilizzato per determinare il frazionari posizione da cui recuperare i dati.  
  
 `bForward`  
 [in] Indica se spostare in avanti o indietro. Il valore predefinito è.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 `MoveToRatio` Recupera le righe in base all'incirca alla formula seguente:  
  
 `(nNumerator *  RowsetSize ) / nDenominator`  
  
 Dove `RowsetSize` è la dimensione del set di righe, misurata in righe. L'accuratezza di questa formula dipende dal provider specifico. Per informazioni dettagliate, vedere [IRowsetScroll:: GetRowsAtRatio](https://msdn.microsoft.com/en-us/library/ms709602.aspx).  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetScroll`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetScroll** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)