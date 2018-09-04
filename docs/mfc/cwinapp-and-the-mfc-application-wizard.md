---
title: CWinApp e la creazione guidata applicazione MFC | Microsoft Docs
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
ms.openlocfilehash: 59fcd3f00fb8998cf90c88d574b9d22051cb4305
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43687784"
---
# <a name="cwinapp-and-the-mfc-application-wizard"></a>CWinApp e la Creazione guidata applicazione MFC
Durante la creazione di una struttura applicazione, la creazione guidata applicazione MFC viene dichiarata una classe dell'applicazione derivata da [CWinApp](../mfc/reference/cwinapp-class.md). La creazione guidata applicazione MFC genera anche un file di implementazione che contiene gli elementi seguenti:  
  
-   Una mappa dei messaggi per la classe dell'applicazione.  
  
-   Un costruttore di classe vuota.  
  
-   Una variabile che dichiara il l'unico oggetto della classe.  
  
-   Implementazione standard del `InitInstance` funzione membro.  
  
 La classe dell'applicazione viene inserita nell'intestazione di progetto e i file di origine principale. I nomi della classe e i file creati si basano sul nome del progetto che non è specificata la creazione guidata applicazione MFC. Il modo più semplice per visualizzare il codice per queste classi è attraverso [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).  
  
 Le implementazioni standard e mappa dei messaggi forniti sono adeguate per molti scopi, ma è possibile modificarli in base alle esigenze. È la più interessante di queste implementazioni di `InitInstance` funzione membro. In genere, si aggiungerà codice all'implementazione di base di `InitInstance`.  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: Classe Application](../mfc/cwinapp-the-application-class.md)   
 [Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)   
 [Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)

