---
title: operatore Windows::UI::Xaml::Interop::TypeName | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0cf5041e6e3faa8c495d52c31d86ff25c903a174
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600720"
---
# <a name="operator-windowsuixamlinteroptypename"></a>Operatore Windows::UI::Xaml::Interop::TypeName
Consente la conversione da `Platform::Type` a [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Operator TypeName(Platform::Type^ type)  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) se è specificato `Platform::Type^`.  
  
### <a name="remarks"></a>Note  
 `TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo. [Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C++ e non può essere passato attraverso l'interfaccia applicativa binaria (ABI). Ecco un esempio di utilizzo di `TypeName`nella funzione [Navigate](http://msdn.microsoft.com/library/windows/apps/hh702394.aspx) :  
  
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
 [operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)   
 [Classe Platform::Type](../cppcx/platform-type-class.md)