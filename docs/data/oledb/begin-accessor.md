---
title: BEGIN_ACCESSOR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: BEGIN_ACCESSOR
dev_langs: C++
helpviewer_keywords:
- BEGIN_ACCESSOR macro, syntax
- BEGIN_ACCESSOR macro
ms.assetid: 59d0ff3e-7cfd-4ce8-9a1c-d664c0892a52
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 74d8d2197553f9fd2b1f5452236b343424d29148
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="beginaccessor"></a>BEGIN_ACCESSOR
Contrassegna l'inizio di una voce della funzione di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
BEGIN_ACCESSOR(  
num  
,   
bAuto  
 )  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *num*  
 [in] Il numero di offset uguale a zero per la funzione di accesso in questa mappa delle funzioni di accesso.  
  
 *bAuto*  
 [in] Specifica se questa funzione di accesso è una funzione di accesso automatico o una funzione di accesso manuali. Se **true**, la funzione di accesso è automatica; se **false**, la funzione di accesso è manuale. Una funzione di accesso automatico significa che i dati vengono recuperati automaticamente nelle operazioni di spostamento.  
  
## <a name="remarks"></a>Note  
 In caso di più funzioni di accesso su un set di righe, è necessario specificare `BEGIN_ACCESSOR_MAP` e utilizzare il `BEGIN_ACCESSOR` macro per ogni singola funzione di accesso. La macro `BEGIN_ACCESSOR` è completata con la macro `END_ACCESSOR` . Il `BEGIN_ACCESSOR_MAP` macro è stata completata con il `END_ACCESSOR_MAP` (macro).  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [END_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)