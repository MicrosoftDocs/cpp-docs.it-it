---
title: Derivazione di controlli da un controllo Standard | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- standard controls [MFC], deriving controls from
- common controls [MFC], deriving from
- derived controls
- controls [MFC], derived
- Windows common controls [MFC], deriving from
- standard controls
ms.assetid: a6f84315-7007-4e0e-8576-78be81254802
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2b93bc07fc5ab4680caaa276daaeca86189b8ce5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deriving-controls-from-a-standard-control"></a>Derivazione di controlli da un controllo standard
Come per qualsiasi [CWnd](../mfc/reference/cwnd-class.md)-derivata, è possibile modificare il comportamento di un controllo mediante la derivazione di una nuova classe da una classe di controllo esistente.  
  
### <a name="to-create-a-derived-control-class"></a>Per creare una classe derivata di controlli  
  
1.  Derivare la classe da una classe di controllo esistente e, facoltativamente, eseguire l'override di **crea** funzione membro in modo che fornisca gli argomenti necessari per la classe di base **crea** (funzione).  
  
2.  Fornire le funzioni membro di gestore di messaggi e le voci della mappa messaggi per modificare il comportamento del controllo in risposta ai messaggi di Windows specifici. Vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
3.  Fornire nuove funzioni membro per estendere la funzionalità del controllo (facoltativo).  
  
 Utilizzo di un controllo derivato in una finestra di dialogo richiede inoltre lavoro aggiuntivo. I tipi e le posizioni dei controlli in una finestra di dialogo vengono in genere specificate in una risorsa modello di finestra di dialogo. Se si crea una classe derivata del controllo, è possibile specificare in un modello di finestra di dialogo, poiché il compilatore di risorse dispone di alcuna informazione su una classe derivata.  
  
#### <a name="to-place-your-derived-control-in-a-dialog-box"></a>Per inserire un controllo derivato in una finestra di dialogo  
  
1.  Incorporare un oggetto della classe del controllo derivata nella dichiarazione della classe derivata di finestra di dialogo.  
  
2.  Eseguire l'override di `OnInitDialog` funzione membro nella classe della finestra di chiamare il `SubclassDlgItem` funzione membro per il controllo derivato.  
  
 `SubclassDlgItem`"in modo dinamico le sottoclassi" un controllo creato da un modello di finestra di dialogo. Quando un controllo è una sottoclasse dinamica, si hook di Windows, elaborano alcuni messaggi all'interno di un'applicazione, quindi passare i messaggi rimanenti a Windows. Per ulteriori informazioni, vedere il [SubclassDlgItem](../mfc/reference/cwnd-class.md#subclassdlgitem) funzione membro di classe `CWnd` nel *riferimenti alla libreria MFC*. Nell'esempio seguente viene illustrato come scrivere un override di `OnInitDialog` chiamare `SubclassDlgItem`:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#3](../mfc/codesnippet/cpp/deriving-controls-from-a-standard-control_1.cpp)]  
  
 Poiché il controllo derivato è incorporato nella classe di finestra di dialogo, verrà creato quando la finestra di dialogo viene creata e distrutto quando viene eliminato definitivamente la finestra di dialogo. Confrontare questo codice di esempio nel [aggiunta di controlli By mano](../mfc/adding-controls-by-hand.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)

