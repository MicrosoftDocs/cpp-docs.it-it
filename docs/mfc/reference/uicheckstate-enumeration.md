---
title: Enumerazione UICheckState
ms.date: 04/03/2017
f1_keywords:
- afxwinforms/uicheckstate
helpviewer_keywords:
- uicheckstate enumeration [MFC]
ms.assetid: 2ac0098c-20e7-410c-9685-5ead5cb02b63
ms.openlocfilehash: 1411e9b7cb088c063e17cc7c59871e5f0b83ad9c
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51692502"
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
