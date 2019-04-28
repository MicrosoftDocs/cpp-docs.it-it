---
title: nonextensible (attributo)
ms.date: 11/04/2016
helpviewer_keywords:
- nonextensible attribute
- dual interfaces, nonextensible attribute
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
ms.openlocfilehash: cc57acb8bd7bc3e32c764606da651f57316ceabf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62250104"
---
# <a name="nonextensible-attribute"></a>nonextensible (attributo)

Se un'interfaccia duale verrà estesa non in fase di esecuzione (vale a dire, se non sono forniti metodi o proprietà attraverso `IDispatch::Invoke` che non sono disponibili tramite la vtable), è consigliabile applicare il **nonextensible** attributo all'interfaccia definizione. Questo attributo fornisce informazioni per le lingue client (ad esempio Visual Basic) che può essere usato per abilitare la verifica del codice completo in fase di compilazione. Se questo attributo viene omesso, i bug possono rimanere nascosti nel codice client alla fase di esecuzione.

Per altre informazioni sul **nonextensible** attributo e un esempio, vedere [nonextensible](../windows/nonextensible.md).

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
