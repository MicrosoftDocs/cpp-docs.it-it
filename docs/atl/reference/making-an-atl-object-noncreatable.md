---
title: Rendere un oggetto ATL non creabile
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.ATL.objects
helpviewer_keywords:
- noncreatable ATL objects
- ATL projects, noncreatable objects
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
ms.openlocfilehash: da1d5c43d86d95d7eff9b6830b83b61737d3030f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267069"
---
# <a name="making-an-atl-object-noncreatable"></a>Rendere un oggetto ATL non creabile

È possibile modificare gli attributi di un oggetto basato su ATL COM in modo che un client non è possibile creare direttamente l'oggetto. In questo caso, l'oggetto potrebbe essere restituito tramite una chiamata al metodo su un altro oggetto anziché creato direttamente.

## <a name="to-make-an-object-noncreatable"></a>Per rendere non creabile un oggetto

1. Rimuovere il [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) per l'oggetto. Se si desidera che l'oggetto per il controllo da registrare, sostituire con OBJECT_ENTRY_AUTO [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](object-map-macros.md#object_entry_non_createable_ex_auto).

1. Aggiungere il [noncreatable](../../windows/noncreatable.md) la coclasse nel file con estensione idl dell'attributo. Ad esempio:

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
[Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)<br/>
[Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
