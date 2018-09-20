---
title: Struttura CDaoWorkspaceInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoWorkspaceInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoWorkspaceInfo structure [MFC]
- DAO (Data Access Objects), Workspaces collection
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f46bfec2d74b0d1fd292b3c9852ba8ea568329a2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46441759"
---
# <a name="cdaoworkspaceinfo-structure"></a>Struttura CDaoWorkspaceInfo

Il `CDaoWorkspaceInfo` struttura contiene informazioni su un'area di lavoro definito per l'accesso al database di data access Object (DAO).

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
Identifica in modo univoco l'oggetto dell'area di lavoro. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto di querydef [GetName](../../mfc/reference/cdaoquerydef-class.md#getname) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_strUserName*<br/>
Un valore che rappresenta il proprietario di un oggetto dell'area di lavoro. Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.

*m_bIsolateODBCTrans*<br/>
Un valore che indica se più transazioni che coinvolgono lo stesso database ODBC sono isolate. Per altre informazioni, vedere [CDaoWorkspace::SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#setisolateodbctrans). Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.

## <a name="remarks"></a>Note

L'area di lavoro è un oggetto della classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [funzione membro GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) funzione di membro nella classe `CDaoWorkspace`.

Le informazioni recuperate dal [CDaoWorkspace::GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) le funzioni membro vengono archiviate un `CDaoWorkspaceInfo` struttura. `CDaoWorkspaceInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoWorkspaceInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)
