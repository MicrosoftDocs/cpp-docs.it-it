---
title: CWinApp e la creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CWinApp
dev_langs:
- C++
helpviewer_keywords:
- application wizards [MFC], and CWinApp
- CWinApp class [MFC], and MFC Application Wizard
- MFC, wizards
ms.assetid: f8ac0491-3302-4e46-981d-0790624eb8a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d40f314c7717d2e69b2b4802bf9c2c5468511db5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cwinapp-and-the-mfc-application-wizard"></a>CWinApp e la Creazione guidata applicazione MFC
Quando crea uno scheletro di applicazione, creazione guidata applicazione MFC dichiara una classe dell'applicazione è derivato da [CWinApp](../mfc/reference/cwinapp-class.md). La creazione guidata applicazione MFC genera anche un file di implementazione che contiene gli elementi seguenti:  
  
-   Una mappa messaggi per la classe dell'applicazione.  
  
-   Un costruttore di classe vuota.  
  
-   Una variabile che dichiara l'uno e solo l'oggetto della classe.  
  
-   Un'implementazione standard del `InitInstance` funzione membro.  
  
 La classe dell'applicazione viene inserita nell'intestazione di progetto e file di origine principale. I nomi della classe e i file creati sono basati sul nome del progetto che non è specificata la creazione guidata applicazione MFC. Il modo più semplice per visualizzare il codice di queste classi è tramite [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  
  
 Le implementazioni standard e una mappa messaggi fornito non risultano adeguate per molti scopi, ma è possibile modificare in base alle esigenze. È più interessante di tali implementazioni di `InitInstance` funzione membro. In genere, si aggiungerà codice all'implementazione di base di `InitInstance`.  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: Classe Application](../mfc/cwinapp-the-application-class.md)   
 [Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)   
 [Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)

