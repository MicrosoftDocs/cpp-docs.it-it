---
title: Utilizzando Windows indipendente | Microsoft Docs
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
ms.openlocfilehash: cc17925e36e0e224a657177d0aa18912c564efed
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37850800"
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
  
 Per altre informazioni sulle finestre contenute, vedere la [SUBEDIT](../visual-cpp-samples.md) esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestre](../atl/atl-window-classes.md)

