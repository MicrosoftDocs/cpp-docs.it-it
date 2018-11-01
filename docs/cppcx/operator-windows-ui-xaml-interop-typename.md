---
title: Operatore Windows::UI::Xaml::Interop::TypeName
ms.date: 12/30/2016
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
ms.openlocfilehash: c77655ed7692c4cdccc311bc27c492126d62e54e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659213"
---
# <a name="operator-windowsuixamlinteroptypename"></a>Operatore Windows::UI::Xaml::Interop::TypeName

Consente la conversione da `Platform::Type` a [Windows::UI::Xaml::Interop::TypeName](https://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).

## <a name="syntax"></a>Sintassi

```cpp
Operator TypeName(Platform::Type^ type);
```

### <a name="return-value"></a>Valore restituito

Restituisce [Windows::UI::Xaml::Interop::TypeName](https://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) se è specificato `Platform::Type^`.

### <a name="remarks"></a>Note

`TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo. [Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C++ e non può essere passato attraverso l'interfaccia applicativa binaria (ABI). Ecco un esempio di utilizzo di `TypeName`nella funzione [Navigate](https://msdn.microsoft.com/library/windows/apps/hh702394.aspx) :

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