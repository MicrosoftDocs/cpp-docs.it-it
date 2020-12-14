---
description: 'Altre informazioni su: struttura CDaoWorkspaceInfo'
title: Struttura CDaoWorkspaceInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoWorkspaceInfo
helpviewer_keywords:
- CDaoWorkspaceInfo structure [MFC]
- DAO (Data Access Objects), Workspaces collection
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
ms.openlocfilehash: b89e8787c2103244535e9458650f1f104478b748
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222203"
---
# <a name="cdaoworkspaceinfo-structure"></a>Struttura CDaoWorkspaceInfo

La `CDaoWorkspaceInfo` struttura contiene informazioni su un'area di lavoro definita per l'accesso al database DAO (Data Access Objects).

## <a name="syntax"></a>Sintassi

```
struct CDaoWorkspaceInfo
{
    CString m_strName;           // Primary
    CString m_strUserName;       // Secondary
    BOOL m_bIsolateODBCTrans;    // All
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Assegna un nome univoco all'oggetto dell'area di lavoro. Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro [GetName](../../mfc/reference/cdaoquerydef-class.md#getname) dell'oggetto QueryDef. Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_strUserName*<br/>
Valore che rappresenta il proprietario di un oggetto dell'area di lavoro. Per informazioni correlate, vedere l'argomento "proprietà UserName" nella Guida di DAO.

*m_bIsolateODBCTrans*<br/>
Valore che indica se sono isolate più transazioni che coinvolgono lo stesso database ODBC. Per ulteriori informazioni, vedere [CDaoWorkspace:: SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#setisolateodbctrans). Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.

## <a name="remarks"></a>Commenti

L'area di lavoro è un oggetto della classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). I riferimenti a primary, Secondary e all sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro [GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) nella classe `CDaoWorkspace` .

Le informazioni recuperate dalla funzione membro [CDaoWorkspace:: GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) vengono archiviate in una `CDaoWorkspaceInfo` struttura. `CDaoWorkspaceInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoWorkspaceInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)
