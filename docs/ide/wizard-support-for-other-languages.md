---
title: Supporto della procedura guidata per le altre lingue | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.appwiz.EastAsianLanguages
dev_langs:
- C++
helpviewer_keywords:
- wizards [C++], language support
- language support for MFC projects
- projects [C++], language support
ms.assetid: b653c673-0687-455c-885f-15d7e2f4149d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 75aafd7177c3799c17b75419fd5ab9f54af91d35
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="wizard-support-for-other-languages"></a>Supporto della procedura guidata per altre lingue
Quando si installa Visual Studio, l'applicazione di installazione rileva le impostazioni locali del sistema e installa uno o più modelli per la lingua appropriata. Impostazioni locali europee occidentali, ad esempio, vengono installate in lingua inglese, francese, italiano, spagnolo e tedesco. Queste lingue vengono visualizzate nel **lingua della risorsa** elenco il [tipo di applicazione](../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.  
  
## <a name="language-templates"></a>Modelli di lingua  
 Non tutti i modelli vengono installati in tutti i sistemi, perché i modelli sono basati sulla codifica ANSI, e non tutte le risorse possono essere modificate in tutti i sistemi. Ad esempio, per impostazione predefinita, è possibile modificare le risorse giapponesi in un sistema francese.  
  
 Se si utilizza Windows 2000 o versioni successive e si desidera creare un'applicazione MFC in un'altra lingua, è necessario copiare la directory di modello per la lingua appropriata dal supporto di installazione di Visual Studio (disco 1) al sistema.  
  
> [!NOTE]
>  Per modificare il progetto creato, è necessario impostare le impostazioni locali per le impostazioni locali per la lingua selezionata.  
  
 I modelli sono che ogni assegnata una cartella nella directory \Microsoft Visual Studio .NET 2003\Vc7\VCWizards\mfcappwiz\templates\, come indicato nella tabella seguente. Per accedere al modello di lingua desiderata, copiare la cartella appropriata alla directory \mfcappwiz\templates\ nel computer in uso. Dopo aver copiato la cartella, la lingua verrà visualizzati di **lingua della risorsa** elenco il **tipo di applicazione** pagina della creazione guidata applicazione MFC.  
  
### <a name="language-templates-provided-in-visual-studio-net"></a>Modelli di linguaggio forniti in Visual Studio .NET  
  
|Linguaggio|Modello|  
|--------------|--------------|  
|Cinese (tradizionale)|1028|  
|Cinese (semplificato)|2052|  
|Inglese|1040|  
|Francese|1036|  
|Tedesco|1031|  
|Italiano|1040|  
|Giapponese|1041|  
|Coreano|1042|  
|Spagnolo|3082|  
  
## <a name="format-of-visual-c-wizard-generated-files"></a>Formato di file Visual generato dalla procedura guidata di C++  
 Quando la versione localizzata installata di Visual Studio non corrisponde a impostazioni locali del sistema, le procedure guidate di Visual C++ genererà progetti in formato Unicode. Ad esempio, quando la versione giapponese di Visual Studio è installata in un computer con impostazioni internazionali impostate su una lingua diversa dal giapponese, le procedure guidate di Visual C++ genererà progetti costituiti da file Unicode. Ciò accade spesso sui computer configurati con i pacchetti di Windows multilingue (MUI).  
  
 Questo comportamento differisce dai sistemi impostati in modo che le impostazioni internazionali sono uguale alla versione localizzata di Visual Studio. In questo caso, verranno creato il file di progetto ANSI nella tabella codici del sistema.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)   
 [Creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md)