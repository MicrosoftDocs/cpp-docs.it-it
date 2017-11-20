---
title: Inizializzazione del motore di Database DAO e terminazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.macros.data
dev_langs: C++
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4e32930b53c6e05abf692474fdb1236fe007a1eb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO
Quando si utilizzano gli oggetti DAO MFC, il motore di database DAO deve prima essere inizializzato e quindi terminata prima della chiusura dell'applicazione o DLL. Due funzioni, `AfxDaoInit` e `AfxDaoTerm`, eseguire queste attività.  
  
### <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO  
  
|||  
|-|-|  
|[AfxDaoInit](#afxdaoinit)|Inizializza il motore di database DAO.|  
|[AfxDaoTerm](#afxdaoterm)|Termina il motore di database DAO.|  
  
##  <a name="afxdaoinit"></a>AfxDaoInit  
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
  
##  <a name="afxdaoterm"></a>AfxDaoTerm  
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
