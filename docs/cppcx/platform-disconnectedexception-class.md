---
description: 'Altre informazioni su: Platform::D classe di connessioneexception'
title: Classe Platform::DisconnectedException
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::DisconnectedException
- VCCORLIB/Platform::DisconnectedException::DisconnectedException
helpviewer_keywords:
- Platform::DisconnectedException
ms.assetid: c25e0d64-5bff-4c21-88e5-c4ec2776fa7f
ms.openlocfilehash: 6ccfedc143d0245582c7c1f95110207d583949fd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195320"
---
# <a name="platformdisconnectedexception-class"></a>Classe Platform::DisconnectedException

Generato quando un oggetto proxy COM tenta di fare riferimento a un server COM che non esiste più.

## <a name="syntax"></a>Sintassi

```
public ref class DisconnectedException : COMException,    IException,    IPrintable,    IEquatable
```

### <a name="remarks"></a>Osservazioni

Quando la classe A fa riferimento a un'altra classe (classe B) presente in un processo distinto, la classe A richiede un oggetto proxy per comunicare con il server COM out-of-process che include la classe B. A volte è possibile che la memoria del server si esaurisca senza che la classe A ne sia informata. In quel caso è generata l'eccezione RPC_E_DISCONNECTED, che viene convertita in Platform::DisconnectedException. Questa situazione si verifica ad esempio nello scenario in cui un'origine evento richiama un delegato passato all'origine evento stessa, ma il delegato è stato eliminato in un determinato momento dopo la sottoscrizione all'evento. In questo caso, l'origine evento rimuove il delegato dall'elenco di chiamate.

Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="see-also"></a>Vedi anche

[Classe Platform:: COMException](../cppcx/platform-comexception-class.md)
