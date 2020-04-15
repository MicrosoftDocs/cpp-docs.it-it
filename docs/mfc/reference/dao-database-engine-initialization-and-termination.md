---
title: Inizializzazione e terminazione del motore di database DAO
ms.date: 09/17/2019
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
ms.openlocfilehash: 62460e8e55f70b8cb0743f1d044636d25121050d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365900"
---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

DAO viene utilizzato con i database di Access ed è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta. Quando si utilizzano oggetti DAO MFC, il motore di database DAO deve prima essere inizializzato e quindi terminato prima della chiusura dell'applicazione o della DLL. Due funzioni `AfxDaoInit` `AfxDaoTerm`e , eseguire queste attività.

### <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

|||
|-|-|
|[AfxDaoInit](#afxdaoinit)|Inizializza il motore di database DAO.|
|[AfxDaoTerm](#afxdaoterm)|Termina il motore di database DAO.|

## <a name="afxdaoinit"></a><a name="afxdaoinit"></a>AfxDaoInit

Questa funzione inizializza il motore di database DAO.

```

void AfxDaoInit();

throw(CDaoException*);
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, `AfxDaoInit` non è necessario chiamare perché l'applicazione chiama automaticamente quando è necessario.

Per informazioni correlate e per `AfxDaoInit`un esempio di chiamata, vedere [la Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="afxdaoterm"></a><a name="afxdaoterm"></a>AfxDaoTerm

Questa funzione termina il motore di database DAO.

```

void AfxDaoTerm();
```

### <a name="remarks"></a>Osservazioni

In genere, è necessario chiamare questa funzione solo in una DLL MFC regolare; un'applicazione chiamerà `AfxDaoTerm` automaticamente quando è necessario.

Nelle DLL MFC regolari, `AfxDaoTerm` chiamare `ExitInstance` prima della funzione, ma dopo che tutti gli oggetti DAO MFC sono stati eliminati.

Per informazioni correlate, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
