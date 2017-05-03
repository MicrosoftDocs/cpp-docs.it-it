---
title: "Platform::Type (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Type (classe)"
ms.assetid: d6b03f1e-b240-49b9-a08e-53a460030475
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Platform::Type (classe)
Contiene le informazioni di runtime su un tipo, in particolare un nome di stringa e un codice del tipo. Ottenute chiamando [Object::GetType Method](../cppcx/object-gettype-method.md) su qualsiasi oggetto o usando l'operatore [typeid](~/windows/typeid-cpp-component-extensions.md)su un nome di struct o classe.  
  
## Sintassi  
  
```cpp  
public ref class Platform::Type :      Platform::Object,      Platform::Details::IEquatable,      Platform::Details::IPrintable  
```  
  
## Note  
 La classe `Type` è utile nelle applicazioni che richiedono l'elaborazione diretta usando un'istruzione `if` o `switch` che si dirama in base al tipo di runtime di un oggetto. Il codice del tipo che descrive la categoria di un tipo viene recuperato usando la funzione membro del [metodo Type::GetTypeCode](../cppcx/type-gettypecode-method.md).  
  
## Metodi pubblici  
  
|||  
|-|-|  
|[Type::GetTypeCode \(metodo\)](../cppcx/type-gettypecode-method.md)|Restituisce un valore dell'enumerazione [Platform::TypeCode](../cppcx/platform-typecode-enumeration.md) per l'oggetto.|  
  
## Proprietà pubbliche  
  
|||  
|-|-|  
|[Proprietà Type::FullName](../cppcx/type-fullname-property.md)|Restituisce una classe [Platform::String](../cppcx/platform-string-class.md)^ che rappresenta il nome completo del tipo e usa il punto \(.\) come separatore, non :: \(doppio carattere due punti\), ad esempio "MyNamespace.MyClass".|  
  
## Operatori di conversione  
  
|||  
|-|-|  
|[Operatore Type^](../cppcx/operator-subtracttype-hat.md)|Consente la conversione da `Windows::UI::Xaml::Interop::TypeName` a `Platform::Type`.|  
|[Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)|Consente la conversione da `Platform::Type` a `Windows::UI::Xaml::Interop::TypeName`.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)