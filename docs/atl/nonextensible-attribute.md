---
title: nonextensible (attributo)
ms.date: 11/04/2016
f1_keywords:
- nonextensible
helpviewer_keywords:
- nonextensible attribute
- dual interfaces, nonextensible attribute
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
ms.openlocfilehash: 5aa5b8514435e9876500daa4d92504d75eb6dc23
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57257631"
---
# <a name="nonextensible-attribute"></a>nonextensible (attributo)

Se un'interfaccia duale verrà estesa non in fase di esecuzione (vale a dire, se non sono forniti metodi o proprietà attraverso `IDispatch::Invoke` che non sono disponibili tramite la vtable), è consigliabile applicare il **nonextensible** attributo all'interfaccia definizione. Questo attributo fornisce informazioni per le lingue client (ad esempio Visual Basic) che può essere usato per abilitare la verifica del codice completo in fase di compilazione. Se questo attributo viene omesso, i bug possono rimanere nascosti nel codice client alla fase di esecuzione.

Per altre informazioni sul **nonextensible** attributo e un esempio, vedere [nonextensible](../windows/nonextensible.md).

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
