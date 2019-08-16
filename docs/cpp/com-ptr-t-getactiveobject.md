---
title: _com_ptr_t::GetActiveObject
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::GetActiveObject
helpviewer_keywords:
- GetActiveObject method [C++]
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
ms.openlocfilehash: f13a42878392f63096cdfcb405f3f91cc0efe451
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498887"
---
# <a name="_com_ptr_tgetactiveobject"></a>_com_ptr_t::GetActiveObject

**Sezione specifica Microsoft**

Si connette a un'istanza esistente di un oggetto dato un `CLSID` oggetto `ProgID`o.

## <a name="syntax"></a>Sintassi

```
HRESULT GetActiveObject(
   const CLSID& rclsid
) throw( );
HRESULT GetActiveObject(
   LPCWSTR clsidString
) throw( );
HRESULT GetActiveObject(
   LPCSTR clsidStringA
) throw( );
```

#### <a name="parameters"></a>Parametri

*rclsid*<br/>
Oggetto `CLSID` di un oggetto.

*clsidString*<br/>
Stringa Unicode che include un oggetto `CLSID` (a partire da " **{** `ProgID`") o.

*clsidStringA*<br/>
Stringa multibyte, che utilizza la tabella codici ANSI, che include un oggetto `CLSID` (a partire da " **{** `ProgID`") o.

## <a name="remarks"></a>Note

Queste funzioni membro chiamano **GetActiveObject** per recuperare un puntatore a un oggetto in esecuzione che è stato registrato con OLE, quindi esegue una query per il tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release`viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza. Questa routine restituisce HRESULT per indicare l'esito positivo o negativo.

- **GetActiveObject (** `rclsid` **)** si connette a un'istanza esistente di un oggetto dato un `CLSID`oggetto.

- **GetActiveObject (** `clsidString` **)** si connette a un'istanza esistente di un oggetto data una stringa Unicode che include un `CLSID` oggetto ( `ProgID`a partire da " **{** ") o.

- **GetActiveObject (** `clsidStringA` **)** si connette a un'istanza esistente di un oggetto data una stringa di caratteri multibyte che include un `CLSID` oggetto ( `ProgID`a partire da " **{** ") o. Chiama [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar), che presuppone che la stringa si trovi nella tabella codici ANSI anziché in una tabella codici OEM.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)