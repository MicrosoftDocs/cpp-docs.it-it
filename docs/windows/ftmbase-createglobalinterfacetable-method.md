---
title: 'Metodo ftmbase:: Createglobalinterfacetable | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::CreateGlobalInterfaceTable
dev_langs:
- C++
helpviewer_keywords:
- CreateGlobalInterfaceTable method
ms.assetid: bb82a0c5-22b9-4844-9204-7922033d8b07
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6b17749d5f20007e05f181de8f4e069d3fc736f0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33872393"
---
# <a name="ftmbasecreateglobalinterfacetable-method"></a>Metodo FtmBase::CreateGlobalInterfaceTable
Crea una tabella di interfaccia globale (GIT).  
  
## <a name="syntax"></a>Sintassi  
  
```  
static HRESULT CreateGlobalInterfaceTable(  
   __out IGlobalInterfaceTable **git  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `git`  
 Quando questa operazione viene completata, un puntatore a una tabella di interfaccia globale.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere l'argomento "IGlobalInterfaceTable" nell'argomento secondario "Interfacce COM" dell'argomento "Riferimento COM" in MSDN Library.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** . h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)