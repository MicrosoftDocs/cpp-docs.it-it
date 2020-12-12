---
description: 'Altre informazioni su: Platform:: Metadata:: RuntimeClassName'
title: Platform::Metadata::RuntimeClassName
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata::RuntimeClassName
helpviewer_keywords:
- RuntimeClassName
- Platform::Metadata::RuntimeClassName
ms.assetid: fdef8f85-ab94-4edd-ba50-ee0da9358ff6
ms.openlocfilehash: 25d6f3ae6b7509029b08f809fa20d5bd0ca5e735
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308380"
---
# <a name="platformmetadataruntimeclassname"></a>Platform::Metadata::RuntimeClassName

Se applicato a una definizione di classe, assicura che una classe privata restituisca un nome valido dalla funzione GetRuntimeClassName.

## <a name="syntax"></a>Sintassi

```cpp
[Platform::Metadata::RuntimeClassName] name
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
Il nome di un tipo pubblico esistente visibile in Windows Runtime.

### <a name="remarks"></a>Commenti

Usa questo attributo sulle classi di riferimento private per specificare il nome di un tipo di runtime personalizzato e/o quando il nome esistente non soddisfa i requisiti. Specifica come nome di un'interfaccia pubblica che implementa la classe.

### <a name="example"></a>Esempio

L'esempio seguente mostra come usare l'attributo. In questo esempio il nome del tipo di runtime di HellowWorldImpl è Test::Native::MyComponent::IHelloWorld

```cpp
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

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform:: Metadata](../cppcx/platform-metadata-namespace.md)
