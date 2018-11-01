---
title: Enumerazione UICheckState
ms.date: 04/03/2017
f1_keywords:
- afxwinforms/uicheckstate
helpviewer_keywords:
- uicheckstate enumeration [MFC]
ms.assetid: 2ac0098c-20e7-410c-9685-5ead5cb02b63
ms.openlocfilehash: 6e04015f33012ddd1c0a75187c89eadedbe01e3d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528141"
---
# <a name="uicheckstate-enumeration"></a>Enumerazione UICheckState
Descrive lo stato di selezione di un elemento dell'interfaccia utente per il comando.

### <a name="syntax"></a>Sintassi

```
public enum class
{
   [DefaultValue(typeid<Microsoft::VisualC::MFC::UICheckState>, "Checked")]
   Unchecked,
   Checked,
   Indeterminate
};
```

### <a name="remarks"></a>Note

[ICommandUI::Check](icommandui-interface.md#check) Usa questi valori per descrivere lo stato di un elemento dell'interfaccia utente.
Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)
