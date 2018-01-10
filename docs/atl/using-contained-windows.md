---
title: Utilizzo delle finestre contenute | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
- contained windows in ATL
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f812b99131d63b87df8dbfd8c9afd5493d0a0140
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

