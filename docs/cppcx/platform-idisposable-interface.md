---
title: Interfaccia Platform::IDisposable
ms.date: 02/03/2017
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::IDisposable
helpviewer_keywords:
- Platform::IDisposable Interface
ms.assetid: f4344056-7030-42ed-bc98-b140edffddcd
ms.openlocfilehash: 0024edbad0bb3311a0497be67fc8bcfc954602e1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214240"
---
# <a name="platformidisposable-interface"></a>Interfaccia Platform::IDisposable

Utilizzata per rilasciare le risorse non gestite.

## <a name="syntax"></a>Sintassi

```cpp
public interface class IDisposable
```

## <a name="attributes"></a>Attributes

**GuidAttribute**("de0cbaea-8065-4A45-B196-c9d443f9bab3")

**VersionAttribute**(NTDDI_WIN8)

### <a name="members"></a>Members

L'interfaccia IDisposable eredita dall'interfaccia IUnknown. IDisposable include anche i tipi di membri seguenti:

**Metodi**

L'interfaccia IDisposable include i metodi seguenti.

|Metodo|Descrizione|
|------------|-----------------|
|Dispose|Utilizzata per rilasciare le risorse non gestite.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform
