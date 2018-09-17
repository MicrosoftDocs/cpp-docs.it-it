---
title: Enumerazioni &lt;codecvt&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- codecvt/std::codecvt_mode
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
helpviewer_keywords:
- std::codecvt_mode
ms.openlocfilehash: 612570680bfacb2bc9c237c60b3e9f6c4f8266a8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725335"
---
# <a name="ltcodecvtgt-enums"></a>Enumerazioni &lt;codecvt&gt;

## <a name="codecvt_mode"></a>  Enumerazione codecvt_mode

Specifica informazioni sulla configurazione dei facet delle [impostazioni locali](../standard-library/locale-class.md).

```cpp
enum codecvt_mode {
    consume_header = 4,
    generate_header = 2,
    little_endian = 1
};
```

### <a name="remarks"></a>Note

L'enumerazione definisce tre costanti che specificano informazioni di configurazione per i facet delle impostazioni locali dichiarati in [\<codecvt>](../standard-library/codecvt.md). I valori distinti sono:

- `consume_header`, per consumare una sequenza di intestazione iniziale durante la lettura di una sequenza multibyte e determinare l'ordine dei byte della sequenza multibyte successiva da leggere

- `generate_header`, per generare una sequenza di intestazione iniziale durante la scrittura di una sequenza multibyte per annunciare l'ordine dei byte della sequenza multibyte successiva da scrivere

- `little_endian`, per generare una sequenza multibyte in ordine little endian anziché nell'ordine big endian predefinito

Queste costanti possono essere introdotte insieme dall'operatore OR in combinazioni arbitrarie.

## <a name="see-also"></a>Vedere anche

[\<codecvt>](../standard-library/codecvt.md)<br/>
