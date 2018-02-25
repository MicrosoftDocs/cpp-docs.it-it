---
title: CUtlProps::OnPropertyChanged | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- OnPropertyChanged
- CUtlProps.OnPropertyChanged
- CUtlProps::OnPropertyChanged
dev_langs:
- C++
helpviewer_keywords:
- OnPropertyChanged method
ms.assetid: c5924210-b685-46c4-87f8-1b81e5bd3378
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f87f6842f33bd58be9cde515396f495402235a77
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="cutlpropsonpropertychanged"></a>CUtlProps::OnPropertyChanged
Chiamata eseguita dopo l'impostazione di una proprietà per gestire proprietà concatenate.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      virtual HRESULT OnPropertyChanged(ULONG /* iCurSet */,  
   DBPROP* pDBProp);  
```  
  
#### <a name="parameters"></a>Parametri  
 `iCurSet`  
 L'indice nella matrice di set di proprietà; zero se è impostato solo una proprietà.  
  
 `pDBProp`  
 L'ID di proprietà e un nuovo valore in un [DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx) struttura.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Il valore predefinito valore restituito è `S_OK`.  
  
## <a name="remarks"></a>Note  
 Se si desidera gestire proprietà concatenate, ad esempio segnalibri o aggiornamenti i cui valori sono dipende dal valore della proprietà, è necessario eseguire l'override di questa funzione.  
  
## <a name="example"></a>Esempio  
 In questa funzione, l'utente ottiene l'ID di proprietà dal `DBPROP*` parametro. A questo punto, è possibile confrontare l'ID per una proprietà a catena. Quando la proprietà viene trovata, `SetProperties` viene chiamata con la proprietà che verrà impostata in combinazione con l'altra proprietà. In questo caso, se uno Ottiene il `DBPROP_IRowsetLocate`, `DBPROP_LITERALBOOKMARKS`, o `DBPROP_ORDEREDBOOKMARKS` proprietà, una possibile impostare il `DBPROP_BOOKMARKS` proprietà.  
  
 [!code-cpp[NVC_OLEDB_Provider#2](../../data/oledb/codesnippet/cpp/cutlprops-onpropertychanged_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)