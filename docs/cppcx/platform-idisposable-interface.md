---
title: Interfaccia Platform::IDisposable
ms.date: 02/03/2017
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::IDisposable
helpviewer_keywords:
- Platform::IDisposable Interface
ms.assetid: f4344056-7030-42ed-bc98-b140edffddcd
ms.openlocfilehash: f114959321c0ed3879a089b944a5ff1b19843118
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62257829"
---
# <a name="platformidisposable-interface"></a>Interfaccia Platform::IDisposable

Utilizzata per rilasciare le risorse non gestite.

## <a name="syntax"></a>Sintassi

```cpp
public interface class IDisposable
```

## <a name="attributes"></a>Attributi

**GuidAttribute**("de0cbaea-8065-4a45-b196-c9d443f9bab3")

**VersionAttribute**(NTDDI_WIN8)

### <a name="members"></a>Membri

L'interfaccia IDisposable eredita dall'interfaccia IUnknown. IDisposable include anche i tipi di membri seguenti:

**Metodi**

L'interfaccia IDisposable include i metodi seguenti.

|Metodo|Descrizione|
|------------|-----------------|
|Dispose|Utilizzata per rilasciare le risorse non gestite.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma