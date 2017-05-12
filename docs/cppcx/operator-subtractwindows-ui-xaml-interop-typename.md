---
title: "Operatore Windows::UI::Xaml::Interop::TypeName | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# Operatore Windows::UI::Xaml::Interop::TypeName
Consente la conversione da `Platform::Type` a [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).  
  
## Sintassi  
  
```cpp  
Operator TypeName(Platform::Type^ type)  
```  
  
## Valore restituito  
 Restituisce [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) se è specificato `Platform::Type^`.  
  
## Note  
 `TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo.[Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C\+\+ e non può essere passato attraverso l'interfaccia applicativa binaria \(ABI\). Ecco un esempio di utilizzo di `TypeName` nella funzione [Navigate](http://msdn.microsoft.com/library/windows/apps/hh702394.aspx):  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
## Esempio  
 L'esempio seguente mostra come eseguire la conversione tra `TypeName` e `Type`.  
  
```  
  
// Convert from Type to TypeName Windows::UI::Xaml::Interop::TypeName tn = TypeName(MainPage::typeid); // Convert back from TypeName to Type Type^ tx2 = (Type^)(tn);  
  
```  
  
## Equivalente .NET Framework  
 I programmi .NET Framework proiettano `TypeName` come [System.Type](assetId:///System.Type?qualifyHint=False&amp;autoUpgrade=True).  
  
## Requisiti  
  
## Vedere anche  
 [operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)   
 [Platform::Type \(classe\)](../cppcx/platform-type-class.md)