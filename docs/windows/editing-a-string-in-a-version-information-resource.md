---
title: Modifica di una stringa in una risorsa di informazioni sulla versione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.version
dev_langs: C++
helpviewer_keywords:
- version information resources
- resources [Visual Studio], editing version information
ms.assetid: d3a7d4e4-7d31-47c2-902c-f50b8404ba4f
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4547247a2ab9dc5b8ca98aae6838d9891f4ab49f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="editing-a-string-in-a-version-information-resource"></a>Modifica di una stringa in una risorsa di informazioni sulla versione
### <a name="to-edit-a-string-in-a-version-information-resource"></a>Per modificare una stringa in una risorsa di informazioni sulla versione  
  
1.  Fare clic sull'elemento per selezionarlo, quindi fare di nuovo clic per iniziare a modificarlo. Apportare le modifiche direttamente nella tabella Informazioni sulla versione o nella [finestra Proprietà](/visualstudio/ide/reference/properties-window). Le modifiche verranno riflesse in entrambe le posizioni.  
  
     **Nota** Quando si modifica la chiave **FILEFLAGS** nell'editor delle informazioni sulla versione, si noterà che non è possibile impostare la proprietà **Debug**, **Private Build**o **Special Build** (nella finestra Proprietà) per i file con estensione rc:  
  
    -   L'editor delle informazioni sulla versione imposta la proprietà **Debug** con un #ifdef nello script di risorsa, in base al flag di compilazione **_DEBUG** .  
  
    -   Se per la chiave **Private Build** è impostato un **Valore** nella tabella di informazioni sulla versione, la proprietà **Private Build** corrispondente (nella finestra Proprietà) per la chiave **FILEFLAGS** sarà **True**. Se **Valore** è vuoto, la proprietà sarà **False**. Analogamente, la chiave **Special Build** (nella tabella di informazioni sulla versione) è associata alla proprietà **Special Build** per la chiave **FILEFLAGS** .  
  
 È possibile ordinare la sequenza di informazioni del blocco di stringhe facendo clic sull'intestazione di colonna Chiave o Valore. Queste intestazioni riordinano automaticamente le informazioni nella sequenza selezionata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](https://msdn.microsoft.com/library/f45fce5x.aspx) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](https://msdn.microsoft.com/library/xbx3z216.aspx). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 **Requirements**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di informazioni sulla versione](../windows/version-information-editor.md)   
 [Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)

