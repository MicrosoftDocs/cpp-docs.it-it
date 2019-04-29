---
title: _com_ptr_t::CreateInstance
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::CreateInstance
helpviewer_keywords:
- CreateInstance method [C++]
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
ms.openlocfilehash: c4f6cd54b90ab5fab69f91df67a8bf60b0b658f8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399365"
---
# <a name="comptrtcreateinstance"></a>_com_ptr_t::CreateInstance

**Sezione specifica Microsoft**

Crea una nuova istanza di un oggetto dato un `CLSID` o `ProgID`.

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
Il `CLSID` di un oggetto.

*clsidString*<br/>
Una stringa Unicode che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.

*clsidStringA*<br/>
Una stringa multibyte che utilizza la tabella codici ANSI, che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.

*dwClsContext*<br/>
Contesto del codice eseguibile in esecuzione.

*pOuter*<br/>
Unknown esterno di [aggregazione](../atl/aggregation.md).

## <a name="remarks"></a>Note

Queste funzioni membro chiamano `CoCreateInstance` per creare un nuovo oggetto COM e delle query per questo tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza. Questa routine restituisce il valore HRESULT per indicare esito positivo o negativo.

- **CreateInstance (***rclsid* **,***dwClsContext***)** crea una nuova istanza in esecuzione di un oggetto dato un `CLSID`.

- **CreateInstance (***clsidString* **,***dwClsContext***)** crea una nuova istanza in esecuzione di un oggetto dato un Stringa Unicode che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.

- **CreateInstance (***clsidStringA* **,***dwClsContext***)** crea una nuova istanza in esecuzione di un oggetto dato un stringa di caratteri multibyte che contiene un `CLSID` (a partire da "**{**") o un `ProgID`. Le chiamate [MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar), che presuppone che la stringa sia la tabella codici ANSI anziché una tabella codici OEM.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)