---
title: Utilizzo di finestre contenuteUsing Contained Windows
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
- contained windows in ATL
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
ms.openlocfilehash: 5da765eae28d411c98e79af5b9173f48ea66ef8c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329312"
---
# <a name="using-contained-windows"></a>Utilizzo di finestre contenuteUsing Contained Windows

ATL implementa le finestre contenute con [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md). Una finestra contenuta rappresenta una finestra che delega i messaggi a un oggetto contenitore anziché gestirli nella propria classe.

> [!NOTE]
> Non è necessario derivare `CContainedWindowT` una classe da per utilizzare le finestre contenute.

Con le finestre contenute, è possibile superclasse di una classe Windows esistente o sottoclasse di una finestra esistente. Per creare una finestra che sovraclassi una classe Windows esistente, specificare innanzitutto il nome della classe esistente nel costruttore per l'oggetto. `CContainedWindowT` Quindi `CContainedWindowT::Create`chiamare . Per fare una sottoclasse di una finestra esistente, non è necessario specificare un nome di classe di Windows (passare NULL al costruttore). È sufficiente `CContainedWindowT::SubclassWindow` chiamare il metodo con l'handle per la finestra da sottoclassare.

Le finestre contenute vengono in genere utilizzate come membri dati di una classe contenitore. Non è necessario che il contenitore sia una finestra. tuttavia, deve derivare da [CMessageMap](../atl/reference/cmessagemap-class.md).

Una finestra contenuta può utilizzare mappe messaggi alternative per gestire i messaggi. Se si dispone di più di una finestra contenuta, è necessario dichiarare diverse mappe messaggi alternative, ognuna corrispondente a una finestra contenuta separata.

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di una classe contenitore con due finestre contenute:Following is an example of a container class with two contained windows:

[!code-cpp[NVC_ATL_Windowing#67](../atl/codesnippet/cpp/using-contained-windows_1.h)]

Per altre informazioni sulle finestre contenute, vedere l'esempio [SUBEDIT.](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit)

## <a name="see-also"></a>Vedere anche

[Classi finestra](../atl/atl-window-classes.md)
