---
title: "Metodo Object::GetType | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::GetType"
ms.assetid: f633d71a-ff80-49f9-931d-189c00b1f6c5
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Object::GetType
Restituisce un oggetto [Platform::Type](../cppcx/platform-type-class.md) che descrive il tipo di runtime di un oggetto.  
  
## Sintassi  
  
```vb  
Object::GetType()  
```  
  
```csharp  
  
```  
  
## Valore proprietà\/Valore restituito  
 Oggetto [Platform::Type](../cppcx/platform-type-class.md) che descrive il tipo di runtime dell'oggetto.  
  
## Note  
 L'oggetto [Type::GetTypeCode \(metodo\)](../cppcx/type-gettypecode-method.md) statico può essere usato per ottenere un valore [Platform::TypeCode \(enumerazione\)](../cppcx/platform-typecode-enumeration.md) che rappresenta il tipo corrente. Questa funzionalità è particolarmente utile per i tipi predefiniti. Il codice del tipo per qualsiasi classe di riferimento oltre a [Platform::String](../cppcx/platform-string-class.md) è Object \(1\).  
  
 La classe [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) viene usata nelle API Windows come una soluzione indipendente dal linguaggio che consente di passare le informazioni sul tipo tra i componenti e le app di Windows. L'elemento T[Platform::Type \(classe\)](../cppcx/platform-type-class.md) dispone di operatori per la conversione tra `Type` e `TypeName`.  
  
 Usa l'operatore [typeid](~/windows/typeid-cpp-component-extensions.md) per restituire un oggetto `Platform::Type` per un nome di classe, ad esempio quando ti sposti tra pagine XAML:  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
## Vedere anche  
 [Platform::Type \(classe\)](../cppcx/platform-type-class.md)   
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)   
 [Sistema di tipi](../cppcx/type-system-c-cx.md)