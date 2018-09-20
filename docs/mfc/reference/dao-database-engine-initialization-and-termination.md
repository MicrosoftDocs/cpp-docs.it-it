---
title: Inizializzazione del motore di Database DAO e terminazione | Microsoft Docs
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
ms.openlocfilehash: 8cf54992896559f1b143247746ef9f9e0e8d8979
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404007"
---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

Quando si utilizzano oggetti DAO MFC, il motore di database DAO deve essere inizializzato e quindi terminata prima che l'applicazione o DLL viene chiusa. Due funzioni, `AfxDaoInit` e `AfxDaoTerm`, eseguire queste attività.

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

Per informazioni correlate e per un esempio della chiamata al metodo `AfxDaoInit`, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao. h

##  <a name="afxdaoterm"></a>  AfxDaoTerm

Questa funzione consente di terminare il motore di database DAO.

```

void AfxDaoTerm();
```

### <a name="remarks"></a>Note

In genere, è sufficiente chiamare questa funzione in una normale DLL MFC. un'applicazione chiama automaticamente `AfxDaoTerm` quando è necessario.

DLL MFC regolari, chiamare `AfxDaoTerm` prima di `ExitInstance` (funzione), ma dopo che sono stati eliminati definitivamente tutti gli oggetti DAO MFC.

Per informazioni correlate, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
