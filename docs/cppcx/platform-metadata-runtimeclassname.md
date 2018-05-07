---
title: Platform::Metadata::RuntimeClassName | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata::RuntimeClassName
helpviewer_keywords:
- RuntimeClassName
- Platform::Metadata::RuntimeClassName
ms.assetid: fdef8f85-ab94-4edd-ba50-ee0da9358ff6
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 297a5089af7db43d837934e864e0925cd7b34a3d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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