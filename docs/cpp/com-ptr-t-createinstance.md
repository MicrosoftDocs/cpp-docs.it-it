---
title: _com_ptr_t::CreateInstance
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::CreateInstance
helpviewer_keywords:
- CreateInstance method [C++]
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
ms.openlocfilehash: 82b180b3f40683495ed2cfa284bdae8e1afaef9e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498655"
---
# <a name="_com_ptr_tcreateinstance"></a>_com_ptr_t::CreateInstance

**Sezione specifica Microsoft**

Crea una nuova istanza di un oggetto in base `CLSID` a `ProgID`un oggetto o.

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
Oggetto `CLSID` di un oggetto.

*clsidString*<br/>
Stringa Unicode che include un oggetto `CLSID` (a partire da " **{** `ProgID`") o.

*clsidStringA*<br/>
Stringa multibyte, che utilizza la tabella codici ANSI, che include un oggetto `CLSID` (a partire da " **{** `ProgID`") o.

*dwClsContext*<br/>
Contesto del codice eseguibile in esecuzione.

*pOuter*<br/>
Oggetto sconosciuto esterno per l' [aggregazione](../atl/aggregation.md).

## <a name="remarks"></a>Note

Queste funzioni membro chiamano `CoCreateInstance` per creare un nuovo oggetto COM e delle query per questo tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release`viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza. Questa routine restituisce HRESULT per indicare l'esito positivo o negativo.

- **CreateInstance (** *rclsid* **,** *dwClsContext* **)** crea una nuova istanza in esecuzione di un oggetto dato un `CLSID`.

- **CreateInstance (** *clsidString* **,** *dwClsContext* **)** crea una nuova istanza in esecuzione di un oggetto dato un Stringa Unicode che contiene un `CLSID` (a partire da " **{** ") o un `ProgID`.

- **CreateInstance (** *clsidStringA* **,** *dwClsContext* **)** crea una nuova istanza in esecuzione di un oggetto dato un stringa di caratteri multibyte che contiene un `CLSID` (a partire da " **{** ") o un `ProgID`. Chiama [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar), che presuppone che la stringa si trovi nella tabella codici ANSI anziché in una tabella codici OEM.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)