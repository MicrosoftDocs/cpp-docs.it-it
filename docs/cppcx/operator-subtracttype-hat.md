---
title: "Operatore Type^ | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
ms.assetid: b24ffc83-0780-4f9a-8ee0-f5725db339d1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Operatore Type^
Consente la conversione da [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) a `Platform::Type`.  
  
## Sintassi  
  
```cpp  
Operator Type^(Windows::UI::Xaml::Interop::TypeName typeName)  
```  
  
## Valore restituito  
 Restituisce un oggetto `Platform::Type` se è specificato [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).  
  
## Note  
 `TypeName` è uno struct di Windows Runtime indipendente dal linguaggio per la rappresentazione delle informazioni sul tipo.[Platform::Type](../cppcx/platform-type-class.md) è specifico del linguaggio C\+\+ e non può essere passato attraverso l'interfaccia applicativa binaria \(ABI\). Ecco un esempio di utilizzo di `TypeName` nella funzione [Navigate](http://msdn.microsoft.com/library/windows/apps/hh702394.aspx):  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
## Esempio  
 L'esempio seguente mostra come eseguire la conversione tra `TypeName` e `Type`.  
  
```  
  
// Convert from Type to TypeName TypeName tn = TypeName(MainPage::typeid); // Convert back from TypeName to Type Type^ tx2 = (Type^)(tn);  
  
```  
  
## Equivalente .NET Framework  
 I programmi .NET Framework proiettano `TypeName` come [System.Type](assetId:///System.Type?qualifyHint=False&amp;autoUpgrade=True).  
  
## Requisiti  
  
## Vedere anche  
 [Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)   
 [Platform::Type \(classe\)](../cppcx/platform-type-class.md)