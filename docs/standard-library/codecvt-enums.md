---
title: Enumerazioni &lt;codecvt&gt;
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_mode
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
helpviewer_keywords:
- std::codecvt_mode
ms.openlocfilehash: bbef1fe28c3321f06c0cc586062cd017168f8e73
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78866152"
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

### <a name="remarks"></a>Osservazioni

L'enumerazione definisce tre costanti che specificano informazioni di configurazione per i facet delle impostazioni locali dichiarati in [\<codecvt>](../standard-library/codecvt.md). I valori distinti sono:

- `consume_header`, per consumare una sequenza di intestazione iniziale durante la lettura di una sequenza multibyte e determinare l'ordine dei byte della sequenza multibyte successiva da leggere

- `generate_header`, per generare una sequenza di intestazione iniziale durante la scrittura di una sequenza multibyte per annunciare l'ordine dei byte della sequenza multibyte successiva da scrivere

- `little_endian`, per generare una sequenza multibyte in ordine little endian anziché nell'ordine big endian predefinito

Queste costanti possono essere introdotte insieme dall'operatore OR in combinazioni arbitrarie.

## <a name="see-also"></a>Vedere anche

[\<codecvt>](../standard-library/codecvt.md)
