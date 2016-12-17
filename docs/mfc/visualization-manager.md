---
title: "Gestione visualizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Gestione visualizzazione"
ms.assetid: c9dd1365-27ac-42e5-8caa-1004525b4129
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il gestore visualizzazione è un oggetto che controlla l'aspetto dell'applicazione.  Funge da una sola classe in cui è possibile inserire qualsiasi codice di disegno per l'applicazione.  La libreria MFC include diversi gestori visualizzazione.  È inoltre possibile creare un gestore visualizzazione se si desidera creare una visualizzazione personalizzata per l'applicazione.  Le immagini riportate di seguito illustrano la stessa applicazione quando i gestori visualizzazione differenti sono abilitati:  
  
 ![Rendering di MyApp mediante CMFCVisualManagerWindows](../mfc/media/vmwindows.png "VMWindows")  
MyApp che utilizza il gestore visualizzazione di CMFCVisualManagerWindows  
  
 ![Rendering di MyApp mediante CMFCVisualManagerVS2005](../mfc/media/vmvs2005.png "VMVS2005")  
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerVS2005  
  
 ![Rendering di MyApp mediante CMFCVisualManagerOfficeXP](../mfc/media/vmofficexp.png "VMOfficeXP")  
MyApp che utilizza il gestore visualizzazione di CMFCVisualManagerOfficeXP  
  
 ![Rendering di MyApp mediante CMFCVisualManagerOffice2003](../mfc/media/vmoffice2003.png "VMOffice2003")  
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerOffice2003  
  
 ![Rendering di MyApp mediante CMFCVisualManagerOffice2007](../mfc/media/msoffice2007.png "MSOffice2007")  
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerOffice2007  
  
 Per impostazione predefinita, il gestore visualizzazione gestisce il codice di disegno per diversi elementi dell'interfaccia utente grafica.  Per fornire elementi dell'interfaccia utente personalizzati, è necessario eseguire l'override dei metodi correlati di disegno del gestore visualizzazione.  Per l'elenco di questi metodi, vedere [CMFCVisualManager Class](../mfc/reference/cmfcvisualmanager-class.md).  I metodi che è possibile sottoporre a override per fornire un aspetto personalizzato sono tutti i metodi che iniziano con `OnDraw`.  
  
 L'applicazione può avere un solo oggetto di `CMFCVisualManager`.  Per ottenere un puntatore al gestore visualizzazione per l'applicazione, chiamare la funzione static [CMFCVisualManager::GetInstance](../Topic/CMFCVisualManager::GetInstance.md).  Poiché tutti i gestori visualizzazione ereditano da `CMFCVisualManager`, il metodo di `CMFCVisualManager::GetInstance` ottiene un puntatore al gestore visualizzazione appropriato, anche se si crea un gestore visualizzazione personalizzato.  
  
 Se si desidera creare un gestore di visualizzazione personalizzato, è necessario derivarlo da un gestore visualizzazione già esistente.  La classe predefinita da derivare da è `CMFCVisualManager`.  Tuttavia, è possibile utilizzare un gestore visualizzazione diversa se assomiglia a meglio cosa per l'applicazione.  Ad esempio, se si desidera utilizzare il gestore visualizzazione di `CMFCVisualManagerOffice2007`, ma desiderato per modificare solo l'aspetto dei separatori, è possibile derivare la classe personalizzata da `CMFCVisualManagerOffice2007`.  In questo scenario, è necessario sovrascrivere solo metodi per visualizzare i separatori.  
  
 Esistono due possibili modi per utilizzare un gestore visualizzazione specifico per l'applicazione.  Un modo consiste nel chiamare il metodo di [CMFCVisualManager::SetDefaultManager](../Topic/CMFCVisualManager::SetDefaultManager.md) e di passare il gestore visualizzazione appropriato come parametro.  Nell'esempio di codice seguente viene illustrato come utilizzare il gestore visualizzazione di `CMFCVisualManagerVS2005` con questo metodo:  
  
```  
CMFCVisualManager::SetDefaultManager (RUNTIME_CLASS (CMFCVisualManagerVS2005));  
```  
  
 Un altro modo per utilizzare un gestore visualizzazione nell'applicazione consiste nel crearlo manualmente.  L'applicazione utilizzerà questo nuovo gestore visualizzazione per tutto il rendering.  Tuttavia, poiché può esistere un solo oggetto di `CMFCVisualManager` per applicazione, è necessario eliminare il gestore visualizzazione corrente prima di creare un nuovo.  Nell'esempio seguente, `CMyVisualManager` è un gestore visualizzazione personalizzato derivato da `CMFCVisualManager`.  Il metodo modificherà il gestore visualizzazione viene utilizzato per visualizzare l'applicazione, come un indice:  
  
```  
void CMyApp::SetSkin (int index)  
{  
   if (CMFCVisualManager::GetInstance() != NULL)  
   {  
      delete CMFCVisualManager::GetInstance();  
   }  
  
   switch (index)  
   {  
   case DEFAULT_STYLE:  
      // The following statement creates a new CMFCVisualManager  
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
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [CMFCVisualManager Class](../mfc/reference/cmfcvisualmanager-class.md)