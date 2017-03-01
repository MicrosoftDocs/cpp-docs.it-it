---
title: Inizializzazione del motore di Database DAO e terminazione | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.data
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: b6119279234558998fad1f220239a29618c69cc5
ms.lasthandoff: 02/24/2017

---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO
Quando si utilizzano oggetti DAO MFC, il motore di database DAO deve essere prima inizializzato e quindi terminata prima della chiusura di applicazione o DLL. Le due funzioni `AfxDaoInit` e `AfxDaoTerm`, eseguire queste attività.  
  
### <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO  
  
|||  
|-|-|  
|[AfxDaoInit](#afxdaoinit)|Inizializza il motore di database DAO.|  
|[AfxDaoTerm](#afxdaoterm)|Termina il motore di database DAO.|  
  
##  <a name="a-nameafxdaoinita--afxdaoinit"></a><a name="afxdaoinit"></a>AfxDaoInit  
 Questa funzione consente di inizializzare il motore di database DAO.  
  
```  
 
void AfxDaoInit();

throw(CDaoException*);  
```  
  
### <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non è necessario chiamare `AfxDaoInit` perché l'applicazione chiama automaticamente, quando necessario.  
  
 Per informazioni correlate e per un esempio di chiamata `AfxDaoInit`, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameafxdaoterma--afxdaoterm"></a><a name="afxdaoterm"></a>AfxDaoTerm  
 Questa funzione consente di terminare il motore di database DAO.  
  
```  
 
void AfxDaoTerm();  
```  
  
### <a name="remarks"></a>Note  
 In genere, è sufficiente chiamare questa funzione in una DLL regolare; un'applicazione chiamerà automaticamente `AfxDaoTerm` quando è necessario.  
  
 DLL regolari, chiamare `AfxDaoTerm` prima di `ExitInstance` funzione, ma dopo che sono stati eliminati tutti gli oggetti DAO MFC.  
  
 Per informazioni correlate, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

