---
title: Enumerazioni &lt;codecvt&gt;
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_mode
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
helpviewer_keywords:
- std::codecvt_mode
ms.openlocfilehash: 0b43c7c148076e96dd0d3f444ffa8b6bad7c8b29
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405287"
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
