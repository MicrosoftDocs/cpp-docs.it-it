---
description: 'Altre informazioni su: &lt; codecvt &gt; enums'
title: Enumerazioni &lt;codecvt&gt;
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_mode
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
helpviewer_keywords:
- std::codecvt_mode
ms.openlocfilehash: bcd40f72f563b3ecf91125f7167f206d4b1b6517
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234059"
---
# <a name="ltcodecvtgt-enums"></a>Enumerazioni &lt;codecvt&gt;

## <a name="codecvt_mode-enumeration"></a><a name="codecvt_mode"></a> Enumerazione codecvt_mode

Specifica le informazioni di configurazione per i facet delle [impostazioni locali](../standard-library/locale-class.md) .

```cpp
enum codecvt_mode {
    consume_header = 4,
    generate_header = 2,
    little_endian = 1
};
```

### <a name="remarks"></a>Commenti

L'enumerazione definisce tre costanti che forniscono informazioni di configurazione ai facet delle impostazioni locali dichiarati in [\<codecvt>](../standard-library/codecvt.md) . I valori distinti sono:

- `consume_header`, per consumare una sequenza di intestazione iniziale durante la lettura di una sequenza multibyte e determinare l'ordine dei byte della sequenza multibyte successiva da leggere

- `generate_header`, per generare una sequenza di intestazione iniziale durante la scrittura di una sequenza multibyte per annunciare l'ordine dei byte della sequenza multibyte successiva da scrivere

- `little_endian`, per generare una sequenza multibyte in ordine little endian anziché nell'ordine big endian predefinito

Queste costanti possono essere introdotte insieme dall'operatore OR in combinazioni arbitrarie.

## <a name="see-also"></a>Vedere anche

[\<codecvt>](../standard-library/codecvt.md)
