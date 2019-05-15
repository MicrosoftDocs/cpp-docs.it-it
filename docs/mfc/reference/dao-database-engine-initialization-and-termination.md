---
title: Inizializzazione e terminazione del motore di database DAO
ms.date: 11/04/2016
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
ms.openlocfilehash: 1b8186627f00105cf782586060b41ae0fb627d76
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65611939"
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
