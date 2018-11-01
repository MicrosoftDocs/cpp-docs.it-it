---
title: nonextensible (attributo)
ms.date: 11/04/2016
f1_keywords:
- nonextensible
helpviewer_keywords:
- nonextensible attribute
- dual interfaces, nonextensible attribute
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
ms.openlocfilehash: 04cbc042d56902e2390e0f0f4a03a0797287397d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563761"
---
# <a name="nonextensible-attribute"></a>nonextensible (attributo)

Se un'interfaccia duale verrà estesa non in fase di esecuzione (vale a dire, se non sono forniti metodi o proprietà attraverso `IDispatch::Invoke` che non sono disponibili tramite la vtable), è consigliabile applicare il **nonextensible** attributo all'interfaccia definizione. Questo attributo fornisce informazioni per le lingue client (ad esempio Visual Basic) che può essere usato per abilitare la verifica del codice completo in fase di compilazione. Se questo attributo viene omesso, i bug possono rimanere nascosti nel codice client alla fase di esecuzione.

Per altre informazioni sul **nonextensible** attributo e un esempio, vedere [nonextensible](../windows/nonextensible.md).

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

