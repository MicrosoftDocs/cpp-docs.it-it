---
title: Operatore Windows::UI::Xaml::Interop::TypeName
ms.date: 12/30/2016
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
ms.openlocfilehash: 7480df474086d78e28d235cc89b05094c648d28b
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57415175"
---
# <a name="operator-windowsuixamlinteroptypename"></a>Operatore Windows::UI::Xaml::Interop::TypeName

Consente la conversione da `Platform::Type` a [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename).

## <a name="syntax"></a>Sintassi

```cpp
Operator TypeName(Platform::Type^ type);
```

### <a name="return-value"></a>Valore restituito

Restituisce [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename) se è specificato `Platform::Type^`.

### <a name="remarks"></a>Note

`TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo. [Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C++ e non può essere passato attraverso l'interfaccia applicativa binaria (ABI). Ecco un esempio di utilizzo di `TypeName`nella funzione [Navigate](/uwp/api/windows.ui.xaml.controls.frame.navigate) :

```
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
```

### <a name="example"></a>Esempio

L'esempio seguente mostra come eseguire la conversione tra `TypeName` e `Type`.

```

// Convert from Type to TypeName
Windows::UI::Xaml::Interop::TypeName tn = TypeName(MainPage::typeid);

// Convert back from TypeName to Type
Type^ tx2 = (Type^)(tn);
```

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

I programmi .NET Framework proiettano `TypeName` come [System.Type](assetId:///System.Type?qualifyHint=False&autoUpgrade=True).

### <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedere anche

[Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)<br/>
[Classe Platform::Type](../cppcx/platform-type-class.md)