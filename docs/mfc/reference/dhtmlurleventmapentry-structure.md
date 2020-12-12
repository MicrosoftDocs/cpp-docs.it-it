---
description: 'Altre informazioni su: struttura DHtmlUrlEventMapEntry'
title: Struttura DHtmlUrlEventMapEntry
ms.date: 11/04/2016
f1_keywords:
- DHtmlUrlEventMapEntry
helpviewer_keywords:
- DHtmlUrlEventMapEntry structure [MFC]
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
ms.openlocfilehash: c35e3ac70d8530042ca73397b0f7c6df13501497
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220058"
---
# <a name="dhtmlurleventmapentry-structure"></a>Struttura DHtmlUrlEventMapEntry

La `DHtmlUrlEventMapEntry` struttura fornisce supporto per la mappa eventi a più URL.

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
URL.

*pEventMap*<br/>
Mappa eventi associata all'URL.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
