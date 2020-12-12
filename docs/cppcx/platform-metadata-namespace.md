---
description: 'Altre informazioni su: spazio dei nomi Platform:: Metadata'
title: Platform::Metadata (spazio dei nomi)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata
helpviewer_keywords:
- Platform::Metadata Namespace
ms.assetid: e3e114d8-a4b0-47f0-865a-9ce9d7212e86
ms.openlocfilehash: 5dd699c0136c4ee37462dd22f9ee27bec345e8b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308393"
---
# <a name="platformmetadata-namespace"></a>Platform::Metadata (spazio dei nomi)

Questo spazio dei nomi contiene attributi che modificano le dichiarazioni dei tipi.

## <a name="syntax"></a>Sintassi

```cpp
namespace Platform {
   namespace Metadata {
}}
```

### <a name="members"></a>Members

Sebbene questo spazio dei nomi sia solo per uso interno, tramite i browser è possibile visualizzarne i seguenti membri.

|Nome|Commento|
|----------|------------|
|Attributo|Classe di base per attributi.|
|[Platform:: Metadata::D attributo efaultMemberAttribute](../cppcx/platform-metadata-defaultmemberattribute-attribute.md)|Indica la funzione preferita da chiamare tra numerose funzioni in overload possibili.|
|[Attributo Platform::Metadata::FlagsAttribute](../cppcx/platform-metadata-flagsattribute-attribute.md)Flags|Dichiara un'enumerazione come enumerazione di campi di bit.<br /><br /> Nel esempio riportato di seguito viene illustrato come applicare l'attributo `Flags` a un'enumerazione.<br /><br /> `[Flags] enum class MyEnumeration { enumA = 1, enumB = 2, enumC = 3}`|
|[Platform::Metadata::RuntimeClassNameAttribute](../cppcx/platform-metadata-runtimeclassname.md)|Assicura che una classe di riferimento privata abbia un nome di classe di runtime valido.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Platform`

### <a name="requirements"></a>Requisiti

**Metadati:** Platform. winmd

**Spazio dei nomi:** Platform::Metadata

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)
