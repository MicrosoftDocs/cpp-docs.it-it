---
title: 'Classe platform:: Type | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Type::GetTypeCode
- VCCORLIB/Platform::Type::FullName
dev_langs:
- C++
helpviewer_keywords:
- Platform::Type Class
ms.assetid: d6b03f1e-b240-49b9-a08e-53a460030475
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 358bd57dc1c7272818b1dc542991caa59d3663d4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformtype-class"></a>Platform::Type (classe)
Contiene le informazioni di runtime su un tipo, in particolare un nome di stringa e un codice del tipo. Ottenute chiamando [Object:: GetType](../cppcx/platform-object-class.md#gettype) su qualsiasi oggetto o o tramite il [typeid](../windows/typeid-cpp-component-extensions.md) operatore su un nome di classe o struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class Platform::Type :      
    Platform::Object, Platform::Details::IEquatable,
    Platform::Details::IPrintable  
```  
  
### <a name="remarks"></a>Note  
 La classe `Type` è utile nelle applicazioni che richiedono l'elaborazione diretta usando un'istruzione `if` o `switch` che si dirama in base al tipo di runtime di un oggetto. Il codice del tipo che descrive la categoria di un tipo viene recuperato utilizzando il [Type:: GetTypeCode](#gettypecode) funzione membro.  
  
## <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|[metodo Type::GetTypeCode](#gettypecode)|Restituisce un valore dell'enumerazione [Platform::TypeCode](../cppcx/platform-typecode-enumeration.md) per l'oggetto.| 
|[Metodo Type::ToString](#tostring)|Restituisce il nome del tipo come specificato nei metadati.| 

 
## <a name="public-properties"></a>Proprietà pubbliche  
  
|||  
|-|-|  
|[Type:: FullName](#fullname)|Restituisce una classe [Platform::String](../cppcx/platform-string-class.md)^ che rappresenta il nome completo del tipo e usa il punto (.) come separatore, non:: (doppio carattere due punti), ad esempio, `MyNamespace.MyClass`.|  
  
## <a name="conversion-operators"></a>Operatori di conversione  
  
|||  
|-|-|  
|[Operatore Type^](../cppcx/operator-subtracttype-hat.md)|Consente la conversione da `Windows::UI::Xaml::Interop::TypeName` a `Platform::Type`.|  
|[Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)|Consente la conversione da `Platform::Type` a `Windows::UI::Xaml::Interop::TypeName`.|  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  

 
## <a name="fullname"></a> Proprietà Type::FullName
Recupera il nome completo del tipo corrente nel formato `Namespace.Type`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
String^ FullName();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Nome del tipo.  
### <a name="example"></a>Esempio  
  
```  
  
//  namespace is TestApp  
MainPage::MainPage()  
{  
    InitializeComponent();  
    Type^ t = this->GetType();  
    auto s = t->FullName; // returns "TestApp.MainPage"  
    auto s2 = t->ToString(); //also returns "TestApp.MainPage"  
}  
```  
  


## <a name="gettypecode"></a> metodo Type::GetTypeCode
Recupera una categoria di tipo numerico dei tipi incorporati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Platform::TypeCode GetTypeCode();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori enumerati di Platform::TypeCode.  
  
### <a name="remarks"></a>Note  
 È l'equivalente del metodo GetTypeCode membro il `typeid` proprietà.

## <a name="tostring"></a> Metodo Type::ToString
Recupera un nome del tipo.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Platform::String^ ToString();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Nome del tipo come specificato nei metadati.    
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)