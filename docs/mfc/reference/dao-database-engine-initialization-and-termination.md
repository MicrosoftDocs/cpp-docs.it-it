---
title: Inizializzazione e terminazione del motore di database DAO
ms.date: 09/17/2019
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
ms.openlocfilehash: 24a24d5a81da18d01472fc760c2adf96ee9868d5
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303465"
---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta. Quando si utilizzano oggetti DAO MFC, il motore di database DAO deve prima essere inizializzato e quindi terminato prima della chiusura dell'applicazione o della DLL. Due funzioni, `AfxDaoInit` e `AfxDaoTerm`, eseguono queste attività.

### <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

|||
|-|-|
|[AfxDaoInit](#afxdaoinit)|Inizializza il motore di database DAO.|
|[AfxDaoTerm](#afxdaoterm)|Termina il motore di database DAO.|

##  <a name="afxdaoinit"></a>  AfxDaoInit

Questa funzione Inizializza il motore di database DAO.

```

void AfxDaoInit();

throw(CDaoException*);
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi non è necessario chiamare `AfxDaoInit` perché l'applicazione lo chiama automaticamente quando necessario.

Per informazioni correlate e per un esempio di chiamata di `AfxDaoInit`, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

##  <a name="afxdaoterm"></a>  AfxDaoTerm

Questa funzione termina il motore di database DAO.

```

void AfxDaoTerm();
```

### <a name="remarks"></a>Osservazioni

In genere, è sufficiente chiamare questa funzione in una normale DLL MFC; Quando necessario, un'applicazione chiamerà automaticamente `AfxDaoTerm`.

Nelle normali DLL MFC, chiamare `AfxDaoTerm` prima della funzione `ExitInstance`, ma dopo che tutti gli oggetti DAO MFC sono stati eliminati definitivamente.

Per informazioni correlate, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="see-also"></a>Vedere anche

[Macro e globali](../../mfc/reference/mfc-macros-and-globals.md)
