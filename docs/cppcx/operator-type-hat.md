---
description: 'Altre informazioni su: tipo di operatore ^'
title: Operatore Type^
ms.date: 12/30/2016
ms.assetid: b24ffc83-0780-4f9a-8ee0-f5725db339d1
ms.openlocfilehash: 6258da5f276313d28f56fe470849c929cc057a47
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276803"
---
# <a name="operator-type"></a>Operatore Type^

Consente la conversione da [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename) a `Platform::Type`.

## <a name="syntax"></a>Sintassi

```cpp
Operator Type^(Windows::UI::Xaml::Interop::TypeName typeName);
```

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto `Platform::Type` se è specificato [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename).

### <a name="remarks"></a>Commenti

`TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo. [Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C++ e non può essere passato attraverso l'interfaccia applicativa binaria (ABI). Ecco un esempio di utilizzo di `TypeName`nella funzione [Navigate](/uwp/api/windows.ui.xaml.controls.frame.navigate) :

```
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
```

### <a name="example"></a>Esempio

L'esempio seguente mostra come eseguire la conversione tra `TypeName` e `Type`.

```

// Convert from Type to TypeName
TypeName tn = TypeName(MainPage::typeid);

// Convert back from TypeName to Type
Type^ tx2 = (Type^)(tn);
```

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

.NET Framework progetto programmi `TypeName` come <xref:System.Type>

### <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedi anche

[Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)<br/>
[Classe Platform:: Type](../cppcx/platform-type-class.md)
