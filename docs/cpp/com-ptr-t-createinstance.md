---
description: 'Altre informazioni su: _com_ptr_t:: CreateInstance'
title: _com_ptr_t::CreateInstance
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::CreateInstance
helpviewer_keywords:
- CreateInstance method [C++]
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
ms.openlocfilehash: dd7ef236f25c22b25c9c083aea8439f5f5175d5b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295523"
---
# <a name="_com_ptr_tcreateinstance"></a>_com_ptr_t::CreateInstance

**Specifico di Microsoft**

Crea una nuova istanza di un oggetto in base a un oggetto `CLSID` o `ProgID` .

## <a name="syntax"></a>Sintassi

```
HRESULT CreateInstance(
   const CLSID& rclsid,
   IUnknown* pOuter=NULL,
   DWORD dwClsContext = CLSCTX_ALL
) throw( );
HRESULT CreateInstance(
   LPCWSTR clsidString,
   IUnknown* pOuter=NULL,
   DWORD dwClsContext = CLSCTX_ALL
) throw( );
HRESULT CreateInstance(
   LPCSTR clsidStringA,
   IUnknown* pOuter=NULL,
   DWORD dwClsContext = CLSCTX_ALL
) throw( );
```

#### <a name="parameters"></a>Parametri

*rclsid*<br/>
`CLSID`Oggetto di un oggetto.

*clsidString*<br/>
Stringa Unicode che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .

*clsidStringA*<br/>
Stringa multibyte, che utilizza la tabella codici ANSI, che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .

*dwClsContext*<br/>
Contesto del codice eseguibile in esecuzione.

*pOuter*<br/>
Oggetto sconosciuto esterno per l' [aggregazione](../atl/aggregation.md).

## <a name="remarks"></a>Commenti

Queste funzioni membro chiamano `CoCreateInstance` per creare un nuovo oggetto COM e delle query per questo tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release` viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza. Questa routine restituisce HRESULT per indicare l'esito positivo o negativo.

- **CreateInstance (**  *rclsid* **,**  *dwClsContext*  **)** Crea una nuova istanza in esecuzione di un oggetto in base a `CLSID` .

- **CreateInstance (**  *clsidString* **,**  *dwClsContext*  **)** Crea una nuova istanza in esecuzione di un oggetto data una stringa Unicode che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` .

- **CreateInstance (**  *clsidStringA* **,**  *dwClsContext*  **)** Crea una nuova istanza in esecuzione di un oggetto data una stringa di caratteri multibyte che include un oggetto `CLSID` (a partire da "**{**") o `ProgID` . Chiama [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar), che presuppone che la stringa si trovi nella tabella codici ANSI anziché in una tabella codici OEM.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
