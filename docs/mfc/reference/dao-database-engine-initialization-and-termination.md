---
title: Inizializzazione e terminazione del motore di database DAO
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros.data
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
ms.openlocfilehash: 8ad0c1df2f5b6a7b1b48d2db119b04e4b3234f10
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323216"
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
