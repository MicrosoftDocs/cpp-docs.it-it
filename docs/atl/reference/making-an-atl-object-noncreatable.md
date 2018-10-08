---
title: Rendere un oggetto ATL non creabile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.objects
dev_langs:
- C++
helpviewer_keywords:
- noncreatable ATL objects
- ATL projects, noncreatable objects
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f0b20cbae3036ffecfa63f2e3ee6be8e2153fc8f
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860914"
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
