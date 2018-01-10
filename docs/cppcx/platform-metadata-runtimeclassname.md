---
title: Platform::Metadata::RuntimeClassName | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: VCCORLIB/Platform::Metadata::RuntimeClassName
helpviewer_keywords:
- RuntimeClassName
- Platform::Metadata::RuntimeClassName
ms.assetid: fdef8f85-ab94-4edd-ba50-ee0da9358ff6
caps.latest.revision: "2"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8c32ac79cbea1425af42576073b2f59ef6a562a3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="platformmetadataruntimeclassname"></a>Platform::Metadata::RuntimeClassName
Se applicato a una definizione di classe, assicura che una classe privata restituisca un nome valido dalla funzione GetRuntimeClassName.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[Platform::Metadata::RuntimeClassName] name  
```  
  
#### <a name="parameters"></a>Parametri  
 name  
  
 Il nome di un tipo pubblico esistente visibile in Windows Runtime.  
  
### <a name="remarks"></a>Note  
 Usa questo attributo sulle classi di riferimento private per specificare il nome di un tipo di runtime personalizzato e/o quando il nome esistente non soddisfa i requisiti. Specifica come nome di un'interfaccia pubblica che implementa la classe.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra come usare l'attributo. In questo esempio il nome del tipo di runtime di HellowWorldImpl è Test::Native::MyComponent::IHelloWorld  
  
```  
  
namespace Test  
{  
    namespace Native  
    {  
        namespace MyComponent  
        {  
            public interface class IHelloWorld  
            {  
                Platform::String^ SayHello();  
            };  
  
            private ref class HelloWorldImpl sealed :[Platform::Metadata::RuntimeClassName] IHelloWorld  
            {  
            public:  
                HelloWorldImpl();  
                virtual Platform::String^ SayHello();  
            };  
  
            Platform::String^ HelloWorldImpl::SayHello()  
            {  
                return L"Hello World!";  
            }  
        }  
    }  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Platform::Metadata (spazio dei nomi)](../cppcx/platform-metadata-namespace.md)