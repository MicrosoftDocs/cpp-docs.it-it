---
description: 'Altre informazioni su: _com_ptr_t:: GetActiveObject'
title: _com_ptr_t::GetActiveObject
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::GetActiveObject
helpviewer_keywords:
- GetActiveObject method [C++]
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
ms.openlocfilehash: 96784e73d91d7be4b0674e09278183fc62e60af2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295471"
---
# <a name="_com_ptr_tgetactiveobject"></a>_com_ptr_t::GetActiveObject

**Specifico di Microsoft**

Si connette a un'istanza esistente di un oggetto dato un oggetto `CLSID` o `ProgID` .

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
`CLSID`Oggetto di un oggetto.

*clsidString*<br/>
Stringa Unicode che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .

*clsidStringA*<br/>
Stringa multibyte, che utilizza la tabella codici ANSI, che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .

## <a name="remarks"></a>Commenti

Queste funzioni membro chiamano **GetActiveObject** per recuperare un puntatore a un oggetto in esecuzione che è stato registrato con OLE, quindi esegue una query per il tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release` viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza. Questa routine restituisce HRESULT per indicare l'esito positivo o negativo.

- **GetActiveObject (** `rclsid` **)** si connette a un'istanza esistente di un oggetto dato un oggetto `CLSID` .    

- **GetActiveObject (** `clsidString` **)** si connette a un'istanza esistente di un oggetto data una stringa Unicode che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .    

- **GetActiveObject (** `clsidStringA` **)** si connette a un'istanza esistente di un oggetto data una stringa di caratteri multibyte che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .     Chiama [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar), che presuppone che la stringa si trovi nella tabella codici ANSI anziché in una tabella codici OEM.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
