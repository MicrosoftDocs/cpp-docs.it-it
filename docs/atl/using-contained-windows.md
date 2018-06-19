---
title: Utilizzo delle finestre contenute | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
- contained windows in ATL
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f6c3b439baf05c4e4287613e9b6b5a9b1c2546b6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357921"
---
# <a name="using-contained-windows"></a>Utilizzo delle finestre contenute
ATL implementa windows indipendente con [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md). Una finestra contenuta rappresenta una finestra che delega i messaggi a un oggetto contenitore anziché gestirli nella propria classe.  
  
> [!NOTE]
>  Non è necessario derivare una classe da `CContainedWindowT` per utilizzare windows indipendente.  
  
 Con windows indipendente, è possibile creare una superclasse una classe esistente di Windows o una sottoclasse una finestra esistente. Per creare una finestra che crea una superclasse un esistenti di Windows di classi, innanzitutto specificare il nome di classe esistente nel costruttore per il `CContainedWindowT` oggetto. Chiamare quindi `CContainedWindowT::Create`. Per creare una sottoclasse di una finestra esistente, non è necessario specificare un nome di classe di Windows (passare **NULL** al costruttore). È sufficiente chiamare il `CContainedWindowT::SubclassWindow` metodo con l'handle della finestra da una sottoclasse.  
  
 Le finestre contenute in genere utilizzato come membri di dati di una classe contenitore. Il contenitore non deve essere una finestra. Tuttavia, deve derivare da [CMessageMap](../atl/reference/cmessagemap-class.md).  
  
 Una finestra contenuta è possibile utilizzare mappe messaggi alternative per la gestione dei messaggi. Se si dispone di più di una finestra contenuta, è necessario dichiarare che varie mappe messaggi, ognuno corrispondente a una finestra contenuta separata alternative.  
  
## <a name="example"></a>Esempio  
 Ecco un esempio di una classe contenitore con due finestre contenute:  
  
 [!code-cpp[NVC_ATL_Windowing#67](../atl/codesnippet/cpp/using-contained-windows_1.h)]  
  
 Per ulteriori informazioni sulle finestre contenute, vedere il [SUBEDIT](../visual-cpp-samples.md) esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)

