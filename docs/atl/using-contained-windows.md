---
title: Utilizzando Windows indipendente
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
- contained windows in ATL
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
ms.openlocfilehash: 2b9a36c6aac80a7c77cde102d6da93c51788e4e1
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295149"
---
# <a name="using-contained-windows"></a>Utilizzando Windows indipendente

Implementate in windows indipendente con ATL [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md). Una finestra contenuta rappresenta una finestra che delega i messaggi a un oggetto contenitore invece di gestirli nella sua classe personale.

> [!NOTE]
>  Non è necessario derivare una classe da `CContainedWindowT` per poter usare finestre contenute.

Con windows indipendente, è possibile creare una superclasse una classe di Windows esistente o una sottoclasse una finestra esistente. Per creare una finestra che crea un Windows esistente una superclasse di classi, innanzitutto specificare il nome esistente della classe nel costruttore per la `CContainedWindowT` oggetto. Chiamare quindi `CContainedWindowT::Create`. Per creare una sottoclasse di una finestra esistente, non devi specificare un nome di classe di Windows (passare NULL per il costruttore). È sufficiente chiamare il `CContainedWindowT::SubclassWindow` metodo con l'handle della finestra da una sottoclasse.

In genere si usa windows indipendente come membri di dati di una classe contenitore. Il contenitore non deve essere una finestra. Tuttavia, deve derivare da [CMessageMap](../atl/reference/cmessagemap-class.md).

Una finestra contenuta usare le mappe messaggi alternativa per la gestione dei messaggi. Se si dispone di più di una finestra contenuta, è necessario dichiarare che varie mappe messaggi, ognuno corrispondente a una finestra separata indipendente alternative.

## <a name="example"></a>Esempio

Ecco un esempio di una classe di contenitore con due finestre contenute:

[!code-cpp[NVC_ATL_Windowing#67](../atl/codesnippet/cpp/using-contained-windows_1.h)]

Per altre informazioni sulle finestre contenute, vedere la [SUBEDIT](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit) esempio.

## <a name="see-also"></a>Vedere anche

[Classi di finestre](../atl/atl-window-classes.md)
