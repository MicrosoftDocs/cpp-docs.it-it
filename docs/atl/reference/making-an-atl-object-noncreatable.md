---
title: Rendere un oggetto ATL non creabile
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.ATL.objects
helpviewer_keywords:
- noncreatable ATL objects
- ATL projects, noncreatable objects
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
ms.openlocfilehash: b2d0a21ec9e68f76650f0f6cb78446bd93540fa2
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506959"
---
# <a name="making-an-atl-object-noncreatable"></a>Rendere un oggetto ATL non creabile

È possibile modificare gli attributi di un oggetto COM basato su ATL in modo che un client non sia in grado di creare direttamente l'oggetto. In questo caso, l'oggetto verrebbe restituito tramite una chiamata al metodo su un altro oggetto anziché essere creato direttamente.

## <a name="to-make-an-object-noncreatable"></a>Per rendere un oggetto non creabile

1. Rimuovere la [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) per l'oggetto. Se si desidera che l'oggetto non sia creabile, ma il controllo da registrare, sostituire OBJECT_ENTRY_AUTO con [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](object-map-macros.md#object_entry_non_createable_ex_auto).

1. Aggiungere l'attributo non [creabile](../../windows/attributes/noncreatable.md) alla coclasse nel file IDL. Ad esempio:

    ```
    [uuid(A1992E3D-3CF0-11D0-826F-00A0C90F2851),
    helpstring("MyObject"),
    noncreatable]
    coclass MyObject
    {
        [default] interface IMyInterface;
    }
    ```

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto C++ in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Programmazione con il codice di runtime di C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
