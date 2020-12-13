---
description: 'Altre informazioni su: uso di finestre contenute'
title: Uso di finestre contenute
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
- contained windows in ATL
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
ms.openlocfilehash: 11beb998365a10a8126e37ecbf7388ec6177e659
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138216"
---
# <a name="using-contained-windows"></a>Uso di finestre contenute

ATL implementa le finestre contenute con [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md). Una finestra contenuta rappresenta una finestra che delega i messaggi a un oggetto contenitore anziché gestirli nella relativa classe.

> [!NOTE]
> Non è necessario derivare una classe da `CContainedWindowT` per poter utilizzare le finestre contenute.

Con le finestre contenute, è possibile eseguire la superclasse di una classe o di una classe di Windows esistente in una finestra esistente. Per creare una finestra che superclasse una classe Windows esistente, è necessario innanzitutto specificare il nome della classe esistente nel costruttore per l' `CContainedWindowT` oggetto. Chiamare quindi `CContainedWindowT::Create` . Per sottoporre a una sottoclasse una finestra esistente, non è necessario specificare un nome di classe Windows (passare NULL al costruttore). È sufficiente chiamare il `CContainedWindowT::SubclassWindow` metodo con l'handle per la finestra sottoclassata.

In genere si usano le finestre contenute come membri dati di una classe contenitore. Non è necessario che il contenitore sia una finestra; Tuttavia, deve derivare da [CMessageMap](../atl/reference/cmessagemap-class.md).

Una finestra contenuta può utilizzare mappe messaggi alternative per gestire i relativi messaggi. Se si dispone di più di una finestra contenuta, è necessario dichiarare diverse mappe dei messaggi alternative, ciascuna delle quali corrisponde a una finestra indipendente separata.

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di una classe contenitore con due finestre contenute:

[!code-cpp[NVC_ATL_Windowing#67](../atl/codesnippet/cpp/using-contained-windows_1.h)]

Per ulteriori informazioni sulle finestre contenute, vedere l'esempio di [sottomodifica](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit) .

## <a name="see-also"></a>Vedi anche

[Classi finestra](../atl/atl-window-classes.md)
