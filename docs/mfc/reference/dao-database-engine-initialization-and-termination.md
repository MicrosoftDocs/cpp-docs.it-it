---
title: Inizializzazione del motore di Database DAO e terminazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros.data
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3f28c0c166bcbf13181161d6afce484fe4a45b80
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO
Quando si utilizzano gli oggetti DAO MFC, il motore di database DAO deve prima essere inizializzato e quindi terminata prima della chiusura dell'applicazione o DLL. Due funzioni, `AfxDaoInit` e `AfxDaoTerm`, eseguire queste attività.  
  
### <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO  
  
|||  
|-|-|  
|[AfxDaoInit](#afxdaoinit)|Inizializza il motore di database DAO.|  
|[AfxDaoTerm](#afxdaoterm)|Termina il motore di database DAO.|  
  
##  <a name="afxdaoinit"></a>  AfxDaoInit  
 Questa funzione inizializza il motore di database DAO.  
  
```  
 
void AfxDaoInit();

throw(CDaoException*);  
```  
  
### <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non è necessario chiamare `AfxDaoInit` perché l'applicazione chiama automaticamente, quando necessario.  
  
 Per informazioni correlate e per un esempio di chiamata `AfxDaoInit`, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="afxdaoterm"></a>  AfxDaoTerm  
 Questa funzione consente di terminare il motore di database DAO.  
  
```  
 
void AfxDaoTerm();  
```  
  
### <a name="remarks"></a>Note  
 In genere, è sufficiente chiamare questa funzione in una normale DLL MFC. un'applicazione chiama automaticamente `AfxDaoTerm` quando è necessario.  
  
 DLL regolari MFC, chiamare `AfxDaoTerm` prima il `ExitInstance` funzione, ma dopo che sono stati eliminati tutti gli oggetti DAO MFC.  
  
 Per informazioni correlate, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
