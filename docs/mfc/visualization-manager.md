---
title: Gestione visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Visualization Manager
ms.assetid: c9dd1365-27ac-42e5-8caa-1004525b4129
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 40d16e1373d347b4a715cd6f073211796913bd21
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="visualization-manager"></a>Gestione visualizzazione
Il gestore visualizzazione è un oggetto che controlla l'aspetto di un'intera applicazione. Opera come una singola classe in cui è possibile inserire tutto il codice di disegno per l'applicazione. La libreria MFC include diversi gestori visualizzazione. È possibile creare la propria gestione visual anche se si desidera creare una visualizzazione personalizzata per l'applicazione. Le immagini seguenti mostrano la stessa applicazione quando sono abilitati i gestori di visualizzazione diverse:  
  
 ![Rendering mediante CMFCVisualManagerWindows di MyApp](../mfc/media/vmwindows.png "vmwindows")  
Applicazione che utilizza la gestione di visual CMFCVisualManagerWindows  
  
 ![Rendering mediante CMFCVisualManagerVS2005 di MyApp](../mfc/media/vmvs2005.png "vmvs2005")  
Applicazione che utilizza la gestione di visual CMFCVisualManagerVS2005  
  
 ![Rendering mediante CMFCVisualManagerOfficeXP di MyApp](../mfc/media/vmofficexp.png "vmofficexp")  
Applicazione che utilizza la gestione di visual CMFCVisualManagerOfficeXP  
  
 ![Rendering mediante CMFCVisualManagerOffice2003 di MyApp](../mfc/media/vmoffice2003.png "vmoffice2003")  
Applicazione che utilizza la gestione di visual CMFCVisualManagerOffice2003  
  
 ![Rendering mediante CMFCVisualManagerOffice2007 di MyApp](../mfc/media/msoffice2007.png "msoffice2007")  
Applicazione che utilizza la gestione di visual CMFCVisualManagerOffice2007  
  
 Per impostazione predefinita, il gestore visualizzazione mantiene il codice di disegno per diversi elementi di interfaccia utente grafica. Per fornire elementi dell'interfaccia utente personalizzati, è necessario eseguire l'override di metodi di disegno correlati il gestore visualizzazione. Per l'elenco di questi metodi, vedere [CMFCVisualManager classe](../mfc/reference/cmfcvisualmanager-class.md). I metodi che è possibile eseguire l'override per fornire un aspetto personalizzato sono tutti i metodi che iniziano con `OnDraw`.  
  
 L'applicazione può avere un solo `CMFCVisualManager` oggetto. Per ottenere un puntatore per il gestore visualizzazione per l'applicazione, chiamare la funzione static [CMFCVisualManager::GetInstance](../mfc/reference/cmfcvisualmanager-class.md#getinstance). Poiché tutti i gestori visualizzazione ereditano da `CMFCVisualManager`, `CMFCVisualManager::GetInstance` (metodo) verrà visualizzato un puntatore per il gestore visualizzazione appropriato, anche se si crea un gestore personalizzato di visual.  
  
 Se si desidera creare un gestore personalizzato visual, lo deve derivare da un gestore visualizzazione che esiste già. La classe predefinita da cui derivare è `CMFCVisualManager`. Tuttavia, è possibile utilizzare un diverso gestore visualizzazione se è più simile a desiderato per l'applicazione. Ad esempio, se si desidera utilizzare il `CMFCVisualManagerOffice2007` gestore visualizzazione, ma si desidera solo modificare l'aspetto di separatori, è possibile derivare la classe personalizzata dal `CMFCVisualManagerOffice2007`. In questo scenario, si devono sovrascrivere solo i metodi per la creazione di separatori.  
  
 Esistono due modi per utilizzare un gestore visualizzazione specificato per l'applicazione. Un modo consiste nel chiamare il [CMFCVisualManager::SetDefaultManager](../mfc/reference/cmfcvisualmanager-class.md#setdefaultmanager) (metodo) e passare il gestore visualizzazione appropriato come parametro. Nell'esempio di codice seguente viene illustrato come utilizzare il `CMFCVisualManagerVS2005` gestore visualizzazione con questo metodo:  
  
```  
CMFCVisualManager::SetDefaultManager (RUNTIME_CLASS (CMFCVisualManagerVS2005));
```  
  
 L'altro modo per utilizzare un gestore visualizzazione nell'applicazione è crearlo manualmente. L'applicazione utilizzerà quindi questo nuovo gestore visualizzazione per il rendering. Tuttavia, poiché può essere presente solo una `CMFCVisualManager` dell'oggetto per ogni applicazione, è necessario eliminare il gestore visualizzazione corrente prima di creare una nuova. Nell'esempio seguente, `CMyVisualManager` è una gestione visual personalizzata derivato da `CMFCVisualManager`. Il metodo seguente verrà modificato il gestore visualizzazione utilizzato per visualizzare l'applicazione, a seconda di un indice:  
  
```  
void CMyApp::SetSkin (int index)  
{  
    if (CMFCVisualManager::GetInstance() != NULL)  
 {  
    delete CMFCVisualManager::GetInstance();

 }  
 
    switch (index)  
 {  
    case DEFAULT_STYLE: *// The following statement creates a new CMFCVisualManager  
    CMFCVisualManager::GetInstance();
break;  
 
    case CUSTOM_STYLE:  
    new CMyVisualManager;  
    break; 
 
    default: 
    CMFCVisualManager::GetInstance();
break;  
 }  
 
    CMFCVisualManager::GetInstance()->RedrawAll();

} 
```  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Classe CMFCVisualManager](../mfc/reference/cmfcvisualmanager-class.md)
