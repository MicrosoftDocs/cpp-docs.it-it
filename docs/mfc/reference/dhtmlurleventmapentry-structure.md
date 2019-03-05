---
title: Struttura DHtmlUrlEventMapEntry
ms.date: 11/04/2016
f1_keywords:
- DHtmlUrlEventMapEntry
helpviewer_keywords:
- DHtmlUrlEventMapEntry structure [MFC]
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
ms.openlocfilehash: c9b58067a9c8b6a71cd22b654a2f82ba0f8bfe36
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57292653"
---
# <a name="dhtmlurleventmapentry-structure"></a>Struttura DHtmlUrlEventMapEntry

Il `DHtmlUrlEventMapEntry` struttura fornisce il supporto mappe eventi su più URL.

## <a name="syntax"></a>Sintassi

```
struct DHtmlUrlEventMapEntry
{
LPCTSTR szUrl;
const DHtmlEventMapEntry *pEventMap;
};
```

#### <a name="parameters"></a>Parametri

*szUrl*<br/>
L'URL.

*pEventMap*<br/>
La mappa di evento associata all'URL.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
