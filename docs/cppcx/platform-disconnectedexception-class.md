---
title: Classe Platform::DisconnectedException
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::DisconnectedException
- VCCORLIB/Platform::DisconnectedException::DisconnectedException
helpviewer_keywords:
- Platform::DisconnectedException
ms.assetid: c25e0d64-5bff-4c21-88e5-c4ec2776fa7f
ms.openlocfilehash: 56276a7d09cc82e05886c2c67a4784993083adb5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62387617"
---
# <a name="platformdisconnectedexception-class"></a>Classe Platform::DisconnectedException

Generato quando un oggetto proxy COM tenta di fare riferimento a un server COM che non esiste più.

## <a name="syntax"></a>Sintassi

```
public ref class DisconnectedException : COMException,    IException,    IPrintable,    IEquatable
```

### <a name="remarks"></a>Note

Quando la classe A fa riferimento a un'altra classe (classe B) presente in un processo distinto, la classe A richiede un oggetto proxy per comunicare con il server COM out-of-process che include la classe B. A volte è possibile che la memoria del server si esaurisca senza che la classe A ne sia informata. In quel caso è generata l'eccezione RPC_E_DISCONNECTED, che viene convertita in Platform::DisconnectedException. Questa situazione si verifica ad esempio nello scenario in cui un'origine evento richiama un delegato passato all'origine evento stessa, ma il delegato è stato eliminato in un determinato momento dopo la sottoscrizione all'evento. In questo caso, l'origine evento rimuove il delegato dall'elenco di chiamate.

Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Classe Platform::COMException](../cppcx/platform-comexception-class.md)
