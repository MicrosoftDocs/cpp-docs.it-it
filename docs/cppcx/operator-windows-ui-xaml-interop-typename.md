---
description: 'Altre informazioni su: operatore Windows:: UI:: XAML:: Interop:: TypeName'
title: Operatore Windows::UI::Xaml::Interop::TypeName
ms.date: 12/30/2016
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
ms.openlocfilehash: 3c4c856fcf93214959f75f861b035dbdee9b94a6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145717"
---
# <a name="operator-windowsuixamlinteroptypename"></a>Operatore Windows::UI::Xaml::Interop::TypeName

Consente la conversione da `Platform::Type` a [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename).

## <a name="syntax"></a>Sintassi

```cpp
Operator TypeName(Platform::Type^ type);
```

### <a name="return-value"></a>Valore restituito

Restituisce [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename) se è specificato `Platform::Type^`.

### <a name="remarks"></a>Commenti

`TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo. [Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C++ e non può essere passato attraverso l'interfaccia applicativa binaria (ABI). Ecco un esempio di utilizzo di `TypeName`nella funzione [Navigate](/uwp/api/windows.ui.xaml.controls.frame.navigate) :

```cpp
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
```

### <a name="example"></a>Esempio

L'esempio seguente mostra come eseguire la conversione tra `TypeName` e `Type`.

```cpp
// Convert from Type to TypeName
Windows::UI::Xaml::Interop::TypeName tn = TypeName(MainPage::typeid);

// Convert back from TypeName to Type
Type^ tx2 = (Type^)(tn);
```

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

I programmi .NET Framework proiettano `TypeName` come [System.Type](/dotnet/api/system.type).

### <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedi anche

[Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)<br/>
[Classe Platform:: Type](../cppcx/platform-type-class.md)
