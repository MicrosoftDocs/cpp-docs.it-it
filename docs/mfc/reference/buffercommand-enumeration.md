---
title: Enumerazione BufferCommand
description: "Descrive l'enumerazione BufferCommand, che viene usata per lavorare con i file di memoria tramite CMemFile:: GetBufferPtr ()"
ms.date: 07/23/2020
f1_keywords:
- afx/buffercommand
helpviewer_keywords:
- buffercommand enumeration [MFC]
ms.openlocfilehash: f2f553df56fadd99b65b04cce9a97917425ed70b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87246104"
---
# <a name="buffercommand-enumeration"></a>Enumerazione BufferCommand

Usato da [CMemFile:: GetBufferPtr](cmemfile-class.md#getbufferptr) per determinare l'azione da eseguire sul buffer di memoria di cui è stato eseguito il backup del file.

## <a name="syntax"></a>Sintassi

``` cpp
public enum BufferCommand
{
   bufferRead,
   bufferWrite,
   bufferCommit,
   bufferCheck
};
```

## <a name="members"></a>Membri

|Nome|Descrizione|
|-|-|
| `bufferRead` | Leggere il buffer di memoria supportato dal file. |
| `bufferWrite` | Scrivere nel buffer di memoria di cui è stato eseguito il backup del file. |
| `bufferCommit` | Sposta la posizione corrente nel buffer di memoria di cui è stato eseguito il backup del file alla fine del buffer di cui è stato eseguito il commit. |
| `bufferCheck` | Determinare se la dimensione del buffer di memoria supportato dal file può aumentare. |

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definita nell'assembly atlmfc\lib\mfcmifc80.dll)
