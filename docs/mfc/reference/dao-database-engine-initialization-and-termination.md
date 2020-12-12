---
description: 'Ulteriori informazioni su: DAO motore di database inizializzazione e terminazione'
title: Inizializzazione e terminazione del motore di database DAO
ms.date: 09/17/2019
helpviewer_keywords:
- DAO (Data Access Objects), termination
- DAO (Data Access Objects), initialization
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
ms.openlocfilehash: 9e9b522d744eabc84074b201051151b80ed75d7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220396"
---
# <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta. Quando si utilizzano oggetti DAO MFC, il motore di database DAO deve prima essere inizializzato e quindi terminato prima della chiusura dell'applicazione o della DLL. Due funzioni, `AfxDaoInit` e `AfxDaoTerm` , eseguono queste attività.

### <a name="dao-database-engine-initialization-and-termination"></a>Inizializzazione e terminazione del motore di database DAO

|Nome|Description|
|-|-|
|[AfxDaoInit](#afxdaoinit)|Inizializza il motore di database DAO.|
|[AfxDaoTerm](#afxdaoterm)|Termina il motore di database DAO.|

## <a name="afxdaoinit"></a><a name="afxdaoinit"></a> AfxDaoInit

Questa funzione Inizializza il motore di database DAO.

```

void AfxDaoInit();

throw(CDaoException*);
```

### <a name="remarks"></a>Commenti

Nella maggior parte dei casi, non è necessario chiamare `AfxDaoInit` perché l'applicazione lo chiama automaticamente quando necessario.

Per informazioni correlate e per un esempio di chiamata a `AfxDaoInit` , vedere la [nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="afxdaoterm"></a><a name="afxdaoterm"></a> AfxDaoTerm

Questa funzione termina il motore di database DAO.

```

void AfxDaoTerm();
```

### <a name="remarks"></a>Commenti

In genere, è sufficiente chiamare questa funzione in una normale DLL MFC; un'applicazione chiamerà automaticamente `AfxDaoTerm` quando necessario.

Nelle normali DLL MFC chiamare `AfxDaoTerm` prima della `ExitInstance` funzione, ma dopo che tutti gli oggetti DAO MFC sono stati eliminati definitivamente.

Per informazioni correlate, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
